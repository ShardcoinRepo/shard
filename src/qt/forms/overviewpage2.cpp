#include "overviewpage2.h"
#include "ui_overviewpage2.h"

overviewpage2::overviewpage2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::overviewpage2)
{
    ui->setupUi(this);
}

overviewpage2::~overviewpage2()
{
    delete ui;
}
