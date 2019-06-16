#ifndef RPCEXECUTOR_H
#define RPCEXECUTOR_H

#include <QObject>

class RPCExecutor : public QObject
{
    Q_OBJECT

public slots:
    void start();
    void request(const QString &command);

signals:
    void reply(int category, const QString &command);
};


#endif // RPCEXECUTOR_H
