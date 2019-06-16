#include "transactionfilterproxy.h"

#include "transactiontablemodel.h"
#include "transactionrecord.h"

#include <QDateTime>

#include <cstdlib>

// Earliest date that can be represented (far in the past)
const QDateTime TransactionFilterProxy::MIN_DATE = QDateTime::fromTime_t(0);
// Last date that can be represented (far in the future)
const QDateTime TransactionFilterProxy::MAX_DATE = QDateTime::fromTime_t(0xFFFFFFFF);
QDateTime dateFrom;
QDateTime dateTo;

QString addrPrefix;
quint32 typeFilter;
qint64 minAmount;
TransactionFilterProxy::TransactionFilterProxy(QObject *parent) :
    QSortFilterProxyModel(parent),
    limitRows(-1),
    showInactive(true)
{
    dateFrom = QDateTime::fromTime_t(0);
    dateTo = QDateTime::fromTime_t(0xFFFFFFFF);

    addrPrefix = "",
    typeFilter = ALL_TYPES;
    minAmount =0;


}



bool TransactionFilterProxy::filterAcceptsRow(int sourceRow, const QModelIndex &sourceParent) const
{
    QModelIndex index = sourceModel()->index(sourceRow, 0, sourceParent);

    int type = index.data(TransactionTableModel::TypeRole).toInt();
    QDateTime datetime = index.data(TransactionTableModel::DateRole).toDateTime();
    QString address = index.data(TransactionTableModel::AddressRole).toString();
    QString label = index.data(TransactionTableModel::LabelRole).toString();
    qint64 amount = llabs(index.data(TransactionTableModel::AmountRole).toLongLong());
    int status = index.data(TransactionTableModel::StatusRole).toInt();

    if(!showInactive && (status == TransactionStatus::Conflicted || status == TransactionStatus::NotAccepted))
        return false;
    if(!(TYPE(type) & typeFilter))
        return false;

    if( datetime < dateFrom || datetime > dateTo)
        return false;
    if (!address.contains(addrPrefix, Qt::CaseInsensitive) && !label.contains(addrPrefix, Qt::CaseInsensitive))
        return false;
    if(amount < minAmount)
        return false;
    return true;
}

void TransactionFilterProxy::setDateRange(qint64 from, qint64 to)
{
    dateFrom = QDateTime::fromMSecsSinceEpoch(from);
    dateTo = QDateTime::fromMSecsSinceEpoch(to);
    invalidateFilter();
      emit filterApplied();
}

void TransactionFilterProxy::setAddressPrefix(const QString &addrPrefixx)
{
    addrPrefix = addrPrefixx;
    invalidateFilter();
      emit filterApplied();
}

void TransactionFilterProxy::setTypeFilter(quint32 modes)
{
    typeFilter = modes;
    invalidateFilter();
      emit filterApplied();
}

void TransactionFilterProxy::setMinAmount(qint64 minimum)
{
    minAmount = minimum;

    invalidateFilter();
    emit filterApplied();
}

void TransactionFilterProxy::setLimit(int limit)
{
    this->limitRows = limit;
}

void TransactionFilterProxy::setShowInactive(bool showInactive)
{
    this->showInactive = showInactive;
    invalidateFilter();
     emit filterApplied();


}

int TransactionFilterProxy::rowCount(const QModelIndex &parent) const
{
    if(limitRows != -1)
    {
        return std::min(QSortFilterProxyModel::rowCount(parent), limitRows);
    }
    else
    {
        return QSortFilterProxyModel::rowCount(parent);
    }
}
