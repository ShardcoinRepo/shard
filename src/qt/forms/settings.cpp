#include "settings.h"
#include "ui_settings.h"
#include "about.h"
#include "rpcconsole_widget.h"
#include "changepass.h"
#include "encryptwallet.h"
#include "exportpage.h"
#include <QCloseEvent>
#include <QMainWindow>
#include "signmessage.h"
#include "transactionview.h"
#include "networktraffic.h"
#include "verifymessage.h"
#include "titlebar.h"
#include "optionspage.h"
#include "optionsmodel.h"
#include "languagepage.h"
Settings::Settings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);

    page_about = new about();
    page_console = new RPCConsole_Widget();
    page_change = new ChangePass();
    page_encrypt = new EncryptWallet();
    page_export = new ExportPage();
    page_network = new NetworkTraffic();
    page_verify = new VerifyMessage();

    page_sign = new SignMessage();
    page_options = new OptionsPage();
    page_language= new LanguagePage();
    setContentsMargins(0,0,0,0);

    ui->stackedWidget->addWidget(page_about);
    ui->stackedWidget->addWidget(page_console);
    ui->stackedWidget->addWidget(page_change);
    ui->stackedWidget->addWidget(page_encrypt);
    ui->stackedWidget->addWidget(page_export);
    ui->stackedWidget->addWidget(page_network);
    ui->stackedWidget->addWidget(page_sign);
    ui->stackedWidget->addWidget(page_options);
    ui->stackedWidget->addWidget(page_verify);
    ui->stackedWidget->addWidget(page_language);
    selected = ui->b_options;
    selected->setChecked(true);
    ui->stackedWidget->setCurrentWidget(page_options);
    topWidget = new Titlebar(parent);



    ui->mainLayout->insertWidget(0,topWidget);
    connect(topWidget,SIGNAL(closeApp()),this,SLOT(close()));
      connect(topWidget,SIGNAL(maximizeApp()),this,SLOT(maximize()));
        connect(topWidget,SIGNAL(minimizeApp()),this,SLOT(minimize()));

    connect(ui->b_about, SIGNAL(clicked()), this, SLOT( goToAbout()));
    connect(ui->b_network, SIGNAL(clicked()), this, SLOT(goToNetwork()));
    connect(ui->b_change, SIGNAL(clicked()), this, SLOT(goToChange()));
    connect(ui->b_sign, SIGNAL(clicked()), this, SLOT(goToSign()));
    connect(ui->b_verify, SIGNAL(clicked()), this, SLOT(goToVerify()));
    connect(ui->b_console, SIGNAL(clicked()), this, SLOT(goToConsole()));
    connect(ui->b_encrypt, SIGNAL(clicked()), this, SLOT(goToEncrypt()));
    connect(ui->b_export, SIGNAL(clicked()), this, SLOT(goToExport()));
    connect(ui->b_options, SIGNAL(clicked()), this, SLOT(goToOptions()));
    connect(ui->b_language, SIGNAL(clicked()), this, SLOT(goToLanguage()));
        connect(ui->b_backup, SIGNAL(clicked()), this, SLOT(goToBackup()));
    connect(page_encrypt,SIGNAL(changeType()),this, SLOT(changeEncrypt()));
}
void Settings::changeEncrypt(){
    // TODO: Fix decrypt
    /*
    if(walletModel->getEncryptionStatus() == WalletModel::Unencrypted)
        ui->b_encrypt->setText("ENCRYPT WALLET");
    else
        ui->b_encrypt->setText("DECRYPT WALLET");*/
    // When decrypt fixed, comment this 2 lines
    if(walletModel->getEncryptionStatus() != WalletModel::Unencrypted)
        ui->b_encrypt->setEnabled(false);
}
void Settings::setAddressSign(QString address){
    goToSign();
    page_sign->setAddress_SM(address);
}
void Settings::setAddressVerify(QString address){
    goToVerify();
    page_verify->setAddress_VM(address);
}
void Settings::close(){
   emit closeApp();


}
void Settings::minimize(){emit minimizeApp();}
void Settings::maximize(){
    emit maximizeApp();
}


