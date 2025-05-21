/****************************************************************************
** Meta object code from reading C++ file 'animatormode.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/animatormode.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'animatormode.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7netanim12AnimatorModeE_t {};
} // unnamed namespace

template <> constexpr inline auto netanim::AnimatorMode::qt_create_metaobjectdata<qt_meta_tag_ZN7netanim12AnimatorModeE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "netanim::AnimatorMode",
        "testSlot",
        "",
        "clickTraceFileOpenSlot",
        "reloadFileSlot",
        "clickZoomInSlot",
        "clickZoomOutSlot",
        "clickResetSlot",
        "clickPlaySlot",
        "simulationSliderPressedSlot",
        "updateTimelineSlot",
        "value",
        "updateRateTimeoutSlot",
        "updateGridLinesSlot",
        "updateNodeSizeSlot",
        "index",
        "updateUpdateRateSlot",
        "showGridLinesSlot",
        "showNodeIdSlot",
        "showNodeSysIdSlot",
        "showMetaSlot",
        "showPacketSlot",
        "showWirelessCirclesSlot",
        "showPacketStatsSlot",
        "showNodePositionStatsSlot",
        "showIpSlot",
        "showMacSlot",
        "showRoutePathSlot",
        "showBatteryCapacitySlot",
        "buttonAnimationGroupFinishedSlot",
        "showPropertiesSlot",
        "pauseAtTimeSlot",
        "stepSlot",
        "enableMousePositionSlot"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'testSlot'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'clickTraceFileOpenSlot'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'reloadFileSlot'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'clickZoomInSlot'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'clickZoomOutSlot'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'clickResetSlot'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'clickPlaySlot'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'simulationSliderPressedSlot'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateTimelineSlot'
        QtMocHelpers::SlotData<void(int)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 11 },
        }}),
        // Slot 'updateTimelineSlot'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateRateTimeoutSlot'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateGridLinesSlot'
        QtMocHelpers::SlotData<void(int)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 11 },
        }}),
        // Slot 'updateNodeSizeSlot'
        QtMocHelpers::SlotData<void(int)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 15 },
        }}),
        // Slot 'updateUpdateRateSlot'
        QtMocHelpers::SlotData<void(int)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'showGridLinesSlot'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showNodeIdSlot'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showNodeSysIdSlot'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showMetaSlot'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showPacketSlot'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showWirelessCirclesSlot'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showPacketStatsSlot'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showNodePositionStatsSlot'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showIpSlot'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showMacSlot'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showRoutePathSlot'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showBatteryCapacitySlot'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'buttonAnimationGroupFinishedSlot'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showPropertiesSlot'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'pauseAtTimeSlot'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'stepSlot'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'enableMousePositionSlot'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AnimatorMode, qt_meta_tag_ZN7netanim12AnimatorModeE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject netanim::AnimatorMode::staticMetaObject = { {
    QMetaObject::SuperData::link<Mode::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7netanim12AnimatorModeE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7netanim12AnimatorModeE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7netanim12AnimatorModeE_t>.metaTypes,
    nullptr
} };

void netanim::AnimatorMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AnimatorMode *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->testSlot(); break;
        case 1: _t->clickTraceFileOpenSlot(); break;
        case 2: _t->reloadFileSlot(); break;
        case 3: _t->clickZoomInSlot(); break;
        case 4: _t->clickZoomOutSlot(); break;
        case 5: _t->clickResetSlot(); break;
        case 6: _t->clickPlaySlot(); break;
        case 7: _t->simulationSliderPressedSlot(); break;
        case 8: _t->updateTimelineSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->updateTimelineSlot(); break;
        case 10: _t->updateRateTimeoutSlot(); break;
        case 11: _t->updateGridLinesSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->updateNodeSizeSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->updateUpdateRateSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->showGridLinesSlot(); break;
        case 15: _t->showNodeIdSlot(); break;
        case 16: _t->showNodeSysIdSlot(); break;
        case 17: _t->showMetaSlot(); break;
        case 18: _t->showPacketSlot(); break;
        case 19: _t->showWirelessCirclesSlot(); break;
        case 20: _t->showPacketStatsSlot(); break;
        case 21: _t->showNodePositionStatsSlot(); break;
        case 22: _t->showIpSlot(); break;
        case 23: _t->showMacSlot(); break;
        case 24: _t->showRoutePathSlot(); break;
        case 25: _t->showBatteryCapacitySlot(); break;
        case 26: _t->buttonAnimationGroupFinishedSlot(); break;
        case 27: _t->showPropertiesSlot(); break;
        case 28: _t->pauseAtTimeSlot(); break;
        case 29: _t->stepSlot(); break;
        case 30: _t->enableMousePositionSlot(); break;
        default: ;
        }
    }
}

const QMetaObject *netanim::AnimatorMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *netanim::AnimatorMode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7netanim12AnimatorModeE_t>.strings))
        return static_cast<void*>(this);
    return Mode::qt_metacast(_clname);
}

int netanim::AnimatorMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Mode::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 31;
    }
    return _id;
}
QT_WARNING_POP
