#include "transactionview.h"

#include "transactionfilterproxy.h"
#include "transactionrecord.h"
#include "walletmodel.h"
#include "addresstablemodel.h"
#include "transactiontablemodel.h"
#include "bitcoinunits.h"
#include "csvmodelwriter.h"
#include "transactiondescdialog.h"
#include "editaddressdialog.h"
#include <QDesktopWidget>
#include "optionsmodel.h"
#include "guiutil.h"
#include <QSpacerItem>
#include <QScrollBar>
#include <QComboBox>
#include <QListWidget>
#include <QDoubleValidator>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QTableView>
#include <QHeaderView>
#include <QMessageBox>
#include <QPoint>
#include <QMenu>
#include <QLabel>
#include <QGridLayout>
#include <QDesktopServices>
#include <QDateTimeEdit>
#include <QStyledItemDelegate>

#include "txviewdelegate.h"
#include <QEvent>
#include <QJsonDocument>
#include <QTimer>
#include <QJsonObject>
#include "ui_transactionpage.h"


const int TRANSACTIONS_PAGE = 50;


TransactionView::TransactionView(QWidget *parent) :
    QWidget(parent), model(0), transactionProxyModel(0),
    transactionView(0),m_delegate(new TxViewDelegate(true)),ui(new Ui::TransactionPage),page(0)
{
    ui->setupUi(this);

#ifdef Q_OS_MAC
    ui->dateWidget->setFixedWidth(121);
#else
    ui->dateWidget->setFixedWidth(120);
#endif
    ui->dateWidget->addItem(tr("All"), All);
    ui->dateWidget->addItem(tr("Today"), Today);
    ui->dateWidget->addItem(tr("This week"), ThisWeek);
    ui->dateWidget->addItem(tr("This month"), ThisMonth);
    ui->dateWidget->addItem(tr("Last month"), LastMonth);
    ui->dateWidget->addItem(tr("This year"), ThisYear);
    ui->dateWidget->addItem(tr("Range..."), Range);



#ifdef Q_OS_MAC
    ui->typeWidget->setFixedWidth(121);
#else
    ui->typeWidget->setFixedWidth(120);
#endif

    ui->typeWidget->addItem(tr("All"), TransactionFilterProxy::ALL_TYPES);
    ui->typeWidget->addItem(tr("You received"), TransactionFilterProxy::TYPE(TransactionRecord::RecvWithAddress) |
                                        TransactionFilterProxy::TYPE(TransactionRecord::RecvFromOther));
    ui->typeWidget->addItem(tr("You sent"), TransactionFilterProxy::TYPE(TransactionRecord::SendToAddress) |
                                  TransactionFilterProxy::TYPE(TransactionRecord::SendToOther));
    ui->typeWidget->addItem(tr("To yourself"), TransactionFilterProxy::TYPE(TransactionRecord::SendToSelf));
    ui->typeWidget->addItem(tr("Mined"), TransactionFilterProxy::TYPE(TransactionRecord::Generated));
    ui->typeWidget->addItem(tr("Other"), TransactionFilterProxy::TYPE(TransactionRecord::Other));



#if QT_VERSION >= 0x040700
    /* Do not move this to the XML file, Qt before 4.7 will choke on it */
    ui->addressWidget->setPlaceholderText(tr("Enter address or label to search"));
#endif



#if QT_VERSION >= 0x040700
    /* Do not move this to the XML file, Qt before 4.7 will choke on it */
    ui->amountWidget->setPlaceholderText(tr("Min amount"));
#endif


    ui->amountWidget->setValidator(new QDoubleValidator(0, 1e20, 8, this));




    transactionView = ui->view;
    transactionView->setItemDelegate(m_delegate);
    transactionView->setSizeAdjustPolicy(QListWidget::AdjustToContents);
    transactionView->setIconSize(QSize(DECORATION_SIZE, DECORATION_SIZE));
    transactionView->setMinimumHeight(NUM_ITEMS * (DECORATION_SIZE -21));
    transactionView->setAttribute(Qt::WA_MacShowFocusRect, false);
    transactionView->setEditTriggers(QAbstractItemView::AnyKeyPressed);
    transactionView->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);

    transactionView->setResizeMode(QListView::Adjust);
    // Actions
    QAction *copyAddressAction = new QAction(tr("Copy address"), this);
    QAction *copyLabelAction = new QAction(tr("Copy label"), this);
    QAction *copyAmountAction = new QAction(tr("Copy amount"), this);
    QAction *copyTxIDAction = new QAction(tr("Copy transaction ID"), this);
    QAction *editLabelAction = new QAction(tr("Edit label"), this);
    QAction *showDetailsAction = new QAction(tr("Show transaction details"), this);

    contextMenu = new QMenu();
    contextMenu->addAction(copyAddressAction);
    contextMenu->addAction(copyLabelAction);
    contextMenu->addAction(copyAmountAction);
    contextMenu->addAction(copyTxIDAction);
    contextMenu->addAction(editLabelAction);
    contextMenu->addAction(showDetailsAction);

    QListView* listView2 = new QListView(ui->dateWidget);
    listView2->setStyleSheet("QListView::item{color:#eeeeee;background:#102537;padding:5px} QListView::item:hover{background:#1d2e3f;color:white;}");
    ui->dateWidget->setView(listView2);

    QListView* listView3 = new QListView(ui->typeWidget);
    listView3->setStyleSheet("QListView::item{color:#eeeeee;background:#102537;padding:5px} QListView::item:hover{background:#1d2e3f;color:white;}");
    ui->typeWidget->setView(listView3);


    // Connect actions
    connect(ui->dateWidget, SIGNAL(activated(int)), this, SLOT(chooseDate(int)));
    connect(ui->typeWidget, SIGNAL(activated(int)), this, SLOT(chooseType(int)));
    connect(ui->addressWidget, SIGNAL(textChanged(QString)), this, SLOT(changedPrefix(QString)));
    connect(ui->amountWidget, SIGNAL(textChanged(QString)), this, SLOT(changedAmount(QString)));

    connect(ui->view, SIGNAL(doubleClicked(QModelIndex)), this, SIGNAL(doubleClicked(QModelIndex)));
    connect(ui->view, SIGNAL(customContextMenuRequested(QPoint)), this, SLOT(contextualMenu(QPoint)));

    connect(copyAddressAction, SIGNAL(triggered()), this, SLOT(copyAddress()));
    connect(copyLabelAction, SIGNAL(triggered()), this, SLOT(copyLabel()));
    connect(copyAmountAction, SIGNAL(triggered()), this, SLOT(copyAmount()));
    connect(copyTxIDAction, SIGNAL(triggered()), this, SLOT(copyTxID()));
    connect(editLabelAction, SIGNAL(triggered()), this, SLOT(editLabel()));
    connect(showDetailsAction, SIGNAL(triggered()), this, SLOT(showDetails()));

    createDateRangeWidget();
    ui->pleft->setVisible(false);
    ui->p1->setChecked(true);

    ui->p2->setChecked(false);
    ui->p3->setChecked(false);
    ui->p4->setChecked(false);
    ui->p5->setChecked(false);
    ui->p6->setChecked(false);
    ui->p7->setChecked(false);
    ui->p8->setChecked(false);
    ui->p9->setChecked(false);

    ui->p2->setVisible(false);
    ui->p3->setVisible(false);
    ui->p4->setVisible(false);
    ui->p5->setVisible(false);
    ui->p6->setVisible(false);
    ui->p7->setVisible(false);
    ui->p8->setVisible(false);
    ui->p9->setVisible(false);
    ui->pright->setVisible(false);
}


