/****************************************************************************
** Meta object code from reading C++ file 'joint_qnode.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/Humanoid2020FallHW/dyros_jet_gui/include/dyros_jet_gui/joint_qnode.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'joint_qnode.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_dyros_jet_gui__JointQNode[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x05,
      47,   26,   26,   26, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_dyros_jet_gui__JointQNode[] = {
    "dyros_jet_gui::JointQNode\0\0"
    "jointStateUpdated()\0rosShutdown()\0"
};

void dyros_jet_gui::JointQNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        JointQNode *_t = static_cast<JointQNode *>(_o);
        switch (_id) {
        case 0: _t->jointStateUpdated(); break;
        case 1: _t->rosShutdown(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData dyros_jet_gui::JointQNode::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject dyros_jet_gui::JointQNode::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_dyros_jet_gui__JointQNode,
      qt_meta_data_dyros_jet_gui__JointQNode, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &dyros_jet_gui::JointQNode::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *dyros_jet_gui::JointQNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *dyros_jet_gui::JointQNode::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dyros_jet_gui__JointQNode))
        return static_cast<void*>(const_cast< JointQNode*>(this));
    return QThread::qt_metacast(_clname);
}

int dyros_jet_gui::JointQNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void dyros_jet_gui::JointQNode::jointStateUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void dyros_jet_gui::JointQNode::rosShutdown()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
