#ifndef CHANGEPASS_H
#define CHANGEPASS_H

#include <QWidget>

class WalletModel;
namespace Ui {
class ChangePass;
}

class ChangePass : public QWidget
{
    Q_OBJECT

public:
    explicit ChangePass(QWidget *parent = 0);
    ~ChangePass();

    void setModel(WalletModel* model);

private:
    Ui::ChangePass *ui;
    void secureClearPassFields();
    WalletModel* model;
public slots:
    void accept();
    void textChanged();
};

#endif // CHANGEPASS_H
