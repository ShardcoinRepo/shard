#ifndef SIGNMESSAGE_H
#define SIGNMESSAGE_H

#include <QWidget>


class WalletModel;
namespace Ui {
class SignMessage;
}

class SignMessage : public QWidget
{
    Q_OBJECT

public:
    explicit SignMessage(QWidget *parent = 0);
    ~SignMessage();


    void setAddress_SM(QString address);
    void setModel(WalletModel *model);
private:
    Ui::SignMessage *ui;
    WalletModel* model;
public slots:
    void on_clearButton_SM_clicked();
    void on_copySignatureButton_SM_clicked();
    void on_signMessageButton_SM_clicked();
    void on_pasteButton_SM_clicked();
    void on_addressBookButton_SM_clicked();
};

#endif // SIGNMESSAGE_H