void TransactionView::forceHeightList(){
    calculateHeight();
    ui->view->setFixedHeight(ui->view->height()+1);
    ui->view->setFixedHeight(ui->view->height()-1);
}
void TransactionView::slotForceHeightList(){
    QTimer::singleShot(100,this,SLOT(forceHeightList()));
}
void TransactionView::calculateHeight(){
    int expandidos = 0;
    int count = transactionProxyModel->rowCount();
    if(count > (page+1)*TRANSACTIONS_PAGE)
        count = (page+1)*TRANSACTIONS_PAGE;
    for(int i = page*TRANSACTIONS_PAGE;i<count;i++)
    {
        if(transactionProxyModel->index(i,0).data(TransactionTableModel::ExpandedTransactionsRole).toBool() && !ui->view->isRowHidden(i))
            expandidos++;
    }
    count = transactionProxyModel->rowCount();
    if(count > TRANSACTIONS_PAGE)
        count = TRANSACTIONS_PAGE;

    if(transactionProxyModel->rowCount() < (page+1)*TRANSACTIONS_PAGE)
        count = transactionProxyModel->rowCount()-(page)*TRANSACTIONS_PAGE;



#if defined(Q_OS_WIN)
     ui->view->setFixedHeight(((expandidos) * (DECORATION_SIZE*3.0))+((count-expandidos) * (DECORATION_SIZE)));
#else
     ui->view->setFixedHeight(((expandidos) * (DECORATION_SIZE*2.75))+((count-expandidos) * (DECORATION_SIZE)));
#endif


}
void TransactionView::transactionClickedUrl(const QString& st){
    QString str_txid = st;
    int string_convert = str_txid.lastIndexOf(QChar('-'));
    QDesktopServices::openUrl("https://explorer.shardcoin.io/tx/"+str_txid.left(string_convert));
}
void TransactionView::forceFilter(){
    ui->dateWidget->setCurrentIndex(0);
    ui->typeWidget->setCurrentIndex(0);

    ui->amountWidget->setText("");
    transactionProxyModel->setAddressPrefix("a");
     transactionProxyModel->setAddressPrefix("");
       ui->addressWidget->setText("");
       page = 0;
       indexPage = 0;
      for(int i = 0;i<9;i++)
      {
          QPushButton* ptb = ((QPushButton*)(ui->listButtons->layout()->itemAt(i)->widget()));
          ptb->setText(QString::number(i +1));

      }
      for(int i = 0;i<9;i++)
      {
          QPushButton* ptb = ((QPushButton*)(ui->listButtons->layout()->itemAt(i)->widget()));
          ptb->setChecked(false);

      }
      hideRows();
       ui->pleft->setVisible(false);
         ui->p1->setChecked(true);
}



