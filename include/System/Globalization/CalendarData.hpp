// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Globalization
namespace System::Globalization {
  // Forward declaring type: CalendarData
  class CalendarData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Globalization::CalendarData);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::CalendarData*, "System.Globalization", "CalendarData");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x99
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Globalization.CalendarData
  // [TokenAttribute] Offset: FFFFFFFF
  class CalendarData : public ::Il2CppObject {
    public:
    public:
    // System.String sNativeName
    // Size: 0x8
    // Offset: 0x10
    ::StringW sNativeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.String[] saShortDates
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::StringW> saShortDates;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // System.String[] saYearMonths
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::StringW> saYearMonths;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // System.String[] saLongDates
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::StringW> saLongDates;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // System.String sMonthDay
    // Size: 0x8
    // Offset: 0x30
    ::StringW sMonthDay;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.String[] saEraNames
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::StringW> saEraNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // System.String[] saAbbrevEraNames
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::StringW> saAbbrevEraNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // System.String[] saAbbrevEnglishEraNames
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::StringW> saAbbrevEnglishEraNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // System.String[] saDayNames
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::StringW> saDayNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // System.String[] saAbbrevDayNames
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<::StringW> saAbbrevDayNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // System.String[] saSuperShortDayNames
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<::StringW> saSuperShortDayNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // System.String[] saMonthNames
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<::StringW> saMonthNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // System.String[] saAbbrevMonthNames
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<::StringW> saAbbrevMonthNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // System.String[] saMonthGenitiveNames
    // Size: 0x8
    // Offset: 0x78
    ::ArrayW<::StringW> saMonthGenitiveNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // System.String[] saAbbrevMonthGenitiveNames
    // Size: 0x8
    // Offset: 0x80
    ::ArrayW<::StringW> saAbbrevMonthGenitiveNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // System.String[] saLeapYearMonthNames
    // Size: 0x8
    // Offset: 0x88
    ::ArrayW<::StringW> saLeapYearMonthNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // System.Int32 iTwoDigitYearMax
    // Size: 0x4
    // Offset: 0x90
    int iTwoDigitYearMax;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 iCurrentEra
    // Size: 0x4
    // Offset: 0x94
    int iCurrentEra;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Boolean bUseUserOverrides
    // Size: 0x1
    // Offset: 0x98
    bool bUseUserOverrides;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // static field const value: static System.Int32 MAX_CALENDARS
    static constexpr const int MAX_CALENDARS = 23;
    // Get static field: static System.Int32 MAX_CALENDARS
    static int _get_MAX_CALENDARS();
    // Set static field: static System.Int32 MAX_CALENDARS
    static void _set_MAX_CALENDARS(int value);
    // Get static field: static System.Globalization.CalendarData Invariant
    static ::System::Globalization::CalendarData* _get_Invariant();
    // Set static field: static System.Globalization.CalendarData Invariant
    static void _set_Invariant(::System::Globalization::CalendarData* value);
    // Get instance field reference: System.String sNativeName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_sNativeName();
    // Get instance field reference: System.String[] saShortDates
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_saShortDates();
    // Get instance field reference: System.String[] saYearMonths
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_saYearMonths();
    // Get instance field reference: System.String[] saLongDates
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_saLongDates();
    // Get instance field reference: System.String sMonthDay
    [[deprecated("Use field access instead!")]] ::StringW& dyn_sMonthDay();
    // Get instance field reference: System.String[] saEraNames
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_saEraNames();
    // Get instance field reference: System.String[] saAbbrevEraNames
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_saAbbrevEraNames();
    // Get instance field reference: System.String[] saAbbrevEnglishEraNames
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_saAbbrevEnglishEraNames();
    // Get instance field reference: System.String[] saDayNames
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_saDayNames();
    // Get instance field reference: System.String[] saAbbrevDayNames
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_saAbbrevDayNames();
    // Get instance field reference: System.String[] saSuperShortDayNames
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_saSuperShortDayNames();
    // Get instance field reference: System.String[] saMonthNames
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_saMonthNames();
    // Get instance field reference: System.String[] saAbbrevMonthNames
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_saAbbrevMonthNames();
    // Get instance field reference: System.String[] saMonthGenitiveNames
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_saMonthGenitiveNames();
    // Get instance field reference: System.String[] saAbbrevMonthGenitiveNames
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_saAbbrevMonthGenitiveNames();
    // Get instance field reference: System.String[] saLeapYearMonthNames
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_saLeapYearMonthNames();
    // Get instance field reference: System.Int32 iTwoDigitYearMax
    [[deprecated("Use field access instead!")]] int& dyn_iTwoDigitYearMax();
    // Get instance field reference: System.Int32 iCurrentEra
    [[deprecated("Use field access instead!")]] int& dyn_iCurrentEra();
    // Get instance field reference: System.Boolean bUseUserOverrides
    [[deprecated("Use field access instead!")]] bool& dyn_bUseUserOverrides();
    // static private System.Void .cctor()
    // Offset: 0xD7A0F0
    static void _cctor();
    // System.Void .ctor(System.String localeName, System.Int32 calendarId, System.Boolean bUseUserOverrides)
    // Offset: 0xD7ADA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CalendarData* New_ctor(::StringW localeName, int calendarId, bool bUseUserOverrides) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Globalization::CalendarData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CalendarData*, creationType>(localeName, calendarId, bUseUserOverrides)));
    }
    // private System.Void InitializeEraNames(System.String localeName, System.Int32 calendarId)
    // Offset: 0xD7B368
    void InitializeEraNames(::StringW localeName, int calendarId);
    // private System.Void InitializeAbbreviatedEraNames(System.String localeName, System.Int32 calendarId)
    // Offset: 0xD7B6C4
    void InitializeAbbreviatedEraNames(::StringW localeName, int calendarId);
    // static System.Globalization.CalendarData GetCalendarData(System.Int32 calendarId)
    // Offset: 0xD79B58
    static ::System::Globalization::CalendarData* GetCalendarData(int calendarId);
    // static private System.String CalendarIdToCultureName(System.Int32 calendarId)
    // Offset: 0xD7B93C
    static ::StringW CalendarIdToCultureName(int calendarId);
    // static public System.Int32 nativeGetTwoDigitYearMax(System.Int32 calID)
    // Offset: 0xD7A0D8
    static int nativeGetTwoDigitYearMax(int calID);
    // static private System.Boolean nativeGetCalendarData(System.Globalization.CalendarData data, System.String localeName, System.Int32 calendarId)
    // Offset: 0xD7B324
    static bool nativeGetCalendarData(::System::Globalization::CalendarData* data, ::StringW localeName, int calendarId);
    // private System.Boolean fill_calendar_data(System.String localeName, System.Int32 datetimeIndex)
    // Offset: 0xD7B9A4
    bool fill_calendar_data(::StringW localeName, int datetimeIndex);
    // private System.Void .ctor()
    // Offset: 0xD7A0E0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CalendarData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Globalization::CalendarData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CalendarData*, creationType>()));
    }
  }; // System.Globalization.CalendarData
  #pragma pack(pop)
  static check_size<sizeof(CalendarData), 152 + sizeof(bool)> __System_Globalization_CalendarDataSizeCheck;
  static_assert(sizeof(CalendarData) == 0x99);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::CalendarData::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Globalization::CalendarData::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::CalendarData*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::CalendarData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::CalendarData::InitializeEraNames
