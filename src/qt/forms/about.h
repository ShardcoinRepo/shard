#ifndef ABOUT_H
#define ABOUT_H

#include <QWidget>
#include <clientmodel.h>
namespace Ui {
class about;
}

class about : public QWidget
{
    Q_OBJECT

public:
    explicit about(QWidget *parent = 0);
    ~about();
    void setClientModel(ClientModel *model);

private:
    Ui::about *ui;
    QString getQtText();

    ClientModel * clientModel;
public slots:
    void setNumConnections(int count);
};

#endif // ABOUT_H
