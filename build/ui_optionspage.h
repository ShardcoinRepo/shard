/********************************************************************************
** Form generated from reading UI file 'optionspage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSPAGE_H
#define UI_OPTIONSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <bitcoinamountfield.h>
#include <qvalidatedlineedit.h>

QT_BEGIN_NAMESPACE

class Ui_OptionsPage
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelmain;
    QFrame *line;
    QLabel *label_3;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    BitcoinAmountField *transactionFee;
    QLabel *reserveBalanceInfoLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    BitcoinAmountField *reserveBalance;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *connectSocks;
    QCheckBox *mapPortUpnp;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QValidatedLineEdit *proxyIp;
    QLabel *label_7;
    QLineEdit *proxyPort;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QComboBox *unit;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *bitcoinAtStartup;
    QCheckBox *minimizeToTray;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *minimizeOnClose;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QLabel *statusLabel;
    QPushButton *applyButton;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *OptionsPage)
    {
        if (OptionsPage->objectName().isEmpty())
            OptionsPage->setObjectName(QStringLiteral("OptionsPage"));
        OptionsPage->resize(683, 745);
        OptionsPage->setStyleSheet(QStringLiteral("background:\"#0b1d2c\""));
        gridLayout = new QGridLayout(OptionsPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 15, 0, 0);
        scrollArea = new QScrollArea(OptionsPage);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setStyleSheet(QLatin1String("QScrollArea{border:0px;margin:0px;outline:none;}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
" width:9px;\n"
"outline:none;\n"
"}\n"
"QScrollBar::handle:vertical{\n"
"background: rgb(0, 51, 78);\n"
"width:9px;\n"
"outline:none;}\n"
"QScrollBar::handle:vertical:hover{\n"
"background: rgb(0, 67, 97);\n"
"width:9px;}\n"
"QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical{\n"
"height:0px;}\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical{\n"
"background:#0d2131;\n"
"outline:none;}\n"
""));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 683, 730));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(19, 0, 19, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(10);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, -1, 40);
        labelmain = new QLabel(scrollAreaWidgetContents);
        labelmain->setObjectName(QStringLiteral("labelmain"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelmain->sizePolicy().hasHeightForWidth());
        labelmain->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        labelmain->setFont(font);
        labelmain->setStyleSheet(QStringLiteral("color:#7ab0cd;"));

        verticalLayout_4->addWidget(labelmain);

        line = new QFrame(scrollAreaWidgetContents);
        line->setObjectName(QStringLiteral("line"));
        line->setMaximumSize(QSize(16777215, 1));
        line->setStyleSheet(QStringLiteral("background:#7ab0cd;border:0px"));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(1);
        line->setFrameShape(QFrame::HLine);

        verticalLayout_4->addWidget(line);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setStyleSheet(QStringLiteral("color:#72909e;"));
        label_3->setWordWrap(true);

        verticalLayout_4->addWidget(label_3);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setStyleSheet(QStringLiteral("color:#72909e;"));

        verticalLayout_4->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(15);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setStyleSheet(QStringLiteral("color:#72909e;font-weight:bold;"));

        horizontalLayout->addWidget(label);

        transactionFee = new BitcoinAmountField(scrollAreaWidgetContents);
        transactionFee->setObjectName(QStringLiteral("transactionFee"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(transactionFee->sizePolicy().hasHeightForWidth());
        transactionFee->setSizePolicy(sizePolicy2);
        transactionFee->setMinimumSize(QSize(0, 33));
        transactionFee->setMaximumSize(QSize(16777215, 33));
        transactionFee->setStyleSheet(QLatin1String("background:#1d2e3f;\n"
"color:white;\n"
"padding:10px;\n"
"border-radius:5px;\n"
"border-bottom-right-radius:0px;\n"
"border-top-right-radius:0px;\n"
"\n"
"font: 10pt 'Ubuntu';\n"
"\n"
""));

        horizontalLayout->addWidget(transactionFee);


        verticalLayout_4->addLayout(horizontalLayout);

        reserveBalanceInfoLabel = new QLabel(scrollAreaWidgetContents);
        reserveBalanceInfoLabel->setObjectName(QStringLiteral("reserveBalanceInfoLabel"));
        reserveBalanceInfoLabel->setStyleSheet(QStringLiteral("color:#72909e;"));
        reserveBalanceInfoLabel->setWordWrap(true);

        verticalLayout_4->addWidget(reserveBalanceInfoLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(15);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("color:#72909e;font-weight:bold;"));

        horizontalLayout_2->addWidget(label_5);

        reserveBalance = new BitcoinAmountField(scrollAreaWidgetContents);
        reserveBalance->setObjectName(QStringLiteral("reserveBalance"));
        sizePolicy2.setHeightForWidth(reserveBalance->sizePolicy().hasHeightForWidth());
        reserveBalance->setSizePolicy(sizePolicy2);
        reserveBalance->setMinimumSize(QSize(0, 33));
        reserveBalance->setMaximumSize(QSize(16777215, 33));
        reserveBalance->setStyleSheet(QLatin1String("background:#1d2e3f;\n"
"color:white;\n"
"padding:10px;\n"
"border-radius:5px;\n"
"border-bottom-right-radius:0px;\n"
"border-top-right-radius:0px;\n"
"\n"
"font: 10pt 'Ubuntu';\n"
"\n"
""));

        horizontalLayout_2->addWidget(reserveBalance);


        verticalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(10);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, -1, 40);
        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QStringLiteral("label_6"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy3);
        label_6->setFont(font);
        label_6->setStyleSheet(QStringLiteral("color:#7ab0cd;"));
        label_6->setWordWrap(true);

        verticalLayout_3->addWidget(label_6);

        line_2 = new QFrame(scrollAreaWidgetContents);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setMaximumSize(QSize(16777215, 1));
        line_2->setStyleSheet(QStringLiteral("background:#7ab0cd;border:0px"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        connectSocks = new QCheckBox(scrollAreaWidgetContents);
        connectSocks->setObjectName(QStringLiteral("connectSocks"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(connectSocks->sizePolicy().hasHeightForWidth());
        connectSocks->setSizePolicy(sizePolicy4);
        connectSocks->setStyleSheet(QLatin1String("QCheckBox {color:#72909e;}\n"
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

        horizontalLayout_3->addWidget(connectSocks);

        mapPortUpnp = new QCheckBox(scrollAreaWidgetContents);
        mapPortUpnp->setObjectName(QStringLiteral("mapPortUpnp"));
        sizePolicy3.setHeightForWidth(mapPortUpnp->sizePolicy().hasHeightForWidth());
        mapPortUpnp->setSizePolicy(sizePolicy3);
        mapPortUpnp->setStyleSheet(QLatin1String("QCheckBox {color:#72909e;}\n"
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

        horizontalLayout_3->addWidget(mapPortUpnp);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setStyleSheet(QStringLiteral("color:#72909e;font-weight:bold;"));

        horizontalLayout_4->addWidget(label_8);

        proxyIp = new QValidatedLineEdit(scrollAreaWidgetContents);
        proxyIp->setObjectName(QStringLiteral("proxyIp"));
        proxyIp->setStyleSheet(QLatin1String("background:#1d2e3f;\n"
"color:white;\n"
"padding:7px;\n"
"border-radius:5px;\n"
"font: 10pt 'Ubuntu';\n"
"margin-bottom:2px;\n"
""));

        horizontalLayout_4->addWidget(proxyIp);

        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setStyleSheet(QStringLiteral("color:#72909e;font-weight:bold;"));

        horizontalLayout_4->addWidget(label_7);

        proxyPort = new QLineEdit(scrollAreaWidgetContents);
        proxyPort->setObjectName(QStringLiteral("proxyPort"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(proxyPort->sizePolicy().hasHeightForWidth());
        proxyPort->setSizePolicy(sizePolicy5);
        proxyPort->setStyleSheet(QLatin1String("background:#1d2e3f;\n"
"color:white;\n"
"padding:7px;\n"
"border-radius:5px;\n"
"font: 10pt 'Ubuntu';\n"
"margin-bottom:2px;\n"
""));

        horizontalLayout_4->addWidget(proxyPort);


        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, 0);
        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label_9->setFont(font1);
        label_9->setStyleSheet(QStringLiteral("color:#7ab0cd;"));

        verticalLayout_2->addWidget(label_9);

        line_3 = new QFrame(scrollAreaWidgetContents);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setMaximumSize(QSize(16777215, 1));
        line_3->setStyleSheet(QStringLiteral("background:#7ab0cd;border:0px"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(15);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setStyleSheet(QStringLiteral("color:#72909e;font-weight:bold;"));

        horizontalLayout_5->addWidget(label_10);

        unit = new QComboBox(scrollAreaWidgetContents);
        unit->setObjectName(QStringLiteral("unit"));
        sizePolicy2.setHeightForWidth(unit->sizePolicy().hasHeightForWidth());
        unit->setSizePolicy(sizePolicy2);
        unit->setMinimumSize(QSize(0, 30));
        unit->setStyleSheet(QLatin1String("QComboBox {\n"
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

        horizontalLayout_5->addWidget(unit);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        bitcoinAtStartup = new QCheckBox(scrollAreaWidgetContents);
        bitcoinAtStartup->setObjectName(QStringLiteral("bitcoinAtStartup"));
        bitcoinAtStartup->setStyleSheet(QLatin1String("QCheckBox {color:#72909e;}\n"
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

        horizontalLayout_6->addWidget(bitcoinAtStartup);

        minimizeToTray = new QCheckBox(scrollAreaWidgetContents);
        minimizeToTray->setObjectName(QStringLiteral("minimizeToTray"));
        minimizeToTray->setStyleSheet(QLatin1String("QCheckBox {color:#72909e;}\n"
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

        horizontalLayout_6->addWidget(minimizeToTray);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        minimizeOnClose = new QCheckBox(scrollAreaWidgetContents);
        minimizeOnClose->setObjectName(QStringLiteral("minimizeOnClose"));
        minimizeOnClose->setStyleSheet(QLatin1String("QCheckBox {color:#72909e;}\n"
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

        horizontalLayout_7->addWidget(minimizeOnClose);


        verticalLayout_2->addLayout(horizontalLayout_7);


        verticalLayout->addLayout(verticalLayout_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, 20, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        statusLabel = new QLabel(scrollAreaWidgetContents);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));

        horizontalLayout_8->addWidget(statusLabel);

        applyButton = new QPushButton(scrollAreaWidgetContents);
        applyButton->setObjectName(QStringLiteral("applyButton"));
        applyButton->setMinimumSize(QSize(100, 0));
        applyButton->setStyleSheet(QLatin1String("QPushButton { \n"
" background-color: \"#0d2131\";\n"
"	border:2px solid #1d2e3f;\n"
"color:#eeeeee;\n"
"padding:7px;\n"
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

        horizontalLayout_8->addWidget(applyButton);


        verticalLayout->addLayout(horizontalLayout_8);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        verticalLayout->addLayout(verticalLayout_5);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(OptionsPage);

        QMetaObject::connectSlotsByName(OptionsPage);
    } // setupUi

    void retranslateUi(QWidget *OptionsPage)
    {
        OptionsPage->setWindowTitle(QApplication::translate("OptionsPage", "Form", 0));
        labelmain->setText(QApplication::translate("OptionsPage", "Main", 0));
        label_3->setText(QApplication::translate("OptionsPage", "Optional transaction fee per KB that helps make sure your transactions are processed quickly.", 0));
        label_2->setText(QApplication::translate("OptionsPage", "Most transactions are 1KB.", 0));
        label->setText(QApplication::translate("OptionsPage", "Pay Transaction Fee", 0));
        reserveBalanceInfoLabel->setText(QApplication::translate("OptionsPage", "Reserved amount does not participate cin staking and is therefore spendable at any time.", 0));
        label_5->setText(QApplication::translate("OptionsPage", "Reserve", 0));
        label_6->setText(QApplication::translate("OptionsPage", "Network", 0));
        connectSocks->setText(QApplication::translate("OptionsPage", "Connect through SOCKS5 proxy", 0));
        mapPortUpnp->setText(QApplication::translate("OptionsPage", "Map port using UPnP", 0));
        label_8->setText(QApplication::translate("OptionsPage", "Proxy IP:", 0));
        label_7->setText(QApplication::translate("OptionsPage", "Port:", 0));
        label_9->setText(QApplication::translate("OptionsPage", "Display", 0));
        label_10->setText(QApplication::translate("OptionsPage", "Unit to show amounts in:", 0));
        bitcoinAtStartup->setText(QApplication::translate("OptionsPage", "Start Shard on System Login", 0));
        minimizeToTray->setText(QApplication::translate("OptionsPage", "Minimize to the tray instead of taskbar", 0));
        minimizeOnClose->setText(QApplication::translate("OptionsPage", "Minimize on close", 0));
        statusLabel->setText(QString());
        applyButton->setText(QApplication::translate("OptionsPage", "Apply", 0));
    } // retranslateUi

};

namespace Ui {
    class OptionsPage: public Ui_OptionsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSPAGE_H
