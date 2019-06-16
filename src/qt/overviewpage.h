#ifndef OVERVIEWPAGE_H
#define OVERVIEWPAGE_H

#include <QWidget>
#include <QComboBox>
#include <QDateTime>


namespace Ui {
    class OverviewPage;
}
class ClientModel;
class WalletModel;
class TxViewDelegate;
class TransactionFilterProxy;
QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE


/** Overview ("home") page widget */

class OverviewPage : public QWidget
{
    Q_OBJECT

public:
    enum DateEnum
    {
        All,
        Today,
        ThisWeek,
        ThisMonth,
        LastMonth,
        ThisYear,
        Range
    };
    explicit OverviewPage(QWidget *parent = 0);
    ~OverviewPage();

    void setClientModel(ClientModel *clientModel);
    void setWalletModel(WalletModel *walletModel);
    void showOutOfSyncWarning(bool fShow);

protected:
     void resizeEvent(QResizeEvent * event);
public slots:
    void setBalance(qint64 balance, qint64 stake, qint64 unconfirmedBalance, qint64 immatureBalance);
    void toSend();
    void toRecieve();
    void priceChanged(QString price);
    void graphChanged(QString price);
    void indexChanged(int index);
    void indexChangedBalance(int index);
    void balanceButtonClicked(int index = 0);
    void forceRedraw();
      void calculateHeight();
      void updateSizeLabels();

signals:
    void transactionClicked(const QModelIndex &index);
    void moreClicked();
    void sendTransaction();
    void recieveTransaction();
    void changeIndex(int index);
    void sizeChanged();



private:
    Ui::OverviewPage *ui;
    ClientModel *clientModel;

    WalletModel *walletModel;
    qint64 currentBalance;
    qint64 currentStake;
    qint64 currentUnconfirmedBalance;
    qint64 currentImmatureBalance;

    //QDateTimeAxis* axisx1;
    //QValueAxis* axisy1;
    //QDateTimeAxis* axisx2;
    //QValueAxis* axisy2;
    //QChart* chart;
    TxViewDelegate *txdelegate;
    TransactionFilterProxy *filter;


    double priceAux = 0.0;



private slots:

    void updateDisplayUnit();
    void handleTransactionClicked(const QModelIndex &index);
    void transactionClickedMethod(const QModelIndex &index);
    void handleMoreClicked();
    void updateAlerts(const QString &warnings);
    void forceFilter();




};

#endif // OVERVIEWPAGE_H