void TransactionView::setModel(WalletModel *model)
{
    this->model = model;
    if(model)
    {
        transactionProxyModel = new TransactionFilterProxy();
        transactionProxyModel->setSourceModel(model->getTransactionTableModel());
        transactionProxyModel->setLimit(-1);
        transactionProxyModel->setDynamicSortFilter(true);
        transactionProxyModel->setSortRole(Qt::EditRole);
        transactionProxyModel->setShowInactive(true);
        transactionProxyModel->sort(TransactionTableModel::Date, Qt::DescendingOrder);

        transactionProxyModel->setSortRole(Qt::EditRole);

        transactionView->setModel(transactionProxyModel);
        transactionView->setSelectionBehavior(QAbstractItemView::SelectRows);
        transactionView->setSelectionMode(QAbstractItemView::ExtendedSelection);


        connect(model->getTransactionTableModel(),SIGNAL(filterApplied()),this,SLOT(hideRows()));

        connect(m_delegate,SIGNAL(transactionClickedUrl(QString)),this,SLOT(transactionClickedUrl(QString)));

        connect(transactionProxyModel,SIGNAL(filterApplied()),this,SLOT(slotForceHeightList()));
        connect(m_delegate,SIGNAL(calculateHeight()),this,SLOT(calculateHeight()));
        connect(model,SIGNAL(balanceChanged(qint64,qint64,qint64,qint64)),this,SLOT(initializeList()));




        connect(ui->p1,SIGNAL(clicked()),this,SLOT(changePage()));
        connect(ui->p2,SIGNAL(clicked()),this,SLOT(changePage()));
        connect(ui->p3,SIGNAL(clicked()),this,SLOT(changePage()));
        connect(ui->p4,SIGNAL(clicked()),this,SLOT(changePage()));
        connect(ui->p5,SIGNAL(clicked()),this,SLOT(changePage()));
        connect(ui->p6,SIGNAL(clicked()),this,SLOT(changePage()));
        connect(ui->p7,SIGNAL(clicked()),this,SLOT(changePage()));
        connect(ui->p8,SIGNAL(clicked()),this,SLOT(changePage()));
        connect(ui->p9,SIGNAL(clicked()),this,SLOT(changePage()));
        connect(ui->pright,SIGNAL(clicked()),this,SLOT(nextPages()));
         connect(ui->pleft,SIGNAL(clicked()),this,SLOT(previousPages()));



    }
}
void TransactionView::initializeList(){
    int rowCount = transactionProxyModel->rowCount();


    if(((indexPage+1)*9) * TRANSACTIONS_PAGE +1 > rowCount)
        ui->pright->setVisible(false);
    else
        ui->pright->setVisible(true);
    for(int i = 0;i<9;i++)
    {
        QPushButton* ptb = ((QPushButton*)(ui->listButtons->layout()->itemAt(i)->widget()));
        if((ptb->text().toInt()-1)* TRANSACTIONS_PAGE >= rowCount)
            ptb->setVisible(false);
        else
            ptb->setVisible(true);
    }
    if(rowCount > TRANSACTIONS_PAGE)
    {
        for(int i = TRANSACTIONS_PAGE;i<rowCount;i++)
        {
           transactionView->setRowHidden(i,true);
        }
    }
}

