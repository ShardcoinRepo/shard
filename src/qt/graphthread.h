#ifndef GRAPHTHREAD_H
#define GRAPHTHREAD_H
#include <QThread>
#include <QNetworkRequest>
#include <QNetworkAccessManager>
#include <QNetworkReply>


class UpdateContainer{
public:
    UpdateContainer(){}
    double price;
    double change;
    double market;
    double volume;
};
class GraphThread : public QThread
{
     Q_OBJECT
public:

    explicit GraphThread(QObject *parent = Q_NULLPTR);

    void run() override;
    void setSelected(int sel);
    inline int getSelected(){ return selected; }
signals:
    void priceChanged(QString json);
    void graphChanged(QString json);
private:
    QNetworkRequest request;
    QNetworkRequest request2;
    QNetworkAccessManager* manager;
    QNetworkReply* reply;
    QNetworkReply* reply2;
    int selected = 1;
    void petitionFinished(QNetworkReply* reply,QNetworkReply* reply2);
};

#endif // GRAPHTHREAD_H
