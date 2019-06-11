/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_about
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *qtText;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *versionLabel;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QLabel *nameLabel;
    QLabel *label_8;
    QCheckBox *testnetCheckbox;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QLabel *versionClientLabel;
    QLabel *label_9;
    QLabel *connectionsLabel;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_5;
    QLabel *sslLabel;
    QLabel *label_12;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_6;
    QLabel *buildLabel;
    QLabel *label_14;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_7;
    QLabel *timeLabel;
    QLabel *label_16;
    QLabel *label_15;
    QLabel *copyrightLabel;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QLabel *versionLabel_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *about)
    {
        if (about->objectName().isEmpty())
            about->setObjectName(QStringLiteral("about"));
        about->resize(690, 522);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(about->sizePolicy().hasHeightForWidth());
        about->setSizePolicy(sizePolicy);
        about->setMinimumSize(QSize(0, 0));
        about->setMaximumSize(QSize(16777215, 16777215));
        about->setStyleSheet(QStringLiteral("background:\"#0b1d2c\""));
        gridLayout = new QGridLayout(about);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(9, 0, 0, 0);
        scrollArea = new QScrollArea(about);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setMinimumSize(QSize(0, 0));
        scrollArea->setMaximumSize(QSize(9999999, 999999));
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
        scrollArea->setLineWidth(0);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 681, 522));
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(15, 15, 15, 0);
        qtText = new QLabel(scrollAreaWidgetContents);
        qtText->setObjectName(QStringLiteral("qtText"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qtText->sizePolicy().hasHeightForWidth());
        qtText->setSizePolicy(sizePolicy1);
        qtText->setMaximumSize(QSize(16777215, 16777215));
        qtText->setStyleSheet(QStringLiteral("color:#72909e;font-size:12px;"));
        qtText->setWordWrap(true);

        gridLayout_2->addWidget(qtText, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(15);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_2->setContentsMargins(0, 0, 15, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 5);
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(60, 60));
        label->setMaximumSize(QSize(60, 60));
        label->setStyleSheet(QLatin1String("border:0px;\n"
"border-image:url(:/images/res/images/index.png) 0 0 0 0 stretch stretch;\n"
"\n"
"outline:none;"));

        horizontalLayout->addWidget(label);

        versionLabel = new QLabel(scrollAreaWidgetContents);
        versionLabel->setObjectName(QStringLiteral("versionLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(versionLabel->sizePolicy().hasHeightForWidth());
        versionLabel->setSizePolicy(sizePolicy2);
        versionLabel->setCursor(QCursor(Qt::IBeamCursor));
        versionLabel->setStyleSheet(QStringLiteral("font-weight:bold;color:#72909e;font-size:18px;margin-left:10px;"));
        versionLabel->setText(QStringLiteral("About Shard"));
        versionLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(versionLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(10);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setStyleSheet(QStringLiteral("font-weight:bold;color:#72909e;font-size:12px;"));

        horizontalLayout_8->addWidget(label_3);

        nameLabel = new QLabel(scrollAreaWidgetContents);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        sizePolicy2.setHeightForWidth(nameLabel->sizePolicy().hasHeightForWidth());
        nameLabel->setSizePolicy(sizePolicy2);
        nameLabel->setStyleSheet(QStringLiteral("color:#72909e;font-size:12px"));

        horizontalLayout_8->addWidget(nameLabel);

        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);
        label_8->setStyleSheet(QStringLiteral("font-weight:bold;color:#72909e;font-size:12px;"));

        horizontalLayout_8->addWidget(label_8);

        testnetCheckbox = new QCheckBox(scrollAreaWidgetContents);
        testnetCheckbox->setObjectName(QStringLiteral("testnetCheckbox"));
        testnetCheckbox->setMaximumSize(QSize(16777215, 13));
        testnetCheckbox->setStyleSheet(QLatin1String("QCheckBox {color:#72909e;}\n"
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

        horizontalLayout_8->addWidget(testnetCheckbox);


        verticalLayout_10->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setStyleSheet(QStringLiteral("font-weight:bold;color:#72909e;font-size:12px;"));

        horizontalLayout_9->addWidget(label_4);

        versionClientLabel = new QLabel(scrollAreaWidgetContents);
        versionClientLabel->setObjectName(QStringLiteral("versionClientLabel"));
        sizePolicy2.setHeightForWidth(versionClientLabel->sizePolicy().hasHeightForWidth());
        versionClientLabel->setSizePolicy(sizePolicy2);
        versionClientLabel->setStyleSheet(QStringLiteral("color:#72909e;font-size:12px"));

        horizontalLayout_9->addWidget(versionClientLabel);

        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);
        label_9->setStyleSheet(QStringLiteral("font-weight:bold;color:#72909e;font-size:12px;"));

        horizontalLayout_9->addWidget(label_9);

        connectionsLabel = new QLabel(scrollAreaWidgetContents);
        connectionsLabel->setObjectName(QStringLiteral("connectionsLabel"));
        sizePolicy2.setHeightForWidth(connectionsLabel->sizePolicy().hasHeightForWidth());
        connectionsLabel->setSizePolicy(sizePolicy2);
        connectionsLabel->setStyleSheet(QStringLiteral("font-weight:bold;color:#72909e;font-size:12px;"));

        horizontalLayout_9->addWidget(connectionsLabel);


        verticalLayout_10->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setStyleSheet(QStringLiteral("font-weight:bold;color:#72909e;font-size:12px;"));

        horizontalLayout_10->addWidget(label_5);

        sslLabel = new QLabel(scrollAreaWidgetContents);
        sslLabel->setObjectName(QStringLiteral("sslLabel"));
        sizePolicy2.setHeightForWidth(sslLabel->sizePolicy().hasHeightForWidth());
        sslLabel->setSizePolicy(sizePolicy2);
        sslLabel->setStyleSheet(QStringLiteral("color:#72909e;font-size:12px"));

        horizontalLayout_10->addWidget(sslLabel);

        label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QStringLiteral("font-weight:bold;color:#72909e;font-size:12px;"));

        horizontalLayout_10->addWidget(label_12);

        label_11 = new QLabel(scrollAreaWidgetContents);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QStringLiteral("font-weight:bold;color:#72909e;font-size:12px;"));

        horizontalLayout_10->addWidget(label_11);


        verticalLayout_10->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setStyleSheet(QStringLiteral("font-weight:bold;color:#72909e;font-size:12px;"));

        horizontalLayout_11->addWidget(label_6);

        buildLabel = new QLabel(scrollAreaWidgetContents);
        buildLabel->setObjectName(QStringLiteral("buildLabel"));
        sizePolicy2.setHeightForWidth(buildLabel->sizePolicy().hasHeightForWidth());
        buildLabel->setSizePolicy(sizePolicy2);
        buildLabel->setStyleSheet(QStringLiteral("color:#72909e;font-size:12px"));

        horizontalLayout_11->addWidget(buildLabel);

        label_14 = new QLabel(scrollAreaWidgetContents);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setStyleSheet(QStringLiteral("font-weight:bold;color:#72909e;font-size:12px;"));

        horizontalLayout_11->addWidget(label_14);

        label_13 = new QLabel(scrollAreaWidgetContents);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setStyleSheet(QStringLiteral("font-weight:bold;color:#72909e;font-size:12px;"));

        horizontalLayout_11->addWidget(label_13);


        verticalLayout_10->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, -1, -1);
        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);
        label_7->setStyleSheet(QStringLiteral("font-weight:bold;color:#72909e;font-size:12px;"));

        horizontalLayout_12->addWidget(label_7);

        timeLabel = new QLabel(scrollAreaWidgetContents);
        timeLabel->setObjectName(QStringLiteral("timeLabel"));
        sizePolicy2.setHeightForWidth(timeLabel->sizePolicy().hasHeightForWidth());
        timeLabel->setSizePolicy(sizePolicy2);
        timeLabel->setStyleSheet(QStringLiteral("color:#72909e;font-size:12px"));

        horizontalLayout_12->addWidget(timeLabel);

        label_16 = new QLabel(scrollAreaWidgetContents);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setStyleSheet(QStringLiteral("font-weight:bold;color:#72909e;font-size:12px;"));

        horizontalLayout_12->addWidget(label_16);

        label_15 = new QLabel(scrollAreaWidgetContents);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setStyleSheet(QLatin1String("font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:b"
                        "old;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72"
                        "909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-siz"
                        "e:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;font-weight:bold;color:#72909e;font-size:12px;vvvvvvvv"));

        horizontalLayout_12->addWidget(label_15);


        verticalLayout_10->addLayout(horizontalLayout_12);


        gridLayout_3->addLayout(verticalLayout_10, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_3);

        copyrightLabel = new QLabel(scrollAreaWidgetContents);
        copyrightLabel->setObjectName(QStringLiteral("copyrightLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(copyrightLabel->sizePolicy().hasHeightForWidth());
        copyrightLabel->setSizePolicy(sizePolicy3);
        copyrightLabel->setMaximumSize(QSize(630, 16777215));
        copyrightLabel->setCursor(QCursor(Qt::IBeamCursor));
        copyrightLabel->setStyleSheet(QStringLiteral("color:#72909e;font-size:12px;"));
        copyrightLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(copyrightLabel);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);
        label_2->setMaximumSize(QSize(16777215, 16777215));
        label_2->setCursor(QCursor(Qt::IBeamCursor));
        label_2->setStyleSheet(QStringLiteral("color:#72909e;font-size:12px;"));
        label_2->setTextFormat(Qt::RichText);
        label_2->setWordWrap(true);
        label_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, 0, -1);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 15, -1, -1);
        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(60, 60));
        label_10->setMaximumSize(QSize(60, 60));
        label_10->setStyleSheet(QLatin1String("border:0px;\n"
"border-image:url(:/images/res/images/qt-creator.png) 0 0 0 0 stretch stretch;\n"
"\n"
"outline:none;"));

        horizontalLayout_4->addWidget(label_10);

        versionLabel_2 = new QLabel(scrollAreaWidgetContents);
        versionLabel_2->setObjectName(QStringLiteral("versionLabel_2"));
        sizePolicy2.setHeightForWidth(versionLabel_2->sizePolicy().hasHeightForWidth());
        versionLabel_2->setSizePolicy(sizePolicy2);
        versionLabel_2->setCursor(QCursor(Qt::IBeamCursor));
        versionLabel_2->setStyleSheet(QStringLiteral("font-weight:bold;color:#72909e;font-size:18px;margin-left:10px;"));
        versionLabel_2->setText(QStringLiteral("About Qt"));
        versionLabel_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_4->addWidget(versionLabel_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        horizontalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(horizontalLayout_2);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(about);

        QMetaObject::connectSlotsByName(about);
    } // setupUi

    void retranslateUi(QWidget *about)
    {
        about->setWindowTitle(QApplication::translate("about", "Form", 0));
        qtText->setText(QString());
        label->setText(QString());
        label_3->setText(QApplication::translate("about", "Client Name:", 0));
        nameLabel->setText(QApplication::translate("about", "Satoshi", 0));
        label_8->setText(QApplication::translate("about", "On testnet:", 0));
        testnetCheckbox->setText(QString());
        label_4->setText(QApplication::translate("about", "Client Version:", 0));
        versionClientLabel->setText(QString());
        label_9->setText(QApplication::translate("about", "Number of connections:", 0));
        connectionsLabel->setText(QString());
        label_5->setText(QApplication::translate("about", "OpenSSL Version:", 0));
        sslLabel->setText(QString());
        label_12->setText(QString());
        label_11->setText(QString());
        label_6->setText(QApplication::translate("about", "Build Date:", 0));
        buildLabel->setText(QString());
        label_14->setText(QString());
        label_13->setText(QString());
        label_7->setText(QApplication::translate("about", "Startup time:", 0));
        timeLabel->setText(QString());
        label_16->setText(QString());
        label_15->setText(QString());
        copyrightLabel->setText(QApplication::translate("about", "<html><head/><body><p><span style=\" font-weight:600; font-style:italic;\">Copyright Shard 2018-2019</span>, Blackcoin 2014-2018, Novacoin 2012-2014, Bitcoin 2009-2014</p></body></html>", 0));
        label_2->setText(QApplication::translate("about", "\n"
"This is experimental software.\n"
"\n"
"Distributed under the MIT/X11 software license, see the accompanying file COPYING or <a style=\"color:#0adbf0\" href=\"http://www.opensource.org/licenses/mit-license.php\">http://www.opensource.org/licenses/mit-license.php</a>.\n"
"\n"
"This product includes software developed by the OpenSSL Project for use in the OpenSSL Toolkit (<a style=\"color:#0adbf0\" href=\"https://www.openssl.org/\">https://www.openssl.org/</a>) and cryptographic software written by Eric Young (<a style=\"color:#0adbf0\" href=\"mailto:eay@cryptsoft.com\">eay@cryptsoft.com</a>) and UPnP software written by Thomas Bernard.", 0));
        label_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class about: public Ui_about {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
