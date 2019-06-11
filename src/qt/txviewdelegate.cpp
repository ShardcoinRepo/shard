#include "txviewdelegate.h"
#include "transactiontablemodel.h"
#include <QtGlobal>
#include "transactionrecord.h"

void TxViewDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option,
                  const QModelIndex &index ) const
{

    painter->save();
    QString txid = index.data(TransactionTableModel::TxIDRole).toString();
    bool d_expanded = index.data(TransactionTableModel::ExpandedDashboardRole).toBool();
    bool t_expanded = index.data(TransactionTableModel::ExpandedTransactionsRole).toBool();
#if defined(Q_OS_WIN)
     QFont ffp = painter->font();
     ffp.setPointSize(10);
     painter->setFont(ffp);
#endif
    QRect mainRect = option.rect;
    mainRect.setX(mainRect.x()-1);
    painter->setPen(fondo);
    painter->drawRect(mainRect);
    mainRect.setHeight(DECORATION_SIZE);

    int topY=mainRect.top();
    int w_main = mainRect.width();
    QRect dateRect(QPoint(-1,topY), QSize(DECORATION_SIZE, DECORATION_SIZE/2.2));
    QRect decorationRect(39,topY,DECORATION_SIZE, DECORATION_SIZE);
    QRect detailsRect(mainRect.right() - 43,mainRect.top()-5,50,26);
    QRect detailsRectText(mainRect.right() - 60,mainRect.top()+26+5,60,26);
    QRect amountRect(125, topY+8, w_main - 201, 26);
    QRect typeRect(125, topY+28, amountRect.width(), 26);
    QRect dateRect2(mainRect.topLeft(), QSize(DECORATION_SIZE, DECORATION_SIZE));



    QDateTime date = index.data(TransactionTableModel::DateRole).toDateTime();
    QString address = index.data(TransactionTableModel::AddressRole).toString();
    QString label = index.data(TransactionTableModel::LabelRole).toString();
    qint64 amount = index.data(TransactionTableModel::AmountRole).toLongLong();
    bool confirmed = index.data(TransactionTableModel::ConfirmedRole).toBool();
    QVariant value = index.data(Qt::ForegroundRole);
    QString labelORaddressTransactions;
    QColor foreground = option.palette.color(QPalette::Text);
    if(qVariantCanConvert<QColor>(value))
    {
        foreground = qvariant_cast<QColor>(value);
    }

    //Check if label empty or not and then set label instead of address
    if(!label.isEmpty())
        {

            labelORaddressTransactions = label;

        } else {

            labelORaddressTransactions = address;

        }


    painter->setPen(foreground);
    QString type = getTypeString(index.data(TransactionTableModel::TypeRole).toInt());
    QIcon icon = getTypeIcon(index.data(TransactionTableModel::TypeRole).toInt(),index.data(TransactionTableModel::StatusRole).toInt());
    icon.paint(painter, decorationRect);
    painter->setPen(colorTexto);
    painter->drawText(typeRect, Qt::AlignRight|Qt::AlignVCenter, type);
    if(frontpage)
    {
        QRect addressRect1(119,mainRect.top(),400,63);
        if(address.length() > 0)
        painter->drawText(addressRect1, Qt::AlignLeft|Qt::AlignVCenter, labelORaddressTransactions);
        else
        painter->drawText(addressRect1, Qt::AlignLeft|Qt::AlignVCenter, tr("Internal Transaction"));
    }


    QString amountText = BitcoinUnits::formatWithUnit(unit, amount, true);
    if(!confirmed)
    {
        amountText = QString("[") + amountText + QString("]");
    }
    QFont f = painter->font();
    f.setBold(true);
    painter->setPen(getTypeColor(index.data(TransactionTableModel::TypeRole).toInt(),index.data(TransactionTableModel::StatusRole).toInt()));

    painter->setFont(f);
    painter->drawText(amountRect, Qt::AlignRight|Qt::AlignVCenter, amountText);
    f.setBold(false);
    painter->setFont(f);
    painter->setPen(QColor("#7891a7"));
    QString dateString= date.toString("MMM");


    f.setPointSize(f.pointSize()*0.9);
    painter->setFont(f);
    painter->drawText(dateRect, Qt::AlignHCenter|Qt::AlignBottom, dateString);
    dateString= date.toString("dd");

    dateRect2.setY(dateRect2.y()+dateRect.height());

    f.setPointSize(f.pointSize()*0.9);
    painter->setFont(f);
    painter->drawText(detailsRectText, Qt::AlignHCenter|Qt::AlignVCenter, tr("Details"));
    f.setPointSize(f.pointSize()*2);
    painter->setFont(f);
    painter->drawText(dateRect2, Qt::AlignHCenter|Qt::AlignTop, dateString);

    if((d_expanded && !frontpage) || (t_expanded && frontpage)){


        painter->drawImage(detailsRect.x(),detailsRect.y() + 29,details2);
    }
    else{

        painter->drawImage(detailsRect.x(),detailsRect.y() + 29,details);
    }
    if((d_expanded && !frontpage) || (t_expanded && frontpage)){
        f.setPointSize(f.pointSize()*0.5);
           f.setBold(true);

        painter->setFont(f);
        QFontMetrics mt(f);

        bool confirmed = index.data(TransactionTableModel::ConfirmedRole).toBool();
        int topDetails = mainRect.bottomLeft().y()+5;
        int textDiference = mt.height()+2;

        QRect addressRect2(15,topDetails, w_main,textDiference);
        QRect addressRectValue2(15,addressRect2.bottom()+2, w_main,textDiference);

        painter->drawText(addressRect2, Qt::AlignLeft|Qt::AlignTop, tr("ADDRESS"));
        f.setBold(false);
        painter->setFont(f);
        if(address.length() > 0)
        {
            painter->drawText(addressRectValue2, Qt::AlignLeft|Qt::AlignTop, address);
        }else{
            painter->drawText(addressRectValue2, Qt::AlignLeft|Qt::AlignTop, tr("Internal transaction"));

        }
        f.setBold(true);
        painter->setFont(f);
        int status = index.data(TransactionTableModel::StatusRole).toInt();

        QRect confirmationsRect2(15,addressRectValue2.bottom()+5, w_main,textDiference);
        QRect confirmationsRectValue2(15,confirmationsRect2.bottom()+2, w_main,textDiference);
        painter->drawText(confirmationsRect2, Qt::AlignLeft|Qt::AlignTop, tr("CONFIRMATIONS"));
        f.setBold(false);
        painter->setFont(f);
        if(confirmed)
        {

            painter->drawText(confirmationsRectValue2, Qt::AlignLeft|Qt::AlignTop, tr("Confirmed (%n confirmations)","",index.data(TransactionTableModel::ConfirmationsRole).toInt()));
        }else{

            if((status == TransactionStatus::Conflicted || status == TransactionStatus::NotAccepted))
                painter->drawText(confirmationsRectValue2, Qt::AlignLeft|Qt::AlignTop, "-");
            else
                painter->drawText(confirmationsRectValue2, Qt::AlignLeft|Qt::AlignTop, tr("Unconfirmed (%n confirmations)","",index.data(TransactionTableModel::ConfirmationsRole).toInt()));

        }
        QRect idRect2(15,confirmationsRectValue2.bottom()+5, w_main,textDiference);
        QRect idValue2(15,idRect2.bottom()+2, w_main,textDiference);
        f.setBold(true);
        painter->setFont(f);
        painter->drawText(idRect2, Qt::AlignLeft|Qt::AlignTop, tr("TRANSACTION ID"));
        f.setBold(false);
        painter->setFont(f);
        QString elidedText = mt.elidedText(txid.split("-")[0],Qt::ElideRight,w_main-30);
        painter->drawText(idValue2, Qt::AlignLeft|Qt::AlignTop, elidedText);
        painter->setPen(QColor("#7891a7"));
        int leftSide = 15+w_main*0.6;
        QRect dateRect2(leftSide,topDetails, w_main,textDiference);
        QRect dateRectValue2(leftSide,dateRect2.bottom()+2, w_main,textDiference);
        f.setBold(true);
        painter->setFont(f);
        painter->drawText(dateRect2, Qt::AlignLeft|Qt::AlignTop, tr("DATE"));
        f.setBold(false);
        painter->setFont(f);
        painter->drawText(dateRectValue2, Qt::AlignLeft|Qt::AlignTop, date.toString("dd/MM/yyyy HH:mm:ss"));


        QRect priceRect2(leftSide,dateRectValue2.bottom()+5, w_main,textDiference);
        QRect priceRectValue2(leftSide,priceRect2.bottom()+2, w_main,textDiference);
        f.setBold(true);
        painter->setFont(f);
        painter->drawText(priceRect2, Qt::AlignLeft|Qt::AlignTop, tr("PRICE"));
        f.setBold(false);
        painter->setFont(f);
        painter->drawText(priceRectValue2, Qt::AlignLeft|Qt::AlignTop, "$ "+QString::number(price*amount/(100000000.0),'f'));

    }

    painter->restore();
}

