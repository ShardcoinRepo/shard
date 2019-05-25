#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>
#include <QPushButton>
#include "clientmodel.h"
#include "walletmodel.h"
class about;
class ChangePass;
class WalletModel;
class EncryptWallet;
class RPCConsole_Widget;
class TransactionView;
class NetworkTraffic;
class ExportPage;
class OptionsPage;
class OptionsModel;
class SignMessage;
class Titlebar;
class QCloseEvent;
class VerifyMessage;
class LanguagePage;
namespace Ui {
class Settings;
}

class Settings : public QWidget
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = 0);
    ~Settings();
     void setClientModel(ClientModel *model);
    void setWalletModel(WalletModel *model);
    void setTransactionView(TransactionView * tr);
    void setTopPart(QWidget* gt);
    void setAddressSign(QString address);
    void setAddressVerify(QString address);
signals:
    void closeApp();
    void maximizeApp();
    void minimizeApp();
    void backupWallet();
private:
    Ui::Settings *ui;
    about* page_about;
    ChangePass * page_change;
    RPCConsole_Widget* page_console;
    EncryptWallet* page_encrypt;
    NetworkTraffic* page_network;
    OptionsPage* page_options;
    Titlebar* topWidget;
    VerifyMessage* page_verify;
    QPushButton* selected;
    ClientModel* clientModel;
    ExportPage* page_export;
    LanguagePage* page_language;
    WalletModel* walletModel;
        OptionsModel* optionsModel;
    SignMessage * page_sign;
public slots:
    void goToAbout();
    void changeEncrypt();
    void goToNetwork();
    void goToChange();
    void goToBackup();

    void goToSign();
    void goToLanguage();
    void close();
    void minimize();
    void maximize();
    void goToVerify();
    void goToConsole();
    void goToEncrypt();
    void goToExport();
    void goToOptions();
};

#endif // SETTINGS_H
