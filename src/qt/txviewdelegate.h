#include <vector>
#include "bitcoinunits.h"
#include <QAbstractItemDelegate>
#include <QPainter>
#include <QDateTime>
#include <QMouseEvent>
#define DECORATION_SIZE 64
#define NUM_ITEMS 6


class TxViewDelegate : public QAbstractItemDelegate
{
    Q_OBJECT
signals:
    void transactionClicked(const QModelIndex &index);
    void transactionClickedUrl(const QString &index);

    void calculateHeight();
public slots:

    void updateListSize();
public:
    QImage details;
    QImage details2;
    QIcon incoming;
    QIcon outgoing;
    QIcon question;
    QIcon yourself;
    QIcon conflict;
    QColor fondo;
    QColor colorTexto;

    QIcon mined;
    std::vector<QString> indexrow = std::vector<QString>();
    TxViewDelegate(bool frontpage = false): QAbstractItemDelegate(), unit(BitcoinUnits::BTC),frontpage(frontpage)
    {
        details = QImage(":/images/res/images/details.png");
        outgoing = QIcon(":/images/res/images/outgoing.png");
        yourself = QIcon(":/images/res/images/incoming.png");
        mined = QIcon(":/images/res/images/mined.png");
        fondo = QColor("#002d3f");
        colorTexto =QColor("#7891a7");
        question = QIcon(":/images/res/images/question.png");
        conflict = QIcon(":/images/res/images/conflict.png");
        incoming = QIcon(":/images/res/images/yourself.png");
        details2 = QImage(":/images/res/images/details2.png");
        connect(this,SIGNAL(scolorUrl(QModelIndex&)),this, SLOT(colorUrl(QModelIndex&)));
        connect(this,SIGNAL(sunColorUrl(QModelIndex&)),this, SLOT(unColorUrl(QModelIndex&)));


    }

    void paint(QPainter *painter, const QStyleOptionViewItem &option,const QModelIndex &index ) const;
    bool editorEvent(QEvent *event, QAbstractItemModel *model, const QStyleOptionViewItem &option, const QModelIndex &index);
    QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const;
    QString getTypeString(int type) const;
    QIcon getTypeIcon(int type,int status) const;
    QColor getTypeColor(int type,int status) const;

    void setPrice(double price);

    int unit;
      bool frontpage;
private:
     double price;



};
