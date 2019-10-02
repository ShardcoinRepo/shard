#include "overviewpage.h"
#include "ui_overviewpage.h"
#include "clientmodel.h"
#include "walletmodel.h"
#include "guiutil.h"
#include "optionsmodel.h"
#include "txviewdelegate.h"
#include "transactionfilterproxy.h"
#include "guiconstants.h"
#include "transactiontablemodel.h"

#include "custombutton.h"

QSharedPointer<QCPAxisTickerDateTime> dateTicker(new QCPAxisTickerDateTime);
OverviewPage::OverviewPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OverviewPage),
    clientModel(0),
    walletModel(0),
    currentBalance(-1),
    currentStake(0),
    currentUnconfirmedBalance(-1),
    currentImmatureBalance(-1),
    txdelegate(new TxViewDelegate()),
    filter(0)
{


    ui->setupUi(this);
    installEventFilter(this);

    // Recent transactions
    ui->listTransactions->setItemDelegate(txdelegate);

    ui->listTransactions->setIconSize(QSize(DECORATION_SIZE, DECORATION_SIZE));
    ui->listTransactions->setMinimumHeight(NUM_ITEMS * (DECORATION_SIZE -21));
    ui->listTransactions->setAttribute(Qt::WA_MacShowFocusRect, false);
    ui->listTransactions->setEditTriggers(QAbstractItemView::AnyKeyPressed);
     ui->listTransactions->setUniformItemSizes(false);
    ui->listTransactions->setResizeMode(QListView::Adjust);
    ui->listTransactions->setStyleSheet("QListView{ border:0px;} QListView::item{border:1px white;}");
    QFont bal = ui->labelBalance->font();
    bal.setPointSizeF(40);
    ui->labelBalance->setFont(bal);

    QFont stake = ui->labelStake->font();
    stake.setPointSizeF(30);
    ui->labelStake->setFont(stake);

    QFont unconfirmed = ui->labelUnconfirmed->font();
    unconfirmed.setPointSizeF(30);
    ui->labelUnconfirmed->setFont(unconfirmed);
    ui->graphView->setBackground(QColor("#102537"));
    ui->graphView->setLocale(QLocale(QLocale::English, QLocale::UnitedKingdom));
    ui->graphView->addGraph();
    ui->graphView->graph()->setLineStyle(QCPGraph::lsLine);
    ui->graphView->graph()->setPen(QPen(QColor("#0adbf0")));
    ui->graphView->graph()->setBrush(QBrush(QColor("#003750")));

    dateTicker->setDateTimeFormat("HH:mm");
    dateTicker->setTickCount(5);
    ui->graphView->xAxis->setTickLabelColor(QColor("#ffffff"));
    ui->graphView->yAxis->setTickLabelColor(QColor("#ffffff"));
    ui->graphView->xAxis->setBasePen(QColor("#ffffff"));
    ui->graphView->yAxis->setBasePen(QColor("#ffffff"));
    ui->graphView->xAxis->setTickPen(QColor("#ffffff"));
    ui->graphView->yAxis->setTickPen(QColor("#ffffff"));
    ui->comboBalance->setVisible(false);
    ui->graphView->yAxis->setSubTickPen(QColor("#ffffff"));
    ui->graphView->xAxis->setSubTickPen(QColor("#ffffff"));
    ui->graphView->xAxis->setTickLabelFont(QFont(QFont().family(), 8));
    ui->graphView->yAxis->setTickLabelFont(QFont(QFont().family(), 8));
    ui->graphView->xAxis->grid()->setVisible(false);
    ui->graphView->yAxis->grid()->setVisible(false);
    ui->graphView->xAxis->setTicker(dateTicker);

    ui->changeTime->addItem(tr("5 minutes"));
    ui->changeTime->addItem(tr("15 minutes"));
    ui->changeTime->addItem(tr("30 minutes"));
    ui->changeTime->addItem(tr("1 hour"));
    ui->changeTime->addItem(tr("1 day"));
    ui->changeTime->addItem(tr("1 week"));
    ui->changeTime->addItem(tr("1 month"));

    ui->comboBalance->addItem(tr("1 day"));
    ui->comboBalance->addItem(tr("1 week"));
    ui->graphSelector->addItem(tr("Price Graph"));
    ui->graphSelector->addItem(tr("Balance Graph"));
    ui->graphSelector->addItem(tr("Staked Graph"));
    ui->graphSelector->setCurrentIndex(0);


    QListView* listView = new QListView(ui->changeTime);
    listView->setStyleSheet("QListView::item{color:#eeeeee;background:#102537;padding:5px} QListView::item:hover{background:#1d2e3f;color:white;}");
    ui->changeTime->setView(listView);

    QListView* listView3 = new QListView(ui->comboBalance);
    listView3->setStyleSheet("QListView::item{color:#eeeeee;background:#102537;padding:5px} QListView::item:hover{background:#1d2e3f;color:white;}");
    ui->comboBalance->setView(listView3);

    QListView* listView2 = new QListView(ui->graphSelector);
    listView2->setStyleSheet("QListView::item{color:#eeeeee;background:#102537;padding:5px} QListView::item:hover{background:#1d2e3f;color:white;}");
    ui->graphSelector->setView(listView2);

    connect(ui->listTransactions, SIGNAL(clicked(QModelIndex)), this, SLOT(handleTransactionClicked(QModelIndex)));
    connect(ui->moreButton, SIGNAL(clicked()), this, SLOT(handleMoreClicked()));
    connect(txdelegate, SIGNAL(transactionClicked(QModelIndex)),this, SLOT(transactionClickedMethod(QModelIndex)));
    connect(ui->ui_recieve, SIGNAL(clicked()), this, SLOT(toRecieve()));
    connect(ui->ui_send, SIGNAL(clicked()), this, SLOT(toSend()));

    connect(ui->changeTime,SIGNAL(currentIndexChanged(int)),this,SLOT(indexChanged(int)));
        connect(ui->comboBalance,SIGNAL(currentIndexChanged(int)),this,SLOT(indexChangedBalance(int)));
    connect(ui->graphSelector,SIGNAL(currentIndexChanged(int)),this,SLOT(balanceButtonClicked(int)));
    showOutOfSyncWarning(true);
    ui->changeTime->setCurrentIndex(4);

    connect(txdelegate,SIGNAL(calculateHeight()),this,SLOT(calculateHeight()));

    connect(this,SIGNAL(sizeChanged()),this,SLOT(updateSizeLabels()));

    ui->ui_recieve->setName(tr("Receive"));
    ui->ui_recieve->setImage("dashboard_recieve");

    ui->ui_send->setName(tr("Send"));
    ui->ui_send->setImage("dashboard_send");
    QTimer::singleShot(100,this,SLOT(balanceButtonClicked()));
}
int lastIndex = 5;
void OverviewPage::indexChanged(int index){

    lastIndex = index+1;
     emit changeIndex(index+1);
}
int lastIndexBalance = 0;


