/********************************************************************************
** Form generated from reading UI file 'encryptwallet.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENCRYPTWALLET_H
#define UI_ENCRYPTWALLET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EncryptWallet
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    QLabel *tittle;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_13;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_10;
    QLabel *passLabel1;
    QLineEdit *passEdit1;
    QVBoxLayout *verticalLayout_8;
    QLabel *passLabel2;
    QLineEdit *passEdit2;
    QVBoxLayout *verticalLayout_7;
    QLabel *passLabel3;
    QLineEdit *passEdit3;
    QVBoxLayout *verticalLayout_11;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *EncryptWallet)
    {
        if (EncryptWallet->objectName().isEmpty())
            EncryptWallet->setObjectName(QStringLiteral("EncryptWallet"));
        EncryptWallet->resize(680, 630);
        EncryptWallet->setMinimumSize(QSize(0, 0));
        EncryptWallet->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(EncryptWallet);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 6, -1, -1);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        tittle = new QLabel(EncryptWallet);
        tittle->setObjectName(QStringLiteral("tittle"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        tittle->setFont(font);
        tittle->setStyleSheet(QStringLiteral("margin-bottom:35px;color:\"#0adbf0\";background:transparent;"));
        tittle->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(tittle);


        verticalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, 10, -1, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(-1, -1, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_13->addItem(horizontalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_13);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(-1, 0, -1, 0);
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, -1);
        passLabel1 = new QLabel(EncryptWallet);
        passLabel1->setObjectName(QStringLiteral("passLabel1"));
        passLabel1->setStyleSheet(QStringLiteral("color:#72909e;background:transparent;"));

        verticalLayout_10->addWidget(passLabel1);

        passEdit1 = new QLineEdit(EncryptWallet);
        passEdit1->setObjectName(QStringLiteral("passEdit1"));
        passEdit1->setMinimumSize(QSize(413, 0));
        passEdit1->setMaximumSize(QSize(413, 16777215));
        passEdit1->setStyleSheet(QLatin1String("background:#1d2e3f;\n"
"color:white;\n"
"padding:7px;\n"
"border-radius:5px;\n"
"font: 10pt 'Ubuntu';\n"
"margin-bottom:15px"));
        passEdit1->setEchoMode(QLineEdit::Password);

        verticalLayout_10->addWidget(passEdit1);


        verticalLayout_12->addLayout(verticalLayout_10);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 6, 0, -1);
        passLabel2 = new QLabel(EncryptWallet);
        passLabel2->setObjectName(QStringLiteral("passLabel2"));
        passLabel2->setStyleSheet(QStringLiteral("color:#72909e;background:transparent;"));

        verticalLayout_8->addWidget(passLabel2);

        passEdit2 = new QLineEdit(EncryptWallet);
        passEdit2->setObjectName(QStringLiteral("passEdit2"));
        passEdit2->setMinimumSize(QSize(413, 0));
        passEdit2->setMaximumSize(QSize(413, 16777215));
        passEdit2->setStyleSheet(QLatin1String("background:#1d2e3f;\n"
"color:white;\n"
"padding:7px;\n"
"border-radius:5px;\n"
"font: 10pt 'Ubuntu';\n"
"margin-bottom:15px"));

        verticalLayout_8->addWidget(passEdit2);


        verticalLayout_12->addLayout(verticalLayout_8);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 6, 0, -1);
        passLabel3 = new QLabel(EncryptWallet);
        passLabel3->setObjectName(QStringLiteral("passLabel3"));
        passLabel3->setStyleSheet(QStringLiteral("color:#72909e;background:transparent;"));

        verticalLayout_7->addWidget(passLabel3);

        passEdit3 = new QLineEdit(EncryptWallet);
        passEdit3->setObjectName(QStringLiteral("passEdit3"));
        passEdit3->setMinimumSize(QSize(413, 0));
        passEdit3->setMaximumSize(QSize(413, 16777215));
        passEdit3->setStyleSheet(QLatin1String("background:#1d2e3f;\n"
"color:white;\n"
"padding:7px;\n"
"border-radius:5px;\n"
"font: 10pt 'Ubuntu';\n"
""));

        verticalLayout_7->addWidget(passEdit3);


        verticalLayout_12->addLayout(verticalLayout_7);


        horizontalLayout_2->addLayout(verticalLayout_12);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, -1, -1, -1);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_11->addItem(horizontalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_11);


        verticalLayout_5->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 20, -1, 0);
        buttonBox = new QPushButton(EncryptWallet);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setMinimumSize(QSize(150, 0));
        buttonBox->setStyleSheet(QLatin1String("QPushButton { \n"
" background-color: \"#0d2131\";\n"
"	border:2px solid #1d2e3f;\n"
"color:#eeeeee;\n"
"padding:5px;\n"
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

        horizontalLayout->addWidget(buttonBox);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(EncryptWallet);

        QMetaObject::connectSlotsByName(EncryptWallet);
    } // setupUi

    void retranslateUi(QWidget *EncryptWallet)
    {
        EncryptWallet->setWindowTitle(QApplication::translate("EncryptWallet", "Form", 0));
        tittle->setText(QApplication::translate("EncryptWallet", "ENCRYPT WALLET", 0));
        passLabel1->setText(QApplication::translate("EncryptWallet", "Password", 0));
        passLabel2->setText(QApplication::translate("EncryptWallet", "Password", 0));
        passLabel3->setText(QApplication::translate("EncryptWallet", "Repeat Password", 0));
        buttonBox->setText(QApplication::translate("EncryptWallet", "Encrypt Wallet", 0));
    } // retranslateUi

};

namespace Ui {
    class EncryptWallet: public Ui_EncryptWallet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENCRYPTWALLET_H
