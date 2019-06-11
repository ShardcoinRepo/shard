/********************************************************************************
** Form generated from reading UI file 'coincontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COINCONTROLDIALOG_H
#define UI_COINCONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "coincontroltreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_CoinControlDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayoutTop;
    QFormLayout *formLayoutCoinControl1;
    QLabel *labelCoinControlQuantityText;
    QLabel *labelCoinControlQuantity;
    QLabel *labelCoinControlBytesText;
    QLabel *labelCoinControlBytes;
    QFormLayout *formLayoutCoinControl2;
    QLabel *labelCoinControlAmountText;
    QLabel *labelCoinControlAmount;
    QFormLayout *formLayoutCoinControl3;
    QLabel *labelCoinControlFeeText;
    QLabel *labelCoinControlFee;
    QLabel *labelCoinControlLowOutputText;
    QLabel *labelCoinControlLowOutput;
    QFormLayout *formLayoutCoinControl4;
    QLabel *labelCoinControlAfterFeeText;
    QLabel *labelCoinControlAfterFee;
    QLabel *labelCoinControlChangeText;
    QLabel *labelCoinControlChange;
    QFrame *frame;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayoutPanel;
    QPushButton *pushButtonSelectAll;
    QRadioButton *radioTreeMode;
    QRadioButton *radioListMode;
    QLabel *labelLocked;
    QPushButton *pushButtonCustomCC;
    QComboBox *QComboBoxFilterCoins;
    QLineEdit *lineEditCustomCC;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    CoinControlTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CoinControlDialog)
    {
        if (CoinControlDialog->objectName().isEmpty())
            CoinControlDialog->setObjectName(QStringLiteral("CoinControlDialog"));
        CoinControlDialog->resize(1132, 518);
        CoinControlDialog->setStyleSheet(QStringLiteral("background:'#102537';"));
        verticalLayout = new QVBoxLayout(CoinControlDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayoutTop = new QHBoxLayout();
        horizontalLayoutTop->setObjectName(QStringLiteral("horizontalLayoutTop"));
        horizontalLayoutTop->setContentsMargins(-1, 0, -1, 10);
        formLayoutCoinControl1 = new QFormLayout();
        formLayoutCoinControl1->setObjectName(QStringLiteral("formLayoutCoinControl1"));
        formLayoutCoinControl1->setHorizontalSpacing(10);
        formLayoutCoinControl1->setVerticalSpacing(10);
        formLayoutCoinControl1->setContentsMargins(6, -1, 6, -1);
        labelCoinControlQuantityText = new QLabel(CoinControlDialog);
        labelCoinControlQuantityText->setObjectName(QStringLiteral("labelCoinControlQuantityText"));
        labelCoinControlQuantityText->setStyleSheet(QStringLiteral("font-weight:bold;color:white;"));

        formLayoutCoinControl1->setWidget(0, QFormLayout::LabelRole, labelCoinControlQuantityText);

        labelCoinControlQuantity = new QLabel(CoinControlDialog);
        labelCoinControlQuantity->setObjectName(QStringLiteral("labelCoinControlQuantity"));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        labelCoinControlQuantity->setFont(font);
        labelCoinControlQuantity->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlQuantity->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlQuantity->setStyleSheet(QStringLiteral("color:#72909e;font:12px 'Ubuntu';padding:2px"));
        labelCoinControlQuantity->setText(QStringLiteral("0"));
        labelCoinControlQuantity->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl1->setWidget(0, QFormLayout::FieldRole, labelCoinControlQuantity);

        labelCoinControlBytesText = new QLabel(CoinControlDialog);
        labelCoinControlBytesText->setObjectName(QStringLiteral("labelCoinControlBytesText"));
        labelCoinControlBytesText->setStyleSheet(QStringLiteral("font-weight:bold;color:white;"));

        formLayoutCoinControl1->setWidget(1, QFormLayout::LabelRole, labelCoinControlBytesText);

        labelCoinControlBytes = new QLabel(CoinControlDialog);
        labelCoinControlBytes->setObjectName(QStringLiteral("labelCoinControlBytes"));
        labelCoinControlBytes->setFont(font);
        labelCoinControlBytes->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlBytes->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlBytes->setStyleSheet(QStringLiteral("color:#72909e;font:12px 'Ubuntu';padding:2px"));
        labelCoinControlBytes->setText(QStringLiteral("0"));
        labelCoinControlBytes->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl1->setWidget(1, QFormLayout::FieldRole, labelCoinControlBytes);


        horizontalLayoutTop->addLayout(formLayoutCoinControl1);

        formLayoutCoinControl2 = new QFormLayout();
        formLayoutCoinControl2->setObjectName(QStringLiteral("formLayoutCoinControl2"));
        formLayoutCoinControl2->setHorizontalSpacing(10);
        formLayoutCoinControl2->setVerticalSpacing(10);
        formLayoutCoinControl2->setContentsMargins(6, -1, 6, -1);
        labelCoinControlAmountText = new QLabel(CoinControlDialog);
        labelCoinControlAmountText->setObjectName(QStringLiteral("labelCoinControlAmountText"));
        labelCoinControlAmountText->setStyleSheet(QStringLiteral("font-weight:bold;color:white;"));

        formLayoutCoinControl2->setWidget(0, QFormLayout::LabelRole, labelCoinControlAmountText);

        labelCoinControlAmount = new QLabel(CoinControlDialog);
        labelCoinControlAmount->setObjectName(QStringLiteral("labelCoinControlAmount"));
        labelCoinControlAmount->setFont(font);
        labelCoinControlAmount->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlAmount->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlAmount->setStyleSheet(QStringLiteral("color:#72909e;font:12px 'Ubuntu';padding:2px"));
        labelCoinControlAmount->setText(QStringLiteral("0.00 SHARD"));
        labelCoinControlAmount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl2->setWidget(0, QFormLayout::FieldRole, labelCoinControlAmount);


        horizontalLayoutTop->addLayout(formLayoutCoinControl2);

        formLayoutCoinControl3 = new QFormLayout();
        formLayoutCoinControl3->setObjectName(QStringLiteral("formLayoutCoinControl3"));
        formLayoutCoinControl3->setHorizontalSpacing(10);
        formLayoutCoinControl3->setVerticalSpacing(10);
        formLayoutCoinControl3->setContentsMargins(6, -1, 6, -1);
        labelCoinControlFeeText = new QLabel(CoinControlDialog);
        labelCoinControlFeeText->setObjectName(QStringLiteral("labelCoinControlFeeText"));
        labelCoinControlFeeText->setStyleSheet(QStringLiteral("font-weight:bold;color:white;"));

        formLayoutCoinControl3->setWidget(0, QFormLayout::LabelRole, labelCoinControlFeeText);

        labelCoinControlFee = new QLabel(CoinControlDialog);
        labelCoinControlFee->setObjectName(QStringLiteral("labelCoinControlFee"));
        labelCoinControlFee->setFont(font);
        labelCoinControlFee->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlFee->setStyleSheet(QStringLiteral("color:#72909e;font:12px 'Ubuntu';padding:2px"));
        labelCoinControlFee->setText(QStringLiteral("0.00 SHARD"));
        labelCoinControlFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl3->setWidget(0, QFormLayout::FieldRole, labelCoinControlFee);

        labelCoinControlLowOutputText = new QLabel(CoinControlDialog);
        labelCoinControlLowOutputText->setObjectName(QStringLiteral("labelCoinControlLowOutputText"));
        labelCoinControlLowOutputText->setEnabled(false);
        labelCoinControlLowOutputText->setStyleSheet(QStringLiteral("font-weight:bold;color:white;"));

        formLayoutCoinControl3->setWidget(1, QFormLayout::LabelRole, labelCoinControlLowOutputText);

        labelCoinControlLowOutput = new QLabel(CoinControlDialog);
        labelCoinControlLowOutput->setObjectName(QStringLiteral("labelCoinControlLowOutput"));
        labelCoinControlLowOutput->setEnabled(false);
        labelCoinControlLowOutput->setFont(font);
        labelCoinControlLowOutput->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlLowOutput->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlLowOutput->setStyleSheet(QStringLiteral("color:#72909e;font:12px 'Ubuntu';padding:2px"));
        labelCoinControlLowOutput->setText(QStringLiteral("No"));
        labelCoinControlLowOutput->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl3->setWidget(1, QFormLayout::FieldRole, labelCoinControlLowOutput);


        horizontalLayoutTop->addLayout(formLayoutCoinControl3);

        formLayoutCoinControl4 = new QFormLayout();
        formLayoutCoinControl4->setObjectName(QStringLiteral("formLayoutCoinControl4"));
        formLayoutCoinControl4->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayoutCoinControl4->setHorizontalSpacing(10);
        formLayoutCoinControl4->setVerticalSpacing(10);
        formLayoutCoinControl4->setContentsMargins(6, -1, 6, -1);
        labelCoinControlAfterFeeText = new QLabel(CoinControlDialog);
        labelCoinControlAfterFeeText->setObjectName(QStringLiteral("labelCoinControlAfterFeeText"));
        labelCoinControlAfterFeeText->setStyleSheet(QStringLiteral("font-weight:bold;color:white;"));

        formLayoutCoinControl4->setWidget(0, QFormLayout::LabelRole, labelCoinControlAfterFeeText);

        labelCoinControlAfterFee = new QLabel(CoinControlDialog);
        labelCoinControlAfterFee->setObjectName(QStringLiteral("labelCoinControlAfterFee"));
        labelCoinControlAfterFee->setFont(font);
        labelCoinControlAfterFee->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlAfterFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlAfterFee->setStyleSheet(QStringLiteral("color:#72909e;font:12px 'Ubuntu';padding:2px"));
        labelCoinControlAfterFee->setText(QStringLiteral("0.00 SHARD"));
        labelCoinControlAfterFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl4->setWidget(0, QFormLayout::FieldRole, labelCoinControlAfterFee);

        labelCoinControlChangeText = new QLabel(CoinControlDialog);
        labelCoinControlChangeText->setObjectName(QStringLiteral("labelCoinControlChangeText"));
        labelCoinControlChangeText->setEnabled(false);
        labelCoinControlChangeText->setStyleSheet(QStringLiteral("font-weight:bold;color:white;"));

        formLayoutCoinControl4->setWidget(1, QFormLayout::LabelRole, labelCoinControlChangeText);

        labelCoinControlChange = new QLabel(CoinControlDialog);
        labelCoinControlChange->setObjectName(QStringLiteral("labelCoinControlChange"));
        labelCoinControlChange->setEnabled(false);
        labelCoinControlChange->setFont(font);
        labelCoinControlChange->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlChange->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlChange->setStyleSheet(QStringLiteral("color:#72909e;font:12px 'Ubuntu';padding:2px"));
        labelCoinControlChange->setText(QStringLiteral("0.00 SHARD"));
        labelCoinControlChange->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl4->setWidget(1, QFormLayout::FieldRole, labelCoinControlChange);


        horizontalLayoutTop->addLayout(formLayoutCoinControl4);


        verticalLayout->addLayout(horizontalLayoutTop);

        frame = new QFrame(CoinControlDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(0, 40));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget = new QWidget(frame);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 1111, 42));
        horizontalLayoutPanel = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayoutPanel->setSpacing(14);
        horizontalLayoutPanel->setObjectName(QStringLiteral("horizontalLayoutPanel"));
        horizontalLayoutPanel->setContentsMargins(0, 0, 0, 0);
        pushButtonSelectAll = new QPushButton(horizontalLayoutWidget);
        pushButtonSelectAll->setObjectName(QStringLiteral("pushButtonSelectAll"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonSelectAll->sizePolicy().hasHeightForWidth());
        pushButtonSelectAll->setSizePolicy(sizePolicy);
        pushButtonSelectAll->setStyleSheet(QLatin1String("QPushButton { \n"
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

        horizontalLayoutPanel->addWidget(pushButtonSelectAll);

        radioTreeMode = new QRadioButton(horizontalLayoutWidget);
        radioTreeMode->setObjectName(QStringLiteral("radioTreeMode"));
        sizePolicy.setHeightForWidth(radioTreeMode->sizePolicy().hasHeightForWidth());
        radioTreeMode->setSizePolicy(sizePolicy);
        radioTreeMode->setStyleSheet(QLatin1String("QRadioButton {\n"
"    spacing: 5px;\n"
"color:white;\n"
"outline:none;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked {\n"
"    image: url(:/images/res/images/radio_unchecked.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover {\n"
"    image: url(:/images/res/images/radio_unchecked_hover.png);\n"
"}\n"
"\n"
"\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    image: url(:/images/res/images/radio_checked.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover {\n"
"    image: url(:/images/res/images/radio_checked_hover.png);\n"
"}\n"
"\n"
"\n"
"QRadioButton::indicator:disabled {\n"
"    image: url(:/images/res/images/radio_disabled.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled:checked {\n"
"    image: url(:/images/res/images/radio_disabled_checked.png);\n"
"}"));
        radioTreeMode->setChecked(true);

        horizontalLayoutPanel->addWidget(radioTreeMode);

        radioListMode = new QRadioButton(horizontalLayoutWidget);
        radioListMode->setObjectName(QStringLiteral("radioListMode"));
        sizePolicy.setHeightForWidth(radioListMode->sizePolicy().hasHeightForWidth());
        radioListMode->setSizePolicy(sizePolicy);
        radioListMode->setStyleSheet(QLatin1String("QRadioButton {\n"
"    spacing: 5px;\n"
"color:white;\n"
"outline:none;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked {\n"
"    image: url(:/images/res/images/radio_unchecked.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover {\n"
"    image: url(:/images/res/images/radio_unchecked_hover.png);\n"
"}\n"
"\n"
"\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    image: url(:/images/res/images/radio_checked.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover {\n"
"    image: url(:/images/res/images/radio_checked_hover.png);\n"
"}\n"
"\n"
"\n"
"QRadioButton::indicator:disabled {\n"
"    image: url(:/images/res/images/radio_disabled.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled:checked {\n"
"    image: url(:/images/res/images/radio_disabled_checked.png);\n"
"}"));

        horizontalLayoutPanel->addWidget(radioListMode);

        labelLocked = new QLabel(horizontalLayoutWidget);
        labelLocked->setObjectName(QStringLiteral("labelLocked"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelLocked->sizePolicy().hasHeightForWidth());
        labelLocked->setSizePolicy(sizePolicy1);
        labelLocked->setStyleSheet(QStringLiteral("color:white;"));
        labelLocked->setText(QStringLiteral("(1 locked)"));

        horizontalLayoutPanel->addWidget(labelLocked);

        pushButtonCustomCC = new QPushButton(horizontalLayoutWidget);
        pushButtonCustomCC->setObjectName(QStringLiteral("pushButtonCustomCC"));
        pushButtonCustomCC->setStyleSheet(QLatin1String("QPushButton { \n"
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

        horizontalLayoutPanel->addWidget(pushButtonCustomCC);

        QComboBoxFilterCoins = new QComboBox(horizontalLayoutWidget);
        QComboBoxFilterCoins->setObjectName(QStringLiteral("QComboBoxFilterCoins"));
        QComboBoxFilterCoins->setMinimumSize(QSize(120, 24));
        QComboBoxFilterCoins->setStyleSheet(QLatin1String("QComboBox {\n"
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

        horizontalLayoutPanel->addWidget(QComboBoxFilterCoins);

        lineEditCustomCC = new QLineEdit(horizontalLayoutWidget);
        lineEditCustomCC->setObjectName(QStringLiteral("lineEditCustomCC"));
        lineEditCustomCC->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEditCustomCC->sizePolicy().hasHeightForWidth());
        lineEditCustomCC->setSizePolicy(sizePolicy2);
        lineEditCustomCC->setBaseSize(QSize(50, 0));
        lineEditCustomCC->setStyleSheet(QLatin1String("background:#1d2e3f;\n"
"color:white;\n"
"padding:2px;\n"
"border-radius:5px;"));

        horizontalLayoutPanel->addWidget(lineEditCustomCC);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutPanel->addItem(horizontalSpacer);


        verticalLayout->addWidget(frame);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        treeWidget = new CoinControlTreeWidget(CoinControlDialog);
        treeWidget->headerItem()->setText(10, QString());
        treeWidget->headerItem()->setText(11, QString());
        treeWidget->headerItem()->setText(12, QString());
        treeWidget->headerItem()->setText(13, QString());
        treeWidget->headerItem()->setText(14, QString());
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        treeWidget->setStyleSheet(QLatin1String("\n"
"QTreeWidget::indicator{\n"
"width:16px;\n"
"height:16px;\n"
"alternate-background-color: #0d2131;\n"
"}\n"
"\n"
"QTreeWidget::indicator:unchecked {\n"
"\n"
"    image: url(:/images/res/images/checkbox_unchecked.png);\n"
"}\n"
"\n"
"QTreeWidget::indicator:unchecked:hover {\n"
"    image: url(:/images/res/images/checkbox_unchecked_hover.png);\n"
"}\n"
"\n"
"QTreeWidget::indicator:unchecked:pressed {\n"
"    image: url(:/images/res/images/checkbox_unchecked_pressed.png);\n"
"}\n"
"\n"
"QTreeWidget::indicator:checked {\n"
"    image: url(:/images/res/images/checkbox_checked.png);\n"
"}\n"
"\n"
"QTreeWidget::indicator:checked:hover {\n"
"    image: url(:/images/res/images/checkbox_checked_hover.png);\n"
"}\n"
"\n"
"QTreeWidget::indicator:checked:pressed {\n"
"    image: url(:/images/res/images/checkbox_checked_pressed.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:indeterminate:hover {\n"
"    image: url(:/images/res/images/checkbox_indeterminate_hover.png);\n"
"}\n"
"\n"
"QTreeWidget::indicator:indeterminate:press"
                        "ed {\n"
"    image: url(:/images/res/images/checkbox_indeterminate_pressed.png);\n"
"}\n"
"QTableView::item:selected{\n"
"background-color: '#1d2e3f';\n"
"color:white;\n"
"}QTreeWidget{background:'#0d2131';\n"
"color:white;\n"
"border:0px;\n"
"selection-background-color: '#1d2e3f';\n"
"\n"
"}\n"
"QTreeWidget::item {\n"
"     border: 1px solid #1d2e3f;\n"
"    border-top-color: transparent;\n"
"    border-bottom-color: transparent;\n"
"}\n"
"\n"
"QTreeWidget::item:hover {\n"
"     background: 1px solid #1d2e3f;\n"
"    color:white;\n"
"}\n"
"QTreeWidget {\n"
"    show-decoration-selected: 1;\n"
"border:0px;\n"
"alternate-background-color: #0d2131;\n"
"}\n"
"\n"
"\n"
"QTreeWidget::item:hover {\n"
"    background: #0f3e54;\n"
"    border: 0px solid #bfcde4;\n"
"}\n"
"\n"
"QTreeWidget::item:selected {\n"
"    border: 0px solid #567dbc;\n"
"background: #0f3e54;\n"
"}\n"
"\n"
"QTreeWidget::item:selected:active{\n"
"    background: #0f3e54;\n"
"}\n"
"\n"
"QTreeWidget::item:selected:!active {\n"
"    background: #0f3e"
                        "54;\n"
"}\n"
"QHeaderView::section\n"
"    {\n"
"    spacing: 10px;\n"
"    background-color:#1d2e3f;\n"
"    color: white;\n"
"    padding:5px;\n"
"    font-weight:bold;\n"
"    font-size:12px;\n"
"    border: 0px;\n"
"    text-align: right;\n"
"    font-family: arial;\n"
"    }\n"
"\n"
"QTreeWidget::branch {\n"
"        background: #0d2131;\n"
"gridline-color:#1d2e3f;\n"
"alternate-background-color: #0d2131;\n"
"\n"
"}\n"
"\n"
"QTreeWidget::branch:has-siblings:!adjoins-item {\n"
"        background: #0d2131;\n"
"}\n"
"\n"
"QTreeWidget::branch:has-siblings:adjoins-item {\n"
"        background: #0d2131;\n"
"}\n"
"\n"
"QTreeWidget::branch:!has-children:!has-siblings:adjoins-item {\n"
"        background: #0d2131;\n"
"}\n"
"\n"
"QTreeWidget::branch:closed:has-children:has-siblings {\n"
"        background-image: url(\":/images/res/images/dropdown.png\");\n"
"background-color: #0d2131;\n"
"background-repeat:no-repeat;\n"
"background-position: center;\n"
"background-attachment:fixed;\n"
"background-size:cover;\n"
""
                        "}\n"
"\n"
"QTreeWidget::branch:has-children:!has-siblings:closed {\n"
"       background-image: url(\":/images/res/images/dropdown.png\");\n"
"background-repeat:no-repeat;\n"
"background-position: center;\n"
"background-attachment:fixed;\n"
"background-size:cover;\n"
"background-color: #0d2131;\n"
"}\n"
"\n"
"QTreeWidget::branch:open:has-children:has-siblings {\n"
"          background-image: url(\":/images/res/images/dropright.png\");\n"
"background-repeat:no-repeat;\n"
"background-position: center;\n"
"background-attachment:fixed;\n"
"background-size:cover;\n"
"background-color: #0d2131;\n"
"}\n"
"\n"
"QTreeWidget::branch:open:has-children:!has-siblings {\n"
"         background-image: url(\":/images/res/images/dropright.png\");\n"
"background-repeat:no-repeat;\n"
"background-position: center;\n"
"background-attachment:fixed;\n"
"background-size:cover;\n"
"background-color: #0d2131;\n"
"}\n"
"QListView{border:0px}\n"
"QScrollArea{border:0px;margin:0px;}\n"
"\n"
"QScrollBar\n"
"{\n"
"background: rgb(3, 32, 52"
                        ");\n"
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
"QScrollBar::add-line,QScrollBar::sub-line\n"
"{\n"
"\n"
"height: 0px;\n"
"}\n"
"\n"
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
"}"));
        treeWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        treeWidget->setSortingEnabled(false);
        treeWidget->setColumnCount(15);
        treeWidget->header()->setProperty("showSortIndicator", QVariant(true));
        treeWidget->header()->setStretchLastSection(false);

        verticalLayout_2->addWidget(treeWidget);


        verticalLayout->addLayout(verticalLayout_2);

        buttonBox = new QDialogButtonBox(CoinControlDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setStyleSheet(QLatin1String("QPushButton { \n"
" background-color: \"#0d2131\";\n"
"	border:2px solid #1d2e3f;\n"
"color:#eeeeee;\n"
"padding:10px;\n"
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
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(CoinControlDialog);

        QMetaObject::connectSlotsByName(CoinControlDialog);
    } // setupUi

    void retranslateUi(QDialog *CoinControlDialog)
    {
        CoinControlDialog->setWindowTitle(QApplication::translate("CoinControlDialog", "Coin Control", 0));
        labelCoinControlQuantityText->setText(QApplication::translate("CoinControlDialog", "Quantity:", 0));
        labelCoinControlBytesText->setText(QApplication::translate("CoinControlDialog", "Bytes:", 0));
        labelCoinControlAmountText->setText(QApplication::translate("CoinControlDialog", "Amount:", 0));
        labelCoinControlFeeText->setText(QApplication::translate("CoinControlDialog", "Fee:", 0));
        labelCoinControlLowOutputText->setText(QApplication::translate("CoinControlDialog", "Low Output:", 0));
        labelCoinControlAfterFeeText->setText(QApplication::translate("CoinControlDialog", "After Fee:", 0));
        labelCoinControlChangeText->setText(QApplication::translate("CoinControlDialog", "Change:", 0));
        pushButtonSelectAll->setText(QApplication::translate("CoinControlDialog", "(un)select all", 0));
        radioTreeMode->setText(QApplication::translate("CoinControlDialog", "Tree mode", 0));
        radioListMode->setText(QApplication::translate("CoinControlDialog", "List mode", 0));
        pushButtonCustomCC->setText(QApplication::translate("CoinControlDialog", "Select Coins", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(9, QApplication::translate("CoinControlDialog", "Date", 0));
        ___qtreewidgetitem->setText(8, QApplication::translate("CoinControlDialog", "Address", 0));
        ___qtreewidgetitem->setText(7, QApplication::translate("CoinControlDialog", "Label", 0));
        ___qtreewidgetitem->setText(6, QApplication::translate("CoinControlDialog", "Weight", 0));
        ___qtreewidgetitem->setText(5, QApplication::translate("CoinControlDialog", "Days to Stake (est.)", 0));
        ___qtreewidgetitem->setText(4, QApplication::translate("CoinControlDialog", "Potential Stake", 0));
        ___qtreewidgetitem->setText(3, QApplication::translate("CoinControlDialog", "Age", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("CoinControlDialog", "Confirmations", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("CoinControlDialog", "Amount", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("CoinControlDialog", "Select", 0));
#ifndef QT_NO_TOOLTIP
        ___qtreewidgetitem->setToolTip(2, QApplication::translate("CoinControlDialog", "Confirmed", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class CoinControlDialog: public Ui_CoinControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COINCONTROLDIALOG_H
