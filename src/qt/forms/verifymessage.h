#ifndef VERIFYMESSAGE_H
#define VERIFYMESSAGE_H

#include <QWidget>

namespace Ui {
class VerifyMessage;
}
class WalletModel;
class VerifyMessage : public QWidget
{
    Q_OBJECT

public:
    explicit VerifyMessage(QWidget *parent = 0);
    ~VerifyMessage();
    void setModel(WalletModel *model);
    void setAddress_VM(QString address);

private:
    Ui::VerifyMessage *ui;
    WalletModel* model;
public slots:
    void on_addressBookButton_VM_clicked();
    void on_verifyMessageButton_VM_clicked();
    void on_clearButton_VM_clicked();
    void on_copyButton_clicked();
};

#endif // VERIFYMESSAGE_H








