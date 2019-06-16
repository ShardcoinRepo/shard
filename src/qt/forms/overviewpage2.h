#ifndef OVERVIEWPAGE2_H
#define OVERVIEWPAGE2_H

#include <QWidget>

namespace Ui {
class overviewpage2;
}

class overviewpage2 : public QWidget
{
    Q_OBJECT

public:
    explicit overviewpage2(QWidget *parent = 0);
    ~overviewpage2();

private:
    Ui::overviewpage2 *ui;
};

#endif // OVERVIEWPAGE2_H
