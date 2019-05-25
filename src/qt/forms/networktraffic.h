#ifndef NETWORKTRAFFIC_H
#define NETWORKTRAFFIC_H

#include <QWidget>
class ClientModel;
namespace Ui {
class NetworkTraffic;
}

class NetworkTraffic : public QWidget
{
    Q_OBJECT

public:
    explicit NetworkTraffic(QWidget *parent = 0);
    ~NetworkTraffic();
    void setClientModel(ClientModel *model);

private:
    Ui::NetworkTraffic *ui;
    QString FormatBytes(quint64 bytes);
    ClientModel *clientModel;
    void setTrafficGraphRange(int mins);

public slots:
    void clear();
    void updateTrafficStats(quint64 totalBytesIn, quint64 totalBytesOut);
    void graphChanged(int val);
};

#endif // NETWORKTRAFFIC_H
