/********************************************************************************
** Form generated from reading UI file 'verifymessage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERIFYMESSAGE_H
#define UI_VERIFYMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qvalidatedlineedit.h>

QT_BEGIN_NAMESPACE

class Ui_VerifyMessage
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *infoLabel_VM;
    QHBoxLayout *horizontalLayout_2;
    QValidatedLineEdit *addressIn_VM;
    QPushButton *addressBookButton_VM;
    QPlainTextEdit *messageIn_VM;
    QHBoxLayout *horizontalLayout_3;
    QValidatedLineEdit *signatureIn_VM;
    QPushButton *copyButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *verifyMessageButton_VM;
    QPushButton *clearButton_VM;
    QSpacerItem *horizontalSpacer_2;
    QLabel *statusLabel_VM;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *VerifyMessage)
    {
        if (VerifyMessage->objectName().isEmpty())
            VerifyMessage->setObjectName(QStringLiteral("VerifyMessage"));
        VerifyMessage->resize(808, 424);
        gridLayout = new QGridLayout(VerifyMessage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(10, 0, 10, 10);
        infoLabel_VM = new QLabel(VerifyMessage);
        infoLabel_VM->setObjectName(QStringLiteral("infoLabel_VM"));
        infoLabel_VM->setStyleSheet(QStringLiteral("color:#72909e;"));
        infoLabel_VM->setWordWrap(true);

        verticalLayout->addWidget(infoLabel_VM);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        addressIn_VM = new QValidatedLineEdit(VerifyMessage);
        addressIn_VM->setObjectName(QStringLiteral("addressIn_VM"));
        addressIn_VM->setStyleSheet(QLatin1String("background:#102537;\n"
"color:white;\n"
"padding:6px;\n"
"border:1px solid #003750;\n"
"border-radius:0px;\n"
"font: 10pt 'Ubuntu';"));

        horizontalLayout_2->addWidget(addressIn_VM);

        addressBookButton_VM = new QPushButton(VerifyMessage);
        addressBookButton_VM->setObjectName(QStringLiteral("addressBookButton_VM"));
        addressBookButton_VM->setStyleSheet(QLatin1String("QPushButton { \n"
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
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/res/images/book.png"), QSize(), QIcon::Normal, QIcon::Off);
        addressBookButton_VM->setIcon(icon);

        horizontalLayout_2->addWidget(addressBookButton_VM);


        verticalLayout->addLayout(horizontalLayout_2);

        messageIn_VM = new QPlainTextEdit(VerifyMessage);
        messageIn_VM->setObjectName(QStringLiteral("messageIn_VM"));
        messageIn_VM->setStyleSheet(QLatin1String("QPlainTextEdit{font: 10pt 'Ubuntu';background:#102537;border:0px;color:white;\n"
"padding:5px;}\n"
"\n"
"QScrollArea{border:0px;margin:0px;background:#102537;}\n"
"\n"
"QScrollBar\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"       stop: 0 rgb(3, 32, 52), stop: 0.5 rgb(4, 35, 58), stop:1 rgb(3, 32, 52));\n"
"width:9px;\n"
"}\n"
"QScrollBar::handle\n"
"{\n"
"background: rgb(0, 51, 78);\n"
"width:9px;\n"
"\n"
"}\n"
"QScrollBar::handle:hover\n"
"{\n"
"background: rgb(0, 67, 97);\n"
"width:9px;\n"
"\n"
"}\n"
"QScrollBar::add-line\n"
"{\n"
"\n"
"height: 0px;\n"
"}\n"
"QScrollBar::sub-line\n"
"{\n"
"height: 0px;\n"
"}\n"
""));

        verticalLayout->addWidget(messageIn_VM);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        signatureIn_VM = new QValidatedLineEdit(VerifyMessage);
        signatureIn_VM->setObjectName(QStringLiteral("signatureIn_VM"));
        signatureIn_VM->setStyleSheet(QLatin1String("background:#102537;\n"
"color:white;\n"
"padding:6px;\n"
"border:1px solid #003750;\n"
"border-radius:0px;\n"
"font: 10pt 'Ubuntu';"));

        horizontalLayout_3->addWidget(signatureIn_VM);

        copyButton = new QPushButton(VerifyMessage);
        copyButton->setObjectName(QStringLiteral("copyButton"));
        copyButton->setStyleSheet(QLatin1String("QPushButton { \n"
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
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/res/images/pasteicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        copyButton->setIcon(icon1);

        horizontalLayout_3->addWidget(copyButton);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        verifyMessageButton_VM = new QPushButton(VerifyMessage);
        verifyMessageButton_VM->setObjectName(QStringLiteral("verifyMessageButton_VM"));
        verifyMessageButton_VM->setMinimumSize(QSize(170, 0));
        verifyMessageButton_VM->setStyleSheet(QLatin1String("QPushButton { \n"
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
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/res/images/sing.png"), QSize(), QIcon::Normal, QIcon::Off);
        verifyMessageButton_VM->setIcon(icon2);

        horizontalLayout->addWidget(verifyMessageButton_VM);

        clearButton_VM = new QPushButton(VerifyMessage);
        clearButton_VM->setObjectName(QStringLiteral("clearButton_VM"));
        clearButton_VM->setMinimumSize(QSize(120, 0));
        clearButton_VM->setStyleSheet(QLatin1String("QPushButton { \n"
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
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/res/images/minimize.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton_VM->setIcon(icon3);

        horizontalLayout->addWidget(clearButton_VM);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        statusLabel_VM = new QLabel(VerifyMessage);
        statusLabel_VM->setObjectName(QStringLiteral("statusLabel_VM"));

        horizontalLayout->addWidget(statusLabel_VM);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(VerifyMessage);

        QMetaObject::connectSlotsByName(VerifyMessage);
    } // setupUi

    void retranslateUi(QWidget *VerifyMessage)
    {
        VerifyMessage->setWindowTitle(QApplication::translate("VerifyMessage", "Form", 0));
        infoLabel_VM->setText(QApplication::translate("VerifyMessage", "Enter the signing address, message (ensure you copy line breaks, spaces, tabs, etc. exactly) and signature below to verify the message. Be careful not to read more into the signature than what is in the signed message itself, to avoid being tricked by a man-in-the-middle attack.", 0));
        addressBookButton_VM->setText(QString());
        copyButton->setText(QString());
        verifyMessageButton_VM->setText(QApplication::translate("VerifyMessage", "   Verify Message", 0));
        clearButton_VM->setText(QApplication::translate("VerifyMessage", "   Clear All", 0));
        statusLabel_VM->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VerifyMessage: public Ui_VerifyMessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERIFYMESSAGE_H
