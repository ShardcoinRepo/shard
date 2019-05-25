#include "changepass.h"
#include "ui_changepass.h"
#include <QMessageBox>
#include "guiconstants.h"
#include "walletmodel.h"

ChangePass::ChangePass(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChangePass)
{
    ui->setupUi(this);
    ui->passEdit1->setMaxLength(MAX_PASSPHRASE_SIZE);
    ui->passEdit2->setMaxLength(MAX_PASSPHRASE_SIZE);
    ui->passEdit3->setMaxLength(MAX_PASSPHRASE_SIZE);

    // Setup Caps Lock detection.
    ui->passEdit1->installEventFilter(this);
    ui->passEdit2->installEventFilter(this);
    ui->passEdit3->installEventFilter(this);


    textChanged();
    connect(ui->passEdit1, SIGNAL(textChanged(QString)), this, SLOT(textChanged()));
    connect(ui->passEdit2, SIGNAL(textChanged(QString)), this, SLOT(textChanged()));
    connect(ui->passEdit3, SIGNAL(textChanged(QString)), this, SLOT(textChanged()));
    connect(ui->acceptButton,SIGNAL(clicked()),this,SLOT(accept()));
}

ChangePass::~ChangePass()
{
    delete ui;
}
void ChangePass::setModel(WalletModel *model)
{
    this->model = model;
}
void ChangePass::textChanged()
{
    // Validate input, set Ok button to enabled when acceptable
    bool acceptable = false;
    acceptable = !ui->passEdit1->text().isEmpty() && !ui->passEdit2->text().isEmpty() && !ui->passEdit3->text().isEmpty();

    ui->acceptButton->setEnabled(acceptable);
}
void ChangePass::accept()
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

        if(newpass1 == newpass2)
        {
            if(model->changePassphrase(oldpass, newpass1))
            {
                QMessageBox::information(this, tr("Wallet encrypted"),
                                     tr("<p style=\"color:white\">Wallet passphrase was successfully changed.</p>"));

            }
            else
            {
                QMessageBox::critical(this, tr("Wallet encryption failed"),
                                     tr("<p style=\"color:white\">The passphrase entered for the wallet decryption was incorrect.</p>"));
            }
        }
        else
        {
            QMessageBox::critical(this, tr("Wallet encryption failed"),
                                 tr("<p style=\"color:white\">The supplied passphrases do not match.</p>"));
        }


}
void ChangePass::secureClearPassFields()
{
    // Attempt to overwrite text so that they do not linger around in memory
    ui->passEdit1->setText(QString(" ").repeated(ui->passEdit1->text().size()));
    ui->passEdit2->setText(QString(" ").repeated(ui->passEdit2->text().size()));
    ui->passEdit3->setText(QString(" ").repeated(ui->passEdit3->text().size()));

    ui->passEdit1->clear();
    ui->passEdit2->clear();
    ui->passEdit3->clear();
}
