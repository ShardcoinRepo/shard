/********************************************************************************
** Form generated from reading UI file 'transactionpage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTIONPAGE_H
#define UI_TRANSACTIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "listtransactions.h"

QT_BEGIN_NAMESPACE

class Ui_TransactionPage
{
public:
    QGridLayout *gridLayout;
    QWidget *any2;
    QVBoxLayout *verticalLayout;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout;
    QComboBox *dateWidget;
    QComboBox *typeWidget;
    QLineEdit *addressWidget;
    QLineEdit *amountWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_3;
    ListTransactions *view;
    QSpacerItem *verticalSpacer;
    QWidget *any;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pleft;
    QWidget *listButtons;
    QHBoxLayout *buttonsPages;
    QPushButton *p1;
    QPushButton *p2;
    QPushButton *p3;
    QPushButton *p4;
    QPushButton *p5;
    QPushButton *p6;
    QPushButton *p7;
    QPushButton *p8;
    QPushButton *p9;
    QPushButton *pright;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *TransactionPage)
    {
        if (TransactionPage->objectName().isEmpty())
            TransactionPage->setObjectName(QStringLiteral("TransactionPage"));
        TransactionPage->resize(877, 437);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TransactionPage->sizePolicy().hasHeightForWidth());
        TransactionPage->setSizePolicy(sizePolicy);
        TransactionPage->setAutoFillBackground(false);
        TransactionPage->setStyleSheet(QStringLiteral("background:#102537"));
        gridLayout = new QGridLayout(TransactionPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(10, 0, 10, 10);
        any2 = new QWidget(TransactionPage);
        any2->setObjectName(QStringLiteral("any2"));
        any2->setStyleSheet(QStringLiteral("background:#102537;"));
        verticalLayout = new QVBoxLayout(any2);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(1, -1, -1, 1);
        horizontalWidget = new QWidget(any2);
        horizontalWidget->setObjectName(QStringLiteral("horizontalWidget"));
        horizontalWidget->setMinimumSize(QSize(0, 0));
        horizontalWidget->setMaximumSize(QSize(16777215, 16777215));
        horizontalWidget->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(horizontalWidget);
        horizontalLayout->setSpacing(25);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 10, -1, 20);
        dateWidget = new QComboBox(horizontalWidget);
        dateWidget->setObjectName(QStringLiteral("dateWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dateWidget->sizePolicy().hasHeightForWidth());
        dateWidget->setSizePolicy(sizePolicy1);
        dateWidget->setMinimumSize(QSize(130, 30));
        dateWidget->setStyleSheet(QLatin1String("QComboBox {\n"
"    background:\"#0d2131\";\n"
"    selection-background-color: \"#1d2e3f\";\n"
"   color:#eeeeee;\n"
"	border:2px solid #1d2e3f;\n"
"    outline: none;\n"
"   padding-left:15px;\n"
"\n"
"   }\n"
"QComboBox:focus {\n"
"    background:\"#0d2131\";\n"
"    selection-background-color: \"#0f3e54\";\n"
"   color:#72909e;\n"
"    outline: none;\n"
"   padding-left:15px;\n"
"\n"
"   }\n"
"   QComboBox::drop-down {\n"
"    \n"
"        border:0px;\n"
"        margin-right:10px;\n"
"\n"
"    }\n"
"    QComboBox::down-arrow {\n"
"        image: url(\":/images/res/images/dropdown.png\");\n"
"    }\n"
"    QComboBox:pressed {\n"
"        background: \"#102537\"; \n"
"    }\n"
"    QComboBox:focus:pressed {\n"
"        background: \"#15202d\";\n"
"     }\n"
"\n"
"    QComboBox:hover {\n"
"         background: \"#102537\";\n"
"    }\n"
"\n"
"    QComboBox:checked { \n"
"       background: \"#0d2131\";\n"
"    }\n"
"    QComboBox:checked:hover {\n"
"        background: \"#102537\";\n"
" }\n"
"QComboBox:disabl"
                        "ed { \n"
"    background: \"#0a2634\";\n"
"	color:gray;\n"
" }\n"
"\n"
"\n"
"\n"
"QComboBox::down-arrow:on { /* shift the arrow when popup is open */\n"
"    top: 1px;\n"
"    left: 1px;\n"
"}\n"
"QComboBox QAbstractItemView {\n"
"    border: 2px solid \"#102537\";\n"
"    selection-background-color: \"#102537\";\n"
"background-color: \"#0d2131\";\n"
"selection-color:blue;\n"
"margin:0px;\n"
"padding:0px;\n"
"outline:none;\n"
"}\n"
""));

        horizontalLayout->addWidget(dateWidget);

        typeWidget = new QComboBox(horizontalWidget);
        typeWidget->setObjectName(QStringLiteral("typeWidget"));
        sizePolicy1.setHeightForWidth(typeWidget->sizePolicy().hasHeightForWidth());
        typeWidget->setSizePolicy(sizePolicy1);
        typeWidget->setMinimumSize(QSize(130, 30));
        typeWidget->setStyleSheet(QLatin1String("QComboBox {\n"
"    background:\"#0d2131\";\n"
"    selection-background-color: \"#1d2e3f\";\n"
"   color:#eeeeee;\n"
"	border:2px solid #1d2e3f;\n"
"    outline: none;\n"
"   padding-left:15px;\n"
"\n"
"   }\n"
"QComboBox:focus {\n"
"    background:\"#0d2131\";\n"
"    selection-background-color: \"#0f3e54\";\n"
"   color:#72909e;\n"
"    outline: none;\n"
"   padding-left:15px;\n"
"\n"
"   }\n"
"   QComboBox::drop-down {\n"
"    \n"
"        border:0px;\n"
"        margin-right:10px;\n"
"\n"
"    }\n"
"    QComboBox::down-arrow {\n"
"        image: url(\":/images/res/images/dropdown.png\");\n"
"    }\n"
"    QComboBox:pressed {\n"
"        background: \"#102537\"; \n"
"    }\n"
"    QComboBox:focus:pressed {\n"
"        background: \"#15202d\";\n"
"     }\n"
"\n"
"    QComboBox:hover {\n"
"         background: \"#102537\";\n"
"    }\n"
"\n"
"    QComboBox:checked { \n"
"       background: \"#0d2131\";\n"
"    }\n"
"    QComboBox:checked:hover {\n"
"        background: \"#102537\";\n"
" }\n"
"QComboBox:disabl"
                        "ed { \n"
"    background: \"#0a2634\";\n"
"	color:gray;\n"
" }\n"
"\n"
"\n"
"\n"
"QComboBox::down-arrow:on { /* shift the arrow when popup is open */\n"
"    top: 1px;\n"
"    left: 1px;\n"
"}\n"
"QComboBox QAbstractItemView {\n"
"    border: 2px solid \"#102537\";\n"
"    selection-background-color: \"#102537\";\n"
"background-color: \"#0d2131\";\n"
"selection-color:blue;\n"
"margin:0px;\n"
"padding:0px;\n"
"outline:none;\n"
"}\n"
""));

        horizontalLayout->addWidget(typeWidget);

        addressWidget = new QLineEdit(horizontalWidget);
        addressWidget->setObjectName(QStringLiteral("addressWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(addressWidget->sizePolicy().hasHeightForWidth());
        addressWidget->setSizePolicy(sizePolicy2);
        addressWidget->setMinimumSize(QSize(0, 0));
        addressWidget->setMaximumSize(QSize(16777215, 16777215));
        addressWidget->setStyleSheet(QLatin1String("background:#1d2e3f;\n"
"color:white;\n"
"padding:7px;\n"
"border-radius:5px;\n"
"font: 10pt 'Ubuntu';\n"
""));

        horizontalLayout->addWidget(addressWidget);

        amountWidget = new QLineEdit(horizontalWidget);
        amountWidget->setObjectName(QStringLiteral("amountWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(amountWidget->sizePolicy().hasHeightForWidth());
        amountWidget->setSizePolicy(sizePolicy3);
        amountWidget->setMinimumSize(QSize(0, 0));
        amountWidget->setMaximumSize(QSize(16777215, 16777215));
        amountWidget->setStyleSheet(QLatin1String("background:#1d2e3f;\n"
"color:white;\n"
"padding:7px;\n"
"border-radius:5px;\n"
"font: 10pt 'Ubuntu';\n"
""));

        horizontalLayout->addWidget(amountWidget);


        verticalLayout->addWidget(horizontalWidget);

        scrollArea = new QScrollArea(any2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setStyleSheet(QLatin1String("QScrollArea{border:0px;margin:0px;outline:none;border-bottom:1px solid #002d3f;}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"background: rgb(3, 32, 52);\n"
"width:9px;\n"
"}\n"
"QScrollBar::handle:vertical\n"
"{\n"
"background: rgb(0, 51, 78);\n"
"width:9px;\n"
"outline:none;\n"
"min-height:10px;\n"
"}\n"
"QScrollBar::handle:vertical:hover\n"
"{\n"
"background: rgb(0, 67, 97);\n"
"width:9px;\n"
"\n"
"}\n"
"QScrollBar::add-line:vertical,QScrollBar::sub-line:vertical\n"
"{\n"
"\n"
"height: 0px;\n"
"}\n"
"QScrollBar::add-page:vertical,QScrollBar::sub-page:vertical\n"
"{\n"
"background:#0d2131;\n"
"outline:none;\n"
"}"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 845, 296));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, -1, 6, -1);
        view = new ListTransactions(scrollAreaWidgetContents);
        view->setObjectName(QStringLiteral("view"));
        view->setStyleSheet(QStringLiteral("border:0px;margin:0px"));
        view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        view->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);

        verticalLayout_3->addWidget(view);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        gridLayout_2->addLayout(verticalLayout_3, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        any = new QWidget(any2);
        any->setObjectName(QStringLiteral("any"));
        any->setStyleSheet(QStringLiteral("background:#102537;"));
        horizontalLayout_3 = new QHBoxLayout(any);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 5, -1, 5);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pleft = new QPushButton(any);
        pleft->setObjectName(QStringLiteral("pleft"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pleft->sizePolicy().hasHeightForWidth());
        pleft->setSizePolicy(sizePolicy4);
        pleft->setMinimumSize(QSize(31, 31));
        pleft->setMaximumSize(QSize(31, 31));
        pleft->setStyleSheet(QLatin1String("QPushButton { \n"
"background:#102537;\n"
"	border:2px solid #1d2e3f;\n"
"color:#eeeeee;\n"
"padding:5px;\n"
"	outline: none;\n"
"border-radius:2px;\n"
"\n"
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
"     background:#102537;\n"
"border:2px solid #0f3e54;\n"
"	color:white;\n"
"\n"
" }\n"
"QPushButton:disabled { \n"
"    background:'#102537';\n"
"color:gray;\n"
"border:2px solid #102537;\n"
" }\n"
""));
        pleft->setCheckable(true);

        horizontalLayout_3->addWidget(pleft);

        listButtons = new QWidget(any);
        listButtons->setObjectName(QStringLiteral("listButtons"));
        buttonsPages = new QHBoxLayout(listButtons);
        buttonsPages->setSpacing(6);
        buttonsPages->setObjectName(QStringLiteral("buttonsPages"));
        buttonsPages->setContentsMargins(-1, -1, 1, -1);
        p1 = new QPushButton(listButtons);
        p1->setObjectName(QStringLiteral("p1"));
        p1->setMinimumSize(QSize(31, 31));
        p1->setMaximumSize(QSize(31, 31));
        p1->setStyleSheet(QLatin1String("QPushButton { \n"
"background:#102537;\n"
"	border:2px solid #1d2e3f;\n"
"color:#eeeeee;\n"
"padding:5px;\n"
"	outline: none;\n"
"border-radius:2px;\n"
"\n"
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
"     background:#102537;\n"
"border:2px solid #0f3e54;\n"
"	color:white;\n"
"\n"
" }\n"
"QPushButton:disabled { \n"
"    background:'#102537';\n"
"color:gray;\n"
"border:2px solid #102537;\n"
" }\n"
""));
        p1->setCheckable(true);

        buttonsPages->addWidget(p1);

        p2 = new QPushButton(listButtons);
        p2->setObjectName(QStringLiteral("p2"));
        p2->setMinimumSize(QSize(31, 31));
        p2->setMaximumSize(QSize(31, 31));
        p2->setStyleSheet(QLatin1String("QPushButton { \n"
"background:#102537;\n"
"	border:2px solid #1d2e3f;\n"
"color:#eeeeee;\n"
"padding:5px;\n"
"	outline: none;\n"
"border-radius:2px;\n"
"\n"
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
"     background:#102537;\n"
"border:2px solid #0f3e54;\n"
"	color:white;\n"
"\n"
" }\n"
"QPushButton:disabled { \n"
"    background:'#102537';\n"
"color:gray;\n"
"border:2px solid #102537;\n"
" }\n"
""));
        p2->setCheckable(true);

        buttonsPages->addWidget(p2);

        p3 = new QPushButton(listButtons);
        p3->setObjectName(QStringLiteral("p3"));
        p3->setMinimumSize(QSize(31, 31));
        p3->setMaximumSize(QSize(31, 31));
        p3->setStyleSheet(QLatin1String("QPushButton { \n"
"background:#102537;\n"
"	border:2px solid #1d2e3f;\n"
"color:#eeeeee;\n"
"padding:5px;\n"
"	outline: none;\n"
"border-radius:2px;\n"
"\n"
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
"     background:#102537;\n"
"border:2px solid #0f3e54;\n"
"	color:white;\n"
"\n"
" }\n"
"QPushButton:disabled { \n"
"    background:'#102537';\n"
"color:gray;\n"
"border:2px solid #102537;\n"
" }\n"
""));
        p3->setCheckable(true);
        p3->setChecked(false);

        buttonsPages->addWidget(p3);

        p4 = new QPushButton(listButtons);
        p4->setObjectName(QStringLiteral("p4"));
        p4->setMinimumSize(QSize(31, 31));
        p4->setMaximumSize(QSize(31, 31));
        p4->setStyleSheet(QLatin1String("QPushButton { \n"
"background:#102537;\n"
"	border:2px solid #1d2e3f;\n"
"color:#eeeeee;\n"
"padding:5px;\n"
"	outline: none;\n"
"border-radius:2px;\n"
"\n"
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
"     background:#102537;\n"
"border:2px solid #0f3e54;\n"
"	color:white;\n"
"\n"
" }\n"
"QPushButton:disabled { \n"
"    background:'#102537';\n"
"color:gray;\n"
"border:2px solid #102537;\n"
" }\n"
""));
        p4->setCheckable(true);

        buttonsPages->addWidget(p4);

        p5 = new QPushButton(listButtons);
        p5->setObjectName(QStringLiteral("p5"));
        p5->setMinimumSize(QSize(31, 31));
        p5->setMaximumSize(QSize(31, 31));
        p5->setStyleSheet(QLatin1String("QPushButton { \n"
"background:#102537;\n"
"	border:2px solid #1d2e3f;\n"
"color:#eeeeee;\n"
"padding:5px;\n"
"	outline: none;\n"
"border-radius:2px;\n"
"\n"
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
"     background:#102537;\n"
"border:2px solid #0f3e54;\n"
"	color:white;\n"
"\n"
" }\n"
"QPushButton:disabled { \n"
"    background:'#102537';\n"
"color:gray;\n"
"border:2px solid #102537;\n"
" }\n"
""));
        p5->setCheckable(true);

        buttonsPages->addWidget(p5);

        p6 = new QPushButton(listButtons);
        p6->setObjectName(QStringLiteral("p6"));
        p6->setMinimumSize(QSize(31, 31));
        p6->setMaximumSize(QSize(31, 31));
        p6->setStyleSheet(QLatin1String("QPushButton { \n"
"background:#102537;\n"
"	border:2px solid #1d2e3f;\n"
"color:#eeeeee;\n"
"padding:5px;\n"
"	outline: none;\n"
"border-radius:2px;\n"
"\n"
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
"     background:#102537;\n"
"border:2px solid #0f3e54;\n"
"	color:white;\n"
"\n"
" }\n"
"QPushButton:disabled { \n"
"    background:'#102537';\n"
"color:gray;\n"
"border:2px solid #102537;\n"
" }\n"
""));
        p6->setCheckable(true);

        buttonsPages->addWidget(p6);

        p7 = new QPushButton(listButtons);
        p7->setObjectName(QStringLiteral("p7"));
        p7->setMinimumSize(QSize(31, 31));
        p7->setMaximumSize(QSize(31, 31));
        p7->setStyleSheet(QLatin1String("QPushButton { \n"
"background:#102537;\n"
"	border:2px solid #1d2e3f;\n"
"color:#eeeeee;\n"
"padding:5px;\n"
"	outline: none;\n"
"border-radius:2px;\n"
"\n"
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
"     background:#102537;\n"
"border:2px solid #0f3e54;\n"
"	color:white;\n"
"\n"
" }\n"
"QPushButton:disabled { \n"
"    background:'#102537';\n"
"color:gray;\n"
"border:2px solid #102537;\n"
" }\n"
""));
        p7->setCheckable(true);

        buttonsPages->addWidget(p7);

        p8 = new QPushButton(listButtons);
        p8->setObjectName(QStringLiteral("p8"));
        p8->setMinimumSize(QSize(31, 31));
        p8->setMaximumSize(QSize(31, 31));
        p8->setStyleSheet(QLatin1String("QPushButton { \n"
"background:#102537;\n"
"	border:2px solid #1d2e3f;\n"
"color:#eeeeee;\n"
"padding:5px;\n"
"	outline: none;\n"
"border-radius:2px;\n"
"\n"
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
"     background:#102537;\n"
"border:2px solid #0f3e54;\n"
"	color:white;\n"
"\n"
" }\n"
"QPushButton:disabled { \n"
"    background:'#102537';\n"
"color:gray;\n"
"border:2px solid #102537;\n"
" }\n"
""));
        p8->setCheckable(true);

        buttonsPages->addWidget(p8);

        p9 = new QPushButton(listButtons);
        p9->setObjectName(QStringLiteral("p9"));
        p9->setMinimumSize(QSize(31, 31));
        p9->setMaximumSize(QSize(31, 31));
        p9->setStyleSheet(QLatin1String("QPushButton { \n"
"background:#102537;\n"
"	border:2px solid #1d2e3f;\n"
"color:#eeeeee;\n"
"padding:5px;\n"
"	outline: none;\n"
"border-radius:2px;\n"
"\n"
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
"     background:#102537;\n"
"border:2px solid #0f3e54;\n"
"	color:white;\n"
"\n"
" }\n"
"QPushButton:disabled { \n"
"    background:'#102537';\n"
"color:gray;\n"
"border:2px solid #102537;\n"
" }\n"
""));
        p9->setCheckable(true);

        buttonsPages->addWidget(p9);


        horizontalLayout_3->addWidget(listButtons);

        pright = new QPushButton(any);
        pright->setObjectName(QStringLiteral("pright"));
        pright->setMinimumSize(QSize(31, 31));
        pright->setMaximumSize(QSize(31, 31));
        pright->setStyleSheet(QLatin1String("QPushButton { \n"
"background:#102537;\n"
"	border:2px solid #1d2e3f;\n"
"color:#eeeeee;\n"
"padding:5px;\n"
"	outline: none;\n"
"border-radius:2px;\n"
"\n"
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
"     background:#102537;\n"
"border:2px solid #0f3e54;\n"
"	color:white;\n"
"\n"
" }\n"
"QPushButton:disabled { \n"
"    background:'#102537';\n"
"color:gray;\n"
"border:2px solid #102537;\n"
" }\n"
""));

        horizontalLayout_3->addWidget(pright);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(any);


        gridLayout->addWidget(any2, 0, 0, 1, 1);


        retranslateUi(TransactionPage);

        QMetaObject::connectSlotsByName(TransactionPage);
    } // setupUi

    void retranslateUi(QWidget *TransactionPage)
    {
        TransactionPage->setWindowTitle(QApplication::translate("TransactionPage", "Form", 0));
        pleft->setText(QApplication::translate("TransactionPage", "<", 0));
        p1->setText(QApplication::translate("TransactionPage", "1", 0));
        p2->setText(QApplication::translate("TransactionPage", "2", 0));
        p3->setText(QApplication::translate("TransactionPage", "3", 0));
        p4->setText(QApplication::translate("TransactionPage", "4", 0));
        p5->setText(QApplication::translate("TransactionPage", "5", 0));
        p6->setText(QApplication::translate("TransactionPage", "6", 0));
        p7->setText(QApplication::translate("TransactionPage", "7", 0));
        p8->setText(QApplication::translate("TransactionPage", "8", 0));
        p9->setText(QApplication::translate("TransactionPage", "9", 0));
        pright->setText(QApplication::translate("TransactionPage", ">", 0));
    } // retranslateUi

};

namespace Ui {
    class TransactionPage: public Ui_TransactionPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONPAGE_H
