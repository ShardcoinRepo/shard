#include "encryptwallet.h"
#include "ui_encryptwallet.h"
#include "guiconstants.h"
#include "walletmodel.h"

#include <QMessageBox>
#include <QPushButton>
#include <QKeyEvent>

EncryptWallet::EncryptWallet(Mode mode, QWidget *parent) :
    QWidget(parent),
    mode(mode),
    ui(new Ui::EncryptWallet)
{
    ui->setupUi(this);
     ui->passEdit1->setMaxLength(MAX_PASSPHRASE_SIZE);
    ui->passEdit2->setMaxLength(MAX_PASSPHRASE_SIZE);
    ui->passEdit3->setMaxLength(MAX_PASSPHRASE_SIZE);

    // Setup Caps Lock detection.
    ui->passEdit2->installEventFilter(this);
    ui->passEdit3->installEventFilter(this);
   ui->passEdit1->installEventFilter(this);
    prepare();
    textChanged();
    connect(ui->passEdit2, SIGNAL(textChanged(QString)), this, SLOT(textChanged()));
    connect(ui->passEdit3, SIGNAL(textChanged(QString)), this, SLOT(textChanged()));
    connect(ui->passEdit1, SIGNAL(textChanged(QString)), this, SLOT(textChanged()));
    connect(ui->buttonBox,SIGNAL(clicked()),this,SLOT(accept()));

}

EncryptWallet::~EncryptWallet()
{
    delete ui;
}
void EncryptWallet::prepare(){
    if(mode == Encrypt)
    {
        ui->passEdit1->setVisible(false);
         ui->passLabel1->setVisible(false);
         ui->passEdit2->setVisible(true);
          ui->passLabel2->setVisible(true);
          ui->passEdit3->setVisible(true);
           ui->passLabel3->setVisible(true);
         ui->tittle->setText(tr("ENCRYPT WALLET"));
         ui->buttonBox->setText(tr("Encrypt Wallet"));
    }
    else{
        ui->passEdit2->setVisible(false);
         ui->passLabel2->setVisible(false);
         ui->passEdit3->setVisible(false);
          ui->passLabel3->setVisible(false);
          ui->passEdit1->setVisible(true);
           ui->passLabel1->setVisible(true);
         ui->tittle->setText(tr("DECRYPT WALLET"));
             ui->buttonBox->setText(tr("Decrypt Wallet"));
    }

}

void EncryptWallet::setModel(WalletModel *model)
{
    this->model = model;
}
void EncryptWallet::setMode(Mode mode)
{
    this->mode = mode;
    prepare();
}

void EncryptWallet::accept()
{
    SecureString oldpass, newpass1, newpass2;
    if(!model)
        return;
    oldpass.reserve(MAX_PASSPHRASE_SIZE);
    newpass1.reserve(MAX_PASSPHRASE_SIZE);
    newpass2.reserve(MAX_PASSPHRASE_SIZE);
    // TODO: get rid of this .c_str() by implementing SecureString::operator=(std::string)
    // Alternately, find a way to make this input mlock()'d to begin with.
    oldpass.assign(ui->passEdit1->text().toStdString().c_str());
    newpass1.assign(ui->passEdit2->text().toStdString().c_str());
    newpass2.assign(ui->passEdit3->text().toStdString().c_str());

    secureClearPassFields();
    switch(mode)
    {
    case Encrypt: {
        if(newpass1.empty() || newpass2.empty())
        {
            // Cannot encrypt with empty passphrase
            break;
        }
        QMessageBox::StandardButton retval = QMessageBox::question(this, tr("Confirm wallet encryption"),
                 tr("Warning: If you encrypt your wallet and lose your passphrase, you will <b>LOSE ALL OF YOUR COINS</b>!") + "<br><br>" + tr("Are you sure you wish to encrypt your wallet?"),
                 QMessageBox::Yes|QMessageBox::Cancel,
                 QMessageBox::Cancel);
        if(retval == QMessageBox::Yes)
        {
            if(newpass1 == newpass2)
            {
                if(model->setWalletEncrypted(true, newpass1))
                {
                    QMessageBox::warning(this, tr("Wallet encrypted"),
                                         "<qt>" +
                                         tr("Shard will close now to finish the encryption process. "
                                         "Remember that encrypting your wallet cannot fully protect "
                                         "your coins from being stolen by malware infecting your computer.") +
                                         "<br><br><b>" +
                                         tr("IMPORTANT: Any previous backups you have made of your wallet file "
                                         "should be replaced with the newly generated, encrypted wallet file. "
                                         "For security reasons, previous backups of the unencrypted wallet file "
                                         "will become useless as soon as you start using the new, encrypted wallet.") +
                                         "</b></qt>");
                    QApplication::quit();
                }
                else
                {
                    QMessageBox::critical(this, tr("Wallet encryption failed"),
                                         tr("Wallet encryption failed due to an internal error. Your wallet was not encrypted."));
                }

            }
            else
            {
                QMessageBox::critical(this, tr("Wallet encryption failed"),
                                     tr("The supplied passphrases do not match."));
            }
        }

        } break;

    case Decrypt:
        if(!model->setWalletEncrypted(false, oldpass))
        {
            QMessageBox::critical(this, tr("Wallet decryption failed"),
                                  tr("The passphrase entered for the wallet decryption was incorrect."));
        }
        else
        {
            QMessageBox::critical(this, tr("Wallet decryption sucess"),
                                  tr("The wallet was successfully decrypted."));
            mode = Encrypt;
            prepare();
            emit changeType();
        }
        break;

    }


}

void EncryptWallet::textChanged()
{
    // Validate input, set Ok button to enabled when acceptable
    bool acceptable = false;

    switch(mode)
    {
    case Encrypt: // New passphrase x2
        acceptable = !ui->passEdit2->text().isEmpty() && !ui->passEdit3->text().isEmpty();
        break;

    case Decrypt:
        acceptable = !ui->passEdit1->text().isEmpty();
        break;
    }
    ui->buttonBox->setEnabled(acceptable);
}
void EncryptWallet::secureClearPassFields()
{
    // Attempt to overwrite text so that they do not linger around in memory
     ui->passEdit1->setText(QString(" ").repeated(ui->passEdit1->text().size()));
    ui->passEdit2->setText(QString(" ").repeated(ui->passEdit2->text().size()));
    ui->passEdit3->setText(QString(" ").repeated(ui->passEdit3->text().size()));
    ui->passEdit1->clear();
    ui->passEdit2->clear();
    ui->passEdit3->clear();
}
