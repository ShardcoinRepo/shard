/********************************************************************************
** Form generated from reading UI file 'editaddressdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITADDRESSDIALOG_H
#define UI_EDITADDRESSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditAddressDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *labelEdit;
    QLabel *label_2;
    QLineEdit *addressEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditAddressDialog)
    {
        if (EditAddressDialog->objectName().isEmpty())
            EditAddressDialog->setObjectName(QStringLiteral("EditAddressDialog"));
        EditAddressDialog->resize(457, 126);
        EditAddressDialog->setStyleSheet(QStringLiteral("background:'#0b1d2c';"));
        verticalLayout = new QVBoxLayout(EditAddressDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(EditAddressDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("color:white"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        labelEdit = new QLineEdit(EditAddressDialog);
        labelEdit->setObjectName(QStringLiteral("labelEdit"));
        labelEdit->setStyleSheet(QLatin1String("background:#1d2e3f;\n"
"color:white;\n"
"padding:7px;\n"
"border-radius:5px;\n"
"font: 10pt 'Ubuntu';\n"
"margin-bottom:2px;\n"
""));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelEdit);

        label_2 = new QLabel(EditAddressDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("color:white"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        addressEdit = new QLineEdit(EditAddressDialog);
        addressEdit->setObjectName(QStringLiteral("addressEdit"));
        addressEdit->setStyleSheet(QLatin1String("background:#1d2e3f;\n"
"color:white;\n"
"padding:7px;\n"
"border-radius:5px;\n"
"font: 10pt 'Ubuntu';\n"
"margin-bottom:2px;\n"
""));

        formLayout->setWidget(1, QFormLayout::FieldRole, addressEdit);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(EditAddressDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStyleSheet(QLatin1String("QPushButton { \n"
" background-color: \"#0d2131\";\n"
"	border:2px solid #1d2e3f;\n"
"color:#eeeeee;\n"
"padding:5px 20px;\n"
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
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(labelEdit);
        label_2->setBuddy(addressEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(EditAddressDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditAddressDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditAddressDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditAddressDialog);
    } // setupUi

    void retranslateUi(QDialog *EditAddressDialog)
    {
        EditAddressDialog->setWindowTitle(QApplication::translate("EditAddressDialog", "Edit Address", 0));
        label->setText(QApplication::translate("EditAddressDialog", "&Label", 0));
#ifndef QT_NO_TOOLTIP
        labelEdit->setToolTip(QApplication::translate("EditAddressDialog", "The label associated with this address book entry", 0));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("EditAddressDialog", "&Address", 0));
#ifndef QT_NO_TOOLTIP
        addressEdit->setToolTip(QApplication::translate("EditAddressDialog", "The address associated with this address book entry. This can only be modified for sending addresses.", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class EditAddressDialog: public Ui_EditAddressDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITADDRESSDIALOG_H
