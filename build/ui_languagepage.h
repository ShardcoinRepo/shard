/********************************************************************************
** Form generated from reading UI file 'languagepage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANGUAGEPAGE_H
#define UI_LANGUAGEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LanguagePage
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *searchLabel;
    QLineEdit *search;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QGridLayout *gridButtons;
    QSpacerItem *verticalSpacer;
    QLabel *lang;

    void setupUi(QWidget *LanguagePage)
    {
        if (LanguagePage->objectName().isEmpty())
            LanguagePage->setObjectName(QStringLiteral("LanguagePage"));
        LanguagePage->resize(400, 336);
        LanguagePage->setStyleSheet(QStringLiteral("background:'#0b1d2c';"));
        gridLayout = new QGridLayout(LanguagePage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, -1, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(25, -1, 25, 0);
        searchLabel = new QLabel(LanguagePage);
        searchLabel->setObjectName(QStringLiteral("searchLabel"));
        searchLabel->setStyleSheet(QStringLiteral("color:#72909e;font-weight:bold;"));

        horizontalLayout->addWidget(searchLabel);

        search = new QLineEdit(LanguagePage);
        search->setObjectName(QStringLiteral("search"));
        search->setStyleSheet(QLatin1String("background:#1d2e3f;\n"
"color:white;\n"
"padding:7px;\n"
"border-radius:5px;\n"
"font: 10pt 'Ubuntu';\n"
"margin-bottom:2px;\n"
""));

        horizontalLayout->addWidget(search);


        verticalLayout->addLayout(horizontalLayout);

        scrollArea = new QScrollArea(LanguagePage);
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
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 398, 253));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridButtons = new QGridLayout();
        gridButtons->setSpacing(15);
        gridButtons->setObjectName(QStringLiteral("gridButtons"));
        gridButtons->setContentsMargins(15, 0, 15, 15);

        gridLayout_2->addLayout(gridButtons, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        lang = new QLabel(LanguagePage);
        lang->setObjectName(QStringLiteral("lang"));

        gridLayout->addWidget(lang, 1, 1, 1, 1);


        retranslateUi(LanguagePage);

        QMetaObject::connectSlotsByName(LanguagePage);
    } // setupUi

    void retranslateUi(QWidget *LanguagePage)
    {
        LanguagePage->setWindowTitle(QApplication::translate("LanguagePage", "Form", 0));
        searchLabel->setText(QApplication::translate("LanguagePage", "SEARCH", 0));
        lang->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LanguagePage: public Ui_LanguagePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANGUAGEPAGE_H
