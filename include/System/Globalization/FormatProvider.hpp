// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: NumberFormatInfo
  class NumberFormatInfo;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Forward declaring type: FormatProvider
  class FormatProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Globalization::FormatProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::FormatProvider*, "System.Globalization", "FormatProvider");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.FormatProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class FormatProvider : public ::Il2CppObject {
    public:
    // Nested type: ::System::Globalization::FormatProvider::Number
    class Number;
    // static System.String FormatBigInteger(System.Int32 precision, System.Int32 scale, System.Boolean sign, System.String format, System.Globalization.NumberFormatInfo numberFormatInfo, System.Char[] digits, System.Int32 startIndex)
    // Offset: 0x1AF3050
    static ::StringW FormatBigInteger(int precision, int scale, bool sign, ::StringW format, ::System::Globalization::NumberFormatInfo* numberFormatInfo, ::ArrayW<::Il2CppChar> digits, int startIndex);
  }; // System.Globalization.FormatProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::FormatProvider::FormatBigInteger
// Il2CppName: FormatBigInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int, int, bool, ::StringW, ::System::Globalization::NumberFormatInfo*, ::ArrayW<::Il2CppChar>, int)>(&System::Globalization::FormatProvider::FormatBigInteger)> {
  static const MethodInfo* get() {
    static auto* precision = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* scale = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sign = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* numberFormatInfo = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberFormatInfo")->byval_arg;
    static auto* digits = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::FormatProvider*), "FormatBigInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{precision, scale, sign, format, numberFormatInfo, digits, startIndex});
  }
};
