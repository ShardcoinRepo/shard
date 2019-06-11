/********************************************************************************
** Form generated from reading UI file 'sendcoinsentry.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDCOINSENTRY_H
#define UI_SENDCOINSENTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <bitcoinamountfield.h>
#include <qvalidatedlineedit.h>

QT_BEGIN_NAMESPACE

class Ui_SendCoinsEntry
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *p;
    QLabel *label_2;
    QValidatedLineEdit *payTo;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QValidatedLineEdit *addAsLabel;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    BitcoinAmountField *payAmount;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QToolButton *addressBookButton;
    QToolButton *pasteButton;
    QToolButton *deleteButton;

    void setupUi(QFrame *SendCoinsEntry)
    {
        if (SendCoinsEntry->objectName().isEmpty())
            SendCoinsEntry->setObjectName(QStringLiteral("SendCoinsEntry"));
        SendCoinsEntry->resize(852, 155);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SendCoinsEntry->sizePolicy().hasHeightForWidth());
        SendCoinsEntry->setSizePolicy(sizePolicy);
        SendCoinsEntry->setMinimumSize(QSize(0, 155));
        SendCoinsEntry->setMaximumSize(QSize(16777215, 155));
        SendCoinsEntry->setStyleSheet(QLatin1String("border:0px;\n"
" background:'#102537';"));
        SendCoinsEntry->setFrameShape(QFrame::StyledPanel);
        SendCoinsEntry->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(SendCoinsEntry);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(16);
        gridLayout->setContentsMargins(16, 16, 16, 16);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        p = new QVBoxLayout();
        p->setSpacing(0);
        p->setObjectName(QStringLiteral("p"));
        label_2 = new QLabel(SendCoinsEntry);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(10);
        font.setItalic(false);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color:#72909e;margin-bottom:6px;"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        p->addWidget(label_2);

        payTo = new QValidatedLineEdit(SendCoinsEntry);
        payTo->setObjectName(QStringLiteral("payTo"));
        payTo->setMinimumSize(QSize(0, 35));
        payTo->setMaximumSize(QSize(16777215, 35));
        QFont font1;
        font1.setPointSize(10);
        payTo->setFont(font1);
        payTo->setStyleSheet(QLatin1String("background:#1d2e3f;\n"
"color:white;\n"
"padding:7px;\n"
"border-radius:5px;\n"
"font: 10pt 'Ubuntu';\n"
"margin-bottom:2px;"));
        payTo->setMaxLength(34);

        p->addWidget(payTo);


        verticalLayout->addLayout(p);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(6, 6, -1, -1);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);


        verticalLayout->addLayout(verticalLayout_7);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_4 = new QLabel(SendCoinsEntry);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setFont(font1);
        label_4->setStyleSheet(QStringLiteral("color:#72909e;margin-bottom:6px;"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_4);

        addAsLabel = new QValidatedLineEdit(SendCoinsEntry);
        addAsLabel->setObjectName(QStringLiteral("addAsLabel"));
        addAsLabel->setMinimumSize(QSize(0, 35));
        addAsLabel->setMaximumSize(QSize(16777215, 35));
        addAsLabel->setFont(font1);
        addAsLabel->setStyleSheet(QLatin1String("background:#1d2e3f;\n"
"color:white;\n"
"padding:7px;\n"
"border-radius:5px;\n"
"font: 10pt 'Ubuntu';\n"
"margin-bottom:2px;"));

        verticalLayout_4->addWidget(addAsLabel);


        verticalLayout->addLayout(verticalLayout_4);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        label = new QLabel(SendCoinsEntry);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color:#72909e;margin-bottom:6px;"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_5->addWidget(label);

        payAmount = new BitcoinAmountField(SendCoinsEntry);
        payAmount->setObjectName(QStringLiteral("payAmount"));
        sizePolicy1.setHeightForWidth(payAmount->sizePolicy().hasHeightForWidth());
        payAmount->setSizePolicy(sizePolicy1);
        payAmount->setMinimumSize(QSize(0, 33));
        payAmount->setMaximumSize(QSize(16777215, 33));
        payAmount->setFont(font1);
        payAmount->setStyleSheet(QLatin1String("background:#1d2e3f;\n"
"color:white;\n"
"padding:10px;\n"
"border-radius:5px;\n"
"border-bottom-right-radius:0px;\n"
"border-top-right-radius:0px;\n"
"\n"
"font: 10pt 'Ubuntu';\n"
"\n"
""));

        verticalLayout_5->addWidget(payAmount);


        verticalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(20);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_2->setContentsMargins(-1, 0, -1, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        addressBookButton = new QToolButton(SendCoinsEntry);
        addressBookButton->setObjectName(QStringLiteral("addressBookButton"));
        addressBookButton->setMinimumSize(QSize(0, 33));
        addressBookButton->setMaximumSize(QSize(9999999, 33));
        addressBookButton->setStyleSheet(QLatin1String("QToolButton { \n"
" background-color: \"#0d2131\";\n"
"	border:2px solid #1d2e3f;\n"
"color:#eeeeee;\n"
"padding:5px 10px;\n"
"	outline: none;\n"
"border-radius:2px;\n"
"\n"
"}\n"
"\n"
"QToolButton:pressed {\n"
"   background-color: \"#1d2e3f\";\n"
"border:2px solid gray;\n"
"	color:white;\n"
"\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"     background-color: \"#102537\";\n"
"	border:2px solid #0f3e54;\n"
" }\n"
"QToolButton:checked { \n"
"     background-color: \"#0d2131\";\n"
"border:2px solid #0f3e54;\n"
"	color:white;\n"
"\n"
" }\n"
"QToolButton:disabled { \n"
"    background:'#0b1d2c';\n"
"color:gray;\n"
"border:2px solid #102537;\n"
" }\n"
""));

        horizontalLayout_2->addWidget(addressBookButton);

        pasteButton = new QToolButton(SendCoinsEntry);
        pasteButton->setObjectName(QStringLiteral("pasteButton"));
        pasteButton->setMinimumSize(QSize(0, 33));
        pasteButton->setMaximumSize(QSize(9999999, 33));
        pasteButton->setStyleSheet(QLatin1String("QToolButton { \n"
" background-color: \"#0d2131\";\n"
"	border:2px solid #1d2e3f;\n"
"color:#eeeeee;\n"
"padding:5px 10px;\n"
"	outline: none;\n"
"border-radius:2px;\n"
"\n"
"}\n"
"\n"
"QToolButton:pressed {\n"
"   background-color: \"#1d2e3f\";\n"
"border:2px solid gray;\n"
"	color:white;\n"
"\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"     background-color: \"#102537\";\n"
"	border:2px solid #0f3e54;\n"
" }\n"
"QToolButton:checked { \n"
"     background-color: \"#0d2131\";\n"
"border:2px solid #0f3e54;\n"
"	color:white;\n"
"\n"
" }\n"
"QToolButton:disabled { \n"
"    background:'#0b1d2c';\n"
"color:gray;\n"
"border:2px solid #102537;\n"
" }\n"
""));

        horizontalLayout_2->addWidget(pasteButton);

        deleteButton = new QToolButton(SendCoinsEntry);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setMinimumSize(QSize(0, 33));
        deleteButton->setMaximumSize(QSize(16777215, 33));
        deleteButton->setStyleSheet(QLatin1String("QToolButton { \n"
" background-color: \"#0d2131\";\n"
"	border:2px solid #1d2e3f;\n"
"color:#eeeeee;\n"
"padding:5px 10px;\n"
"	outline: none;\n"
"border-radius:2px;\n"
"\n"
"}\n"
"\n"
"QToolButton:pressed {\n"
"   background-color: \"#1d2e3f\";\n"
"border:2px solid gray;\n"
"	color:white;\n"
"\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"     background-color: \"#102537\";\n"
"	border:2px solid #0f3e54;\n"
" }\n"
"QToolButton:checked { \n"
"     background-color: \"#0d2131\";\n"
"border:2px solid #0f3e54;\n"
"	color:white;\n"
"\n"
" }\n"
"QToolButton:disabled { \n"
"    background:'#0b1d2c';\n"
"color:gray;\n"
"border:2px solid #102537;\n"
" }\n"
""));

        horizontalLayout_2->addWidget(deleteButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(payTo);
        label_4->setBuddy(addAsLabel);
        label->setBuddy(payAmount);
#endif // QT_NO_SHORTCUT

        retranslateUi(SendCoinsEntry);

        QMetaObject::connectSlotsByName(SendCoinsEntry);
    } // setupUi

    void retranslateUi(QFrame *SendCoinsEntry)
    {
        SendCoinsEntry->setWindowTitle(QApplication::translate("SendCoinsEntry", "Form", 0));
        label_2->setText(QApplication::translate("SendCoinsEntry", "Pay to", 0));
#ifndef QT_NO_TOOLTIP
        payTo->setToolTip(QApplication::translate("SendCoinsEntry", "The address to send the payment to (e.g. SNZ3SxusyhLVUGc4uQJiGcBTrtBbyQbLJV)", 0));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("SendCoinsEntry", "Label", 0));
#ifndef QT_NO_TOOLTIP
        addAsLabel->setToolTip(QApplication::translate("SendCoinsEntry", "Enter a label for this address to add it to your address book", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("SendCoinsEntry", "Amount", 0));
#ifndef QT_NO_TOOLTIP
        addressBookButton->setToolTip(QApplication::translate("SendCoinsEntry", "Choose address from address book", 0));
#endif // QT_NO_TOOLTIP
        addressBookButton->setText(QApplication::translate("SendCoinsEntry", "Address Book", 0));
        addressBookButton->setShortcut(QApplication::translate("SendCoinsEntry", "Alt+A", 0));
#ifndef QT_NO_TOOLTIP
        pasteButton->setToolTip(QApplication::translate("SendCoinsEntry", "Paste address from clipboard", 0));
#endif // QT_NO_TOOLTIP
        pasteButton->setText(QApplication::translate("SendCoinsEntry", "Paste", 0));
        pasteButton->setShortcut(QApplication::translate("SendCoinsEntry", "Alt+P", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("SendCoinsEntry", "Remove this recipient", 0));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QApplication::translate("SendCoinsEntry", "Remove", 0));
    } // retranslateUi

};

namespace Ui {
    class SendCoinsEntry: public Ui_SendCoinsEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDCOINSENTRY_H
