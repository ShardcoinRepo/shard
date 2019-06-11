/********************************************************************************
** Form generated from reading UI file 'addressbookpage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSBOOKPAGE_H
#define UI_ADDRESSBOOKPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <custombutton.h>

QT_BEGIN_NAMESPACE

class Ui_AddressBookPage
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QWidget *recieveTop;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    CustomButton *newAddressButton;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_address;
    QLineEdit *addressEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *copyToClipboard;
    QPushButton *showQRCode;
    QPushButton *signMessage;
    QPushButton *verifyMessage;
    QPushButton *deleteButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;
    QVBoxLayout *verticalLayout_6;
    QTableView *tableView;

    void setupUi(QWidget *AddressBookPage)
    {
        if (AddressBookPage->objectName().isEmpty())
            AddressBookPage->setObjectName(QStringLiteral("AddressBookPage"));
        AddressBookPage->resize(869, 477);
        AddressBookPage->setStyleSheet(QLatin1String("QHeaderView::section {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                      stop:0 #616161, stop: 0.5 #505050,\n"
"                                      stop: 0.6 #434343, stop:1 #656565);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"\n"
"}\n"
"QWidget{background:'#0b1d2c';}\n"
"\n"
"QHeaderView::section:checked\n"
"{\n"
"    background-color: red;\n"
"}\n"
"\n"
"/* style the sort indicator */\n"
"QHeaderView::down-arrow {\n"
"    image: url(down_arrow.png);\n"
"}\n"
"\n"
"QHeaderView::up-arrow {\n"
"    image: url(up_arrow.png);\n"
"}"));
        gridLayout = new QGridLayout(AddressBookPage);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(10, -1, 10, 10);
        recieveTop = new QWidget(AddressBookPage);
        recieveTop->setObjectName(QStringLiteral("recieveTop"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(recieveTop->sizePolicy().hasHeightForWidth());
        recieveTop->setSizePolicy(sizePolicy);
        recieveTop->setMinimumSize(QSize(131, 150));
        recieveTop->setStyleSheet(QStringLiteral("background:'#102537';"));
        verticalLayout = new QVBoxLayout(recieveTop);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, -1, -1);
        newAddressButton = new CustomButton(recieveTop);
        newAddressButton->setObjectName(QStringLiteral("newAddressButton"));
        newAddressButton->setMinimumSize(QSize(120, 0));
        newAddressButton->setMaximumSize(QSize(120, 16777215));
        newAddressButton->setStyleSheet(QStringLiteral("background:'#0d2131';border:0px"));
        verticalLayout_3 = new QVBoxLayout(newAddressButton);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);

        horizontalLayout_2->addWidget(newAddressButton);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, 15, -1);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(25, -1, 25, -1);
        label_address = new QLabel(recieveTop);
        label_address->setObjectName(QStringLiteral("label_address"));
        label_address->setStyleSheet(QStringLiteral("color:#72909e;"));
        label_address->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_5->addWidget(label_address);

        addressEdit = new QLineEdit(recieveTop);
        addressEdit->setObjectName(QStringLiteral("addressEdit"));
        addressEdit->setStyleSheet(QLatin1String("background:#1d2e3f;\n"
"color:white;\n"
"padding:7px;\n"
"border-radius:5px;\n"
"font: 10pt 'Ubuntu';\n"
"margin-bottom:2px;\n"
""));
        addressEdit->setReadOnly(true);

        verticalLayout_5->addWidget(addressEdit);


        verticalLayout_2->addLayout(verticalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(25, 15, -1, 15);
        copyToClipboard = new QPushButton(recieveTop);
        copyToClipboard->setObjectName(QStringLiteral("copyToClipboard"));
        copyToClipboard->setStyleSheet(QLatin1String("QPushButton { \n"
" background-color: \"#0d2131\";\n"
"	border:2px solid #1d2e3f;\n"
"color:#eeeeee;\n"
"padding:10px;\n"
";\n"
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
"    background:'#0d2131';\n"
"color:gray;\n"
"border:2px solid #0b1d2c;\n"
" }\n"
""));

        horizontalLayout->addWidget(copyToClipboard);

        showQRCode = new QPushButton(recieveTop);
        showQRCode->setObjectName(QStringLiteral("showQRCode"));
        showQRCode->setStyleSheet(QLatin1String("QPushButton { \n"
" background-color: \"#0d2131\";\n"
"	border:2px solid #1d2e3f;\n"
"color:#eeeeee;\n"
"padding:10px;\n"
";\n"
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
"    background:'#0d2131';\n"
"color:gray;\n"
"border:2px solid #0b1d2c;\n"
" }\n"
""));

        horizontalLayout->addWidget(showQRCode);

        signMessage = new QPushButton(recieveTop);
        signMessage->setObjectName(QStringLiteral("signMessage"));
        signMessage->setStyleSheet(QLatin1String("QPushButton { \n"
" background-color: \"#0d2131\";\n"
"	border:2px solid #1d2e3f;\n"
"color:#eeeeee;\n"
"padding:10px;\n"
";\n"
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
"    background:'#0d2131';\n"
"color:gray;\n"
"border:2px solid #0b1d2c;\n"
" }\n"
""));

        horizontalLayout->addWidget(signMessage);

        verifyMessage = new QPushButton(recieveTop);
        verifyMessage->setObjectName(QStringLiteral("verifyMessage"));
        verifyMessage->setMaximumSize(QSize(16777215, 16777215));
        verifyMessage->setStyleSheet(QLatin1String("QPushButton { \n"
" background-color: \"#0d2131\";\n"
"	border:2px solid #1d2e3f;\n"
"color:#eeeeee;\n"
"padding:10px;\n"
";\n"
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
"    background:'#0d2131';\n"
"color:gray;\n"
"border:2px solid #0b1d2c;\n"
" }\n"
""));

        horizontalLayout->addWidget(verifyMessage);

        deleteButton = new QPushButton(recieveTop);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setStyleSheet(QLatin1String("QPushButton { \n"
" background-color: \"#0d2131\";\n"
"	border:2px solid #1d2e3f;\n"
"color:#eeeeee;\n"
"padding:10px;\n"
";\n"
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
"    background:'#0d2131';\n"
"color:gray;\n"
"border:2px solid #0b1d2c;\n"
" }\n"
""));

        horizontalLayout->addWidget(deleteButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(recieveTop);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setStyleSheet(QLatin1String("QPushButton { \n"
" background-color: \"#0d2131\";\n"
"	border:2px solid #1d2e3f;\n"
"color:#eeeeee;\n"
"padding:10px;\n"
";\n"
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
"    background:'#0d2131';\n"
"color:gray;\n"
"border:2px solid #0b1d2c;\n"
" }\n"
""));
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_4->addWidget(recieveTop);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        tableView = new QTableView(AddressBookPage);
        tableView->setObjectName(QStringLiteral("tableView"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy2);
        tableView->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView->setStyleSheet(QLatin1String("QTableView{background:'#102537';\n"
"color:white;\n"
"border:0px;\n"
"selection-background-color: '#1d2e3f';\n"
"margin-top:10px;\n"
"font: 10pt 'Ubuntu';\n"
"\n"
"}\n"
"QLineEdit{color:white} QPlatinTextEdit{color:white}\n"
"QTableView::item:selected{\n"
"background-color: '#1d2e3f';\n"
"color:white;\n"
"}\n"
"QScrollArea{border:0px;margin:0px;outline:none;}\n"
"\n"
"QScrollBar\n"
"{\n"
" width:9px;\n"
"outline:none;\n"
"}\n"
"QScrollBar::handle{\n"
"background: rgb(0, 51, 78);\n"
"width:9px;\n"
"outline:none;}\n"
"QScrollBar::handle:hover{\n"
"background: rgb(0, 67, 97);\n"
"width:9px;}\n"
"QScrollBar::add-line, QScrollBar::sub-line{\n"
"height:0px;}\n"
"QScrollBar::add-page, QScrollBar::sub-page{\n"
"background:#0d2131;\n"
"outline:none;}\n"
""));
        tableView->setTabKeyNavigation(false);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setGridStyle(Qt::NoPen);
        tableView->setSortingEnabled(true);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout_6->addWidget(tableView);


        verticalLayout_4->addLayout(verticalLayout_6);


        gridLayout->addLayout(verticalLayout_4, 2, 0, 1, 1);


        retranslateUi(AddressBookPage);

        QMetaObject::connectSlotsByName(AddressBookPage);
    } // setupUi

    void retranslateUi(QWidget *AddressBookPage)
    {
        AddressBookPage->setWindowTitle(QApplication::translate("AddressBookPage", "Address Book", 0));
        label_address->setText(QApplication::translate("AddressBookPage", "Address:", 0));
#ifndef QT_NO_TOOLTIP
        copyToClipboard->setToolTip(QApplication::translate("AddressBookPage", "Copy the currently selected address to the system clipboard", 0));
#endif // QT_NO_TOOLTIP
        copyToClipboard->setText(QApplication::translate("AddressBookPage", "&Copy Address", 0));
        showQRCode->setText(QApplication::translate("AddressBookPage", "Show &QR Code", 0));
#ifndef QT_NO_TOOLTIP
        signMessage->setToolTip(QApplication::translate("AddressBookPage", "Sign a message to prove you own a Shard address", 0));
#endif // QT_NO_TOOLTIP
        signMessage->setText(QApplication::translate("AddressBookPage", "Sign &Message", 0));
#ifndef QT_NO_TOOLTIP
        verifyMessage->setToolTip(QApplication::translate("AddressBookPage", "Verify a message to ensure it was signed with a specified Shard address", 0));
#endif // QT_NO_TOOLTIP
        verifyMessage->setText(QApplication::translate("AddressBookPage", "&Verify Message", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("AddressBookPage", "Delete the currently selected address from the list", 0));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QApplication::translate("AddressBookPage", "&Delete", 0));
#ifndef QT_NO_TOOLTIP
        tableView->setToolTip(QApplication::translate("AddressBookPage", "Double-click to edit address or label", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class AddressBookPage: public Ui_AddressBookPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSBOOKPAGE_H