void TxViewDelegate::updateListSize(){
     emit calculateHeight();
}

bool TxViewDelegate::editorEvent(QEvent *event, QAbstractItemModel *model, const QStyleOptionViewItem &option, const QModelIndex &index){
    if(event->type() == QEvent::MouseButtonRelease){
        QMouseEvent* e = (QMouseEvent*)event;
        QPoint pos = e->pos();
        QRect mainRect = option.rect;


        QRect detailsRect(mainRect.right() - 60,mainRect.top(),60,mainRect.height());
        bool d_expanded = index.data(TransactionTableModel::ExpandedDashboardRole).toBool();
        bool t_expanded = index.data(TransactionTableModel::ExpandedTransactionsRole).toBool();
        if((d_expanded && !frontpage) || (t_expanded && frontpage))
            detailsRect.setHeight(mainRect.height()/3);
        if(detailsRect.contains(pos)){


            if(frontpage)
                 model->setData(index,QVariant(!t_expanded),TransactionTableModel::ExpandedTransactionsRole);
            else
                model->setData(index,QVariant(!d_expanded),TransactionTableModel::ExpandedDashboardRole);
             emit calculateHeight();

        }
        else{
            if((d_expanded && !frontpage) || (t_expanded && frontpage)){
                if(pos.y() > mainRect.height()/3){
                    emit transactionClicked(option.index);
                    QPoint bot = mainRect.bottomLeft();
                    #if defined(Q_OS_WIN)
                        if(pos.y() > bot.y()-40 && pos.y() < bot.y()-20){
                            emit transactionClickedUrl(index.data(TransactionTableModel::TxIDRole).toString());
                        }
                    #else
                        if(pos.y() > bot.y()-30 && pos.y() < bot.y()-10){
                            emit transactionClickedUrl(index.data(TransactionTableModel::TxIDRole).toString());
                        }
                    #endif

                }
            }
        }
    }


}

