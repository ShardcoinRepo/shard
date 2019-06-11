/********************************************************************************
** Form generated from reading UI file 'sendcoinsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDCOINSDIALOG_H
#define UI_SENDCOINSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <custombutton.h>

QT_BEGIN_NAMESPACE

class Ui_SendCoinsDialog
{
public:
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayoutCoinControl;
    QHBoxLayout *horizontalLayoutCoinControl2;
    QPushButton *pushButtonCoinControl;
    QSpacerItem *horizontalSpacer_4;
    QLabel *shardAddressInvalid;
    QLabel *labelCoinControlInsuffFunds;
    QLabel *labelCoinControlAutomaticallySelected;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *clearButton;
    QWidget *widgetCoinControl;
    QHBoxLayout *horizontalLayout;
    QLabel *labelCoinControlAmountText;
    QLabel *labelCoinControlAmount;
    QSpacerItem *horizontalSpacer;
    QLabel *labelCoinControlFeeText;
    QLabel *labelCoinControlFee;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelCoinControlAmountText_2;
    QLabel *labelCoinControlAfterFee;
    QHBoxLayout *horizontalLayoutCoinControl4;
    QCheckBox *splitBlockCheckBox;
    QLineEdit *splitBlockLineEdit;
    QLabel *labelBlockSizeText;
    QLabel *labelBlockSize;
    QLabel *labelCoinControlChangeLabel;
    QLabel *labelCoinControlChangeText;
    QLabel *labelCoinControlChange;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBoxCoinControlChange;
    QLineEdit *lineEditCoinControlChange;
    CustomButton *sendButton;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *entries;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *addButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SendCoinsDialog)
    {
        if (SendCoinsDialog->objectName().isEmpty())
            SendCoinsDialog->setObjectName(QStringLiteral("SendCoinsDialog"));
        SendCoinsDialog->setEnabled(true);
        SendCoinsDialog->resize(860, 612);
        SendCoinsDialog->setAutoFillBackground(false);
        SendCoinsDialog->setStyleSheet(QStringLiteral("background:#0b1d2c"));
        horizontalLayout_3 = new QHBoxLayout(SendCoinsDialog);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(10, 0, 10, 10);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(10);
        gridLayout->setContentsMargins(0, -1, -1, 0);
        groupBox_3 = new QGroupBox(SendCoinsDialog);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        groupBox_3->setStyleSheet(QStringLiteral("background:'#102537';margin:-2px;"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(groupBox_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMaximumSize(QSize(16777215, 150));
        groupBox->setStyleSheet(QStringLiteral("background:#102537"));
        verticalLayoutCoinControl = new QVBoxLayout(groupBox);
        verticalLayoutCoinControl->setSpacing(3);
        verticalLayoutCoinControl->setObjectName(QStringLiteral("verticalLayoutCoinControl"));
        verticalLayoutCoinControl->setContentsMargins(20, 10, 20, 10);
        horizontalLayoutCoinControl2 = new QHBoxLayout();
        horizontalLayoutCoinControl2->setSpacing(0);
        horizontalLayoutCoinControl2->setObjectName(QStringLiteral("horizontalLayoutCoinControl2"));
        horizontalLayoutCoinControl2->setContentsMargins(0, 0, 0, 0);
        pushButtonCoinControl = new QPushButton(groupBox);
        pushButtonCoinControl->setObjectName(QStringLiteral("pushButtonCoinControl"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonCoinControl->sizePolicy().hasHeightForWidth());
        pushButtonCoinControl->setSizePolicy(sizePolicy1);
        pushButtonCoinControl->setMinimumSize(QSize(120, 30));
        pushButtonCoinControl->setMaximumSize(QSize(120, 30));
        QFont font;
        font.setPointSize(10);
        font.setItalic(false);
        pushButtonCoinControl->setFont(font);
        pushButtonCoinControl->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color: \"#0d2131\";\n"
"	border:4px solid #1d2e3f;\n"
"color:#eeeeee;\n"
"padding:5px;\n"
"	outline: none;\n"
"border-radius:2px;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"   background-color: \"#1d2e3f\";\n"
"border:4px solid gray;\n"
"	color:white;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: \"#102537\";\n"
"	border:4px solid #0f3e54;\n"
" }\n"
"QPushButton:checked {\n"
"     background-color: \"#0d2131\";\n"
"border:4px solid #0f3e54;\n"
"	color:white;\n"
"\n"
" }\n"
"QPushButton:disabled {\n"
"    background:'#0b1d2c';\n"
"color:gray;\n"
"border:4px solid #102537;\n"
" }\n"
""));

        horizontalLayoutCoinControl2->addWidget(pushButtonCoinControl);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutCoinControl2->addItem(horizontalSpacer_4);

        shardAddressInvalid = new QLabel(groupBox);
        shardAddressInvalid->setObjectName(QStringLiteral("shardAddressInvalid"));
        shardAddressInvalid->setStyleSheet(QStringLiteral("color:red;font-weight:bold;"));

        horizontalLayoutCoinControl2->addWidget(shardAddressInvalid);

        labelCoinControlInsuffFunds = new QLabel(groupBox);
        labelCoinControlInsuffFunds->setObjectName(QStringLiteral("labelCoinControlInsuffFunds"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelCoinControlInsuffFunds->sizePolicy().hasHeightForWidth());
        labelCoinControlInsuffFunds->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        labelCoinControlInsuffFunds->setFont(font1);
        labelCoinControlInsuffFunds->setStyleSheet(QStringLiteral("color:red;font-weight:bold;"));
        labelCoinControlInsuffFunds->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelCoinControlInsuffFunds->setMargin(5);

        horizontalLayoutCoinControl2->addWidget(labelCoinControlInsuffFunds);

        labelCoinControlAutomaticallySelected = new QLabel(groupBox);
        labelCoinControlAutomaticallySelected->setObjectName(QStringLiteral("labelCoinControlAutomaticallySelected"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(labelCoinControlAutomaticallySelected->sizePolicy().hasHeightForWidth());
        labelCoinControlAutomaticallySelected->setSizePolicy(sizePolicy3);
        labelCoinControlAutomaticallySelected->setMaximumSize(QSize(0, 16777215));
        labelCoinControlAutomaticallySelected->setStyleSheet(QStringLiteral("color:#72909e;visible:false;"));
        labelCoinControlAutomaticallySelected->setMargin(5);

        horizontalLayoutCoinControl2->addWidget(labelCoinControlAutomaticallySelected);

        horizontalSpacer_2 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayoutCoinControl2->addItem(horizontalSpacer_2);

        clearButton = new QPushButton(groupBox);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        sizePolicy.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy);
        clearButton->setMinimumSize(QSize(120, 30));
        clearButton->setMaximumSize(QSize(120, 30));
        QFont font2;
        font2.setPointSize(10);
        clearButton->setFont(font2);
        clearButton->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color: \"#0d2131\";\n"
"	border:4px solid #1d2e3f;\n"
"color:#eeeeee;\n"
"padding:5px;\n"
"	outline: none;\n"
"border-radius:2px;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"   background-color: \"#1d2e3f\";\n"
"border:4px solid gray;\n"
"	color:white;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: \"#102537\";\n"
"	border:4px solid #0f3e54;\n"
" }\n"
"QPushButton:checked {\n"
"     background-color: \"#0d2131\";\n"
"border:4px solid #0f3e54;\n"
"	color:white;\n"
"\n"
" }\n"
"QPushButton:disabled {\n"
"    background:'#0b1d2c';\n"
"color:gray;\n"
"border:4px solid #102537;\n"
" }\n"
""));
        clearButton->setAutoRepeatDelay(300);
        clearButton->setAutoDefault(false);

        horizontalLayoutCoinControl2->addWidget(clearButton);


        verticalLayoutCoinControl->addLayout(horizontalLayoutCoinControl2);

        widgetCoinControl = new QWidget(groupBox);
        widgetCoinControl->setObjectName(QStringLiteral("widgetCoinControl"));
        widgetCoinControl->setStyleSheet(QStringLiteral("background:transparent"));
        horizontalLayout = new QHBoxLayout(widgetCoinControl);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 10, 0, -1);
        labelCoinControlAmountText = new QLabel(widgetCoinControl);
        labelCoinControlAmountText->setObjectName(QStringLiteral("labelCoinControlAmountText"));
        sizePolicy2.setHeightForWidth(labelCoinControlAmountText->sizePolicy().hasHeightForWidth());
        labelCoinControlAmountText->setSizePolicy(sizePolicy2);
        labelCoinControlAmountText->setMinimumSize(QSize(0, 21));
        labelCoinControlAmountText->setMaximumSize(QSize(16777215, 21));
        labelCoinControlAmountText->setFont(font1);
        labelCoinControlAmountText->setStyleSheet(QStringLiteral("font-weight:bold;color:#72909e;margin-top:2px;margin-right:5px"));
        labelCoinControlAmountText->setMargin(0);

        horizontalLayout->addWidget(labelCoinControlAmountText);

        labelCoinControlAmount = new QLabel(widgetCoinControl);
        labelCoinControlAmount->setObjectName(QStringLiteral("labelCoinControlAmount"));
        sizePolicy2.setHeightForWidth(labelCoinControlAmount->sizePolicy().hasHeightForWidth());
        labelCoinControlAmount->setSizePolicy(sizePolicy2);
        labelCoinControlAmount->setMinimumSize(QSize(0, 21));
        labelCoinControlAmount->setMaximumSize(QSize(16777215, 21));
        QFont font3;
        font3.setFamily(QStringLiteral("Ubuntu"));
        font3.setPointSize(10);
        labelCoinControlAmount->setFont(font3);
        labelCoinControlAmount->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlAmount->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlAmount->setStyleSheet(QStringLiteral("color:#72909e;margin-right:15px"));
        labelCoinControlAmount->setText(QStringLiteral("0.00 SHARD"));
        labelCoinControlAmount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(labelCoinControlAmount);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelCoinControlFeeText = new QLabel(widgetCoinControl);
        labelCoinControlFeeText->setObjectName(QStringLiteral("labelCoinControlFeeText"));
        sizePolicy2.setHeightForWidth(labelCoinControlFeeText->sizePolicy().hasHeightForWidth());
        labelCoinControlFeeText->setSizePolicy(sizePolicy2);
        labelCoinControlFeeText->setMinimumSize(QSize(0, 21));
        labelCoinControlFeeText->setMaximumSize(QSize(16777215, 21));
        labelCoinControlFeeText->setFont(font1);
        labelCoinControlFeeText->setStyleSheet(QStringLiteral("font-weight:bold;color:#72909e;margin-top:2px;margin-right:5px"));
        labelCoinControlFeeText->setMargin(0);

        horizontalLayout->addWidget(labelCoinControlFeeText);

        labelCoinControlFee = new QLabel(widgetCoinControl);
        labelCoinControlFee->setObjectName(QStringLiteral("labelCoinControlFee"));
        sizePolicy2.setHeightForWidth(labelCoinControlFee->sizePolicy().hasHeightForWidth());
        labelCoinControlFee->setSizePolicy(sizePolicy2);
        labelCoinControlFee->setMinimumSize(QSize(0, 21));
        labelCoinControlFee->setMaximumSize(QSize(16777215, 21));
        QFont font4;
        font4.setFamily(QStringLiteral("Ubuntu"));
        font4.setPointSize(10);
        font4.setItalic(false);
        labelCoinControlFee->setFont(font4);
        labelCoinControlFee->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlFee->setStyleSheet(QStringLiteral("color:#72909e;margin-right:15px"));
        labelCoinControlFee->setText(QStringLiteral("0.00 SHARD"));
        labelCoinControlFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(labelCoinControlFee);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        labelCoinControlAmountText_2 = new QLabel(widgetCoinControl);
        labelCoinControlAmountText_2->setObjectName(QStringLiteral("labelCoinControlAmountText_2"));
        sizePolicy2.setHeightForWidth(labelCoinControlAmountText_2->sizePolicy().hasHeightForWidth());
        labelCoinControlAmountText_2->setSizePolicy(sizePolicy2);
        labelCoinControlAmountText_2->setMinimumSize(QSize(0, 21));
        labelCoinControlAmountText_2->setMaximumSize(QSize(16777215, 21));
        labelCoinControlAmountText_2->setFont(font1);
        labelCoinControlAmountText_2->setStyleSheet(QStringLiteral("font-weight:bold;color:#72909e;margin-right:5px;margin-top:2px;"));
        labelCoinControlAmountText_2->setMargin(0);

        horizontalLayout->addWidget(labelCoinControlAmountText_2);

        labelCoinControlAfterFee = new QLabel(widgetCoinControl);
        labelCoinControlAfterFee->setObjectName(QStringLiteral("labelCoinControlAfterFee"));
        sizePolicy2.setHeightForWidth(labelCoinControlAfterFee->sizePolicy().hasHeightForWidth());
        labelCoinControlAfterFee->setSizePolicy(sizePolicy2);
        labelCoinControlAfterFee->setMinimumSize(QSize(0, 21));
        labelCoinControlAfterFee->setMaximumSize(QSize(16777215, 21));
        labelCoinControlAfterFee->setFont(font3);
        labelCoinControlAfterFee->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlAfterFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlAfterFee->setStyleSheet(QStringLiteral("color:#72909e;"));
        labelCoinControlAfterFee->setText(QStringLiteral("0.00 SHARD"));
        labelCoinControlAfterFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(labelCoinControlAfterFee);


        verticalLayoutCoinControl->addWidget(widgetCoinControl);

        horizontalLayoutCoinControl4 = new QHBoxLayout();
        horizontalLayoutCoinControl4->setSpacing(24);
        horizontalLayoutCoinControl4->setObjectName(QStringLiteral("horizontalLayoutCoinControl4"));
        horizontalLayoutCoinControl4->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayoutCoinControl4->setContentsMargins(0, 0, 0, 5);
        splitBlockCheckBox = new QCheckBox(groupBox);
        splitBlockCheckBox->setObjectName(QStringLiteral("splitBlockCheckBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(splitBlockCheckBox->sizePolicy().hasHeightForWidth());
        splitBlockCheckBox->setSizePolicy(sizePolicy4);
        splitBlockCheckBox->setMinimumSize(QSize(0, 28));
        splitBlockCheckBox->setStyleSheet(QLatin1String("QCheckBox {color:#72909e;}\n"
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

        horizontalLayoutCoinControl4->addWidget(splitBlockCheckBox);

        splitBlockLineEdit = new QLineEdit(groupBox);
        splitBlockLineEdit->setObjectName(QStringLiteral("splitBlockLineEdit"));
        splitBlockLineEdit->setEnabled(false);
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(splitBlockLineEdit->sizePolicy().hasHeightForWidth());
        splitBlockLineEdit->setSizePolicy(sizePolicy5);
        splitBlockLineEdit->setMinimumSize(QSize(0, 0));
        splitBlockLineEdit->setMaximumSize(QSize(16777215, 16777215));
        splitBlockLineEdit->setFont(font2);
        splitBlockLineEdit->setStyleSheet(QLatin1String("background:#1d2e3f;\n"
"color:white;\n"
"padding:5px;\n"
"border:1px solid #1d2e3f;\n"
"border-radius:10px;\n"
"font: 10pt 'Ubuntu';"));

        horizontalLayoutCoinControl4->addWidget(splitBlockLineEdit);

        labelBlockSizeText = new QLabel(groupBox);
        labelBlockSizeText->setObjectName(QStringLiteral("labelBlockSizeText"));
        labelBlockSizeText->setEnabled(false);
        sizePolicy.setHeightForWidth(labelBlockSizeText->sizePolicy().hasHeightForWidth());
        labelBlockSizeText->setSizePolicy(sizePolicy);
        labelBlockSizeText->setMinimumSize(QSize(0, 28));
        labelBlockSizeText->setFont(font1);
        labelBlockSizeText->setStyleSheet(QStringLiteral("color:#72909e;"));

        horizontalLayoutCoinControl4->addWidget(labelBlockSizeText);

        labelBlockSize = new QLabel(groupBox);
        labelBlockSize->setObjectName(QStringLiteral("labelBlockSize"));
        labelBlockSize->setEnabled(false);
        sizePolicy1.setHeightForWidth(labelBlockSize->sizePolicy().hasHeightForWidth());
        labelBlockSize->setSizePolicy(sizePolicy1);
        labelBlockSize->setMinimumSize(QSize(0, 28));
        labelBlockSize->setFont(font4);
        labelBlockSize->setStyleSheet(QStringLiteral("color:#72909e;"));

        horizontalLayoutCoinControl4->addWidget(labelBlockSize);

        labelCoinControlChangeLabel = new QLabel(groupBox);
        labelCoinControlChangeLabel->setObjectName(QStringLiteral("labelCoinControlChangeLabel"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(labelCoinControlChangeLabel->sizePolicy().hasHeightForWidth());
        labelCoinControlChangeLabel->setSizePolicy(sizePolicy6);
        labelCoinControlChangeLabel->setMinimumSize(QSize(0, 0));
        labelCoinControlChangeLabel->setMargin(3);

        horizontalLayoutCoinControl4->addWidget(labelCoinControlChangeLabel);

        labelCoinControlChangeText = new QLabel(groupBox);
        labelCoinControlChangeText->setObjectName(QStringLiteral("labelCoinControlChangeText"));
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(labelCoinControlChangeText->sizePolicy().hasHeightForWidth());
        labelCoinControlChangeText->setSizePolicy(sizePolicy7);
        labelCoinControlChangeText->setMinimumSize(QSize(0, 28));
        labelCoinControlChangeText->setStyleSheet(QStringLiteral("font-weight:bold;color:white;margin-right:5px;color:#72909e;"));

        horizontalLayoutCoinControl4->addWidget(labelCoinControlChangeText);

        labelCoinControlChange = new QLabel(groupBox);
        labelCoinControlChange->setObjectName(QStringLiteral("labelCoinControlChange"));
        QSizePolicy sizePolicy8(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(labelCoinControlChange->sizePolicy().hasHeightForWidth());
        labelCoinControlChange->setSizePolicy(sizePolicy8);
        labelCoinControlChange->setMinimumSize(QSize(0, 28));
        labelCoinControlChange->setFont(font3);
        labelCoinControlChange->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlChange->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlChange->setStyleSheet(QStringLiteral("color:#72909e;"));
        labelCoinControlChange->setText(QStringLiteral("0.00 SHARD"));
        labelCoinControlChange->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayoutCoinControl4->addWidget(labelCoinControlChange);


        verticalLayoutCoinControl->addLayout(horizontalLayoutCoinControl4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(20);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, -1);
        checkBoxCoinControlChange = new QCheckBox(groupBox);
        checkBoxCoinControlChange->setObjectName(QStringLiteral("checkBoxCoinControlChange"));
        sizePolicy1.setHeightForWidth(checkBoxCoinControlChange->sizePolicy().hasHeightForWidth());
        checkBoxCoinControlChange->setSizePolicy(sizePolicy1);
        checkBoxCoinControlChange->setMinimumSize(QSize(0, 28));
        checkBoxCoinControlChange->setStyleSheet(QLatin1String("QCheckBox {color:#72909e;}\n"
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

        horizontalLayout_4->addWidget(checkBoxCoinControlChange);

        lineEditCoinControlChange = new QLineEdit(groupBox);
        lineEditCoinControlChange->setObjectName(QStringLiteral("lineEditCoinControlChange"));
        lineEditCoinControlChange->setEnabled(false);
        sizePolicy5.setHeightForWidth(lineEditCoinControlChange->sizePolicy().hasHeightForWidth());
        lineEditCoinControlChange->setSizePolicy(sizePolicy5);
        lineEditCoinControlChange->setMinimumSize(QSize(0, 0));
        lineEditCoinControlChange->setMaximumSize(QSize(16777215, 16777215));
        lineEditCoinControlChange->setFont(font2);
        lineEditCoinControlChange->setStyleSheet(QLatin1String("background:#1d2e3f;\n"
"color:white;\n"
"padding:5px;\n"
"border:1px solid #1d2e3f;\n"
"border-radius:10px;\n"
"font: 10pt 'Ubuntu';"));

        horizontalLayout_4->addWidget(lineEditCoinControlChange);


        verticalLayoutCoinControl->addLayout(horizontalLayout_4);


        horizontalLayout_2->addWidget(groupBox);

        sendButton = new CustomButton(groupBox_3);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setEnabled(true);
        sendButton->setMinimumSize(QSize(120, 150));
        sendButton->setMaximumSize(QSize(120, 150));
        sendButton->setCursor(QCursor(Qt::ArrowCursor));
        sendButton->setMouseTracking(true);
        sendButton->setStyleSheet(QStringLiteral("background:#0d2131;margin:0px;border:0px;"));
        verticalLayout = new QVBoxLayout(sendButton);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        horizontalLayout_2->addWidget(sendButton);


        gridLayout->addWidget(groupBox_3, 0, 0, 1, 1);

        scrollArea = new QScrollArea(SendCoinsDialog);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        QPalette palette;
        QBrush brush(QColor(11, 29, 44, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        scrollArea->setPalette(palette);
        scrollArea->setAutoFillBackground(true);
        scrollArea->setStyleSheet(QLatin1String("QScrollArea{border:0px;margin:0px;outline:none;background:\"#0b1d2c\";}\n"
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
"\n"
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
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 838, 422));
        scrollAreaWidgetContents->setStyleSheet(QStringLiteral("background:\"#0b1d2c\";"));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        entries = new QVBoxLayout();
        entries->setObjectName(QStringLiteral("entries"));

        verticalLayout_2->addLayout(entries);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 25, -1, 0);
        addButton = new QPushButton(scrollAreaWidgetContents);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setMinimumSize(QSize(65, 65));
        addButton->setMaximumSize(QSize(65, 65));
        addButton->setStyleSheet(QLatin1String("border:0px;\n"
"background-image:url(:/images/res/images/add.png);\n"
"background-repeat:no-repeat;\n"
"background-position: center;\n"
"background-attachment:fixed;\n"
"\n"
"background-size:cover;\n"
"outline: none;\n"
"background-color:transparent\n"
""));

        horizontalLayout_5->addWidget(addButton);


        verticalLayout_2->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 1, 0, 1, 1);


        horizontalLayout_3->addLayout(gridLayout);


        retranslateUi(SendCoinsDialog);

        QMetaObject::connectSlotsByName(SendCoinsDialog);
    } // setupUi

    void retranslateUi(QWidget *SendCoinsDialog)
    {
        SendCoinsDialog->setWindowTitle(QApplication::translate("SendCoinsDialog", "Send Coins", 0));
        groupBox_3->setTitle(QString());
        pushButtonCoinControl->setText(QApplication::translate("SendCoinsDialog", "Inputs...", 0));
        shardAddressInvalid->setText(QApplication::translate("SendCoinsDialog", "WARNING: Invalid Shard Address", 0));
        labelCoinControlInsuffFunds->setText(QApplication::translate("SendCoinsDialog", "Insufficient funds!", 0));
        labelCoinControlAutomaticallySelected->setText(QApplication::translate("SendCoinsDialog", "automatically selected", 0));
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("SendCoinsDialog", "Remove all transaction fields", 0));
#endif // QT_NO_TOOLTIP
        clearButton->setText(QApplication::translate("SendCoinsDialog", "Clear &All", 0));
        labelCoinControlAmountText->setText(QApplication::translate("SendCoinsDialog", "Amount:", 0));
        labelCoinControlFeeText->setText(QApplication::translate("SendCoinsDialog", "Fee:", 0));
        labelCoinControlAmountText_2->setText(QApplication::translate("SendCoinsDialog", "After Fee:", 0));
        splitBlockCheckBox->setText(QApplication::translate("SendCoinsDialog", "SplitBlock  ", 0));
        labelBlockSizeText->setText(QApplication::translate("SendCoinsDialog", "Block Size:", 0));
        labelBlockSize->setText(QApplication::translate("SendCoinsDialog", "0.00 SHARD", 0));
        labelCoinControlChangeLabel->setText(QString());
        labelCoinControlChangeText->setText(QApplication::translate("SendCoinsDialog", "Change:", 0));
        checkBoxCoinControlChange->setText(QApplication::translate("SendCoinsDialog", "Custom Change Address   ", 0));
        addButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SendCoinsDialog: public Ui_SendCoinsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDCOINSDIALOG_H
