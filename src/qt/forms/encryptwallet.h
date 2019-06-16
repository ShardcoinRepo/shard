#ifndef ENCRYPTWALLET_H
#define ENCRYPTWALLET_H

#include <QWidget>

class WalletModel;
namespace Ui {
class EncryptWallet;
}

class EncryptWallet : public QWidget
{
    Q_OBJECT

public:
    enum Mode {
        Encrypt,       /**< Ask passphrase twice and encrypt */
        Decrypt        /**< Ask passphrase and decrypt wallet */
    };
    explicit EncryptWallet(Mode mode = Encrypt,QWidget *parent = 0);
    ~EncryptWallet();
    void setModel(WalletModel * model);
    void setMode(Mode mode);


private:
    Ui::EncryptWallet *ui;
    WalletModel* model;
    Mode mode;
    void prepare();
    void secureClearPassFields();
public slots:
    void accept();
    void textChanged();
signals:
    void changeType();
};

#endif // ENCRYPTWALLET_H
