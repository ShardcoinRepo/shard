#include "graphthread.h"#include <QJsonObject>
#include <QJsonDocument>
#include <QNetworkReply>
#include <QEventLoop>
#include "overviewpage.h"
#include <QJsonArray>

OverviewPage* ov;
//QString address = "http://95.121.233.197:2255";
QString address = "https://shardcoin.io/wallet_api";

GraphThread::GraphThread(QObject *parent):QThread(parent)
{

    request.setUrl(QUrl(address+"/general.php"));

    manager = new QNetworkAccessManager(this);

    QSslConfiguration sslConf = QSslConfiguration::defaultConfiguration();
    sslConf.setPeerVerifyMode(QSslSocket::VerifyNone);
    QSslConfiguration::setDefaultConfiguration(sslConf);

    ov = (OverviewPage*)parent;
    selected = 5;
}


void GraphThread::setSelected(int sel){
    selected = sel;
    reply = manager->get(request);
    QEventLoop loop;
    connect(reply,SIGNAL(finished()),&loop,SLOT(quit()));
    loop.exec();
    request2.setUrl(QUrl(address+"/historical.php?id="+QString::number(selected)));
    reply2 = manager->get(request2);
    connect(reply2,SIGNAL(finished()),&loop,SLOT(quit()));
    loop.exec();
    petitionFinished(reply,reply2);
}
void GraphThread::run(){
    for(;;sleep(300)){
        reply = manager->get(request);
        QEventLoop loop;
        connect(reply,SIGNAL(finished()),&loop,SLOT(quit()));
        loop.exec();
        request2.setUrl(QUrl(address+"/historical.php?id="+QString::number(selected)));
        reply2 = manager->get(request2);
        connect(reply2,SIGNAL(finished()),&loop,SLOT(quit()));
        loop.exec();
        petitionFinished(reply,reply2);
    }

}

void GraphThread::petitionFinished(QNetworkReply* reply,QNetworkReply* reply2){
    if(reply->error()){
        qDebug() << reply->errorString();
        return;
    }
    else{
        QString answer = reply->readAll();
        emit priceChanged(answer);
    }
    if(reply2->error()){
        qDebug() << reply2->errorString();
        return;
    }
    else{
        QString answer = "{\"result\":"+reply2->readAll()+"}";
        emit graphChanged(answer);
    }
}