void Settings::setClientModel(ClientModel *model)
{
    clientModel = model;
    optionsModel = clientModel->getOptionsModel();
    if(model)
    {
        page_about->setClientModel(model);
        page_network->setClientModel(model);
        page_options->setModel(optionsModel);
        page_language->setModel(optionsModel);
    }
}


void Settings::setTransactionView(TransactionView *tr){
    page_export->setTransactionPage(tr);
}

void Settings::setWalletModel(WalletModel *model)
{
    walletModel = model;
    if(model)
    {
        page_change->setModel(model);
        page_encrypt->setModel(model);
        page_sign->setModel(model);
        page_verify->setModel(model);
        // TODO: Fix decrypt
        /*
        if(model->getEncryptionStatus() == WalletModel::Unencrypted)
            page_encrypt->setMode(EncryptWallet::Encrypt);
        else
            page_encrypt->setMode(EncryptWallet::Decrypt);
            */
        changeEncrypt();
    }
}

Settings::~Settings()
{
    delete ui;
}

void Settings::goToAbout(){
    if(selected == ui->b_about)
    {
        selected->setChecked(true);
        return;
    }
    selected->setChecked(false);
    selected = ui->b_about;
    selected->setChecked(true);
    ui->stackedWidget->setCurrentWidget(page_about);
}
void Settings::goToNetwork(){
    if(selected == ui->b_network)
    {
        selected->setChecked(true);
        return;
    }
    selected->setChecked(false);
    selected = ui->b_network;
    selected->setChecked(true);
    ui->stackedWidget->setCurrentWidget(page_network);
}

void Settings::goToBackup(){

    emit backupWallet();
}
void Settings::goToChange(){
    if(selected == ui->b_change)
    {
        selected->setChecked(true);
        return;
    }
    selected->setChecked(false);
    selected = ui->b_change;
    selected->setChecked(true);
    ui->stackedWidget->setCurrentWidget(page_change);
}
void Settings::goToSign(){
    if(selected == ui->b_sign)
    {
        selected->setChecked(true);
        return;
    }
    selected->setChecked(false);
    selected = ui->b_sign;
    selected->setChecked(true);
    ui->stackedWidget->setCurrentWidget(page_sign);
}
void Settings::goToVerify(){
    if(selected == ui->b_verify)
    {
        selected->setChecked(true);
        return;
    }
    selected->setChecked(false);
    selected = ui->b_verify;
    selected->setChecked(true);
    ui->stackedWidget->setCurrentWidget(page_verify);
}
void Settings::goToLanguage(){
    if(selected == ui->b_language)
    {
        selected->setChecked(true);
        return;
    }
    selected->setChecked(false);
    selected = ui->b_language;
    selected->setChecked(true);
    ui->stackedWidget->setCurrentWidget(page_language);
}
void Settings::goToConsole(){
    if(selected == ui->b_console)
    {
        selected->setChecked(true);
        return;
    }
    selected->setChecked(false);
    selected = ui->b_console;
    selected->setChecked(true);
    ui->stackedWidget->setCurrentWidget(page_console);
}
void Settings::goToEncrypt(){
    if(selected == ui->b_encrypt)
    {
        selected->setChecked(true);
        return;
    }
    selected->setChecked(false);
    selected = ui->b_encrypt;
    selected->setChecked(true);
    ui->stackedWidget->setCurrentWidget(page_encrypt);
}
void Settings::goToExport(){
    if(selected == ui->b_export)
    {
        selected->setChecked(true);
        return;
    }
    selected->setChecked(false);
    selected = ui->b_export;
    selected->setChecked(true);
    ui->stackedWidget->setCurrentWidget(page_export);
}
void Settings::goToOptions(){
    if(selected == ui->b_options)
    {
        selected->setChecked(true);
        return;
    }
    selected->setChecked(false);
    selected = ui->b_options;
    selected->setChecked(true);
    ui->stackedWidget->setCurrentWidget(page_options);
}