void TransactionView::nextPages(){
    ui->pleft->setVisible(true);
      setVisibilityRows(page,true);
    indexPage++;
    page = indexPage*9;
          setVisibilityRows(page,false);
    for(int i = 0;i<9;i++)
    {
        QPushButton* ptb = ((QPushButton*)(ui->listButtons->layout()->itemAt(i)->widget()));
        ptb->setText(QString::number(indexPage*9 +i +1));

    }
    for(int i = 0;i<9;i++)
    {
        QPushButton* ptb = ((QPushButton*)(ui->listButtons->layout()->itemAt(i)->widget()));
        ptb->setChecked(false);

    }
    ui->p1->setChecked(true);
    hideRows();


}
void TransactionView::previousPages(){

    setVisibilityRows(page,true);
    indexPage--;

    if(indexPage <= 0)
    {
        indexPage = 0;
        ui->pleft->setVisible(false);

    }
     page = indexPage*9;
     setVisibilityRows(page,false);
    for(int i = 0;i<9;i++)
    {
        QPushButton* ptb = ((QPushButton*)(ui->listButtons->layout()->itemAt(i)->widget()));
        ptb->setText(QString::number(indexPage*9 +i +1));

    }
    for(int i = 0;i<9;i++)
    {
        QPushButton* ptb = ((QPushButton*)(ui->listButtons->layout()->itemAt(i)->widget()));
        ptb->setChecked(false);

    }
    ui->p1->setChecked(true);

    hideRows();

}
void TransactionView::setVisibilityRows(int last_page,bool value)
{
    int rowCount = transactionProxyModel->rowCount();
    if(rowCount > TRANSACTIONS_PAGE * (last_page+1))
        rowCount = TRANSACTIONS_PAGE * (last_page+1);
    for(int i = last_page*TRANSACTIONS_PAGE;i<rowCount;i++)
    {
       transactionView->setRowHidden(i,value);
    }
}

void TransactionView::changePage(){
    QPushButton* sender = qobject_cast<QPushButton*>(QObject::sender());

    if(sender->text().toInt()-1 == page)
        return;
     setVisibilityRows(page,true);
    page = sender->text().toInt()-1;
    for(int i = 0;i<9;i++)
    {
        QPushButton* ptb = ((QPushButton*)(ui->listButtons->layout()->itemAt(i)->widget()));
        ptb->setChecked(false);

    }
    sender->setChecked(true);
    setVisibilityRows(page,false);
    hideRows();
}
void TransactionView::hideRows(){


    int rowCount = transactionProxyModel->rowCount();
    if(((indexPage+1)*9) * TRANSACTIONS_PAGE +1 > rowCount)
        ui->pright->setVisible(false);
    else
        ui->pright->setVisible(true);
    for(int i = 0;i<9;i++)
    {
        QPushButton* ptb = ((QPushButton*)(ui->listButtons->layout()->itemAt(i)->widget()));
        if((ptb->text().toInt()-1)* TRANSACTIONS_PAGE >= rowCount)
            ptb->setVisible(false);
        else
            ptb->setVisible(true);
    }
    calculateHeight();
}