void OverviewPage::indexChangedBalance(int index){

    lastIndexBalance = index+1;
    if(ui->graphSelector->currentIndex() == 1)
    {

        dateTicker->setDateTimeFormat("MMM dd");
        QDateTime start = QDateTime::currentDateTime();
        QTime tt = start.time();
        tt.setHMS(0,0,0);
        start.setTime(tt);
        QDateTime end = QDateTime::currentDateTime();
        if(ui->comboBalance->currentIndex() == 0)
            start = start.addDays(-29);
        else
            start = start.addDays(-29*7);
        ui->graphView->xAxis->setRange(start.toTime_t(), end.toTime_t());
        double min;
        double max;
        QVector<QCPGraphData> timeData(30);
        double val = 0;
        for(int i = 0;i<30;i++){
            if(walletModel->getTransactionTableModel()->mapTransactions.find(start.toMSecsSinceEpoch()/1000.0) != walletModel->getTransactionTableModel()->mapTransactions.end())
                val = walletModel->getTransactionTableModel()->mapTransactions[start.toMSecsSinceEpoch()/1000.0];
            if(i == 0)
            {
                max = min = val;
            }
            timeData[i].key = start.toTime_t();
            timeData[i].value = val;
            if(min > val)
                min = val;
            if(max < val)
                max = val;
            if(ui->comboBalance->currentIndex() == 0)
                start = start.addDays(1);
            else
                start = start.addDays(7);
        }
        ui->graphView->graph()->data()->set(timeData);
        min  = 0;
        QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
        double starta = min;
        double inc = (max - min)/6;
        for(int i = 0;i<7;i++){
            if(max== 0)
                textTicker->addTick(starta, QString("0"));
            else if(max/100000000.0 < 1)
                textTicker->addTick(starta, QString::number(starta/(100000000.0),'f',8));
            else if(max/100000000.0 < 100)
                textTicker->addTick(starta, QString::number(starta/(100000000.0),'f',4));
            else if(max/100000000.0 < 1000)
                textTicker->addTick(starta, QString::number(starta/(100000000.0),'f',3));
            else if(max/100000000.0 < 10000)
                textTicker->addTick(starta, QString::number(starta/(100000000.0),'f',2));
            else
                textTicker->addTick(starta, QString::number(starta/(100000000.0),'f',0));
            starta+= inc;
        }

        ui->graphView->yAxis->setTicker(textTicker);
        if(min == 0)
            ui->graphView->yAxis->setRange(0,max+inc);
        else
            ui->graphView->yAxis->setRange(min-inc,max+inc);

        ui->graphView->replot();
    }
    else
    {
        dateTicker->setDateTimeFormat("MMM dd");
        QDateTime start = QDateTime::currentDateTime();
        QTime tt = start.time();
        tt.setHMS(0,0,0);
        start.setTime(tt);
        QDateTime end = QDateTime::currentDateTime();
        if(ui->comboBalance->currentIndex() == 0)
            start = start.addDays(-30);
        else
            start = start.addDays(-29*7 -1);
        ui->graphView->xAxis->setRange(start.toTime_t(), end.toTime_t());
        double min;
        double max;
        QVector<QCPGraphData> timeData(30);

        for(int i = 0;i<30;i++){
            double val = 0;
            if(i == 0)
            {

                max = min = val;
            }
            for(int k = 0;k<7;k++)
            {
                if(start.date().daysTo(QDate::currentDate()) == 0)
                {

                     val += walletModel->getStake();

                }
                else{
                    val += walletModel->getTransactionTableModel()->mapDebit[start.toMSecsSinceEpoch()/1000.0];
                }

                start = start.addDays(1);
                if(ui->comboBalance->currentIndex() == 0)
                    break;
            }
            timeData[i].key = start.toTime_t();
            timeData[i].value = val;
            if(min > val)
                min = val;
            if(max < val)
                max = val;



        }
        ui->graphView->graph()->data()->set(timeData);

        QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
        double starta = min;
        double inc = (max - min)/6;
        for(int i = 0;i<7;i++){
            if(max== 0)
                textTicker->addTick(starta, QString("0"));
            else if(max/100000000.0 < 100)
                textTicker->addTick(starta, QString::number(starta/(100000000.0),'f',4));
            else
                textTicker->addTick(starta, QString::number(starta/(100000000.0),'f',2));

            starta+= inc;
        }

        ui->graphView->yAxis->setTicker(textTicker);
        if(min == 0)
            ui->graphView->yAxis->setRange(0,max+inc);
        else
            ui->graphView->yAxis->setRange(min-inc,max+inc);


        ui->graphView->replot();
    }
}

