/****************************************************************************
** Meta object code from reading C++ file 'ApduDetails.hpp'
**
** Created: Sat Nov 17 12:18:31 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ApduDetails.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ApduDetails.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ApduDetails[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       7,  114, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      20,   12,   12,   12, 0x05,
      39,   12,   12,   12, 0x05,
      58,   12,   12,   12, 0x05,
      77,   12,   12,   12, 0x05,
      97,   12,   12,   12, 0x05,
     115,   12,   12,   12, 0x05,
     138,   12,   12,   12, 0x05,
     156,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     171,   12,   12,   12, 0x0a,
     178,   12,   12,   12, 0x0a,
     208,  204,   12,   12, 0x0a,
     234,  230,   12,   12, 0x0a,
     260,  256,   12,   12, 0x0a,
     287,  282,   12,   12, 0x0a,
     313,  310,   12,   12, 0x0a,
     342,  334,   12,   12, 0x0a,
     371,  368,   12,   12, 0x0a,
     392,   12,   12,   12, 0x0a,
     411,   12,   12,   12, 0x08,

 // properties: name, type, flags
     438,  430, 0x0a495003,
     443,  430, 0x0a495003,
     448,  430, 0x0a495003,
     453,  430, 0x0a495003,
     459,  430, 0x0a495003,
     463,  430, 0x0a495003,
     472,  430, 0x0a495003,

 // properties: notify_signal_id
       1,
       2,
       3,
       4,
       5,
       6,
       7,

       0        // eod
};

static const char qt_meta_stringdata_ApduDetails[] = {
    "ApduDetails\0\0back()\0detectAidChanged()\0"
    "detectClaChanged()\0detectInsChanged()\0"
    "detectP1p2Changed()\0detectLcChanged()\0"
    "detectCommandChanged()\0detectLeChanged()\0"
    "showEventLog()\0show()\0startApduDetailsProcess()\0"
    "aid\0onAidChanged(QString)\0cla\0"
    "onClaChanged(QString)\0ins\0"
    "onInsChanged(QString)\0p1p2\0"
    "onP1p2Changed(QString)\0lc\0"
    "onLcChanged(QString)\0command\0"
    "onCommandChanged(QString)\0le\0"
    "onLeChanged(QString)\0backFromEventLog()\0"
    "onDialogAccepted()\0QString\0_aid\0_cla\0"
    "_ins\0_p1p2\0_lc\0_command\0_le\0"
};

void ApduDetails::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ApduDetails *_t = static_cast<ApduDetails *>(_o);
        switch (_id) {
        case 0: _t->back(); break;
        case 1: _t->detectAidChanged(); break;
        case 2: _t->detectClaChanged(); break;
        case 3: _t->detectInsChanged(); break;
        case 4: _t->detectP1p2Changed(); break;
        case 5: _t->detectLcChanged(); break;
        case 6: _t->detectCommandChanged(); break;
        case 7: _t->detectLeChanged(); break;
        case 8: _t->showEventLog(); break;
        case 9: _t->show(); break;
        case 10: _t->startApduDetailsProcess(); break;
        case 11: _t->onAidChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->onClaChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->onInsChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->onP1p2Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->onLcChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->onCommandChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->onLeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: _t->backFromEventLog(); break;
        case 19: _t->onDialogAccepted(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ApduDetails::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ApduDetails::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ApduDetails,
      qt_meta_data_ApduDetails, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ApduDetails::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ApduDetails::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ApduDetails::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ApduDetails))
        return static_cast<void*>(const_cast< ApduDetails*>(this));
    return QObject::qt_metacast(_clname);
}

int ApduDetails::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = getAid(); break;
        case 1: *reinterpret_cast< QString*>(_v) = getCla(); break;
        case 2: *reinterpret_cast< QString*>(_v) = getIns(); break;
        case 3: *reinterpret_cast< QString*>(_v) = getP1p2(); break;
        case 4: *reinterpret_cast< QString*>(_v) = getLc(); break;
        case 5: *reinterpret_cast< QString*>(_v) = getCommand(); break;
        case 6: *reinterpret_cast< QString*>(_v) = getLe(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setAid(*reinterpret_cast< QString*>(_v)); break;
        case 1: setCla(*reinterpret_cast< QString*>(_v)); break;
        case 2: setIns(*reinterpret_cast< QString*>(_v)); break;
        case 3: setP1p2(*reinterpret_cast< QString*>(_v)); break;
        case 4: setLc(*reinterpret_cast< QString*>(_v)); break;
        case 5: setCommand(*reinterpret_cast< QString*>(_v)); break;
        case 6: setLe(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ApduDetails::back()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ApduDetails::detectAidChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void ApduDetails::detectClaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void ApduDetails::detectInsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void ApduDetails::detectP1p2Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void ApduDetails::detectLcChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void ApduDetails::detectCommandChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void ApduDetails::detectLeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void ApduDetails::showEventLog()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}
QT_END_MOC_NAMESPACE