void TransactionView::priceChanged(QString answer){
    QJsonDocument doc = QJsonDocument::fromJson(answer.toUtf8());
    if(!doc.isNull()){
        QJsonObject obj = doc.object();
        double price  = obj.value("price").toDouble();

        m_delegate->setPrice(price);


    }
}
int lastIndexDate = 0;
void TransactionView::chooseDate(int idx)
{
    page = 0;
    if(!transactionProxyModel || lastIndexDate == ui->dateWidget->itemData(idx).toInt())
        return;
    QDate current = QDate::currentDate();

    //ui->dateRangeWidget->setVisible(false);
    lastIndexDate =ui->dateWidget->itemData(idx).toInt();
    switch(ui->dateWidget->itemData(idx).toInt())
    {
    case All:
        transactionProxyModel->setDateRange(
                TransactionFilterProxy::MIN_DATE.toMSecsSinceEpoch(),
                TransactionFilterProxy::MAX_DATE.toMSecsSinceEpoch());
        break;
    case Today:
        transactionProxyModel->setDateRange(
                QDateTime::currentMSecsSinceEpoch(),
                TransactionFilterProxy::MAX_DATE.toMSecsSinceEpoch());
        break;
    case ThisWeek: {
        // Find last Monday
        QDate startOfWeek = current.addDays(-(current.dayOfWeek()-1));
        transactionProxyModel->setDateRange(
                QDateTime(startOfWeek).toMSecsSinceEpoch(),
                TransactionFilterProxy::MAX_DATE.toMSecsSinceEpoch());

        } break;
    case ThisMonth:
        transactionProxyModel->setDateRange(
                QDateTime(QDate(current.year(), current.month(), 1)).toMSecsSinceEpoch(),
                TransactionFilterProxy::MAX_DATE.toMSecsSinceEpoch());
        break;
    case LastMonth:
        transactionProxyModel->setDateRange(
                QDateTime(QDate(current.year(), current.month()-1, 1)).toMSecsSinceEpoch(),
                QDateTime(QDate(current.year(), current.month(), 1)).toMSecsSinceEpoch());
        break;
    case ThisYear:
        transactionProxyModel->setDateRange(
                QDateTime(QDate(current.year(), 1, 1)).toMSecsSinceEpoch(),
                TransactionFilterProxy::MAX_DATE.toMSecsSinceEpoch());
        break;
    case Range:
        dateRangeWidget->setVisible(true);
        dateRangeChanged();
        break;
    }
    page = 0;
    indexPage = 0;
   for(int i = 0;i<9;i++)
   {
       QPushButton* ptb = ((QPushButton*)(ui->listButtons->layout()->itemAt(i)->widget()));
       ptb->setText(QString::number(i +1));

   }
   hideRows();
    ui->pleft->setVisible(false);
      ui->p1->setChecked(true);

    ui->scrollArea->verticalScrollBar()->setValue(ui->scrollArea->verticalScrollBar()->minimum());

}
int lastIndexType= 0;
void TransactionView::chooseType(int idx)
{
    page=0;
    if(!transactionProxyModel || lastIndexType == ui->typeWidget->itemData(idx).toInt())
        return;
    lastIndexType = ui->typeWidget->itemData(idx).toInt();
    transactionProxyModel->setTypeFilter(
        ui->typeWidget->itemData(idx).toInt());
    page = 0;
    indexPage = 0;
   for(int i = 0;i<9;i++)
   {
       QPushButton* ptb = ((QPushButton*)(ui->listButtons->layout()->itemAt(i)->widget()));
       ptb->setText(QString::number(i +1));

   }
   hideRows();
    ui->pleft->setVisible(false);
      ui->p1->setChecked(true);
    ui->scrollArea->verticalScrollBar()->setValue(ui->scrollArea->verticalScrollBar()->minimum());

}
QString lastAddess = "";
void TransactionView::changedPrefix(const QString &prefix)
{
    page = 0;
    if(!transactionProxyModel || lastAddess== prefix)
        return;
    lastAddess = prefix;
    transactionProxyModel->setAddressPrefix(prefix);
    page = 0;
    indexPage = 0;
   for(int i = 0;i<9;i++)
   {
       QPushButton* ptb = ((QPushButton*)(ui->listButtons->layout()->itemAt(i)->widget()));
       ptb->setText(QString::number(i +1));

   }
   hideRows();
    ui->pleft->setVisible(false);
      ui->p1->setChecked(true);
    ui->scrollArea->verticalScrollBar()->setValue(ui->scrollArea->verticalScrollBar()->minimum());

}
QString lastAmount = "";
void TransactionView::changedAmount(const QString &amount)
{
      page = 0;
    if(!transactionProxyModel || lastAmount== amount)
        return;
    qint64 amount_parsed = 0;
    lastAmount = amount;
    if(BitcoinUnits::parse(model->getOptionsModel()->getDisplayUnit(), amount, &amount_parsed))
    {
        transactionProxyModel->setMinAmount(amount_parsed);
    }
    else
    {
        transactionProxyModel->setMinAmount(0);
    }
    page = 0;
    indexPage = 0;
   for(int i = 0;i<9;i++)
   {
       QPushButton* ptb = ((QPushButton*)(ui->listButtons->layout()->itemAt(i)->widget()));
       ptb->setText(QString::number(i +1));

   }
    ui->pleft->setVisible(false);
   hideRows();
     ui->p1->setChecked(true);
    ui->scrollArea->verticalScrollBar()->setValue(ui->scrollArea->verticalScrollBar()->minimum());

}

