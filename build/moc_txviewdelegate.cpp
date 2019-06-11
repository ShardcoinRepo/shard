/****************************************************************************
** Meta object code from reading C++ file 'txviewdelegate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/txviewdelegate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'txviewdelegate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TxViewDelegate_t {
    QByteArrayData data[7];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TxViewDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TxViewDelegate_t qt_meta_stringdata_TxViewDelegate = {
    {
QT_MOC_LITERAL(0, 0, 14), // "TxViewDelegate"
QT_MOC_LITERAL(1, 15, 18), // "transactionClicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "index"
QT_MOC_LITERAL(4, 41, 21), // "transactionClickedUrl"
QT_MOC_LITERAL(5, 63, 15), // "calculateHeight"
QT_MOC_LITERAL(6, 79, 14) // "updateListSize"

    },
    "TxViewDelegate\0transactionClicked\0\0"
    "index\0transactionClickedUrl\0calculateHeight\0"
    "updateListSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TxViewDelegate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       5,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void TxViewDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TxViewDelegate *_t = static_cast<TxViewDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->transactionClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->transactionClickedUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->calculateHeight(); break;
        case 3: _t->updateListSize(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TxViewDelegate::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TxViewDelegate::transactionClicked)) {
                *result = 0;
            }
        }
        {
            typedef void (TxViewDelegate::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TxViewDelegate::transactionClickedUrl)) {
                *result = 1;
            }
        }
        {
            typedef void (TxViewDelegate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TxViewDelegate::calculateHeight)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject TxViewDelegate::staticMetaObject = {
    { &QAbstractItemDelegate::staticMetaObject, qt_meta_stringdata_TxViewDelegate.data,
      qt_meta_data_TxViewDelegate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TxViewDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TxViewDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TxViewDelegate.stringdata0))
        return static_cast<void*>(const_cast< TxViewDelegate*>(this));
    return QAbstractItemDelegate::qt_metacast(_clname);
}

int TxViewDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void TxViewDelegate::transactionClicked(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TxViewDelegate::transactionClickedUrl(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TxViewDelegate::calculateHeight()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
