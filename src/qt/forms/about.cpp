#include "about.h"
#include "ui_about.h"
#include "util.h"
#include <QMessageBox>
#include <QDateTime>
#include <openssl/opensslv.h>

about::about(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::about)
{
    ui->setupUi(this);
    ui->qtText->setText(getQtText());
    ui->sslLabel->setText(OPENSSL_VERSION_TEXT);
    ui->testnetCheckbox->setEnabled(false);

}


about::~about()
{
    delete ui;
}
void about::setClientModel(ClientModel *model)
{
    clientModel = model;
    if(model)
    {


        // Provide initial values
        ui->versionClientLabel->setText(model->formatFullVersion());
        ui->nameLabel->setText(model->clientName());
        ui->buildLabel->setText(model->formatBuildDate());
        ui->timeLabel->setText(model->formatClientStartupTime());


        connect(model, SIGNAL(numConnectionsChanged(int)), this, SLOT(setNumConnections(int)));
        setNumConnections(model->getNumConnections());

        ui->testnetCheckbox->setChecked(model->isTestNet());
    }
}
void about::setNumConnections(int count)
{
    QString connections = QString::number(count) + " (";
    connections += tr("In:") + " " + QString::number(clientModel->getNumConnections(CONNECTIONS_IN)) + " / ";
    connections += tr("Out:") + " " + QString::number(clientModel->getNumConnections(CONNECTIONS_OUT)) + ")";
    ui->connectionsLabel->setText(connections);
}


QString about::getQtText(){

        return QMessageBox::tr(

                    "<p>This program uses Qt version %1.</p>"
                    ).arg(QLatin1String(QT_VERSION_STR)) + QMessageBox::tr(
            "<p>Qt is a C++ toolkit for cross-platform application "
            "development.</p>"
            "<p>Qt provides single-source portability across all major desktop "
            "operating systems. It is also available for embedded Linux and other "
            "embedded and mobile operating systems.</p>"
            "<p>Qt is available under three different licensing options designed "
            "to accommodate the needs of our various users.</p>"
            "<p>Qt licensed under our commercial license agreement is appropriate "
            "for development of proprietary/commercial software where you do not "
            "want to share any source code with third parties or otherwise cannot "
            "comply with the terms of the GNU LGPL version 3 or GNU LGPL version 2.1.</p>"
            "<p>Qt licensed under the GNU LGPL version 3 is appropriate for the "
            "development of Qt&nbsp;applications provided you can comply with the terms "
            "and conditions of the GNU LGPL version 3.</p>"
            "<p>Qt licensed under the GNU LGPL version 2.1 is appropriate for the "
            "development of Qt&nbsp;applications provided you can comply with the terms "
            "and conditions of the GNU LGPL version 2.1.</p>"
            "<p>Please see <a style=\"color:#0adbf0\" href=\"http://%2/\">%2</a> "
            "for an overview of Qt licensing.</p>"
            "<p>Copyright (C) %1 The Qt Company Ltd and other "
            "contributors.</p>"
            "<p>Qt and the Qt logo are trademarks of The Qt Company Ltd.</p>"
            "<p>Qt is The Qt Company Ltd product developed as an open source "
            "project. See <a style=\"color:#0adbf0\" href=\"http://%3/\">%3</a> for more information.</p>"
            ).arg(QLatin1String("2015"),
                  QLatin1String("qt.io/licensing"),
                  QLatin1String("qt.io"));

}

