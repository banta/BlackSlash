/****************************************************************************
** Meta object code from reading C++ file 'EventLog.hpp'
**
** Created: Sat Nov 17 12:18:35 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/EventLog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EventLog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EventLog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      17,    9,    9,    9, 0x05,
      24,    9,    9,    9, 0x05,
      50,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      73,    9,    9,    9, 0x0a,
      80,    9,    9,    9, 0x0a,

 // properties: name, type, flags
     116,  108, 0x0a495103,
     124,  108, 0x0a495103,

 // properties: notify_signal_id
       3,
       2,

       0        // eod
};

static const char qt_meta_stringdata_EventLog[] = {
    "EventLog\0\0back()\0hide()\0"
    "detectAppVersionChanged()\0"
    "detectMessageChanged()\0show()\0"
    "onBackNavigationTriggered()\0QString\0"
    "message\0appVersion\0"
};

void EventLog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EventLog *_t = static_cast<EventLog *>(_o);
        switch (_id) {
        case 0: _t->back(); break;
        case 1: _t->hide(); break;
        case 2: _t->detectAppVersionChanged(); break;
        case 3: _t->detectMessageChanged(); break;
        case 4: _t->show(); break;
        case 5: _t->onBackNavigationTriggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData EventLog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EventLog::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_EventLog,
      qt_meta_data_EventLog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EventLog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EventLog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EventLog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EventLog))
        return static_cast<void*>(const_cast< EventLog*>(this));
    return QObject::qt_metacast(_clname);
}

int EventLog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = getMessage(); break;
        case 1: *reinterpret_cast< QString*>(_v) = appVersion(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setMessage(*reinterpret_cast< QString*>(_v)); break;
        case 1: setAppVersion(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void EventLog::back()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void EventLog::hide()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void EventLog::detectAppVersionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void EventLog::detectMessageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