void OverviewPage::resizeEvent(QResizeEvent *event){

    QWidget::resizeEvent(event);
    updateSizeLabels();

}


void OverviewPage::calculateHeight(){

     if(walletModel)
    {
        int expandidos = 0;
        int count = filter->rowCount();
        if(count > 15)
            count = 15;
        for(int i = 0;i<count;i++)
        {
            if(filter->index(i,0).data(TransactionTableModel::ExpandedDashboardRole).toBool())
                expandidos++;
        }


#if defined(Q_OS_WIN)

     ui->listTransactions->setFixedHeight(((expandidos) * (DECORATION_SIZE*3.0)+1)+((count-expandidos) * (DECORATION_SIZE+1)));
#else
     ui->listTransactions->setFixedHeight(((expandidos) * (DECORATION_SIZE*2.75)+1)+((count-expandidos) * (DECORATION_SIZE+1)));
#endif
    }
      ui->listTransactions->verticalScrollBar()->setValue(ui->listTransactions->verticalScrollBar()->minimum());
}
void OverviewPage::forceRedraw(){
    ui->listTransactions->forceRedraw();
}
void OverviewPage::balanceButtonClicked(int index){
    QString text = ui->graphSelector->itemText(index);
    QFont font = ui->graphSelector->font();
    QFontMetrics fm(font);
    int width = fm.width(text);
    ui->graphSelector->setFixedWidth(width+40);
    if(index == 1)
    {


        ui->changeTime->setEnabled(false);
        ui->changeTime->setVisible(false);
        indexChangedBalance(0);
         ui->comboBalance->setCurrentIndex(0);
            ui->comboBalance->setVisible(true);
                 ui->comboBalance->setEnabled(true);

    }
    else if(index == 0){
        ui->changeTime->setEnabled(true);
        ui->changeTime->setVisible(true);
        ui->comboBalance->setVisible(false);
             ui->comboBalance->setEnabled(false);
        indexChanged(lastIndex-1);
    }
    else if(index == 2)
    {
        ui->changeTime->setEnabled(false);
        ui->changeTime->setVisible(false);
        indexChangedBalance(0);
         ui->comboBalance->setCurrentIndex(0);
            ui->comboBalance->setVisible(true);
                 ui->comboBalance->setEnabled(true);
    }
}


