/********************************************************************************
** Form generated from reading UI file 'askpassphrasedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASKPASSPHRASEDIALOG_H
#define UI_ASKPASSPHRASEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AskPassphraseDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *warningLabel;
    QFormLayout *formLayout;
    QLabel *passLabel1;
    QLineEdit *passEdit1;
    QLabel *passLabel2;
    QLineEdit *passEdit2;
    QLabel *passLabel3;
    QLineEdit *passEdit3;
    QLabel *capsLabel;
    QCheckBox *stakingCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AskPassphraseDialog)
    {
        if (AskPassphraseDialog->objectName().isEmpty())
            AskPassphraseDialog->setObjectName(QStringLiteral("AskPassphraseDialog"));
        AskPassphraseDialog->resize(598, 237);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AskPassphraseDialog->sizePolicy().hasHeightForWidth());
        AskPassphraseDialog->setSizePolicy(sizePolicy);
        AskPassphraseDialog->setMinimumSize(QSize(550, 0));
        AskPassphraseDialog->setStyleSheet(QStringLiteral("background:'#0b1d2c';color:white"));
        verticalLayout = new QVBoxLayout(AskPassphraseDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        warningLabel = new QLabel(AskPassphraseDialog);
        warningLabel->setObjectName(QStringLiteral("warningLabel"));
        warningLabel->setStyleSheet(QStringLiteral("color:white"));
        warningLabel->setTextFormat(Qt::RichText);
        warningLabel->setWordWrap(true);

        verticalLayout->addWidget(warningLabel);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        passLabel1 = new QLabel(AskPassphraseDialog);
        passLabel1->setObjectName(QStringLiteral("passLabel1"));
        passLabel1->setStyleSheet(QStringLiteral("color:white"));

        formLayout->setWidget(0, QFormLayout::LabelRole, passLabel1);

        passEdit1 = new QLineEdit(AskPassphraseDialog);
        passEdit1->setObjectName(QStringLiteral("passEdit1"));
        passEdit1->setStyleSheet(QLatin1String("background:#1d2e3f;\n"
"color:white;\n"
"padding:7px;\n"
"border-radius:5px;\n"
"font: 10pt 'Ubuntu';\n"
"margin-bottom:2px;\n"
""));
        passEdit1->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(0, QFormLayout::FieldRole, passEdit1);

        passLabel2 = new QLabel(AskPassphraseDialog);
        passLabel2->setObjectName(QStringLiteral("passLabel2"));
        passLabel2->setStyleSheet(QStringLiteral("color:white"));

        formLayout->setWidget(1, QFormLayout::LabelRole, passLabel2);

        passEdit2 = new QLineEdit(AskPassphraseDialog);
        passEdit2->setObjectName(QStringLiteral("passEdit2"));
        passEdit2->setStyleSheet(QLatin1String("background:#1d2e3f;\n"
"color:white;\n"
"padding:7px;\n"
"border-radius:5px;\n"
"font: 10pt 'Ubuntu';\n"
"margin-bottom:2px;\n"
""));
        passEdit2->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, passEdit2);

        passLabel3 = new QLabel(AskPassphraseDialog);
        passLabel3->setObjectName(QStringLiteral("passLabel3"));
        passLabel3->setStyleSheet(QStringLiteral("color:white"));

        formLayout->setWidget(2, QFormLayout::LabelRole, passLabel3);

        passEdit3 = new QLineEdit(AskPassphraseDialog);
        passEdit3->setObjectName(QStringLiteral("passEdit3"));
        passEdit3->setStyleSheet(QLatin1String("background:#1d2e3f;\n"
"color:white;\n"
"padding:7px;\n"
"border-radius:5px;\n"
"font: 10pt 'Ubuntu';\n"
"margin-bottom:2px;\n"
""));
        passEdit3->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, passEdit3);

        capsLabel = new QLabel(AskPassphraseDialog);
        capsLabel->setObjectName(QStringLiteral("capsLabel"));
        capsLabel->setStyleSheet(QStringLiteral("color:red"));

        formLayout->setWidget(3, QFormLayout::FieldRole, capsLabel);


        verticalLayout->addLayout(formLayout);

        stakingCheckBox = new QCheckBox(AskPassphraseDialog);
        stakingCheckBox->setObjectName(QStringLiteral("stakingCheckBox"));
        stakingCheckBox->setStyleSheet(QLatin1String("QCheckBox {color:#72909e;}\n"
"QCheckBox::indicator{\n"
"width:20px;\n"
"height:20px;\n"
"}\n"
"QCheckBox:focus{\n"
"border:none;\n"
"outline:none;\n"
"}\n"
"QCheckBox::indicator:unchecked {\n"
"\n"
"    image: url(:/images/res/images/checkbox_unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:hover {\n"
"    image: url(:/images/res/images/checkbox_unchecked_hover.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:pressed {\n"
"    image: url(:/images/res/images/checkbox_unchecked_pressed.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    image: url(:/images/res/images/checkbox_checked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:hover {\n"
"    image: url(:/images/res/images/checkbox_checked_hover.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:pressed {\n"
"    image: url(:/images/res/images/checkbox_checked_pressed.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:indeterminate:hover {\n"
"    image: url(:/images/res/images/checkbox_indeterminate_hover.png);\n"
"}\n"
"\n"
"QCheckBox::ind"
                        "icator:indeterminate:pressed {\n"
"    image: url(:/images/res/images/checkbox_indeterminate_pressed.png);\n"
"}"));
        stakingCheckBox->setChecked(true);
        stakingCheckBox->setTristate(false);

        verticalLayout->addWidget(stakingCheckBox);

        buttonBox = new QDialogButtonBox(AskPassphraseDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStyleSheet(QLatin1String("QPushButton { \n"
" background-color: \"#0d2131\";\n"
"	border:2px solid #1d2e3f;\n"
"color:#eeeeee;\n"
"padding:5px 20px;\n"
"	outline: none;\n"
"border-radius:2px;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"   background-color: \"#1d2e3f\";\n"
"border:2px solid gray;\n"
"	color:white;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: \"#102537\";\n"
"	border:2px solid #0f3e54;\n"
" }\n"
"QPushButton:checked { \n"
"     background-color: \"#0d2131\";\n"
"border:2px solid #0f3e54;\n"
"	color:white;\n"
"\n"
" }\n"
"QPushButton:disabled { \n"
"    background:'#0b1d2c';\n"
"color:gray;\n"
"border:2px solid #102537;\n"
" }\n"
""));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AskPassphraseDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AskPassphraseDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AskPassphraseDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AskPassphraseDialog);
    } // setupUi

    void retranslateUi(QDialog *AskPassphraseDialog)
    {
        AskPassphraseDialog->setWindowTitle(QApplication::translate("AskPassphraseDialog", "Passphrase Dialog", 0));
        passLabel1->setText(QApplication::translate("AskPassphraseDialog", "Enter passphrase", 0));
        passLabel2->setText(QApplication::translate("AskPassphraseDialog", "New passphrase", 0));
        passLabel3->setText(QApplication::translate("AskPassphraseDialog", "Repeat new passphrase", 0));
        capsLabel->setText(QString());
        stakingCheckBox->setText(QApplication::translate("AskPassphraseDialog", "For staking only", 0));
    } // retranslateUi

};

namespace Ui {
    class AskPassphraseDialog: public Ui_AskPassphraseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASKPASSPHRASEDIALOG_H
