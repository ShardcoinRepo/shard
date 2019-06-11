/********************************************************************************
** Form generated from reading UI file 'exportpage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTPAGE_H
#define UI_EXPORTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExportPage
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;

    void setupUi(QWidget *ExportPage)
    {
        if (ExportPage->objectName().isEmpty())
            ExportPage->setObjectName(QStringLiteral("ExportPage"));
        ExportPage->resize(690, 470);
        ExportPage->setMinimumSize(QSize(0, 0));
        ExportPage->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(ExportPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        label = new QLabel(ExportPage);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("margin-bottom:35px;color:\"#0adbf0\";background:transparent;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);


        verticalLayout->addLayout(verticalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        comboBox = new QComboBox(ExportPage);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        comboBox->setMinimumSize(QSize(325, 35));
        comboBox->setMaximumSize(QSize(325, 35));
        comboBox->setStyleSheet(QLatin1String("QComboBox {\n"
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

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 20, -1, -1);
        pushButton = new QPushButton(ExportPage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(150, 0));
        pushButton->setMaximumSize(QSize(150, 16777215));
        pushButton->setStyleSheet(QLatin1String("QPushButton { \n"
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

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));

        verticalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(ExportPage);

        QMetaObject::connectSlotsByName(ExportPage);
    } // setupUi

    void retranslateUi(QWidget *ExportPage)
    {
        ExportPage->setWindowTitle(QApplication::translate("ExportPage", "Form", 0));
        label->setText(QApplication::translate("ExportPage", "EXPORT", 0));
        comboBox->setCurrentText(QString());
        pushButton->setText(QApplication::translate("ExportPage", "Export", 0));
    } // retranslateUi

};

namespace Ui {
    class ExportPage: public Ui_ExportPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTPAGE_H
