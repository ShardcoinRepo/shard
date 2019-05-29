#include "optionspage.h"
#include "ui_optionspage.h"
#include "bitcoinamountfield.h"
#include "qvaluecombobox.h"
#include "bitcoinunits.h"
#include "monitoreddatamapper.h"
#include "netbase.h"
#include "optionsmodel.h"
#include "qvalidatedlineedit.h"

#include <QDir>
#include <QIntValidator>
#include <QListView>
#include <QLocale>
#include <QMessageBox>
OptionsPage::OptionsPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OptionsPage)
{
    ui->setupUi(this);

    /* Network elements init */
#ifndef USE_UPNP
    ui->mapPortUpnp->setEnabled(false);
#endif

    ui->proxyIp->setEnabled(false);
    ui->proxyPort->setEnabled(false);
    ui->proxyPort->setValidator(new QIntValidator(1, 65535, this));

    connect(ui->connectSocks, SIGNAL(toggled(bool)), ui->proxyIp, SLOT(setEnabled(bool)));
    connect(ui->connectSocks, SIGNAL(toggled(bool)), ui->proxyPort, SLOT(setEnabled(bool)));
    connect(ui->connectSocks, SIGNAL(clicked(bool)), this, SLOT(showRestartWarning_Proxy()));

    ui->proxyIp->installEventFilter(this);

    /* Window elements init */




    ui->unit->setModel(new BitcoinUnits(this));

    /* Widget-to-option mapper */
    mapper = new MonitoredDataMapper(this);
    mapper->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);
    mapper->setOrientation(Qt::Vertical);

    /* enable apply button when data modified */
    connect(mapper, SIGNAL(viewModified()), this, SLOT(enableApplyButton()));
    /* disable apply button when new data loaded */
    connect(mapper, SIGNAL(currentIndexChanged(int)), this, SLOT(disableApplyButton()));
    connect(ui->applyButton, SIGNAL(clicked(bool)),this, SLOT(on_applyButton_clicked()));
    /* setup/change UI elements when proxy IP is invalid/valid */
    connect(this, SIGNAL(proxyIpValid(QValidatedLineEdit *, bool)), this, SLOT(handleProxyIpValid(QValidatedLineEdit *, bool)));

    QListView* listView = new QListView(ui->unit);
    listView->setStyleSheet("QListView::item{color:#eeeeee;background:#102537;padding:5px} QListView::item:hover{background:#1d2e3f;color:white;}");
    ui->unit->setView(listView);
}



void OptionsPage::setModel(OptionsModel *model)
{
    this->model = model;

    if(model)
    {
        connect(model, SIGNAL(displayUnitChanged(int)), this, SLOT(updateDisplayUnit()));

        mapper->setModel(model);
        setMapper();
        mapper->toFirst();
    }

    /* update the display unit, to not use the default ("SHARD") */
    updateDisplayUnit();

    /* warn only when language selection changes by user action (placed here so init via mapper doesn't trigger this) */

    /* disable apply button after settings are loaded as there is nothing to save */
    disableApplyButton();
}

void OptionsPage::setMapper()
{
    /* Main */
    mapper->addMapping(ui->transactionFee, OptionsModel::Fee);
    mapper->addMapping(ui->reserveBalance, OptionsModel::ReserveBalance);
    mapper->addMapping(ui->bitcoinAtStartup, OptionsModel::StartAtStartup);

    /* Network */
    mapper->addMapping(ui->mapPortUpnp, OptionsModel::MapPortUPnP);

    mapper->addMapping(ui->connectSocks, OptionsModel::ProxyUse);
    mapper->addMapping(ui->proxyIp, OptionsModel::ProxyIP);
    mapper->addMapping(ui->proxyPort, OptionsModel::ProxyPort);

    /* Window */
#ifndef Q_OS_MAC
    mapper->addMapping(ui->minimizeToTray, OptionsModel::MinimizeToTray);
    mapper->addMapping(ui->minimizeOnClose, OptionsModel::MinimizeOnClose);
#endif

    /* Display */
    mapper->addMapping(ui->unit, OptionsModel::DisplayUnit);
}

void OptionsPage::enableApplyButton()
{
    ui->applyButton->setEnabled(true);
}

void OptionsPage::disableApplyButton()
{
    ui->applyButton->setEnabled(false);
}

void OptionsPage::enableSaveButtons()
{
    /* prevent enabling of the save buttons when data modified, if there is an invalid proxy address present */
    if(fProxyIpValid)
        setSaveButtonState(true);
}

void OptionsPage::disableSaveButtons()
{
    setSaveButtonState(false);
}

void OptionsPage::setSaveButtonState(bool fState)
{
    ui->applyButton->setEnabled(fState);
}



void OptionsPage::on_applyButton_clicked()
{
    mapper->submit();
    disableApplyButton();
}

void OptionsPage::showRestartWarning_Proxy()
{
    if(!fRestartWarningDisplayed_Proxy)
    {
        QMessageBox::warning(this, tr("Warning"), tr("This setting will take effect after restarting Shard."), QMessageBox::Ok);
        fRestartWarningDisplayed_Proxy = true;
    }
}

void OptionsPage::showRestartWarning_Lang()
{
    if(!fRestartWarningDisplayed_Lang)
    {
        QMessageBox::warning(this, tr("Warning"), tr("This setting will take effect after restarting Shard."), QMessageBox::Ok);
        fRestartWarningDisplayed_Lang = true;
    }
}

void OptionsPage::updateDisplayUnit()
{
    if(model)
    {
        /* Update transactionFee with the current unit */
        ui->transactionFee->setDisplayUnit(model->getDisplayUnit());
    }
}

void OptionsPage::handleProxyIpValid(QValidatedLineEdit *object, bool fState)
{
    // this is used in a check before re-enabling the save buttons
    fProxyIpValid = fState;

    if(fProxyIpValid)
    {
        enableSaveButtons();
        ui->statusLabel->clear();
    }
    else
    {
        disableSaveButtons();
        object->setValid(fProxyIpValid);
        ui->statusLabel->setStyleSheet("QLabel { color: red; }");
        ui->statusLabel->setText(tr("The supplied proxy address is invalid."));
    }
}



OptionsPage::~OptionsPage()
{
    delete ui;
}
bool OptionsPage::eventFilter(QObject *object, QEvent *event)
{
    if(event->type() == QEvent::FocusOut)
    {
        if(object == ui->proxyIp)
        {
            CService addr;
            /* Check proxyIp for a valid IPv4/IPv6 address and emit the proxyIpValid signal */
            emit proxyIpValid(ui->proxyIp, LookupNumeric(ui->proxyIp->text().toStdString().c_str(), addr));
        }
    }
    return QWidget::eventFilter(object, event);
}
