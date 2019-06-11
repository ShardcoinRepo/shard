/********************************************************************************
** Form generated from reading UI file 'rpcconsole_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RPCCONSOLE_WIDGET_H
#define UI_RPCCONSOLE_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RPCConsole_Widget
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *messagesWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *clearButton;

    void setupUi(QWidget *RPCConsole_Widget)
    {
        if (RPCConsole_Widget->objectName().isEmpty())
            RPCConsole_Widget->setObjectName(QStringLiteral("RPCConsole_Widget"));
        RPCConsole_Widget->resize(676, 627);
        RPCConsole_Widget->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(RPCConsole_Widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget = new QWidget(RPCConsole_Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QLatin1String("QTabWidget{border:0px solid #0a2634;color:white;}\n"
"QTabBar{color:white;background:#0a2634;}\n"
"QTabBar::tab {\n"
"    background: #002d3f;\n"
"    border: 1px solid #002d3f;\n"
"    padding: 2px;\n"
"}\n"
"\n"
"QTabBar::tab:selected{\n"
"    background: #0a2634;\n"
"\n"
"}\n"
"\n"
"QTabBar::tab:hover {\n"
"    background: #003750;border:0px;color:white;\n"
"}\n"
"QTabBar::tab:selected:hover {\n"
"    background: #0a2634;border:0px;\n"
"}\n"
"QTabBar::tab:selected {\n"
"    border-color: #0a2634;\n"
"\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"    margin-top: 2px; /* make non-selected tabs look smaller */\n"
"color:gray;\n"
"}\n"
"QTabBar::tab:hover:!selected {\n"
"    margin-top: 2px; /* make non-selected tabs look smaller */\n"
"color:white;\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(15);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(10, 0, 10, 10);
        messagesWidget = new QTextEdit(widget);
        messagesWidget->setObjectName(QStringLiteral("messagesWidget"));
        messagesWidget->setMinimumSize(QSize(0, 100));
        messagesWidget->setStyleSheet(QLatin1String("QTextEdit {\n"
"    background:#102537;\n"
"    color:#FFFFEE;\n"
"    padding:15px;\n"
"}\n"
"QScrollArea{border:0px;margin:0px;}\n"
"\n"
"QScrollBar\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"       stop: 0 rgb(3, 32, 52), stop: 0.5 rgb(4, 35, 58), stop:1 rgb(3, 32, 52));\n"
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
"QScrollBar::add-line\n"
"{\n"
"\n"
"height: 0px;\n"
"}\n"
"QScrollBar::sub-line\n"
"{\n"
"height: 0px;\n"
"}\n"
""));
        messagesWidget->setFrameShape(QFrame::NoFrame);
        messagesWidget->setReadOnly(true);
        messagesWidget->setProperty("tabKeyNavigation", QVariant(false));
        messagesWidget->setProperty("columnCount", QVariant(2));

        verticalLayout_3->addWidget(messagesWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setStyleSheet(QLatin1String("background:#102537;\n"
"color:white;\n"
"padding:6px;\n"
"border:1px solid #003750;\n"
"border-radius:0px;\n"
"font: 10pt 'Ubuntu';"));

        horizontalLayout->addWidget(lineEdit);

        clearButton = new QPushButton(widget);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setMaximumSize(QSize(99999, 16777215));
        clearButton->setStyleSheet(QLatin1String("QPushButton { \n"
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
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton->setIcon(icon);
        clearButton->setShortcut(QStringLiteral("Ctrl+L"));
        clearButton->setAutoDefault(false);

        horizontalLayout->addWidget(clearButton);


        verticalLayout_3->addLayout(horizontalLayout);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(RPCConsole_Widget);

        QMetaObject::connectSlotsByName(RPCConsole_Widget);
    } // setupUi

    void retranslateUi(QWidget *RPCConsole_Widget)
    {
        RPCConsole_Widget->setWindowTitle(QApplication::translate("RPCConsole_Widget", "Form", 0));
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("RPCConsole_Widget", "Clear console", 0));
#endif // QT_NO_TOOLTIP
        clearButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RPCConsole_Widget: public Ui_RPCConsole_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RPCCONSOLE_WIDGET_H
