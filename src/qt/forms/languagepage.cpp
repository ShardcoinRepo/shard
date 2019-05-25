#include "languagepage.h"
#include "ui_languagepage.h"
#include "base58.h"

#include <QDir>
#include <QPushButton>
#include <QLocale>
#include <map>
#include "optionsmodel.h"
#include <QDataWidgetMapper>

#include <QMessageBox>
#include "monitoreddatamapper.h"
#include <QHBoxLayout>
LanguagePage::LanguagePage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LanguagePage)
{
    ui->setupUi(this);
    /* Display elements init */
    QDir translations(":translations");
      QPushButton* aux2=new QPushButton();
      aux2->setText("Default");
      aux2->setStyleSheet("QPushButton { \n background-color: #0d2131;font-size:12px;\n	border:2px solid #1d2e3f;\ncolor:#eeeeee;\npadding:5px;\n	outline: none;\nborder-radius:2px;\n\n}\n\nQPushButton:pressed {\n   background-color: #1d2e3f;\nborder:2px solid gray;\n	color:white;\n\n}\n\nQPushButton:hover {\n     background-color: #102537;\n	border:2px solid #0f3e54;\n }\nQPushButton:checked { \n     background-color: #0d2131;\nborder:2px solid #0f3e54;\n	color:white;\n\n }\nQPushButton:disabled { \n    background:'#0b1d2c';\ncolor:gray;\nborder:2px solid #102537;\n }\n");
       aux2->setObjectName("Default");

    ui->gridButtons->addWidget(aux2,0,0);
    int row = 0;
    int column = 1;
    languagesMapped = std::map<QString,QString>();
    keysMap= std::map<QString,QPushButton*>();
    languagesMapped["Default"] = "Default";
    keysMap["Default"]=aux2;

      connect(aux2,SIGNAL(clicked(bool)),this,SLOT(changeLanguage()));
    foreach(const QString &langStr, translations.entryList())
    {
        if(column == 3)
        {
            row++;
            column = 0;
        }
        QLocale locale(langStr);
        QPushButton* aux=new QPushButton();
        QString res = "";
        /** check if the locale name consists of 2 parts (language_country) */
        if(langStr.contains("_"))
        {
#if QT_VERSION >= 0x040800
            /** display language strings as "native language - native country (locale name)", e.g. "Deutsch - Deutschland (de)" */

            res=locale.nativeLanguageName() + QString(" - ") + locale.nativeCountryName() ;
#else
            /** display language strings as "language - country (locale name)", e.g. "German - Germany (de)" */
             res=QLocale::languageToString(locale.language()) + QString(" - ") + QLocale::countryToString(locale.country()) ;
#endif
        }
        else
        {
#if QT_VERSION >= 0x040800
            /** display language strings as "native language (locale name)", e.g. "Deutsch (de)" */
            res=locale.nativeLanguageName() ;
#else
            /** display language strings as "language (locale name)", e.g. "German (de)" */
            res=QLocale::languageToString(locale.language());
#endif
        }
        if(res.length()!=0)
        {       aux->setText(res);


                aux->setStyleSheet("QPushButton { \n background-color: #0d2131;font-size:12px;\n	border:2px solid #1d2e3f;\ncolor:#eeeeee;\npadding:5px;\n	outline: none;\nborder-radius:2px;\n\n}\n\nQPushButton:pressed {\n   background-color: #1d2e3f;\nborder:2px solid gray;\n	color:white;\n\n}\n\nQPushButton:hover {\n     background-color: #102537;\n	border:2px solid #0f3e54;\n }\nQPushButton:checked { \n     background-color: #0d2131;\nborder:2px solid #0f3e54;\n	color:white;\n\n }\nQPushButton:disabled { \n    background:'#0b1d2c';\ncolor:gray;\nborder:2px solid #102537;\n }\n");
                languagesMapped[res] = langStr;
                connect(aux,SIGNAL(clicked(bool)),this,SLOT(changeLanguage()));
                aux->setObjectName(langStr);


                ui->gridButtons->addWidget(aux,row,column);
                keysMap[langStr]=aux;
                column++;
        }

    }
    ui->lang->setVisible(false);
    connect(ui->search,SIGNAL(textChanged(QString)),this,SLOT(newSearch(QString)));
    mapper = new MonitoredDataMapper(this);
    mapper->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);
    mapper->setOrientation(Qt::Vertical);
}

