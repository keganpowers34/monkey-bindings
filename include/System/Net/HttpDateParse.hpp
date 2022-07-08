// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: HttpDateParse
  class HttpDateParse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::HttpDateParse);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpDateParse*, "System.Net", "HttpDateParse");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpDateParse
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpDateParse : public ::Il2CppObject {
    public:
    // static field const value: static private System.Int32 BASE_DEC
    static constexpr const int BASE_DEC = 10;
    // Get static field: static private System.Int32 BASE_DEC
    static int _get_BASE_DEC();
    // Set static field: static private System.Int32 BASE_DEC
    static void _set_BASE_DEC(int value);
    // static field const value: static private System.Int32 DATE_INDEX_DAY_OF_WEEK
    static constexpr const int DATE_INDEX_DAY_OF_WEEK = 0;
    // Get static field: static private System.Int32 DATE_INDEX_DAY_OF_WEEK
    static int _get_DATE_INDEX_DAY_OF_WEEK();
    // Set static field: static private System.Int32 DATE_INDEX_DAY_OF_WEEK
    static void _set_DATE_INDEX_DAY_OF_WEEK(int value);
    // static field const value: static private System.Int32 DATE_1123_INDEX_DAY
    static constexpr const int DATE_1123_INDEX_DAY = 1;
    // Get static field: static private System.Int32 DATE_1123_INDEX_DAY
    static int _get_DATE_1123_INDEX_DAY();
    // Set static field: static private System.Int32 DATE_1123_INDEX_DAY
    static void _set_DATE_1123_INDEX_DAY(int value);
    // static field const value: static private System.Int32 DATE_1123_INDEX_MONTH
    static constexpr const int DATE_1123_INDEX_MONTH = 2;
    // Get static field: static private System.Int32 DATE_1123_INDEX_MONTH
    static int _get_DATE_1123_INDEX_MONTH();
    // Set static field: static private System.Int32 DATE_1123_INDEX_MONTH
    static void _set_DATE_1123_INDEX_MONTH(int value);
    // static field const value: static private System.Int32 DATE_1123_INDEX_YEAR
    static constexpr const int DATE_1123_INDEX_YEAR = 3;
    // Get static field: static private System.Int32 DATE_1123_INDEX_YEAR
    static int _get_DATE_1123_INDEX_YEAR();
    // Set static field: static private System.Int32 DATE_1123_INDEX_YEAR
    static void _set_DATE_1123_INDEX_YEAR(int value);
    // static field const value: static private System.Int32 DATE_1123_INDEX_HRS
    static constexpr const int DATE_1123_INDEX_HRS = 4;
    // Get static field: static private System.Int32 DATE_1123_INDEX_HRS
    static int _get_DATE_1123_INDEX_HRS();
    // Set static field: static private System.Int32 DATE_1123_INDEX_HRS
    static void _set_DATE_1123_INDEX_HRS(int value);
    // static field const value: static private System.Int32 DATE_1123_INDEX_MINS
    static constexpr const int DATE_1123_INDEX_MINS = 5;
    // Get static field: static private System.Int32 DATE_1123_INDEX_MINS
    static int _get_DATE_1123_INDEX_MINS();
    // Set static field: static private System.Int32 DATE_1123_INDEX_MINS
    static void _set_DATE_1123_INDEX_MINS(int value);
    // static field const value: static private System.Int32 DATE_1123_INDEX_SECS
    static constexpr const int DATE_1123_INDEX_SECS = 6;
    // Get static field: static private System.Int32 DATE_1123_INDEX_SECS
    static int _get_DATE_1123_INDEX_SECS();
    // Set static field: static private System.Int32 DATE_1123_INDEX_SECS
    static void _set_DATE_1123_INDEX_SECS(int value);
    // static field const value: static private System.Int32 DATE_ANSI_INDEX_MONTH
    static constexpr const int DATE_ANSI_INDEX_MONTH = 1;
    // Get static field: static private System.Int32 DATE_ANSI_INDEX_MONTH
    static int _get_DATE_ANSI_INDEX_MONTH();
    // Set static field: static private System.Int32 DATE_ANSI_INDEX_MONTH
    static void _set_DATE_ANSI_INDEX_MONTH(int value);
    // static field const value: static private System.Int32 DATE_ANSI_INDEX_DAY
    static constexpr const int DATE_ANSI_INDEX_DAY = 2;
    // Get static field: static private System.Int32 DATE_ANSI_INDEX_DAY
    static int _get_DATE_ANSI_INDEX_DAY();
    // Set static field: static private System.Int32 DATE_ANSI_INDEX_DAY
    static void _set_DATE_ANSI_INDEX_DAY(int value);
    // static field const value: static private System.Int32 DATE_ANSI_INDEX_HRS
    static constexpr const int DATE_ANSI_INDEX_HRS = 3;
    // Get static field: static private System.Int32 DATE_ANSI_INDEX_HRS
    static int _get_DATE_ANSI_INDEX_HRS();
    // Set static field: static private System.Int32 DATE_ANSI_INDEX_HRS
    static void _set_DATE_ANSI_INDEX_HRS(int value);
    // static field const value: static private System.Int32 DATE_ANSI_INDEX_MINS
    static constexpr const int DATE_ANSI_INDEX_MINS = 4;
    // Get static field: static private System.Int32 DATE_ANSI_INDEX_MINS
    static int _get_DATE_ANSI_INDEX_MINS();
    // Set static field: static private System.Int32 DATE_ANSI_INDEX_MINS
    static void _set_DATE_ANSI_INDEX_MINS(int value);
    // static field const value: static private System.Int32 DATE_ANSI_INDEX_SECS
    static constexpr const int DATE_ANSI_INDEX_SECS = 5;
    // Get static field: static private System.Int32 DATE_ANSI_INDEX_SECS
    static int _get_DATE_ANSI_INDEX_SECS();
    // Set static field: static private System.Int32 DATE_ANSI_INDEX_SECS
    static void _set_DATE_ANSI_INDEX_SECS(int value);
    // static field const value: static private System.Int32 DATE_ANSI_INDEX_YEAR
    static constexpr const int DATE_ANSI_INDEX_YEAR = 6;
    // Get static field: static private System.Int32 DATE_ANSI_INDEX_YEAR
    static int _get_DATE_ANSI_INDEX_YEAR();
    // Set static field: static private System.Int32 DATE_ANSI_INDEX_YEAR
    static void _set_DATE_ANSI_INDEX_YEAR(int value);
    // static field const value: static private System.Int32 DATE_INDEX_TZ
    static constexpr const int DATE_INDEX_TZ = 7;
    // Get static field: static private System.Int32 DATE_INDEX_TZ
    static int _get_DATE_INDEX_TZ();
    // Set static field: static private System.Int32 DATE_INDEX_TZ
    static void _set_DATE_INDEX_TZ(int value);
    // static field const value: static private System.Int32 DATE_INDEX_LAST
    static constexpr const int DATE_INDEX_LAST = 7;
    // Get static field: static private System.Int32 DATE_INDEX_LAST
    static int _get_DATE_INDEX_LAST();
    // Set static field: static private System.Int32 DATE_INDEX_LAST
    static void _set_DATE_INDEX_LAST(int value);
    // static field const value: static private System.Int32 MAX_FIELD_DATE_ENTRIES
    static constexpr const int MAX_FIELD_DATE_ENTRIES = 8;
    // Get static field: static private System.Int32 MAX_FIELD_DATE_ENTRIES
    static int _get_MAX_FIELD_DATE_ENTRIES();
    // Set static field: static private System.Int32 MAX_FIELD_DATE_ENTRIES
    static void _set_MAX_FIELD_DATE_ENTRIES(int value);
    // static field const value: static private System.Int32 DATE_TOKEN_JANUARY
    static constexpr const int DATE_TOKEN_JANUARY = 1;
    // Get static field: static private System.Int32 DATE_TOKEN_JANUARY
    static int _get_DATE_TOKEN_JANUARY();
    // Set static field: static private System.Int32 DATE_TOKEN_JANUARY
    static void _set_DATE_TOKEN_JANUARY(int value);
    // static field const value: static private System.Int32 DATE_TOKEN_FEBRUARY
    static constexpr const int DATE_TOKEN_FEBRUARY = 2;
    // Get static field: static private System.Int32 DATE_TOKEN_FEBRUARY
    static int _get_DATE_TOKEN_FEBRUARY();
    // Set static field: static private System.Int32 DATE_TOKEN_FEBRUARY
    static void _set_DATE_TOKEN_FEBRUARY(int value);
    // static field const value: static private System.Int32 DATE_TOKEN_Microsoft
    static constexpr const int DATE_TOKEN_Microsoft = 3;
    // Get static field: static private System.Int32 DATE_TOKEN_Microsoft
    static int _get_DATE_TOKEN_Microsoft();
    // Set static field: static private System.Int32 DATE_TOKEN_Microsoft
    static void _set_DATE_TOKEN_Microsoft(int value);
    // static field const value: static private System.Int32 DATE_TOKEN_APRIL
    static constexpr const int DATE_TOKEN_APRIL = 4;
    // Get static field: static private System.Int32 DATE_TOKEN_APRIL
    static int _get_DATE_TOKEN_APRIL();
    // Set static field: static private System.Int32 DATE_TOKEN_APRIL
    static void _set_DATE_TOKEN_APRIL(int value);
    // static field const value: static private System.Int32 DATE_TOKEN_MAY
    static constexpr const int DATE_TOKEN_MAY = 5;
    // Get static field: static private System.Int32 DATE_TOKEN_MAY
    static int _get_DATE_TOKEN_MAY();
    // Set static field: static private System.Int32 DATE_TOKEN_MAY
    static void _set_DATE_TOKEN_MAY(int value);
    // static field const value: static private System.Int32 DATE_TOKEN_JUNE
    static constexpr const int DATE_TOKEN_JUNE = 6;
    // Get static field: static private System.Int32 DATE_TOKEN_JUNE
    static int _get_DATE_TOKEN_JUNE();
    // Set static field: static private System.Int32 DATE_TOKEN_JUNE
    static void _set_DATE_TOKEN_JUNE(int value);
    // static field const value: static private System.Int32 DATE_TOKEN_JULY
    static constexpr const int DATE_TOKEN_JULY = 7;
    // Get static field: static private System.Int32 DATE_TOKEN_JULY
    static int _get_DATE_TOKEN_JULY();
    // Set static field: static private System.Int32 DATE_TOKEN_JULY
    static void _set_DATE_TOKEN_JULY(int value);
    // static field const value: static private System.Int32 DATE_TOKEN_AUGUST
    static constexpr const int DATE_TOKEN_AUGUST = 8;
    // Get static field: static private System.Int32 DATE_TOKEN_AUGUST
    static int _get_DATE_TOKEN_AUGUST();
    // Set static field: static private System.Int32 DATE_TOKEN_AUGUST
    static void _set_DATE_TOKEN_AUGUST(int value);
    // static field const value: static private System.Int32 DATE_TOKEN_SEPTEMBER
    static constexpr const int DATE_TOKEN_SEPTEMBER = 9;
    // Get static field: static private System.Int32 DATE_TOKEN_SEPTEMBER
    static int _get_DATE_TOKEN_SEPTEMBER();
    // Set static field: static private System.Int32 DATE_TOKEN_SEPTEMBER
    static void _set_DATE_TOKEN_SEPTEMBER(int value);
    // static field const value: static private System.Int32 DATE_TOKEN_OCTOBER
    static constexpr const int DATE_TOKEN_OCTOBER = 10;
    // Get static field: static private System.Int32 DATE_TOKEN_OCTOBER
    static int _get_DATE_TOKEN_OCTOBER();
    // Set static field: static private System.Int32 DATE_TOKEN_OCTOBER
    static void _set_DATE_TOKEN_OCTOBER(int value);
    // static field const value: static private System.Int32 DATE_TOKEN_NOVEMBER
    static constexpr const int DATE_TOKEN_NOVEMBER = 11;
    // Get static field: static private System.Int32 DATE_TOKEN_NOVEMBER
    static int _get_DATE_TOKEN_NOVEMBER();
    // Set static field: static private System.Int32 DATE_TOKEN_NOVEMBER
    static void _set_DATE_TOKEN_NOVEMBER(int value);
    // static field const value: static private System.Int32 DATE_TOKEN_DECEMBER
    static constexpr const int DATE_TOKEN_DECEMBER = 12;
    // Get static field: static private System.Int32 DATE_TOKEN_DECEMBER
    static int _get_DATE_TOKEN_DECEMBER();
    // Set static field: static private System.Int32 DATE_TOKEN_DECEMBER
    static void _set_DATE_TOKEN_DECEMBER(int value);
    // static field const value: static private System.Int32 DATE_TOKEN_LAST_MONTH
    static constexpr const int DATE_TOKEN_LAST_MONTH = 13;
    // Get static field: static private System.Int32 DATE_TOKEN_LAST_MONTH
    static int _get_DATE_TOKEN_LAST_MONTH();
    // Set static field: static private System.Int32 DATE_TOKEN_LAST_MONTH
    static void _set_DATE_TOKEN_LAST_MONTH(int value);
    // static field const value: static private System.Int32 DATE_TOKEN_SUNDAY
    static constexpr const int DATE_TOKEN_SUNDAY = 0;
    // Get static field: static private System.Int32 DATE_TOKEN_SUNDAY
    static int _get_DATE_TOKEN_SUNDAY();
    // Set static field: static private System.Int32 DATE_TOKEN_SUNDAY
    static void _set_DATE_TOKEN_SUNDAY(int value);
    // static field const value: static private System.Int32 DATE_TOKEN_MONDAY
    static constexpr const int DATE_TOKEN_MONDAY = 1;
    // Get static field: static private System.Int32 DATE_TOKEN_MONDAY
    static int _get_DATE_TOKEN_MONDAY();
    // Set static field: static private System.Int32 DATE_TOKEN_MONDAY
    static void _set_DATE_TOKEN_MONDAY(int value);
    // static field const value: static private System.Int32 DATE_TOKEN_TUESDAY
    static constexpr const int DATE_TOKEN_TUESDAY = 2;
    // Get static field: static private System.Int32 DATE_TOKEN_TUESDAY
    static int _get_DATE_TOKEN_TUESDAY();
    // Set static field: static private System.Int32 DATE_TOKEN_TUESDAY
    static void _set_DATE_TOKEN_TUESDAY(int value);
    // static field const value: static private System.Int32 DATE_TOKEN_WEDNESDAY
    static constexpr const int DATE_TOKEN_WEDNESDAY = 3;
    // Get static field: static private System.Int32 DATE_TOKEN_WEDNESDAY
    static int _get_DATE_TOKEN_WEDNESDAY();
    // Set static field: static private System.Int32 DATE_TOKEN_WEDNESDAY
    static void _set_DATE_TOKEN_WEDNESDAY(int value);
    // static field const value: static private System.Int32 DATE_TOKEN_THURSDAY
    static constexpr const int DATE_TOKEN_THURSDAY = 4;
    // Get static field: static private System.Int32 DATE_TOKEN_THURSDAY
    static int _get_DATE_TOKEN_THURSDAY();
    // Set static field: static private System.Int32 DATE_TOKEN_THURSDAY
    static void _set_DATE_TOKEN_THURSDAY(int value);
    // static field const value: static private System.Int32 DATE_TOKEN_FRIDAY
    static constexpr const int DATE_TOKEN_FRIDAY = 5;
    // Get static field: static private System.Int32 DATE_TOKEN_FRIDAY
    static int _get_DATE_TOKEN_FRIDAY();
    // Set static field: static private System.Int32 DATE_TOKEN_FRIDAY
    static void _set_DATE_TOKEN_FRIDAY(int value);
    // static field const value: static private System.Int32 DATE_TOKEN_SATURDAY
    static constexpr const int DATE_TOKEN_SATURDAY = 6;
    // Get static field: static private System.Int32 DATE_TOKEN_SATURDAY
    static int _get_DATE_TOKEN_SATURDAY();
    // Set static field: static private System.Int32 DATE_TOKEN_SATURDAY
    static void _set_DATE_TOKEN_SATURDAY(int value);
    // static field const value: static private System.Int32 DATE_TOKEN_LAST_DAY
    static constexpr const int DATE_TOKEN_LAST_DAY = 7;
    // Get static field: static private System.Int32 DATE_TOKEN_LAST_DAY
    static int _get_DATE_TOKEN_LAST_DAY();
    // Set static field: static private System.Int32 DATE_TOKEN_LAST_DAY
    static void _set_DATE_TOKEN_LAST_DAY(int value);
    // static field const value: static private System.Int32 DATE_TOKEN_GMT
    static constexpr const int DATE_TOKEN_GMT = -1000;
    // Get static field: static private System.Int32 DATE_TOKEN_GMT
    static int _get_DATE_TOKEN_GMT();
    // Set static field: static private System.Int32 DATE_TOKEN_GMT
    static void _set_DATE_TOKEN_GMT(int value);
    // static field const value: static private System.Int32 DATE_TOKEN_LAST
    static constexpr const int DATE_TOKEN_LAST = -1000;
    // Get static field: static private System.Int32 DATE_TOKEN_LAST
    static int _get_DATE_TOKEN_LAST();
    // Set static field: static private System.Int32 DATE_TOKEN_LAST
    static void _set_DATE_TOKEN_LAST(int value);
    // static field const value: static private System.Int32 DATE_TOKEN_ERROR
    static constexpr const int DATE_TOKEN_ERROR = -999;
    // Get static field: static private System.Int32 DATE_TOKEN_ERROR
    static int _get_DATE_TOKEN_ERROR();
    // Set static field: static private System.Int32 DATE_TOKEN_ERROR
    static void _set_DATE_TOKEN_ERROR(int value);
    // static private System.Char MAKE_UPPER(System.Char c)
    // Offset: 0xF3B0D4
    static ::Il2CppChar MAKE_UPPER(::Il2CppChar c);
    // static private System.Int32 MapDayMonthToDword(System.Char[] lpszDay, System.Int32 index)
    // Offset: 0xF3B170
    static int MapDayMonthToDword(::ArrayW<::Il2CppChar> lpszDay, int index);
    // static public System.Boolean ParseHttpDate(System.String DateString, out System.DateTime dtOut)
    // Offset: 0xF3B3FC
    static bool ParseHttpDate(::StringW DateString, ByRef<::System::DateTime> dtOut);
  }; // System.Net.HttpDateParse
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::HttpDateParse::MAKE_UPPER
// Il2CppName: MAKE_UPPER
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (*)(::Il2CppChar)>(&System::Net::HttpDateParse::MAKE_UPPER)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpDateParse*), "MAKE_UPPER", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: System::Net::HttpDateParse::MapDayMonthToDword
// Il2CppName: MapDayMonthToDword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<::Il2CppChar>, int)>(&System::Net::HttpDateParse::MapDayMonthToDword)> {
  static const MethodInfo* get() {
    static auto* lpszDay = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpDateParse*), "MapDayMonthToDword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lpszDay, index});
  }
};
// Writing MetadataGetter for method: System::Net::HttpDateParse::ParseHttpDate
// Il2CppName: ParseHttpDate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::System::DateTime>)>(&System::Net::HttpDateParse::ParseHttpDate)> {
  static const MethodInfo* get() {
    static auto* DateString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* dtOut = &::il2cpp_utils::GetClassFromName("System", "DateTime")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpDateParse*), "ParseHttpDate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{DateString, dtOut});
  }
};