void OverviewPage::toRecieve(){
    emit recieveTransaction();
}
void OverviewPage::toSend(){
    emit sendTransaction();
}

void OverviewPage::priceChanged(QString answer){
    QJsonDocument doc = QJsonDocument::fromJson(answer.toUtf8());
    if(!doc.isNull()){
        QJsonObject obj = doc.object();
        double price  = obj.value("price").toDouble();
        double volume  = obj.value("volume").toDouble();
        double market  = obj.value("market cap").toDouble();
        double change = obj.value("change").toDouble();
        double bal = ui->labelBalance->text().toDouble();
        priceAux = price;
        ui->m_price->setText("$ "+QString::number(price,'f',6)+" / SHARD");
        ui->m_change->setText(QString::number(change,'f',2)+" %");
        ui->m_cap->setText("$ "+QString::number(market,'f',2));
        ui->m_volume->setText("$ "+QString::number(volume,'f',2));

        ui->balanceLabel->setText("$ "+QString::number(price*bal,'f',6));

        txdelegate->setPrice(price);
        int height = ui->listTransactions->height();
        ui->listTransactions->setFixedHeight(height+1);
        ui->listTransactions->setFixedHeight(height);

    }
}
void OverviewPage::graphChanged(QString answer){
    if(!ui->changeTime->isEnabled())
        return;
    QJsonDocument doc = QJsonDocument::fromJson(answer.toUtf8());
    if(!doc.isNull()){

        QJsonObject obj = doc.object();
        QJsonArray res = obj.value("result").toArray();
        //QLineSeries*  seriesHIGH = new QLineSeries();
        //QLineSeries*  seriesLOW = new QLineSeries();
        double min = 9999999999;
        double max = -999999999;

        QVector<QCPGraphData> timeData(30);
        QDateTime maxx = QDateTime::currentDateTime();
        QDateTime minx=QDateTime::currentDateTime();
        for(int i = 0;i<30;i++){
            if(i != 0){
            if(lastIndex == 1){
                minx = minx.addSecs(-300);

            }
            else if(lastIndex == 2){
                minx=minx.addSecs(-900);
            }
            else if(lastIndex == 3){
                minx=minx.addSecs(-1800);
            }
            else if(lastIndex == 4){
                minx=minx.addSecs(-3600);
            }
            else if(lastIndex == 5){
                minx=minx.addSecs(-86400);
            }
            else if(lastIndex == 6){
                 minx=minx.addSecs(-604800);

            }
            else if(lastIndex == 7){
                 minx=minx.addSecs(-2592000);
            }
            }
            if(res.count() > i){

                QJsonObject aux = res.at(i).toObject();

                double minV = aux["min"].toDouble();
                double maxV = aux["max"].toDouble();
                timeData[i].key = minx.toTime_t();
                timeData[i].value = (maxV + minV) * 0.5 ;

                if(aux["max"].toDouble()>max)
                    max = aux["max"].toDouble();
                if(aux["min"].toDouble()<min)
                    min = aux["min"].toDouble();
            }else{
                timeData[i].key = minx.toTime_t();
                timeData[i].value = 0 ;
                min = 0;
            }



        }

        if(lastIndex == 1){
            dateTicker->setDateTimeFormat("HH:mm");

        }
        else if(lastIndex == 2){
            dateTicker->setDateTimeFormat("HH:mm");
        }
        else if(lastIndex == 3){
               dateTicker->setDateTimeFormat("HH:mm");
        }
        else if(lastIndex == 4){
            dateTicker->setDateTimeFormat("HH:mm");
        }
        else if(lastIndex == 5){
              dateTicker->setDateTimeFormat("MMM dd");
        }
        else if(lastIndex == 6){
              dateTicker->setDateTimeFormat("MMM dd");

        }
        else if(lastIndex == 7){
            dateTicker->setDateTimeFormat("MMM yyyy");
        }
        ui->graphView->graph()->data()->set(timeData);
        QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
        double start = min;
        if(max == -999999999)
        {
            max = priceAux;
        }
        double inc = (max - min)/6.0;
        for(int i = 0;i<7;i++){
            textTicker->addTick(start, QString::number(start,'f',3));
            start+= inc;
        }

        ui->graphView->yAxis->setTicker(textTicker);
        ui->graphView->xAxis->setRange(minx.toTime_t(), maxx.toTime_t());
        if(min ==  0)
            ui->graphView->yAxis->setRange(0, max+inc);
        else
            ui->graphView->yAxis->setRange(min-inc, max+inc);
        ui->graphView->replot();
        //seriesHIGH->setColor(QColor("#0adbf0"));
        //seriesLOW->setColor(QColor("#ffffff"));
        //setRangeChart(minx,maxx,min,max,seriesLOW,seriesHIGH);
        //chart->update(chart->rect());
    }

}
void OverviewPage::handleTransactionClicked(const QModelIndex &index)
{
    int height = ui->listTransactions->height();
    ui->listTransactions->setFixedHeight(height+1);
    ui->listTransactions->setFixedHeight(height);
}
void OverviewPage::transactionClickedMethod(const QModelIndex &index)
{
    if(filter)
        emit transactionClicked(filter->mapToSource(index));
}
void OverviewPage::handleMoreClicked()
{
    emit moreClicked();
}
OverviewPage::~OverviewPage()
{
    delete ui;
}