void TransactionView::exportClicked()
{
    // CSV is currently the only supported format
    QString filename = GUIUtil::getSaveFileName(
            this,
            tr("Export Transaction Data"), QString(),
            tr("Comma separated file (*.csv)"));

    if (filename.isNull()) return;

    CSVModelWriter writer(filename);

    // name, column, role
    writer.setModel(transactionProxyModel);
    writer.addColumn(tr("Confirmed"), 0, TransactionTableModel::ConfirmedRole);
    writer.addColumn(tr("Date"), 0, TransactionTableModel::DateRole);
    writer.addColumn(tr("Type"), TransactionTableModel::Type, Qt::EditRole);
    writer.addColumn(tr("Label"), 0, TransactionTableModel::LabelRole);
    writer.addColumn(tr("Address"), 0, TransactionTableModel::AddressRole);
    writer.addColumn(tr("Amount"), 0, TransactionTableModel::FormattedAmountRole);
    writer.addColumn(tr("ID"), 0, TransactionTableModel::TxIDRole);

    if(!writer.write())
    {
        QMessageBox::critical(this, tr("Error exporting"), tr("Could not write to file %1.").arg(filename),
                              QMessageBox::Abort, QMessageBox::Abort);
    }
}

void TransactionView::contextualMenu(const QPoint &point)
{
    QModelIndex index = transactionView->indexAt(point);
    if(index.isValid())
    {
        contextMenu->exec(QCursor::pos());
    }
}

void TransactionView::copyAddress()
{
    GUIUtil::copyEntryData(transactionView, 0, TransactionTableModel::AddressRole);
}

void TransactionView::copyLabel()
{
    GUIUtil::copyEntryData(transactionView, 0, TransactionTableModel::LabelRole);
}

void TransactionView::copyAmount()
{
    GUIUtil::copyEntryData(transactionView, 0, TransactionTableModel::FormattedAmountRole);
}

void TransactionView::copyTxID()
{
    GUIUtil::copyEntryData(transactionView, 0, TransactionTableModel::TxIDRole);
}

void TransactionView::editLabel()
{
    if(!transactionView->selectionModel() ||!model)
        return;
    QModelIndexList selection = transactionView->selectionModel()->selectedRows();
    if(!selection.isEmpty())
    {
        AddressTableModel *addressBook = model->getAddressTableModel();
        if(!addressBook)
            return;
        QString address = selection.at(0).data(TransactionTableModel::AddressRole).toString();
        if(address.isEmpty())
        {
            // If this transaction has no associated address, exit
            return;
        }
        // Is address in address book? Address book can miss address when a transaction is
        // sent from outside the UI.
        int idx = addressBook->lookupAddress(address);
        if(idx != -1)
        {
            // Edit sending / receiving address
            QModelIndex modelIdx = addressBook->index(idx, 0, QModelIndex());
            // Determine type of address, launch appropriate editor dialog type
            QString type = modelIdx.data(AddressTableModel::TypeRole).toString();

            EditAddressDialog dlg(type==AddressTableModel::Receive
                                         ? EditAddressDialog::EditReceivingAddress
                                         : EditAddressDialog::EditSendingAddress,
                                  this);
            dlg.setModel(addressBook);
            dlg.loadRow(idx);
            dlg.exec();
        }
        else
        {
            // Add sending address
            EditAddressDialog dlg(EditAddressDialog::NewSendingAddress,
                                  this);
            dlg.setModel(addressBook);
            dlg.setAddress(address);
            dlg.exec();
        }
    }
}

void TransactionView::showDetails()
{

}

