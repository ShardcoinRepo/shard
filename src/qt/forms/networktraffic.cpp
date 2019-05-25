
#include "networktraffic.h"
#include "ui_networktraffic.h"

#include "clientmodel.h"
#include "guiutil.h"

#include "rpcserver.h"
#include "rpcclient.h"

#include <QTime>
#include <QThread>
#include <QKeyEvent>
#include <QUrl>
#include <QScrollBar>
#include "rpcexecutor.h"
#include <openssl/crypto.h>

// TODO: add a scrollback limit, as there is currently none
// TODO: make it possible to filter out categories (esp debug messages when implemented)
// TODO: receive errors and debug messages through ClientModel

const int CONSOLE_HISTORY = 50;
const QSize ICON_SIZE(24, 24);

const int INITIAL_TRAFFIC_GRAPH_MINS = 30;


/* Object for executing console RPC commands in a separate thread.
*/

NetworkTraffic::NetworkTraffic(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NetworkTraffic)
{
    ui->setupUi(this);

    setTrafficGraphRange(INITIAL_TRAFFIC_GRAPH_MINS);
    connect(ui->btnClearTrafficGraph,SIGNAL(clicked()),this,SLOT(clear()));
    connect(ui->sldGraphRange,SIGNAL(valueChanged(int)),this,SLOT(graphChanged(int)));
}

NetworkTraffic::~NetworkTraffic()
{

    delete ui;
}


void NetworkTraffic::graphChanged(int value)
{
    const int multiplier = 5; // each position on the slider represents 5 min
    int mins = value * multiplier;
    setTrafficGraphRange(mins);
}
void NetworkTraffic::setClientModel(ClientModel *model)
{
    clientModel = model;
    ui->trafficGraph->setClientModel(model);
    if(model)
    {
        updateTrafficStats(model->getTotalBytesRecv(), model->getTotalBytesSent());
        connect(model, SIGNAL(bytesChanged(quint64,quint64)), this, SLOT(updateTrafficStats(quint64, quint64)));
    }
}




QString NetworkTraffic::FormatBytes(quint64 bytes)
{
    if(bytes < 1024)
        return QString(tr("%1 B")).arg(bytes);
    if(bytes < 1024 * 1024)
        return QString(tr("%1 KB")).arg(bytes / 1024);
    if(bytes < 1024 * 1024 * 1024)
        return QString(tr("%1 MB")).arg(bytes / 1024 / 1024);

    return QString(tr("%1 GB")).arg(bytes / 1024 / 1024 / 1024);
}

void NetworkTraffic::setTrafficGraphRange(int mins)
{
    ui->trafficGraph->setGraphRangeMins(mins);
    if(mins < 60) {
        ui->lblGraphRange->setText(QString(tr("%1 m")).arg(mins));
    } else {
        int hours = mins / 60;
        int minsLeft = mins % 60;
        if(minsLeft == 0) {
            ui->lblGraphRange->setText(QString(tr("%1 h")).arg(hours));
        } else {
            ui->lblGraphRange->setText(QString(tr("%1 h %2 m")).arg(hours).arg(minsLeft));
        }
    }
}

void NetworkTraffic::updateTrafficStats(quint64 totalBytesIn, quint64 totalBytesOut)
{
    ui->lblBytesIn->setText(FormatBytes(totalBytesIn));
    ui->lblBytesOut->setText(FormatBytes(totalBytesOut));
}

void NetworkTraffic::clear()
{
    ui->trafficGraph->clear();
}
