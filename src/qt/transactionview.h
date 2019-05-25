#ifndef TRANSACTIONVIEW_H
#define TRANSACTIONVIEW_H

#include <QWidget>
#include "listtransactions.h"
#include <vector>
class WalletModel;
class TransactionFilterProxy;

QT_BEGIN_NAMESPACE
class QTableView;
class QComboBox;
class QLineEdit;
class QModelIndex;
class QMenu;
class QFrame;
class TxViewDelegate;
class QDateTimeEdit;
QT_END_NAMESPACE

/** Widget showing the transaction list for a wallet, including a filter row.
    Using the filter row, the user can view or export a subset of the transactions.
  */
namespace Ui {
class TransactionPage;
}
class TransactionView : public QWidget
{
    Q_OBJECT

public:
    explicit TransactionView(QWidget *parent = 0);

    void setModel(WalletModel *model);

    // Date ranges for filter
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
 TransactionFilterProxy *transactionProxyModel;

TxViewDelegate* m_delegate;
private:
    WalletModel *model;

    ListTransactions *transactionView;

    QComboBox *dateWidget;
    QComboBox *typeWidget;
    QLineEdit *addressWidget;
    QLineEdit *amountWidget;

    QMenu *contextMenu;
    int page=1;
    int indexPage = 0;

    QFrame *dateRangeWidget;
    QDateTimeEdit *dateFrom;
    QDateTimeEdit *dateTo;
      Ui::TransactionPage *ui;
    QWidget *createDateRangeWidget();
    void setVisibilityRows(int page,bool value);

private slots:
    void contextualMenu(const QPoint &);
    void dateRangeChanged();
    void showDetails();
    void copyAddress();
    void editLabel();
    void slotForceHeightList();

    void copyLabel();
    void copyAmount();
    void transactionClickedUrl(const QString&);
    void copyTxID();
    void forceFilter();
    void hideRows();


signals:
    void doubleClicked(const QModelIndex&);

public slots:
    void chooseDate(int idx);
    void calculateHeight();
    void chooseType(int idx);
    void changedPrefix(const QString &prefix);
    void changedAmount(const QString &amount);
    void exportClicked();
    void initializeList();

    void changePage();
    void nextPages();
    void previousPages();
    void focusTransaction(const QModelIndex&);
    void priceChanged(QString answer);
    void forceHeightList();
};

#endif // TRANSACTIONVIEW_H
