#ifndef LANGUAGEPAGE_H
#define LANGUAGEPAGE_H

#include <QWidget>


class OptionsModel;
class QPushButton;
class MonitoredDataMapper;
namespace Ui {
class LanguagePage;
}

class LanguagePage : public QWidget
{
    Q_OBJECT

public:
    explicit LanguagePage(QWidget *parent = 0);
    ~LanguagePage();

    void setModel(OptionsModel* op);


private:
    Ui::LanguagePage *ui;
    std::map<QString,QString> languagesMapped;
         std::vector<QString> keys;
         std::map<QString,QPushButton*> keysMap;
    OptionsModel* model;
    MonitoredDataMapper *mapper;
    bool isPlaced(int postList, int colum, int row);

    bool swapWidgets(QWidget* a, QWidget* b);




public slots:
    void changeLanguage();
    void newSearch(QString st);
};

#endif // LANGUAGEPAGE_H
