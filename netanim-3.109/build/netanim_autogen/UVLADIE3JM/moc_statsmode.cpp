/****************************************************************************
** Meta object code from reading C++ file 'statsmode.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/statsmode.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statsmode.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7netanim10NodeButtonE_t {};
} // unnamed namespace

template <> constexpr inline auto netanim::NodeButton::qt_create_metaobjectdata<qt_meta_tag_ZN7netanim10NodeButtonE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "netanim::NodeButton",
        "buttonClickedSlot",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'buttonClickedSlot'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<NodeButton, qt_meta_tag_ZN7netanim10NodeButtonE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject netanim::NodeButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QPushButton::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7netanim10NodeButtonE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7netanim10NodeButtonE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7netanim10NodeButtonE_t>.metaTypes,
    nullptr
} };

void netanim::NodeButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NodeButton *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->buttonClickedSlot(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *netanim::NodeButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *netanim::NodeButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7netanim10NodeButtonE_t>.strings))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int netanim::NodeButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN7netanim9StatsModeE_t {};
} // unnamed namespace

template <> constexpr inline auto netanim::StatsMode::qt_create_metaobjectdata<qt_meta_tag_ZN7netanim9StatsModeE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "netanim::StatsMode",
        "testSlot",
        "",
        "clickRoutingTraceFileOpenSlot",
        "selectAllNodesSlot",
        "deselectAllNodesSlot",
        "statTypeChangedSlot",
        "index",
        "updateTimelineSlot",
        "value",
        "fontSizeSlot",
        "clickFlowMonTraceFileOpenSlot",
        "allowedNodesChangedSlot",
        "allowedNodes",
        "counterIndexChangedSlot",
        "showChartSlot"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'testSlot'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'clickRoutingTraceFileOpenSlot'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'selectAllNodesSlot'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'deselectAllNodesSlot'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'statTypeChangedSlot'
        QtMocHelpers::SlotData<void(int)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'updateTimelineSlot'
        QtMocHelpers::SlotData<void(int)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'fontSizeSlot'
        QtMocHelpers::SlotData<void(int)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'clickFlowMonTraceFileOpenSlot'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'allowedNodesChangedSlot'
        QtMocHelpers::SlotData<void(QString)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 13 },
        }}),
        // Slot 'counterIndexChangedSlot'
        QtMocHelpers::SlotData<void(int)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'showChartSlot'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<StatsMode, qt_meta_tag_ZN7netanim9StatsModeE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject netanim::StatsMode::staticMetaObject = { {
    QMetaObject::SuperData::link<Mode::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7netanim9StatsModeE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7netanim9StatsModeE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7netanim9StatsModeE_t>.metaTypes,
    nullptr
} };

void netanim::StatsMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<StatsMode *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->testSlot(); break;
        case 1: _t->clickRoutingTraceFileOpenSlot(); break;
        case 2: _t->selectAllNodesSlot(); break;
        case 3: _t->deselectAllNodesSlot(); break;
        case 4: _t->statTypeChangedSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->updateTimelineSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->fontSizeSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->clickFlowMonTraceFileOpenSlot(); break;
        case 8: _t->allowedNodesChangedSlot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->counterIndexChangedSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->showChartSlot(); break;
        default: ;
        }
    }
}

const QMetaObject *netanim::StatsMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *netanim::StatsMode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7netanim9StatsModeE_t>.strings))
        return static_cast<void*>(this);
    return Mode::qt_metacast(_clname);
}

int netanim::StatsMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Mode::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