QWidget *TransactionView::createDateRangeWidget()
{
    dateRangeWidget = new QFrame();
    dateRangeWidget->setFrameStyle(QFrame::Panel | QFrame::Raised);
    dateRangeWidget->setContentsMargins(0,0,0,0);
    QHBoxLayout *layout = new QHBoxLayout(dateRangeWidget);
    layout->setContentsMargins(0,0,0,0);
    layout->addSpacing(23);
    layout->addWidget(new QLabel(tr("Range:")));
    layout->setMargin(15);
    layout->setSpacing(15);
    dateRangeWidget->setStyleSheet("background:#15202d;color:white");
    dateFrom = new QDateTimeEdit(this);
    dateFrom->setDisplayFormat("dd/MM/yy");
    dateFrom->setCalendarPopup(true);
    dateFrom->setMinimumWidth(100);
    dateFrom->setDate(QDate::currentDate().addDays(-7));
    dateFrom->setStyleSheet("QDateTimeEdit{   color:#eeeeee;padding:5px;border:2px solid #1d2e3f;background:#0d2131; selection-background-color: #1d2e3f;color:white;outline:none}QDateTimeEdit::drop-down{border:0px;image: url(\":/images/res/images/dropdown.png\");padding:13px 5px;}QDateTimeEdit:hover {background: #102537; } QDateTimeEdit QAbstractItemView {border: 2px solid #102537;selection-background-color: #003750; background-color: #0d2131;selection-color:white;margin:0px;padding:0px;outline:none;}QCalendarWidget{padding:15px;}QCalendarWidget QWidget {alternate-background-color: #003750}");


    layout->addWidget(dateFrom);
    layout->addWidget(new QLabel(tr("to")));

    dateTo = new QDateTimeEdit(this);
    dateTo->setDisplayFormat("dd/MM/yy");
    dateTo->setCalendarPopup(true);
    dateTo->setMinimumWidth(100);
    dateTo->setStyleSheet("QDateTimeEdit{   color:#eeeeee;padding:5px;border:2px solid #1d2e3f;background:#0d2131; selection-background-color: #1d2e3f;color:white;outline:none}QDateTimeEdit::drop-down{border:0px;image: url(\":/images/res/images/dropdown.png\");padding:13px 5px;}QDateTimeEdit:hover {background: #102537; } QDateTimeEdit QAbstractItemView {border: 2px solid #102537;selection-background-color: #003750; background-color: #0d2131;selection-color:white;margin:0px;padding:0px;outline:none;}QCalendarWidget{padding:15px;}QCalendarWidget QWidget {alternate-background-color: #003750}");

    dateTo->setDate(QDate::currentDate());
    layout->addWidget(dateTo);
    layout->addStretch();


    QRect screenGeometry = QApplication::desktop()->screenGeometry();
            int x = (screenGeometry.width() - 200) / 2;
            int y = (screenGeometry.height() - 100) / 2;
            dateRangeWidget->move(x, y);

    // Hide by default
    dateRangeWidget->setVisible(false);

    // Notify on change
    connect(dateFrom, SIGNAL(dateChanged(QDate)), this, SLOT(dateRangeChanged()));
    connect(dateTo, SIGNAL(dateChanged(QDate)), this, SLOT(dateRangeChanged()));

    return dateRangeWidget;
}

void TransactionView::dateRangeChanged()
{
      page = 0;
    if(!transactionProxyModel)
        return;
    transactionProxyModel->setDateRange(
            QDateTime(dateFrom->date()).toMSecsSinceEpoch(),
            QDateTime(dateTo->date()).addDays(1).toMSecsSinceEpoch());
    page = 0;
    indexPage = 0;
   for(int i = 0;i<9;i++)
   {
       QPushButton* ptb = ((QPushButton*)(ui->listButtons->layout()->itemAt(i)->widget()));
       ptb->setText(QString::number(i +1));

   }
    ui->pleft->setVisible(false);
      ui->p1->setChecked(true);
   hideRows();
}

void TransactionView::focusTransaction(const QModelIndex &idx)
{
    if(!transactionProxyModel)
        return;
    QModelIndex targetIdx = transactionProxyModel->mapFromSource(idx);
    transactionView->scrollTo(targetIdx);
    transactionView->setCurrentIndex(targetIdx);
    transactionView->setFocus();
}
