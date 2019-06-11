/********************************************************************************
** Form generated from reading UI file 'signmessage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNMESSAGE_H
#define UI_SIGNMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qvalidatedlineedit.h>

QT_BEGIN_NAMESPACE

class Ui_SignMessage
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *infoLabel_SM;
    QHBoxLayout *horizontalLayout_1_SM;
    QValidatedLineEdit *addressIn_SM;
    QPushButton *addressBookButton_SM;
    QPushButton *pasteButton_SM;
    QPlainTextEdit *messageIn_SM;
    QHBoxLayout *horizontalLayout;
    QLineEdit *signatureOut_SM;
    QPushButton *copySignatureButton_SM;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *signMessageButton_SM;
    QPushButton *clearButton_SM;
    QSpacerItem *horizontalSpacer;
    QLabel *statusLabel_SM;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *SignMessage)
    {
        if (SignMessage->objectName().isEmpty())
            SignMessage->setObjectName(QStringLiteral("SignMessage"));
        SignMessage->resize(526, 501);
        gridLayout = new QGridLayout(SignMessage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget = new QWidget(SignMessage);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(10, 0, 10, 10);
        infoLabel_SM = new QLabel(widget);
        infoLabel_SM->setObjectName(QStringLiteral("infoLabel_SM"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(infoLabel_SM->sizePolicy().hasHeightForWidth());
        infoLabel_SM->setSizePolicy(sizePolicy);
        infoLabel_SM->setStyleSheet(QStringLiteral("color:#72909e;"));
        infoLabel_SM->setWordWrap(true);

        verticalLayout->addWidget(infoLabel_SM);

        horizontalLayout_1_SM = new QHBoxLayout();
        horizontalLayout_1_SM->setObjectName(QStringLiteral("horizontalLayout_1_SM"));
        addressIn_SM = new QValidatedLineEdit(widget);
        addressIn_SM->setObjectName(QStringLiteral("addressIn_SM"));
        addressIn_SM->setStyleSheet(QLatin1String("background:#102537;\n"
"color:white;\n"
"padding:6px;\n"
"border:1px solid #003750;\n"
"border-radius:0px;\n"
"font: 10pt 'Ubuntu';"));

        horizontalLayout_1_SM->addWidget(addressIn_SM);

        addressBookButton_SM = new QPushButton(widget);
        addressBookButton_SM->setObjectName(QStringLiteral("addressBookButton_SM"));
        addressBookButton_SM->setStyleSheet(QLatin1String("QPushButton { \n"
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
        addressBookButton_SM->setIcon(icon);

        horizontalLayout_1_SM->addWidget(addressBookButton_SM);

        pasteButton_SM = new QPushButton(widget);
        pasteButton_SM->setObjectName(QStringLiteral("pasteButton_SM"));
        pasteButton_SM->setStyleSheet(QLatin1String("QPushButton { \n"
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
        icon1.addFile(QStringLiteral(":/images/res/images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        pasteButton_SM->setIcon(icon1);

        horizontalLayout_1_SM->addWidget(pasteButton_SM);


        verticalLayout->addLayout(horizontalLayout_1_SM);

        messageIn_SM = new QPlainTextEdit(widget);
        messageIn_SM->setObjectName(QStringLiteral("messageIn_SM"));
        messageIn_SM->setStyleSheet(QLatin1String("QPlainTextEdit{font: 10pt 'Ubuntu';background:#102537;border:0px;color:white;\n"
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

        verticalLayout->addWidget(messageIn_SM);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        signatureOut_SM = new QLineEdit(widget);
        signatureOut_SM->setObjectName(QStringLiteral("signatureOut_SM"));
        signatureOut_SM->setStyleSheet(QLatin1String("background:#102537;\n"
"color:white;\n"
"padding:6px;\n"
"border:1px solid #003750;\n"
"border-radius:0px;\n"
"font: 10pt 'Ubuntu';"));

        horizontalLayout->addWidget(signatureOut_SM);

        copySignatureButton_SM = new QPushButton(widget);
        copySignatureButton_SM->setObjectName(QStringLiteral("copySignatureButton_SM"));
        copySignatureButton_SM->setStyleSheet(QLatin1String("QPushButton { \n"
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
        icon2.addFile(QStringLiteral(":/images/res/images/pasteicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        copySignatureButton_SM->setIcon(icon2);

        horizontalLayout->addWidget(copySignatureButton_SM);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        signMessageButton_SM = new QPushButton(widget);
        signMessageButton_SM->setObjectName(QStringLiteral("signMessageButton_SM"));
        signMessageButton_SM->setMinimumSize(QSize(150, 0));
        signMessageButton_SM->setStyleSheet(QLatin1String("QPushButton { \n"
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
        icon3.addFile(QStringLiteral(":/images/res/images/sing.png"), QSize(), QIcon::Normal, QIcon::Off);
        signMessageButton_SM->setIcon(icon3);

        horizontalLayout_2->addWidget(signMessageButton_SM);

        clearButton_SM = new QPushButton(widget);
        clearButton_SM->setObjectName(QStringLiteral("clearButton_SM"));
        clearButton_SM->setMinimumSize(QSize(120, 0));
        clearButton_SM->setStyleSheet(QLatin1String("QPushButton { \n"
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
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/res/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton_SM->setIcon(icon4);

        horizontalLayout_2->addWidget(clearButton_SM);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        statusLabel_SM = new QLabel(widget);
        statusLabel_SM->setObjectName(QStringLiteral("statusLabel_SM"));

        horizontalLayout_2->addWidget(statusLabel_SM);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(SignMessage);

        QMetaObject::connectSlotsByName(SignMessage);
    } // setupUi

    void retranslateUi(QWidget *SignMessage)
    {
        SignMessage->setWindowTitle(QApplication::translate("SignMessage", "Form", 0));
        infoLabel_SM->setText(QApplication::translate("SignMessage", "You can sign messages with your addresses to prove you own them. Be careful not to sign anything vague, as phishing attacks may try to trick you into signing your identity over to them. Only sign fully-detailed statements you agree to.", 0));
        addressBookButton_SM->setText(QString());
        pasteButton_SM->setText(QString());
        copySignatureButton_SM->setText(QString());
        signMessageButton_SM->setText(QApplication::translate("SignMessage", "   Sign Message", 0));
        clearButton_SM->setText(QApplication::translate("SignMessage", "    Clear All", 0));
        statusLabel_SM->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SignMessage: public Ui_SignMessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNMESSAGE_H
