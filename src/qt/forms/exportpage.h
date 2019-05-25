#ifndef EXPORTPAGE_H
#define EXPORTPAGE_H

#include <QWidget>


class TransactionView;
namespace Ui {
class ExportPage;
}

class ExportPage : public QWidget
{
    Q_OBJECT

public:
    explicit ExportPage(QWidget *parent = 0);
    ~ExportPage();
    void setTransactionPage(TransactionView* tv);

private:
    Ui::ExportPage *ui;
    TransactionView* transactionView;
public slots:
    void exportPage();
    void isNotDefault(int ind);
};

#endif // EXPORTPAGE_H