LanguagePage::~LanguagePage()
{
    delete ui;
}
void LanguagePage::setModel(OptionsModel* op)
{
    model = op;
    if(model)
    {
        mapper->setModel(model);
        mapper->addMapping(ui->lang, OptionsModel::Language);
        mapper->toFirst();
    }
}

void LanguagePage::changeLanguage(){
    QPushButton* sender = qobject_cast<QPushButton*>(QObject::sender());
    ui->lang->setText(languagesMapped[sender->text()]);
        mapper->submit();
        QMessageBox::warning(this, tr("Warning"), "<p style=\"color:white\">"+tr("This setting will take effect after restarting Shard.")+"</p>", QMessageBox::Ok);

}
void LanguagePage::newSearch(QString texto)
{
    for(int k = 0;k<ui->gridButtons->count();k++)
    {
        QPushButton* widget = (QPushButton*)ui->gridButtons->itemAt(k)->widget();
        widget->setVisible(true);
    }
               if(texto.length() == 0)
               {

                   return;
               }
            std::pair<QString,QString> me;
            keys.clear();

            BOOST_FOREACH(me,languagesMapped){
                if(me.first.contains(texto,Qt::CaseInsensitive))
                {
                        keys.push_back(me.second);
                }

            }
            sort(keys.begin(),keys.end());




            bool changed = true;
            while(changed){
                changed= false;
                int row = 0;
                int column = 0;
            for(int k = 0;k<keys.size();k++)
            {
                if(column == 3)
                {
                    row++;
                    column = 0;
                }
                QPushButton* buton = 0;
                for(int i = 0;i<ui->gridButtons->count();i++)
                {
                    QPushButton* widget = (QPushButton*)ui->gridButtons->itemAt(i)->widget();
                    if(widget !=  NULL){
                           if(!widget->objectName().compare(keys[k],Qt::CaseInsensitive)){
                               buton = widget;
                           }
                    }
                }
                QPushButton* buton2 =(QPushButton*)ui->gridButtons->itemAtPosition(row,column)->widget();
                if(buton2 != buton && buton && buton2)
                {
                QString on_1 = buton->objectName();
                QString text_1 = buton->text();

                buton->setText(buton2->text());
                buton->setObjectName(buton2->objectName());
                buton->setVisible(true);
                buton2->setText(text_1);
                buton2->setObjectName(on_1);
                buton2->setVisible(true);
                changed = true;

                }
                column++;

            }
            }
            for(int k = keys.size();k<ui->gridButtons->count();k++)
            {
                QPushButton* widget = (QPushButton*)ui->gridButtons->itemAt(k)->widget();
                widget->setVisible(false);
            }








}
bool LanguagePage::isPlaced(int postList, int colum, int row)
{
    int auxRow = (int)(postList/3);
    int auxColumn = postList%3;
    return auxRow == row && auxColumn == colum;
}

bool LanguagePage::swapWidgets(QWidget *widgetA, QWidget* widgetB)
{
    int indexA = ui->gridButtons->indexOf(widgetA);
    int indexB = ui->gridButtons->indexOf(widgetB);
    if(indexA == indexB)
        return false;
    int row1, column1, rowSpan1, columnSpan1;
    int row2, column2, rowSpan2, columnSpan2;

    ui->gridButtons->getItemPosition(indexA, &row1, &column1, &rowSpan1, &columnSpan1);
    ui->gridButtons->getItemPosition(indexB, &row2, &column2, &rowSpan2, &columnSpan2);

    ui->gridButtons->takeAt(indexA);
    ui->gridButtons->takeAt(indexB);

    ui->gridButtons->addWidget(widgetB, row1, column1, rowSpan1, columnSpan1);
    ui->gridButtons->addWidget(widgetA, row2, column2, rowSpan2, columnSpan2);
    return true;
}


