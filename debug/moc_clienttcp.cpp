/****************************************************************************
** Meta object code from reading C++ file 'clienttcp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../clienttcp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clienttcp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ClientTcp_t {
    QByteArrayData data[10];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientTcp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientTcp_t qt_meta_stringdata_ClientTcp = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ClientTcp"
QT_MOC_LITERAL(1, 10, 21), // "vers_IHM_connexion_OK"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 14), // "vers_IHM_texte"
QT_MOC_LITERAL(4, 48, 8), // "envoieIP"
QT_MOC_LITERAL(5, 57, 3), // "IP2"
QT_MOC_LITERAL(6, 61, 11), // "envoieTexte"
QT_MOC_LITERAL(7, 73, 1), // "t"
QT_MOC_LITERAL(8, 75, 12), // "connexion_OK"
QT_MOC_LITERAL(9, 88, 7) // "lecture"

    },
    "ClientTcp\0vers_IHM_connexion_OK\0\0"
    "vers_IHM_texte\0envoieIP\0IP2\0envoieTexte\0"
    "t\0connexion_OK\0lecture"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientTcp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   48,    2, 0x0a /* Public */,
       6,    1,   51,    2, 0x0a /* Public */,
       8,    0,   54,    2, 0x08 /* Private */,
       9,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QByteArray,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ClientTcp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClientTcp *_t = static_cast<ClientTcp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->vers_IHM_connexion_OK(); break;
        case 1: _t->vers_IHM_texte((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->envoieIP((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->envoieTexte((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 4: _t->connexion_OK(); break;
        case 5: _t->lecture(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ClientTcp::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientTcp::vers_IHM_connexion_OK)) {
                *result = 0;
            }
        }
        {
            typedef void (ClientTcp::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientTcp::vers_IHM_texte)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject ClientTcp::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ClientTcp.data,
      qt_meta_data_ClientTcp,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ClientTcp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientTcp::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ClientTcp.stringdata0))
        return static_cast<void*>(const_cast< ClientTcp*>(this));
    return QWidget::qt_metacast(_clname);
}

int ClientTcp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ClientTcp::vers_IHM_connexion_OK()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void ClientTcp::vers_IHM_texte(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
