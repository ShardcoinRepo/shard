#include "transactionpage.h"
#include "ui_transactionpage.h"
#include "walletmodel.h"


TransactionPage::TransactionPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TransactionPage)
{
    ui->setupUi(this);








    setStyleSheet("background:#102537");

}

TransactionPage::~TransactionPage()
{
    delete ui;
}

