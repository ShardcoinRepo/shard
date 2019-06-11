/****************************************************************************
** Meta object code from reading C++ file 'titlebar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/titlebar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'titlebar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Titlebar_t {
    QByteArrayData data[8];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Titlebar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Titlebar_t qt_meta_stringdata_Titlebar = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Titlebar"
QT_MOC_LITERAL(1, 9, 8), // "closeApp"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 11), // "maximizeApp"
QT_MOC_LITERAL(4, 31, 11), // "minimizeApp"
QT_MOC_LITERAL(5, 43, 11), // "closeWidget"
QT_MOC_LITERAL(6, 55, 14), // "maximizeWidget"
QT_MOC_LITERAL(7, 70, 14) // "minimizeWidget"

    },
    "Titlebar\0closeApp\0\0maximizeApp\0"
    "minimizeApp\0closeWidget\0maximizeWidget\0"
    "minimizeWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Titlebar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Titlebar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Titlebar *_t = static_cast<Titlebar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeApp(); break;
        case 1: _t->maximizeApp(); break;
        case 2: _t->minimizeApp(); break;
        case 3: _t->closeWidget(); break;
        case 4: _t->maximizeWidget(); break;
        case 5: _t->minimizeWidget(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Titlebar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Titlebar::closeApp)) {
                *result = 0;
            }
        }
        {
            typedef void (Titlebar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Titlebar::maximizeApp)) {
                *result = 1;
            }
        }
        {
            typedef void (Titlebar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Titlebar::minimizeApp)) {
                *result = 2;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Titlebar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Titlebar.data,
      qt_meta_data_Titlebar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Titlebar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Titlebar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Titlebar.stringdata0))
        return static_cast<void*>(const_cast< Titlebar*>(this));
    return QWidget::qt_metacast(_clname);
}

int Titlebar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Titlebar::closeApp()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Titlebar::maximizeApp()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Titlebar::minimizeApp()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