void OverviewPage::forceFilter(){
    calculateHeight();
}

void OverviewPage::setBalance(qint64 balance, qint64 stake, qint64 unconfirmedBalance, qint64 immatureBalance)
{

    currentBalance = balance;
    currentStake = stake;
    currentUnconfirmedBalance = unconfirmedBalance;
    currentImmatureBalance = immatureBalance;
    if(balance == 0){
       ui->labelBalance->setText("00.00");
       ui->balanceLabel->setText("00.00");
    }
    else
    {
        ui->labelBalance->setText(QString::number(currentBalance/100000000.0,'f',4));
        ui->balanceLabel->setText("$ "+QString::number((currentBalance/100000000.0)*priceAux,'f',3));
    }


    if(stake == 0)
       ui->labelStake->setText("00.00");
    else
        ui->labelStake->setText(QString::number(currentStake/100000000.0,'f',4));


    if(currentUnconfirmedBalance == 0)
       ui->labelUnconfirmed->setText("00.00");
    else
        ui->labelUnconfirmed->setText(QString::number(currentUnconfirmedBalance/100000000.0,'f',4));
    QDateTime start = QDateTime::currentDateTime();
    QTime tt = start.time();
    tt.setHMS(0,0,0);
    start.setTime(tt);
    if(ui->graphSelector->currentIndex() != 0)
        balanceButtonClicked(ui->graphSelector->currentIndex());


    updateSizeLabels();

    forceFilter();


}
double lastSum = 0;
void OverviewPage::updateSizeLabels(){

    double sum = width()-400;
    sum = sum / 3.0;
    if(std::abs(lastSum - sum) < 30)
        return;
    lastSum = sum;

    QFont ft1 = ui->labelBalance->font();
       ft1.setPointSizeF(32);
    QFontMetrics mt1(ft1);
    double auxmid = 32;
    if(mt1.width(ui->labelBalance->text()) > sum){
        auxmid = 30.4*(sum / (double)mt1.width(ui->labelBalance->text()));
         ft1.setPointSizeF(auxmid);
    }
     ui->labelBalance->setFont(ft1);


    QFont ft3 = ui->labelUnconfirmed->font();

    ft3.setPointSizeF(25);
     QFontMetrics mt3(ft3);
    double unconfirmed = 25*0.8;
    if(mt3.width(ui->labelUnconfirmed->text()) > sum){
        double aux = sum / (double)mt3.width(ui->labelUnconfirmed->text());
        unconfirmed = 25*aux*0.95;
        ft3.setPointSizeF(unconfirmed);


    }
    if(auxmid < unconfirmed)
    {
        unconfirmed = auxmid*0.8;
        ft3.setPointSizeF(unconfirmed);
    }
    ui->labelUnconfirmed->setFont(ft3);
    QFont ft2 = ui->labelStake->font();
        ft2.setPointSizeF(25);
    QFontMetrics mt2(ft2);

    if(mt2.width(ui->labelStake->text()) > sum){
        double aux = sum / (double)mt2.width(ui->labelStake->text());
        double aux2 = 25*aux*0.95;
        if(aux2 < unconfirmed)
        {
            ft2.setPointSizeF(aux2);
            ui->labelUnconfirmed->setFont(ft2);

        }
        else{
            ft2.setPointSizeF(unconfirmed);
        }

    }
    else{
        if(25*0.8 > unconfirmed)
        {
           ft2.setPointSizeF(unconfirmed);
        }
    }
    ui->labelStake->setFont(ft2);



}

