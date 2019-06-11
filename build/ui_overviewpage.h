/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <custombutton.h>
#include "listtransactions.h"
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_6;
    CustomButton *ui_recieve;
    QGroupBox *gp3;
    QVBoxLayout *verticalLayout_15;
    QSpacerItem *verticalSpacer2;
    QLabel *label_8;
    QLabel *labelStake;
    QSpacerItem *verticalSpacer;
    QGroupBox *gp2;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_5;
    QLabel *labelBalance;
    QLabel *balanceLabel;
    QGroupBox *gp1;
    QVBoxLayout *verticalLayout_16;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_7;
    QLabel *labelUnconfirmed;
    QSpacerItem *verticalSpacer_3;
    CustomButton *ui_send;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_7;
    QWidget *ui_transactions;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_11;
    QComboBox *graphSelector;
    QSpacerItem *horizontalSpacer;
    QComboBox *changeTime;
    QComboBox *comboBalance;
    QFrame *line;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLabel *m_price;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QCustomPlot *graphView;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QLabel *m_cap;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_6;
    QLabel *m_change;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_10;
    QLabel *m_volume;
    QVBoxLayout *verticalLayout_6;
    QWidget *ui_graph;
    QVBoxLayout *verticalLayout_18;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QPushButton *moreButton;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_19;
    ListTransactions *listTransactions;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QStringLiteral("OverviewPage"));
        OverviewPage->resize(1108, 781);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OverviewPage->sizePolicy().hasHeightForWidth());
        OverviewPage->setSizePolicy(sizePolicy);
        OverviewPage->setStyleSheet(QStringLiteral(""));
        verticalLayout_3 = new QVBoxLayout(OverviewPage);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(10, 0, 10, 10);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(-1, 0, -1, -1);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox_3 = new QGroupBox(OverviewPage);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy1);
        groupBox_3->setMinimumSize(QSize(0, 151));
        groupBox_3->setMaximumSize(QSize(16777215, 151));
        groupBox_3->setStyleSheet(QStringLiteral("background:'#102537';border:0px"));
        horizontalLayout_6 = new QHBoxLayout(groupBox_3);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        ui_recieve = new CustomButton(groupBox_3);
        ui_recieve->setObjectName(QStringLiteral("ui_recieve"));
        ui_recieve->setMinimumSize(QSize(120, 0));
        ui_recieve->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_6->addWidget(ui_recieve);

        gp3 = new QGroupBox(groupBox_3);
        gp3->setObjectName(QStringLiteral("gp3"));
        gp3->setMinimumSize(QSize(0, 0));
        gp3->setMaximumSize(QSize(16777215, 16777215));
        gp3->setStyleSheet(QStringLiteral("background:'#102537';border:0px"));
        verticalLayout_15 = new QVBoxLayout(gp3);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        verticalSpacer2 = new QSpacerItem(20, 42, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_15->addItem(verticalSpacer2);

        label_8 = new QLabel(gp3);
        label_8->setObjectName(QStringLiteral("label_8"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);
        QFont font;
        label_8->setFont(font);
        label_8->setStyleSheet(QLatin1String("color:white;\n"
"font-size:10px;"));
        label_8->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_15->addWidget(label_8);

        labelStake = new QLabel(gp3);
        labelStake->setObjectName(QStringLiteral("labelStake"));
        sizePolicy2.setHeightForWidth(labelStake->sizePolicy().hasHeightForWidth());
        labelStake->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamily(QStringLiteral("Ubuntu"));
        labelStake->setFont(font1);
        labelStake->setStyleSheet(QStringLiteral("color:white;"));
        labelStake->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_15->addWidget(labelStake);

        verticalSpacer = new QSpacerItem(20, 62, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_15->addItem(verticalSpacer);


        horizontalLayout_6->addWidget(gp3);

        gp2 = new QGroupBox(groupBox_3);
        gp2->setObjectName(QStringLiteral("gp2"));
        gp2->setStyleSheet(QStringLiteral("background:'#102537';border:0px"));
        verticalLayout_17 = new QVBoxLayout(gp2);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(gp2);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setFont(font1);
        label_5->setStyleSheet(QStringLiteral("color:white;"));
        label_5->setTextFormat(Qt::PlainText);
        label_5->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_17->addWidget(label_5);

        labelBalance = new QLabel(gp2);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        sizePolicy2.setHeightForWidth(labelBalance->sizePolicy().hasHeightForWidth());
        labelBalance->setSizePolicy(sizePolicy2);
        labelBalance->setFont(font1);
        labelBalance->setStyleSheet(QStringLiteral("color:white;"));
        labelBalance->setAlignment(Qt::AlignCenter);

        verticalLayout_17->addWidget(labelBalance);

        balanceLabel = new QLabel(gp2);
        balanceLabel->setObjectName(QStringLiteral("balanceLabel"));
        QFont font2;
        font2.setPointSize(12);
        balanceLabel->setFont(font2);
        balanceLabel->setStyleSheet(QStringLiteral("color:white;margin-top:2px;"));
        balanceLabel->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_17->addWidget(balanceLabel);


        horizontalLayout_6->addWidget(gp2);

        gp1 = new QGroupBox(groupBox_3);
        gp1->setObjectName(QStringLiteral("gp1"));
        gp1->setMinimumSize(QSize(0, 0));
        gp1->setMaximumSize(QSize(16777215, 16777215));
        gp1->setStyleSheet(QStringLiteral("background:'#102537';border:0px"));
        verticalLayout_16 = new QVBoxLayout(gp1);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_4 = new QSpacerItem(20, 42, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_16->addItem(verticalSpacer_4);

        label_7 = new QLabel(gp1);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);
        label_7->setFont(font);
        label_7->setStyleSheet(QLatin1String("color:white;\n"
"font-size:10px;"));
        label_7->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_16->addWidget(label_7);

        labelUnconfirmed = new QLabel(gp1);
        labelUnconfirmed->setObjectName(QStringLiteral("labelUnconfirmed"));
        sizePolicy2.setHeightForWidth(labelUnconfirmed->sizePolicy().hasHeightForWidth());
        labelUnconfirmed->setSizePolicy(sizePolicy2);
        labelUnconfirmed->setFont(font1);
        labelUnconfirmed->setStyleSheet(QStringLiteral("color:white;"));
        labelUnconfirmed->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_16->addWidget(labelUnconfirmed);

        verticalSpacer_3 = new QSpacerItem(20, 62, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_16->addItem(verticalSpacer_3);

        label_7->raise();
        labelUnconfirmed->raise();

        horizontalLayout_6->addWidget(gp1);

        ui_send = new CustomButton(groupBox_3);
        ui_send->setObjectName(QStringLiteral("ui_send"));
        ui_send->setMinimumSize(QSize(120, 0));
        ui_send->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_6->addWidget(ui_send);


        horizontalLayout_3->addWidget(groupBox_3);


        verticalLayout_11->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, -1, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        ui_transactions = new QWidget(OverviewPage);
        ui_transactions->setObjectName(QStringLiteral("ui_transactions"));
        ui_transactions->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(ui_transactions->sizePolicy().hasHeightForWidth());
        ui_transactions->setSizePolicy(sizePolicy3);
        ui_transactions->setStyleSheet(QLatin1String("background:'#102537';\n"
"margin-top:10px;"));
        verticalLayout_12 = new QVBoxLayout(ui_transactions);
        verticalLayout_12->setSpacing(1);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        label_11 = new QLabel(ui_transactions);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMaximumSize(QSize(35, 16777215));

        horizontalLayout_4->addWidget(label_11);

        graphSelector = new QComboBox(ui_transactions);
        graphSelector->setObjectName(QStringLiteral("graphSelector"));
        graphSelector->setMinimumSize(QSize(0, 0));
        graphSelector->setMaximumSize(QSize(16777215, 16777215));
        QFont font3;
        font3.setFamily(QStringLiteral("Ubuntu"));
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        graphSelector->setFont(font3);
        graphSelector->setStyleSheet(QLatin1String("QComboBox {\n"
"    background:\"#102537\";\n"
"    border:0px;\n"
"    color:#eeeeee;\n"
"    outline: none;\n"
"\n"
"    padding-left:5px;\n"
"color:white;\n"
"font: 14pt 'Ubuntu';\n"
"\n"
"   }\n"
"   QComboBox::drop-down {\n"
"    \n"
"        border:0px;\n"
"        margin-right:10px;\n"
"font: 14pt 'Ubuntu';\n"
"\n"
"    }\n"
"    QComboBox::down-arrow {\n"
"        image: url(\":/images/res/images/dropdown.png\");\n"
"    }\n"
"    QComboBox:pressed {\n"
"        background: \"#102537\"; \n"
"    }\n"
"    QComboBox:focus:pressed {\n"
"        background: \"#102537\";\n"
"     }\n"
"    QComboBox#changeTime:focus { \n"
"        background: \"#002d3f\"; \n"
"    }\n"
"    QComboBox:hover {\n"
"         background: \"#1d2e3f\";\n"
"    }\n"
"\n"
"    QComboBox:checked { \n"
"       background: \"#002d3f\";\n"
"    }\n"
"    QComboBox:checked:hover {\n"
"        background: \"#102537\";\n"
" }\n"
"QComboBox:disabled { \n"
"    background: \"#0a2634\";\n"
"	color:gray;\n"
" }\n"
"    QComboBox QAbstractItem"
                        "View {\n"
"    border: 2px solid \"#0f3e54\";\n"
"    selection-background-color: \"#0f3e54\";\n"
"selection-color:blue;\n"
"font: 10pt 'Ubuntu';\n"
"margin:0px;\n"
"padding:0px;\n"
"outline:none;\n"
"}\n"
""));

        horizontalLayout_4->addWidget(graphSelector);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        changeTime = new QComboBox(ui_transactions);
        changeTime->setObjectName(QStringLiteral("changeTime"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(changeTime->sizePolicy().hasHeightForWidth());
        changeTime->setSizePolicy(sizePolicy4);
        changeTime->setMinimumSize(QSize(150, 40));
        changeTime->setMaximumSize(QSize(150, 40));
        QFont font4;
        font4.setFamily(QStringLiteral("Ubuntu"));
        font4.setPointSize(10);
        changeTime->setFont(font4);
        changeTime->setStyleSheet(QLatin1String("QComboBox {\n"
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

        horizontalLayout_4->addWidget(changeTime);

        comboBalance = new QComboBox(ui_transactions);
        comboBalance->setObjectName(QStringLiteral("comboBalance"));
        comboBalance->setMinimumSize(QSize(150, 40));
        comboBalance->setMaximumSize(QSize(150, 40));
        comboBalance->setFont(font4);
        comboBalance->setStyleSheet(QLatin1String("QComboBox {\n"
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

        horizontalLayout_4->addWidget(comboBalance);


        verticalLayout_12->addLayout(horizontalLayout_4);

        line = new QFrame(ui_transactions);
        line->setObjectName(QStringLiteral("line"));
        line->setMinimumSize(QSize(0, 11));
        line->setMaximumSize(QSize(16777215, 11));
        line->setStyleSheet(QLatin1String("color:'#002d3f';\n"
"background:'#002d3f';"));
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::HLine);

        verticalLayout_12->addWidget(line);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 0, -1, -1);
        label_3 = new QLabel(ui_transactions);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font5;
        font5.setFamily(QStringLiteral("Ubuntu"));
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setItalic(false);
        font5.setWeight(75);
        label_3->setFont(font5);
        label_3->setStyleSheet(QStringLiteral("color:\"#0adbf0\";font: 12pt 'Ubuntu';font-weight:bold;"));

        horizontalLayout_5->addWidget(label_3);

        m_price = new QLabel(ui_transactions);
        m_price->setObjectName(QStringLiteral("m_price"));
        QFont font6;
        font6.setFamily(QStringLiteral("Ubuntu"));
        font6.setPointSize(12);
        font6.setBold(false);
        font6.setItalic(false);
        font6.setWeight(50);
        m_price->setFont(font6);
        m_price->setStyleSheet(QStringLiteral("color:WHITE;font: 12pt 'Ubuntu';"));
        m_price->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(m_price);


        verticalLayout_12->addLayout(horizontalLayout_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        graphView = new QCustomPlot(ui_transactions);
        graphView->setObjectName(QStringLiteral("graphView"));
        sizePolicy3.setHeightForWidth(graphView->sizePolicy().hasHeightForWidth());
        graphView->setSizePolicy(sizePolicy3);
        graphView->setStyleSheet(QStringLiteral("background:#102537"));

        verticalLayout_2->addWidget(graphView);


        verticalLayout->addLayout(verticalLayout_2);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));

        verticalLayout->addLayout(verticalLayout_8);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 10);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_4 = new QLabel(ui_transactions);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy5);
        label_4->setFont(font1);
        label_4->setStyleSheet(QStringLiteral("color:gray;font: 11pt 'Ubuntu';"));
        label_4->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_5->addWidget(label_4);

        m_cap = new QLabel(ui_transactions);
        m_cap->setObjectName(QStringLiteral("m_cap"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(m_cap->sizePolicy().hasHeightForWidth());
        m_cap->setSizePolicy(sizePolicy6);
        m_cap->setMaximumSize(QSize(16777215, 28));
        m_cap->setFont(font1);
        m_cap->setStyleSheet(QStringLiteral("color:white;margin-top:-3px;font: 11pt 'Ubuntu';"));
        m_cap->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_5->addWidget(m_cap);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_6 = new QLabel(ui_transactions);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);
        label_6->setStyleSheet(QStringLiteral("color:gray;font: 11pt 'Ubuntu';"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_6);

        m_change = new QLabel(ui_transactions);
        m_change->setObjectName(QStringLiteral("m_change"));
        sizePolicy6.setHeightForWidth(m_change->sizePolicy().hasHeightForWidth());
        m_change->setSizePolicy(sizePolicy6);
        m_change->setFont(font1);
        m_change->setStyleSheet(QStringLiteral("color:white;margin-top:-3px;font: 11pt 'Ubuntu';"));
        m_change->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(m_change);


        horizontalLayout->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_10 = new QLabel(ui_transactions);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font1);
        label_10->setStyleSheet(QStringLiteral("color:gray;font: 11pt 'Ubuntu';"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_10->addWidget(label_10);

        m_volume = new QLabel(ui_transactions);
        m_volume->setObjectName(QStringLiteral("m_volume"));
        sizePolicy6.setHeightForWidth(m_volume->sizePolicy().hasHeightForWidth());
        m_volume->setSizePolicy(sizePolicy6);
        m_volume->setFont(font1);
        m_volume->setStyleSheet(QStringLiteral("color:white;margin-top:-3px;font: 11pt 'Ubuntu';"));
        m_volume->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_10->addWidget(m_volume);


        horizontalLayout->addLayout(verticalLayout_10);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_12->addLayout(verticalLayout);


        verticalLayout_7->addWidget(ui_transactions);


        horizontalLayout_2->addLayout(verticalLayout_7);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        ui_graph = new QWidget(OverviewPage);
        ui_graph->setObjectName(QStringLiteral("ui_graph"));
        sizePolicy2.setHeightForWidth(ui_graph->sizePolicy().hasHeightForWidth());
        ui_graph->setSizePolicy(sizePolicy2);
        ui_graph->setStyleSheet(QLatin1String("background:'#102537';\n"
"margin-top:10px;"));
        verticalLayout_18 = new QVBoxLayout(ui_graph);
        verticalLayout_18->setSpacing(0);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(-1, -1, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_2 = new QLabel(ui_graph);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy7);
        QFont font7;
        font7.setPointSize(14);
        label_2->setFont(font7);
        label_2->setStyleSheet(QLatin1String("color:white;\n"
"font: 14pt 'Ubuntu';"));
        label_2->setTextFormat(Qt::RichText);

        horizontalLayout_7->addWidget(label_2);

        moreButton = new QPushButton(ui_graph);
        moreButton->setObjectName(QStringLiteral("moreButton"));
        moreButton->setMinimumSize(QSize(130, 0));
        moreButton->setMaximumSize(QSize(130, 16777215));
        moreButton->setFont(font1);
        moreButton->setStyleSheet(QLatin1String("QPushButton { \n"
" background-color: \"#0d2131\";\n"
"	border:2px solid #1d2e3f;\n"
"color:#eeeeee;\n"
"padding:5px;\n"
"	outline: none;\n"
"border-radius:2px;\n"
"margin-right:9px;\n"
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
        moreButton->setFlat(false);

        horizontalLayout_7->addWidget(moreButton);


        verticalLayout_18->addLayout(horizontalLayout_7);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        scrollArea = new QScrollArea(ui_graph);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setStyleSheet(QLatin1String("QScrollArea{border:0px;margin:0px;outline:none;}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"\n"
"width:9px;\n"
"outline:none;\n"
"}\n"
"QScrollBar::handle:vertical\n"
"{\n"
"background: rgb(0, 51, 78);\n"
"width:9px;\n"
"outline:none;\n"
"\n"
"}\n"
"QScrollBar::handle:vertical:hover\n"
"{\n"
"background: rgb(0, 67, 97);\n"
"width:9px;\n"
"\n"
"}\n"
"QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical\n"
"{\n"
"\n"
"height:0px;\n"
"}\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical\n"
"{\n"
"\n"
"background:#0d2131;\n"
"outline:none;\n"
"}\n"
""));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 524, 558));
        sizePolicy3.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy3);
        verticalLayout_19 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_19->setSpacing(0);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        listTransactions = new ListTransactions(scrollAreaWidgetContents);
        listTransactions->setObjectName(QStringLiteral("listTransactions"));
        sizePolicy2.setHeightForWidth(listTransactions->sizePolicy().hasHeightForWidth());
        listTransactions->setSizePolicy(sizePolicy2);
        listTransactions->setStyleSheet(QStringLiteral("border:0px;"));
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        listTransactions->setAutoScroll(false);

        verticalLayout_19->addWidget(listTransactions);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_19->addItem(verticalSpacer_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea);


        verticalLayout_18->addLayout(verticalLayout_4);


        verticalLayout_6->addWidget(ui_graph);


        horizontalLayout_2->addLayout(verticalLayout_6);


        verticalLayout_11->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_11);

#ifndef QT_NO_SHORTCUT
#endif // QT_NO_SHORTCUT

        retranslateUi(OverviewPage);

        changeTime->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", 0));
        groupBox_3->setTitle(QString());
        gp3->setTitle(QString());
        label_8->setText(QApplication::translate("OverviewPage", "STAKED", 0));
        labelStake->setText(QApplication::translate("OverviewPage", "0", 0));
        gp2->setTitle(QString());
        label_5->setText(QApplication::translate("OverviewPage", "BALANCE", 0));
        labelBalance->setText(QApplication::translate("OverviewPage", "0", 0));
        balanceLabel->setText(QApplication::translate("OverviewPage", "$ 0.0", 0));
        gp1->setTitle(QString());
        label_7->setText(QApplication::translate("OverviewPage", "UNCONFIRMED", 0));
        labelUnconfirmed->setText(QApplication::translate("OverviewPage", "0", 0));
        label_11->setText(QApplication::translate("OverviewPage", "<img src=\":/images/res/images/graph.png\">", 0));
        changeTime->setCurrentText(QString());
        label_3->setText(QApplication::translate("OverviewPage", "SHARD/USD", 0));
        m_price->setText(QApplication::translate("OverviewPage", "$ 0.00 / SHARD", 0));
        label_4->setText(QApplication::translate("OverviewPage", "MCAP:", 0));
        m_cap->setText(QApplication::translate("OverviewPage", "$ 0.00", 0));
        label_6->setText(QApplication::translate("OverviewPage", "Change (24h):", 0));
        m_change->setText(QApplication::translate("OverviewPage", "$ 0.00", 0));
        label_10->setText(QApplication::translate("OverviewPage", "Volume (24h):", 0));
        m_volume->setText(QApplication::translate("OverviewPage", "$ 0.00", 0));
        label_2->setText(QApplication::translate("OverviewPage", "<html><head/><body><p><img src=\":/images/res/images/transactions.png\"/>\302\240\302\240\302\240\302\240Transactions List</p></body></html>", 0));
        moreButton->setText(QApplication::translate("OverviewPage", "View More", 0));
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