QSize TxViewDelegate::sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    bool d_expanded = index.data(TransactionTableModel::ExpandedDashboardRole).toBool();
    bool t_expanded = index.data(TransactionTableModel::ExpandedTransactionsRole).toBool();
    if ((d_expanded && !frontpage) || (t_expanded && frontpage))
    {
        #if defined(Q_OS_WIN)
             return(QSize(DECORATION_SIZE, DECORATION_SIZE*3.0));
        #else
             return(QSize(DECORATION_SIZE, DECORATION_SIZE*2.75));
        #endif

    }

    return QSize(DECORATION_SIZE, DECORATION_SIZE);
}
QString TxViewDelegate::getTypeString(int type) const{

    switch(type)
    {
    case 4:
        return tr("You received");
    case 5:
        return tr("You received");
    case 2:
    case 3:
        return tr("You sent");
    case 6:
        return tr("Payment to yourself");
    case 1:
        return tr("Mined");
    default:
        return QString();
    }
}
QIcon TxViewDelegate::getTypeIcon(int type,int status) const{

    if(status == 6 || status == 8)
        return conflict;
    if(status == 3 || status == 9)
        return question;
    switch(type)
    {
    case 4:
        return incoming;
    case 5:
        return incoming;
    case 2:
    case 3:
        return outgoing;
    case 6:
        return yourself;
    case 1:
        return mined;
    default:
        return incoming;
    }
}
QColor TxViewDelegate::getTypeColor(int type,int status) const{
    if(status == 6 || status == 8 || status == 9 || status == 3)
        return QColor("#bbbbbb");

    switch(type)
    {
    case 4:
        return QColor("#68cc61");
    case 5:
        return QColor("#68cc61");
    case 2:
    case 3:
        return QColor("#cf2e30");
    case 6:
        return QColor("#45acbd");
    case 1:
        return QColor("#68cc61");
    default:
        return QColor("#68cc61");
    }
}

void TxViewDelegate::setPrice(double price)
{
    this->price = price;

}
