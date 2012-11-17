/****************************************************************************
** Meta object code from reading C++ file 'NfcWorker.hpp'
**
** Created: Sat Nov 17 12:18:40 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/NfcWorker.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NfcWorker.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NfcWorker[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   11,   10,   10, 0x05,
      37,   10,   10,   10, 0x05,
      53,   11,   10,   10, 0x05,
      71,   11,   10,   10, 0x05,
      89,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     105,   10,   10,   10, 0x0a,
     122,   10,   10,   10, 0x0a,
     135,   10,   10,   10, 0x0a,
     149,  144,   10,   10, 0x0a,
     176,   10,   10,   10, 0x0a,
     212,  208,   10,   10, 0x0a,
     252,  247,   10,   10, 0x0a,
     303,  288,   10,   10, 0x0a,
     366,  346,   10,   10, 0x0a,
     464,  422,   10,   10, 0x0a,
     546,  529,   10,   10, 0x0a,
     585,   10,   10,   10, 0x0a,
     610,  208,   10,   10, 0x0a,
     632,  288,   10,   10, 0x0a,
     662,  247,   10,   10, 0x0a,
     685,  346,   10,   10, 0x0a,
     728,  422,   10,   10, 0x0a,
     793,  784,   10,   10, 0x0a,
     877,  823,   10,   10, 0x0a,
     955,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_NfcWorker[] = {
    "NfcWorker\0\0message\0message(QVariant)\0"
    "clearMessages()\0stopped(QVariant)\0"
    "started(QVariant)\0read_selected()\0"
    "startEventLoop()\0initialize()\0listen()\0"
    "code\0interruptBpsWaitLoop(uint)\0"
    "prepareToReadNdefTagViaInvoke()\0uri\0"
    "prepareToWriteNdefUriTag(QVariant)\0"
    "text\0prepareToWriteNdefTextTag(QVariant)\0"
    "sp_uri,sp_text\0"
    "prepareToWriteNdefSpTag(QVariant,QVariant)\0"
    "domain,type,payload\0"
    "prepareToWriteNdefCustomTag(QVariant,QVariant,QVariant)\0"
    "first_name,last_name,address,email,mobile\0"
    "prepareToSendVcard(QVariant,QVariant,QVariant,QVariant,QVariant)\0"
    "the_uri,the_text\0"
    "prepareToEmulateTag(QVariant,QVariant)\0"
    "prepareToStopEmulation()\0writeUriTag(QVariant)\0"
    "writeSpTag(QVariant,QVariant)\0"
    "writeTextTag(QVariant)\0"
    "writeCustomTag(QVariant,QVariant,QVariant)\0"
    "sendVcard(QVariant,QVariant,QVariant,QVariant,QVariant)\0"
    "uri,text\0emulateTag(QVariant,QVariant)\0"
    "aid,hex_cla,hex_ins,hexp1p2,hex_lc,hex_command,hex_le\0"
    "doIso7816Test(QVariant,QVariant,QVariant,QVariant,QVariant,QVariant,QV"
    "ariant)\0"
    "stopEmulatingTag()\0"
};

void NfcWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NfcWorker *_t = static_cast<NfcWorker *>(_o);
        switch (_id) {
        case 0: _t->message((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 1: _t->clearMessages(); break;
        case 2: _t->stopped((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 3: _t->started((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 4: _t->read_selected(); break;
        case 5: _t->startEventLoop(); break;
        case 6: _t->initialize(); break;
        case 7: _t->listen(); break;
        case 8: _t->interruptBpsWaitLoop((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 9: _t->prepareToReadNdefTagViaInvoke(); break;
        case 10: _t->prepareToWriteNdefUriTag((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 11: _t->prepareToWriteNdefTextTag((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 12: _t->prepareToWriteNdefSpTag((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 13: _t->prepareToWriteNdefCustomTag((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 14: _t->prepareToSendVcard((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5]))); break;
        case 15: _t->prepareToEmulateTag((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 16: _t->prepareToStopEmulation(); break;
        case 17: _t->writeUriTag((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 18: _t->writeSpTag((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 19: _t->writeTextTag((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 20: _t->writeCustomTag((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 21: _t->sendVcard((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5]))); break;
        case 22: _t->emulateTag((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 23: _t->doIso7816Test((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7]))); break;
        case 24: _t->stopEmulatingTag(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData NfcWorker::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NfcWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NfcWorker,
      qt_meta_data_NfcWorker, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NfcWorker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NfcWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NfcWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NfcWorker))
        return static_cast<void*>(const_cast< NfcWorker*>(this));
    return QObject::qt_metacast(_clname);
}

int NfcWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void NfcWorker::message(const QVariant & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NfcWorker::clearMessages()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void NfcWorker::stopped(const QVariant & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NfcWorker::started(const QVariant & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void NfcWorker::read_selected()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
