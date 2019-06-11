/********************************************************************************
** Form generated from reading UI file 'changepass.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASS_H
#define UI_CHANGEPASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangePass
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QLineEdit *passEdit1;
    QLabel *label_3;
    QLineEdit *passEdit2;
    QLabel *label_4;
    QLineEdit *passEdit3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *acceptButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ChangePass)
    {
        if (ChangePass->objectName().isEmpty())
            ChangePass->setObjectName(QStringLiteral("ChangePass"));
        ChangePass->resize(680, 630);
        ChangePass->setMinimumSize(QSize(0, 0));
        ChangePass->setMaximumSize(QSize(16777215, 16777215));
        ChangePass->setAutoFillBackground(false);
        ChangePass->setStyleSheet(QStringLiteral("background:'#0b1d2c';"));
        gridLayout = new QGridLayout(ChangePass);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, -1, -1);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        label = new QLabel(ChangePass);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("margin-bottom:35px;color:\"#0adbf0\";background:transparent;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);


        verticalLayout->addLayout(verticalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 10, -1, -1);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(10, -1, -1, -1);
        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_6->addItem(horizontalSpacer);


        horizontalLayout->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_2 = new QLabel(ChangePass);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setStyleSheet(QStringLiteral("color:#72909e;background:transparent;"));
        label_2->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_5->addWidget(label_2);

        passEdit1 = new QLineEdit(ChangePass);
        passEdit1->setObjectName(QStringLiteral("passEdit1"));
        passEdit1->setMinimumSize(QSize(413, 0));
        passEdit1->setMaximumSize(QSize(413, 16777215));
        passEdit1->setStyleSheet(QLatin1String("background:#1d2e3f;\n"
"color:white;\n"
"padding:7px;\n"
"border-radius:5px;\n"
"font: 10pt 'Ubuntu';\n"
"margin-bottom:15px"));
        passEdit1->setEchoMode(QLineEdit::Password);
        passEdit1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_5->addWidget(passEdit1);

        label_3 = new QLabel(ChangePass);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setStyleSheet(QStringLiteral("color:#72909e;color:#72909e;background:transparent;"));
        label_3->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_5->addWidget(label_3);

        passEdit2 = new QLineEdit(ChangePass);
        passEdit2->setObjectName(QStringLiteral("passEdit2"));
        passEdit2->setMinimumSize(QSize(413, 0));
        passEdit2->setMaximumSize(QSize(413, 16777215));
        passEdit2->setStyleSheet(QLatin1String("background:#1d2e3f;\n"
"color:white;\n"
"padding:7px;\n"
"border-radius:5px;\n"
"font: 10pt 'Ubuntu';\n"
"margin-bottom:15px"));
        passEdit2->setEchoMode(QLineEdit::Password);
        passEdit2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_5->addWidget(passEdit2);

        label_4 = new QLabel(ChangePass);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("color:#72909e;color:#72909e;background:transparent;"));
        label_4->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_5->addWidget(label_4);

        passEdit3 = new QLineEdit(ChangePass);
        passEdit3->setObjectName(QStringLiteral("passEdit3"));
        passEdit3->setMinimumSize(QSize(413, 0));
        passEdit3->setMaximumSize(QSize(413, 16777215));
        passEdit3->setStyleSheet(QLatin1String("background:#1d2e3f;\n"
"color:white;\n"
"padding:7px;\n"
"border-radius:5px;\n"
"font: 10pt 'Ubuntu';\n"
""));
        passEdit3->setEchoMode(QLineEdit::Password);
        passEdit3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_5->addWidget(passEdit3);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(10, -1, -1, -1);
        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 20, -1, -1);
        acceptButton = new QPushButton(ChangePass);
        acceptButton->setObjectName(QStringLiteral("acceptButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(acceptButton->sizePolicy().hasHeightForWidth());
        acceptButton->setSizePolicy(sizePolicy1);
        acceptButton->setMinimumSize(QSize(160, 0));
        acceptButton->setMaximumSize(QSize(160, 16777215));
        acceptButton->setLayoutDirection(Qt::LeftToRight);
        acceptButton->setStyleSheet(QLatin1String("QPushButton { \n"
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

        horizontalLayout_2->addWidget(acceptButton);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        verticalLayout->addLayout(verticalLayout_4);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(ChangePass);

        QMetaObject::connectSlotsByName(ChangePass);
    } // setupUi

    void retranslateUi(QWidget *ChangePass)
    {
        ChangePass->setWindowTitle(QApplication::translate("ChangePass", "Form", 0));
        label->setText(QApplication::translate("ChangePass", "CHANGE WALLET PASSWORD", 0));
        label_2->setText(QApplication::translate("ChangePass", "Current Password", 0));
        label_3->setText(QApplication::translate("ChangePass", "New Password", 0));
        label_4->setText(QApplication::translate("ChangePass", "Repeat New Password", 0));
        acceptButton->setText(QApplication::translate("ChangePass", "Change Password", 0));
    } // retranslateUi

};

namespace Ui {
    class ChangePass: public Ui_ChangePass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASS_H
