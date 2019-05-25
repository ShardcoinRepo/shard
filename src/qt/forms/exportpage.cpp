#include "exportpage.h"
#include "ui_exportpage.h"
#include <QLineEdit>
#include <QStandardItemModel>
#include "transactionview.h"

ExportPage::ExportPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ExportPage)
{
    ui->setupUi(this);
     ui->comboBox->addItem(tr("Export Transactions"));
    ui->comboBox->addItem("CSV");

    QStandardItemModel* model =
            qobject_cast<QStandardItemModel*>(ui->comboBox->model());
    QModelIndex firstIndex = model->index(0, ui->comboBox->modelColumn(),
            ui->comboBox->rootModelIndex());
    QStandardItem* firstItem = model->itemFromIndex(firstIndex);
    firstItem->setSelectable(false);
    ui->comboBox->setItemData(0, QBrush(QColor("#002d3f")), Qt::ForegroundRole);
    ui->pushButton->setEnabled(false);

    QListView* listView = new QListView(ui->comboBox);
    listView->setStyleSheet("QListView::item{color:#eeeeee;background:#102537;padding:5px} QListView::item:hover{background:#1d2e3f;color:white;}");
    ui->comboBox->setView(listView);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(exportPage()));

    connect(ui->comboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(isNotDefault(int)));
}

ExportPage::~ExportPage()
{
    delete ui;
}

void ExportPage::setTransactionPage(TransactionView* transactionView)
{
    this->transactionView = transactionView;
}

void ExportPage::exportPage(){

    transactionView->exportClicked();
}

void ExportPage::isNotDefault(int ind){
    if(ind > 0)
        ui->pushButton->setEnabled(true);
}
