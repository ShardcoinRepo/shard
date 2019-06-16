#ifndef TRANSACTIONPAGE_H
#define TRANSACTIONPAGE_H

#include <QWidget>

class WalletModel;
namespace Ui {
class TransactionPage;
}

class TransactionPage : public QWidget
{
    Q_OBJECT

public:
    explicit TransactionPage(QWidget *parent = 0);
    ~TransactionPage();



private:
    Ui::TransactionPage *ui;
};

#endif // TRANSACTIONPAGE_H
