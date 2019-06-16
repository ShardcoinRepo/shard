#include "bitcoinamountfield.h"

#include "qvaluecombobox.h"
#include "bitcoinunits.h"
#include "guiconstants.h"

#include <QHBoxLayout>
#include <QKeyEvent>
#include <QDoubleSpinBox>
#include <QApplication>
#include <qmath.h> // for qPow()
#include <QListView>

BitcoinAmountField::BitcoinAmountField(QWidget *parent):
        QWidget(parent), amount(0), currentUnit(-1)
{
    amount = new QDoubleSpinBox(this);
    amount->setLocale(QLocale::c());
    amount->setDecimals(8);
    amount->installEventFilter(this);
    amount->setMinimumWidth(350);
    amount->setSingleStep(0.001);
    amount->setButtonSymbols(QAbstractSpinBox::NoButtons);
    amount->setValue(0.0);

    QHBoxLayout *layout = new QHBoxLayout(this);
    layout->addWidget(amount);
    layout->setMargin(0);
    layout->setSpacing(0);

    unit = new QValueComboBox(this);
    unit->setModel(new BitcoinUnits(this));

    unit->setStyleSheet("QComboBox{background:#1d2e3f;height:33px;font-size:10px;\ncolor:white;\n\nborder-radius:5px;border-top-left-radius:0px;border-bottom-left-radius:0px;margin-left:-1px;border-left:3px solid #345270;padding-right:0px}QComboBox::drop-down{border:0px}QComboBox::down-arrow{image:url(:/images/res/images/gray.png);margin-left:-18px;width:14px;height:14px}QComboBox QAbstractItemView {border: 0px solid #0f3e54;selection-background-color: #0f3e54;selection-color:blue;margin:0px;padding:0px;outline:none;}");
unit->setFixedWidth(82);


    layout->addWidget(unit);

    layout->setContentsMargins(0,0,0,0);

    QListView* listView = new QListView(unit);
#if defined(Q_OS_WIN)
    listView->setStyleSheet("QListView{margin-bottom:0px;}QListView::item{color:#eeeeee;background:#102537;padding:5px} QListView::item:hover{background:#1d2e3f;color:white;}");

#else
    listView->setStyleSheet("QListView{margin-bottom:-20px;}QListView::item{color:#eeeeee;background:#102537;padding:5px} QListView::item:hover{background:#1d2e3f;color:white;}");

#endif
    unit->setView(listView);
    setLayout(layout);

    setFocusPolicy(Qt::TabFocus);
    setFocusProxy(amount);

    // If one if the widgets changes, the combined content changes as well
    connect(amount, SIGNAL(valueChanged(QString)), this, SIGNAL(textChanged()));
    connect(unit, SIGNAL(currentIndexChanged(int)), this, SLOT(unitChanged(int)));

    // Set default based on configuration
    unitChanged(unit->currentIndex());
}

void BitcoinAmountField::setText(const QString &text)
{
    if (text.isEmpty())
        amount->clear();
    else
        amount->setValue(text.toDouble());
}

void BitcoinAmountField::clear()
{
    amount->clear();
    unit->setCurrentIndex(0);
}

bool BitcoinAmountField::validate()
{
    bool valid = true;
    if (amount->value() == 0.0)
        valid = false;
    if (valid && !BitcoinUnits::parse(currentUnit, text(), 0))
        valid = false;

    setValid(valid);

    return valid;
}

void BitcoinAmountField::setValid(bool valid)
{
    if (valid)
        amount->setStyleSheet("");
    else
        amount->setStyleSheet(STYLE_INVALID);
}

QString BitcoinAmountField::text() const
{
    if (amount->text().isEmpty())
        return QString();
    else
        return amount->text();
}

bool BitcoinAmountField::eventFilter(QObject *object, QEvent *event)
{
    if (event->type() == QEvent::FocusIn)
    {
        // Clear invalid flag on focus
        setValid(true);
    }
    else if (event->type() == QEvent::KeyPress || event->type() == QEvent::KeyRelease)
    {
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        if (keyEvent->key() == Qt::Key_Comma)
        {
            // Translate a comma into a period
            QKeyEvent periodKeyEvent(event->type(), Qt::Key_Period, keyEvent->modifiers(), ".", keyEvent->isAutoRepeat(), keyEvent->count());
            qApp->sendEvent(object, &periodKeyEvent);
            return true;
        }
    }
    return QWidget::eventFilter(object, event);
}

QWidget *BitcoinAmountField::setupTabChain(QWidget *prev)
{
    QWidget::setTabOrder(prev, amount);
    return amount;
}

qint64 BitcoinAmountField::value(bool *valid_out) const
{
    qint64 val_out = 0;
    bool valid = BitcoinUnits::parse(currentUnit, text(), &val_out);
    if(valid_out)
    {
        *valid_out = valid;
    }
    return val_out;
}

void BitcoinAmountField::setValue(qint64 value)
{
    setText(BitcoinUnits::format(currentUnit, value));
}

void BitcoinAmountField::unitChanged(int idx)
{
    // Use description tooltip for current unit for the combobox
    unit->setToolTip(unit->itemData(idx, Qt::ToolTipRole).toString());

    // Determine new unit ID
    int newUnit = unit->itemData(idx, BitcoinUnits::UnitRole).toInt();

    // Parse current value and convert to new unit
    bool valid = false;
    qint64 currentValue = value(&valid);

    currentUnit = newUnit;

    // Set max length after retrieving the value, to prevent truncation
    amount->setDecimals(BitcoinUnits::decimals(currentUnit));
    amount->setMaximum(qPow(10, BitcoinUnits::amountDigits(currentUnit)) - qPow(10, -amount->decimals()));

    if(valid)
    {
        // If value was valid, re-place it in the widget with the new unit
        setValue(currentValue);
    }
    else
    {
        // If current value is invalid, just clear field
        setText("");
    }
    setValid(true);
}

void BitcoinAmountField::setDisplayUnit(int newUnit)
{
    unit->setValue(newUnit);
}