void OverviewPage::setClientModel(ClientModel *model)
{
    this->clientModel = model;
    if(model)
    {
        // Show warning if this is a prerelease version
        connect(model, SIGNAL(alertsChanged(QString)), this, SLOT(updateAlerts(QString)));
        updateAlerts(model->getStatusBarWarnings());
    }
}

void OverviewPage::setWalletModel(WalletModel *model)
{
    this->walletModel = model;
    if(model && model->getOptionsModel())
    {
        filter = new TransactionFilterProxy();
        filter->setSourceModel(model->getTransactionTableModel());
          filter->setLimit(15);
        filter->setDynamicSortFilter(true);
        filter->setSortRole(Qt::EditRole);
        filter->setShowInactive(false);
        filter->sort(TransactionTableModel::Date, Qt::DescendingOrder);


        filter->setSortRole(Qt::EditRole);

        ui->listTransactions->setModel(filter);
        ui->listTransactions->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->listTransactions->setSelectionMode(QAbstractItemView::ExtendedSelection);
        // Keep up to date with wallet
        setBalance(model->getBalance(), model->getStake(), model->getUnconfirmedBalance(), model->getImmatureBalance());
        connect(model, SIGNAL(balanceChanged(qint64, qint64, qint64, qint64)), this, SLOT(setBalance(qint64, qint64, qint64, qint64)));

        connect(model->getOptionsModel(), SIGNAL(displayUnitChanged(int)), this, SLOT(updateDisplayUnit()));

    }

    // update the display unit, to not use the default ("SHARD")
    updateDisplayUnit();
}


void OverviewPage::updateDisplayUnit()
{
    if(walletModel && walletModel->getOptionsModel())
    {
        if(currentBalance != -1)
            setBalance(currentBalance, walletModel->getStake(), currentUnconfirmedBalance, currentImmatureBalance);

        // Update txdelegate->unit with the current unit
        txdelegate->unit = walletModel->getOptionsModel()->getDisplayUnit();

    }
}

void OverviewPage::updateAlerts(const QString &warnings)
{
    //this->ui->labelAlerts->setVisible(!warnings.isEmpty());
    //this->ui->labelAlerts->setText(warnings);
}

void OverviewPage::showOutOfSyncWarning(bool fShow)
{
    //ui->labelWalletStatus->setVisible(fShow);
    //ui->labelTransactionsStatus->setVisible(fShow);
}

