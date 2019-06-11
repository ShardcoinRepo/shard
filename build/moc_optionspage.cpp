/****************************************************************************
** Meta object code from reading C++ file 'optionspage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/forms/optionspage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'optionspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OptionsPage_t {
    QByteArrayData data[17];
    char stringdata0[269];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OptionsPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OptionsPage_t qt_meta_stringdata_OptionsPage = {
    {
QT_MOC_LITERAL(0, 0, 11), // "OptionsPage"
QT_MOC_LITERAL(1, 12, 12), // "proxyIpValid"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 19), // "QValidatedLineEdit*"
QT_MOC_LITERAL(4, 46, 6), // "object"
QT_MOC_LITERAL(5, 53, 6), // "fValid"
QT_MOC_LITERAL(6, 60, 17), // "enableApplyButton"
QT_MOC_LITERAL(7, 78, 18), // "disableApplyButton"
QT_MOC_LITERAL(8, 97, 17), // "enableSaveButtons"
QT_MOC_LITERAL(9, 115, 18), // "disableSaveButtons"
QT_MOC_LITERAL(10, 134, 18), // "setSaveButtonState"
QT_MOC_LITERAL(11, 153, 6), // "fState"
QT_MOC_LITERAL(12, 160, 22), // "on_applyButton_clicked"
QT_MOC_LITERAL(13, 183, 24), // "showRestartWarning_Proxy"
QT_MOC_LITERAL(14, 208, 23), // "showRestartWarning_Lang"
QT_MOC_LITERAL(15, 232, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(16, 250, 18) // "handleProxyIpValid"

    },
    "OptionsPage\0proxyIpValid\0\0QValidatedLineEdit*\0"
    "object\0fValid\0enableApplyButton\0"
    "disableApplyButton\0enableSaveButtons\0"
    "disableSaveButtons\0setSaveButtonState\0"
    "fState\0on_applyButton_clicked\0"
    "showRestartWarning_Proxy\0"
    "showRestartWarning_Lang\0updateDisplayUnit\0"
    "handleProxyIpValid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OptionsPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   74,    2, 0x08 /* Private */,
       7,    0,   75,    2, 0x08 /* Private */,
       8,    0,   76,    2, 0x08 /* Private */,
       9,    0,   77,    2, 0x08 /* Private */,
      10,    1,   78,    2, 0x08 /* Private */,
      12,    0,   81,    2, 0x08 /* Private */,
      13,    0,   82,    2, 0x08 /* Private */,
      14,    0,   83,    2, 0x08 /* Private */,
      15,    0,   84,    2, 0x08 /* Private */,
      16,    2,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,   11,

       0        // eod
};

void OptionsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OptionsPage *_t = static_cast<OptionsPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->proxyIpValid((*reinterpret_cast< QValidatedLineEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->enableApplyButton(); break;
        case 2: _t->disableApplyButton(); break;
        case 3: _t->enableSaveButtons(); break;
        case 4: _t->disableSaveButtons(); break;
        case 5: _t->setSaveButtonState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_applyButton_clicked(); break;
        case 7: _t->showRestartWarning_Proxy(); break;
        case 8: _t->showRestartWarning_Lang(); break;
        case 9: _t->updateDisplayUnit(); break;
        case 10: _t->handleProxyIpValid((*reinterpret_cast< QValidatedLineEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OptionsPage::*_t)(QValidatedLineEdit * , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OptionsPage::proxyIpValid)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject OptionsPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OptionsPage.data,
      qt_meta_data_OptionsPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OptionsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OptionsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OptionsPage.stringdata0))
        return static_cast<void*>(const_cast< OptionsPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int OptionsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void OptionsPage::proxyIpValid(QValidatedLineEdit * _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
