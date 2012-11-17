/****************************************************************************
** Meta object code from reading C++ file 'StateManager.hpp'
**
** Created: Sat Nov 17 12:53:43 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/StateManager.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StateManager.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StateManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      35,   13,   13,   13, 0x05,
      66,   13,   13,   13, 0x05,
      91,   13,   13,   13, 0x05,
     120,   13,   13,   13, 0x05,

 // properties: name, type, flags
     157,  152, 0x01495003,
     169,  152, 0x01495003,
     191,  152, 0x01495003,
     207,  152, 0x01495003,
     230,  152, 0x01495003,

 // properties: notify_signal_id
       0,
       1,
       2,
       4,
       3,

       0        // eod
};

static const char qt_meta_stringdata_StateManager[] = {
    "StateManager\0\0inReadStateChanged()\0"
    "inDetectAndWriteStateChanged()\0"
    "inNdefPushStateChanged()\0"
    "inTagEmulationStateChanged()\0"
    "inEventLogShowingStateChanged()\0bool\0"
    "inReadState\0inDetectAndWriteState\0"
    "inNdefPushState\0inEventLogShowingState\0"
    "inTagEmulationState\0"
};

void StateManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StateManager *_t = static_cast<StateManager *>(_o);
        switch (_id) {
        case 0: _t->inReadStateChanged(); break;
        case 1: _t->inDetectAndWriteStateChanged(); break;
        case 2: _t->inNdefPushStateChanged(); break;
        case 3: _t->inTagEmulationStateChanged(); break;
        case 4: _t->inEventLogShowingStateChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData StateManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StateManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StateManager,
      qt_meta_data_StateManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StateManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StateManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StateManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StateManager))
        return static_cast<void*>(const_cast< StateManager*>(this));
    return QObject::qt_metacast(_clname);
}

int StateManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = inReadState(); break;
        case 1: *reinterpret_cast< bool*>(_v) = inDetectAndWriteState(); break;
        case 2: *reinterpret_cast< bool*>(_v) = inNdefPushState(); break;
        case 3: *reinterpret_cast< bool*>(_v) = isEventLogShowing(); break;
        case 4: *reinterpret_cast< bool*>(_v) = inTagEmulationState(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setReadState(*reinterpret_cast< bool*>(_v)); break;
        case 1: setDetectAndWriteState(*reinterpret_cast< bool*>(_v)); break;
        case 2: setNdefPushState(*reinterpret_cast< bool*>(_v)); break;
        case 3: setEventLogShowing(*reinterpret_cast< bool*>(_v)); break;
        case 4: setTagEmulationState(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void StateManager::inReadStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void StateManager::inDetectAndWriteStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void StateManager::inNdefPushStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void StateManager::inTagEmulationStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void StateManager::inEventLogShowingStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