// Il2CppName: InitializeEraNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::CalendarData::*)(::StringW, int)>(&System::Globalization::CalendarData::InitializeEraNames)> {
  static const MethodInfo* get() {
    static auto* localeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* calendarId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::CalendarData*), "InitializeEraNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localeName, calendarId});
  }
};
// Writing MetadataGetter for method: System::Globalization::CalendarData::InitializeAbbreviatedEraNames
// Il2CppName: InitializeAbbreviatedEraNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::CalendarData::*)(::StringW, int)>(&System::Globalization::CalendarData::InitializeAbbreviatedEraNames)> {
  static const MethodInfo* get() {
    static auto* localeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* calendarId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::CalendarData*), "InitializeAbbreviatedEraNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localeName, calendarId});
  }
};
// Writing MetadataGetter for method: System::Globalization::CalendarData::GetCalendarData
// Il2CppName: GetCalendarData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CalendarData* (*)(int)>(&System::Globalization::CalendarData::GetCalendarData)> {
  static const MethodInfo* get() {
    static auto* calendarId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::CalendarData*), "GetCalendarData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{calendarId});
  }
};
// Writing MetadataGetter for method: System::Globalization::CalendarData::CalendarIdToCultureName
// Il2CppName: CalendarIdToCultureName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int)>(&System::Globalization::CalendarData::CalendarIdToCultureName)> {
  static const MethodInfo* get() {
    static auto* calendarId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::CalendarData*), "CalendarIdToCultureName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{calendarId});
  }
};
// Writing MetadataGetter for method: System::Globalization::CalendarData::nativeGetTwoDigitYearMax
// Il2CppName: nativeGetTwoDigitYearMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Globalization::CalendarData::nativeGetTwoDigitYearMax)> {
  static const MethodInfo* get() {
    static auto* calID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::CalendarData*), "nativeGetTwoDigitYearMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{calID});
  }
};
// Writing MetadataGetter for method: System::Globalization::CalendarData::nativeGetCalendarData
// Il2CppName: nativeGetCalendarData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Globalization::CalendarData*, ::StringW, int)>(&System::Globalization::CalendarData::nativeGetCalendarData)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System.Globalization", "CalendarData")->byval_arg;
    static auto* localeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* calendarId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::CalendarData*), "nativeGetCalendarData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, localeName, calendarId});
  }
};
// Writing MetadataGetter for method: System::Globalization::CalendarData::fill_calendar_data
// Il2CppName: fill_calendar_data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::CalendarData::*)(::StringW, int)>(&System::Globalization::CalendarData::fill_calendar_data)> {
  static const MethodInfo* get() {
    static auto* localeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* datetimeIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::CalendarData*), "fill_calendar_data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localeName, datetimeIndex});
  }
};
// Writing MetadataGetter for method: System::Globalization::CalendarData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
