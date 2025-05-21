/****************************************************************************
** Meta object code from reading C++ file 'qtvariantproperty.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/qtpropertybrowser/qtvariantproperty.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtvariantproperty.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN24QtVariantPropertyManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto QtVariantPropertyManager::qt_create_metaobjectdata<qt_meta_tag_ZN24QtVariantPropertyManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtVariantPropertyManager",
        "valueChanged",
        "",
        "QtProperty*",
        "property",
        "QVariant",
        "val",
        "attributeChanged",
        "attribute",
        "setValue",
        "setAttribute",
        "value",
        "slotValueChanged",
        "slotRangeChanged",
        "slotSingleStepChanged",
        "slotDecimalsChanged",
        "slotRegExpChanged",
        "slotEchoModeChanged",
        "QKeySequence",
        "slotConstraintChanged",
        "slotEnumNamesChanged",
        "slotEnumIconsChanged",
        "QMap<int,QIcon>",
        "slotFlagNamesChanged",
        "slotReadOnlyChanged",
        "slotTextVisibleChanged",
        "slotPropertyInserted",
        "slotPropertyRemoved"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(QtProperty *, const QVariant &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
        // Signal 'attributeChanged'
        QtMocHelpers::SignalData<void(QtProperty *, const QString &, const QVariant &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QString, 8 }, { 0x80000000 | 5, 6 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(QtProperty *, const QVariant &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
        // Slot 'setAttribute'
        QtMocHelpers::SlotData<void(QtProperty *, const QString &, const QVariant &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QString, 8 }, { 0x80000000 | 5, 11 },
        }}),
        // Slot 'slotValueChanged'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'slotRangeChanged'
        QtMocHelpers::SlotData<void(QtProperty *, int, int)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Int, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'slotSingleStepChanged'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'slotValueChanged'
        QtMocHelpers::SlotData<void(QtProperty *, double)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Double, 2 },
        }}),
        // Slot 'slotRangeChanged'
        QtMocHelpers::SlotData<void(QtProperty *, double, double)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Double, 2 }, { QMetaType::Double, 2 },
        }}),
        // Slot 'slotSingleStepChanged'
        QtMocHelpers::SlotData<void(QtProperty *, double)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Double, 2 },
        }}),
        // Slot 'slotDecimalsChanged'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'slotValueChanged'
        QtMocHelpers::SlotData<void(QtProperty *, bool)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Bool, 2 },
        }}),
        // Slot 'slotValueChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QString &)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QString, 2 },
        }}),
        // Slot 'slotRegExpChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QRegularExpression &)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QRegularExpression, 2 },
        }}),
        // Slot 'slotEchoModeChanged'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'slotValueChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QDate &)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QDate, 2 },
        }}),
        // Slot 'slotRangeChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QDate &, const QDate &)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QDate, 2 }, { QMetaType::QDate, 2 },
        }}),
        // Slot 'slotValueChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QTime &)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QTime, 2 },
        }}),
        // Slot 'slotValueChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QDateTime &)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QDateTime, 2 },
        }}),
        // Slot 'slotValueChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QKeySequence &)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { 0x80000000 | 18, 2 },
        }}),
        // Slot 'slotValueChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QChar &)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QChar, 2 },
        }}),
        // Slot 'slotValueChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QLocale &)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QLocale, 2 },
        }}),
        // Slot 'slotValueChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QPoint &)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QPoint, 2 },
        }}),
        // Slot 'slotValueChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QPointF &)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QPointF, 2 },
        }}),
        // Slot 'slotValueChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QSize &)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QSize, 2 },
        }}),
        // Slot 'slotRangeChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QSize &, const QSize &)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QSize, 2 }, { QMetaType::QSize, 2 },
        }}),
        // Slot 'slotValueChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QSizeF &)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QSizeF, 2 },
        }}),
        // Slot 'slotRangeChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QSizeF &, const QSizeF &)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QSizeF, 2 }, { QMetaType::QSizeF, 2 },
        }}),
        // Slot 'slotValueChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QRect &)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QRect, 2 },
        }}),
        // Slot 'slotConstraintChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QRect &)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QRect, 2 },
        }}),
        // Slot 'slotValueChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QRectF &)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QRectF, 2 },
        }}),
        // Slot 'slotConstraintChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QRectF &)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QRectF, 2 },
        }}),
        // Slot 'slotValueChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QColor &)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QColor, 2 },
        }}),
        // Slot 'slotEnumNamesChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QStringList &)>(20, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QStringList, 2 },
        }}),
        // Slot 'slotEnumIconsChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QMap<int,QIcon> &)>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { 0x80000000 | 22, 2 },
        }}),
        // Slot 'slotValueChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QSizePolicy &)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QSizePolicy, 2 },
        }}),
        // Slot 'slotValueChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QFont &)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QFont, 2 },
        }}),
        // Slot 'slotValueChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QCursor &)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QCursor, 2 },
        }}),
        // Slot 'slotFlagNamesChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QStringList &)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QStringList, 2 },
        }}),
        // Slot 'slotReadOnlyChanged'
        QtMocHelpers::SlotData<void(QtProperty *, bool)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Bool, 2 },
        }}),
        // Slot 'slotTextVisibleChanged'
        QtMocHelpers::SlotData<void(QtProperty *, bool)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Bool, 2 },
        }}),
        // Slot 'slotPropertyInserted'
        QtMocHelpers::SlotData<void(QtProperty *, QtProperty *, QtProperty *)>(26, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { 0x80000000 | 3, 2 }, { 0x80000000 | 3, 2 },
        }}),
        // Slot 'slotPropertyRemoved'
        QtMocHelpers::SlotData<void(QtProperty *, QtProperty *)>(27, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { 0x80000000 | 3, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtVariantPropertyManager, qt_meta_tag_ZN24QtVariantPropertyManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtVariantPropertyManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractPropertyManager::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24QtVariantPropertyManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24QtVariantPropertyManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN24QtVariantPropertyManagerE_t>.metaTypes,
    nullptr
} };

void QtVariantPropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtVariantPropertyManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 1: _t->attributeChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[3]))); break;
        case 2: _t->setValue((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 3: _t->setAttribute((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[3]))); break;
        case 4: _t->d_func()->slotValueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->d_func()->slotRangeChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 6: _t->d_func()->slotSingleStepChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 7: _t->d_func()->slotValueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 8: _t->d_func()->slotRangeChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3]))); break;
        case 9: _t->d_func()->slotSingleStepChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 10: _t->d_func()->slotDecimalsChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 11: _t->d_func()->slotValueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 12: _t->d_func()->slotValueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 13: _t->d_func()->slotRegExpChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QRegularExpression>>(_a[2]))); break;
        case 14: _t->d_func()->slotEchoModeChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 15: _t->d_func()->slotValueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDate>>(_a[2]))); break;
        case 16: _t->d_func()->slotRangeChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDate>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QDate>>(_a[3]))); break;
        case 17: _t->d_func()->slotValueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTime>>(_a[2]))); break;
        case 18: _t->d_func()->slotValueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[2]))); break;
        case 19: _t->d_func()->slotValueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QKeySequence>>(_a[2]))); break;
        case 20: _t->d_func()->slotValueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QChar>>(_a[2]))); break;
        case 21: _t->d_func()->slotValueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QLocale>>(_a[2]))); break;
        case 22: _t->d_func()->slotValueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[2]))); break;
        case 23: _t->d_func()->slotValueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[2]))); break;
        case 24: _t->d_func()->slotValueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QSize>>(_a[2]))); break;
        case 25: _t->d_func()->slotRangeChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QSize>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QSize>>(_a[3]))); break;
        case 26: _t->d_func()->slotValueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QSizeF>>(_a[2]))); break;
        case 27: _t->d_func()->slotRangeChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QSizeF>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QSizeF>>(_a[3]))); break;
        case 28: _t->d_func()->slotValueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QRect>>(_a[2]))); break;
        case 29: _t->d_func()->slotConstraintChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QRect>>(_a[2]))); break;
        case 30: _t->d_func()->slotValueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[2]))); break;
        case 31: _t->d_func()->slotConstraintChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[2]))); break;
        case 32: _t->d_func()->slotValueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QColor>>(_a[2]))); break;
        case 33: _t->d_func()->slotEnumNamesChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 34: _t->d_func()->slotEnumIconsChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMap<int,QIcon>>>(_a[2]))); break;
        case 35: _t->d_func()->slotValueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QSizePolicy>>(_a[2]))); break;
        case 36: _t->d_func()->slotValueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QFont>>(_a[2]))); break;
        case 37: _t->d_func()->slotValueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QCursor>>(_a[2]))); break;
        case 38: _t->d_func()->slotFlagNamesChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 39: _t->d_func()->slotReadOnlyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 40: _t->d_func()->slotTextVisibleChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 41: _t->d_func()->slotPropertyInserted((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[3]))); break;
        case 42: _t->d_func()->slotPropertyRemoved((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtVariantPropertyManager::*)(QtProperty * , const QVariant & )>(_a, &QtVariantPropertyManager::valueChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtVariantPropertyManager::*)(QtProperty * , const QString & , const QVariant & )>(_a, &QtVariantPropertyManager::attributeChanged, 1))
            return;
    }
}

const QMetaObject *QtVariantPropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtVariantPropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24QtVariantPropertyManagerE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractPropertyManager::qt_metacast(_clname);
}

int QtVariantPropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractPropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 43)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 43;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 43)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 43;
    }
    return _id;
}

// SIGNAL 0
void QtVariantPropertyManager::valueChanged(QtProperty * _t1, const QVariant & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void QtVariantPropertyManager::attributeChanged(QtProperty * _t1, const QString & _t2, const QVariant & _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2, _t3);
}
namespace {
struct qt_meta_tag_ZN22QtVariantEditorFactoryE_t {};
} // unnamed namespace

template <> constexpr inline auto QtVariantEditorFactory::qt_create_metaobjectdata<qt_meta_tag_ZN22QtVariantEditorFactoryE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtVariantEditorFactory"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtVariantEditorFactory, qt_meta_tag_ZN22QtVariantEditorFactoryE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtVariantEditorFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtVariantPropertyManager>::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22QtVariantEditorFactoryE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22QtVariantEditorFactoryE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22QtVariantEditorFactoryE_t>.metaTypes,
    nullptr
} };

void QtVariantEditorFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtVariantEditorFactory *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *QtVariantEditorFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtVariantEditorFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22QtVariantEditorFactoryE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtVariantPropertyManager>::qt_metacast(_clname);
}

int QtVariantEditorFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtVariantPropertyManager>::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
