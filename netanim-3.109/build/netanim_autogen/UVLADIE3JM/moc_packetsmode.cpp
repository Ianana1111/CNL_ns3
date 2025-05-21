/****************************************************************************
** Meta object code from reading C++ file 'packetsmode.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/packetsmode.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'packetsmode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN7netanim11PacketsModeE_t {};
} // unnamed namespace

template <> constexpr inline auto netanim::PacketsMode::qt_create_metaobjectdata<qt_meta_tag_ZN7netanim11PacketsModeE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "netanim::PacketsMode",
        "testSlot",
        "",
        "zoomInSlot",
        "zoomOutSlot",
        "fromTimeChangedSlot",
        "fromTimeText",
        "toTimeChangedSlot",
        "toTimeText",
        "allowedNodesChangedSlot",
        "allowedNodes",
        "regexFilterSlot",
        "reg",
        "showGridLinesSlot",
        "showPacketTableSlot",
        "filterClickedSlot",
        "submitFilterClickedSlot",
        "showGraphClickedSlot"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'testSlot'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'zoomInSlot'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'zoomOutSlot'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'fromTimeChangedSlot'
        QtMocHelpers::SlotData<void(QString)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 6 },
        }}),
        // Slot 'toTimeChangedSlot'
        QtMocHelpers::SlotData<void(QString)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 8 },
        }}),
        // Slot 'allowedNodesChangedSlot'
        QtMocHelpers::SlotData<void(QString)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
        // Slot 'regexFilterSlot'
        QtMocHelpers::SlotData<void(QString)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 12 },
        }}),
        // Slot 'showGridLinesSlot'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showPacketTableSlot'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'filterClickedSlot'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'submitFilterClickedSlot'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showGraphClickedSlot'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PacketsMode, qt_meta_tag_ZN7netanim11PacketsModeE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject netanim::PacketsMode::staticMetaObject = { {
    QMetaObject::SuperData::link<Mode::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7netanim11PacketsModeE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7netanim11PacketsModeE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7netanim11PacketsModeE_t>.metaTypes,
    nullptr
} };

void netanim::PacketsMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PacketsMode *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->testSlot(); break;
        case 1: _t->zoomInSlot(); break;
        case 2: _t->zoomOutSlot(); break;
        case 3: _t->fromTimeChangedSlot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->toTimeChangedSlot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->allowedNodesChangedSlot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->regexFilterSlot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->showGridLinesSlot(); break;
        case 8: _t->showPacketTableSlot(); break;
        case 9: _t->filterClickedSlot(); break;
        case 10: _t->submitFilterClickedSlot(); break;
        case 11: _t->showGraphClickedSlot(); break;
        default: ;
        }
    }
}

const QMetaObject *netanim::PacketsMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *netanim::PacketsMode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7netanim11PacketsModeE_t>.strings))
        return static_cast<void*>(this);
    return Mode::qt_metacast(_clname);
}

int netanim::PacketsMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Mode::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
