/****************************************************************************
** Meta object code from reading C++ file 'task_qnode.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/Humanoid2020FallHW/dyros_jet_gui/include/dyros_jet_gui/task_qnode.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'task_qnode.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_dyros_jet_gui__TaskQNode[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_dyros_jet_gui__TaskQNode[] = {
    "dyros_jet_gui::TaskQNode\0\0rosShutdown()\0"
};

void dyros_jet_gui::TaskQNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TaskQNode *_t = static_cast<TaskQNode *>(_o);
        switch (_id) {
        case 0: _t->rosShutdown(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData dyros_jet_gui::TaskQNode::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject dyros_jet_gui::TaskQNode::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_dyros_jet_gui__TaskQNode,
      qt_meta_data_dyros_jet_gui__TaskQNode, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &dyros_jet_gui::TaskQNode::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *dyros_jet_gui::TaskQNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *dyros_jet_gui::TaskQNode::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dyros_jet_gui__TaskQNode))
        return static_cast<void*>(const_cast< TaskQNode*>(this));
    return QThread::qt_metacast(_clname);
}

int dyros_jet_gui::TaskQNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void dyros_jet_gui::TaskQNode::rosShutdown()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
