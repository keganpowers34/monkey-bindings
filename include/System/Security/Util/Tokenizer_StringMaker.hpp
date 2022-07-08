// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Util.Tokenizer
#include "System/Security/Util/Tokenizer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Util::Tokenizer::StringMaker);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Util::Tokenizer::StringMaker*, "System.Security.Util", "Tokenizer/StringMaker");
// Type namespace: System.Security.Util
namespace System::Security::Util {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Util.Tokenizer/StringMaker
  // [TokenAttribute] Offset: FFFFFFFF
  class Tokenizer::StringMaker : public ::Il2CppObject {
    public:
    public:
    // private System.String[] aStrings
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::StringW> aStrings;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // private System.UInt32 cStringsMax
    // Size: 0x4
    // Offset: 0x18
    uint cStringsMax;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 cStringsUsed
    // Size: 0x4
    // Offset: 0x1C
    uint cStringsUsed;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Text.StringBuilder _outStringBuilder
    // Size: 0x8
    // Offset: 0x20
    ::System::Text::StringBuilder* outStringBuilder;
    // Field size check
    static_assert(sizeof(::System::Text::StringBuilder*) == 0x8);
    // public System.Char[] _outChars
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::Il2CppChar> outChars;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    // public System.Int32 _outIndex
    // Size: 0x4
    // Offset: 0x30
    int outIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.String[] aStrings
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_aStrings();
    // Get instance field reference: private System.UInt32 cStringsMax
    [[deprecated("Use field access instead!")]] uint& dyn_cStringsMax();
    // Get instance field reference: private System.UInt32 cStringsUsed
    [[deprecated("Use field access instead!")]] uint& dyn_cStringsUsed();
    // Get instance field reference: public System.Text.StringBuilder _outStringBuilder
    [[deprecated("Use field access instead!")]] ::System::Text::StringBuilder*& dyn__outStringBuilder();
    // Get instance field reference: public System.Char[] _outChars
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppChar>& dyn__outChars();
    // Get instance field reference: public System.Int32 _outIndex
    [[deprecated("Use field access instead!")]] int& dyn__outIndex();
    // static private System.UInt32 HashString(System.String str)
    // Offset: 0x12F7DD4
    static uint HashString(::StringW str);
    // static private System.UInt32 HashCharArray(System.Char[] a, System.Int32 l)
    // Offset: 0x12F7E40
    static uint HashCharArray(::ArrayW<::Il2CppChar> a, int l);
    // private System.Boolean CompareStringAndChars(System.String str, System.Char[] a, System.Int32 l)
    // Offset: 0x12F7F30
    bool CompareStringAndChars(::StringW str, ::ArrayW<::Il2CppChar> a, int l);
    // public System.String MakeString()
    // Offset: 0x12F2998
    ::StringW MakeString();
    // public System.Void .ctor()
    // Offset: 0x12F7EA8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Tokenizer::StringMaker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Util::Tokenizer::StringMaker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Tokenizer::StringMaker*, creationType>()));
    }
  }; // System.Security.Util.Tokenizer/StringMaker
  #pragma pack(pop)
  static check_size<sizeof(Tokenizer::StringMaker), 48 + sizeof(int)> __System_Security_Util_Tokenizer_StringMakerSizeCheck;
  static_assert(sizeof(Tokenizer::StringMaker) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Util::Tokenizer::StringMaker::HashString
// Il2CppName: HashString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::StringW)>(&System::Security::Util::Tokenizer::StringMaker::HashString)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::Tokenizer::StringMaker*), "HashString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: System::Security::Util::Tokenizer::StringMaker::HashCharArray
// Il2CppName: HashCharArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::ArrayW<::Il2CppChar>, int)>(&System::Security::Util::Tokenizer::StringMaker::HashCharArray)> {
  static const MethodInfo* get() {
    static auto* a = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* l = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::Tokenizer::StringMaker*), "HashCharArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, l});
  }
};
// Writing MetadataGetter for method: System::Security::Util::Tokenizer::StringMaker::CompareStringAndChars
// Il2CppName: CompareStringAndChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Util::Tokenizer::StringMaker::*)(::StringW, ::ArrayW<::Il2CppChar>, int)>(&System::Security::Util::Tokenizer::StringMaker::CompareStringAndChars)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* a = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* l = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::Tokenizer::StringMaker*), "CompareStringAndChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, a, l});
  }
};
// Writing MetadataGetter for method: System::Security::Util::Tokenizer::StringMaker::MakeString
// Il2CppName: MakeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Util::Tokenizer::StringMaker::*)()>(&System::Security::Util::Tokenizer::StringMaker::MakeString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::Tokenizer::StringMaker*), "MakeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Util::Tokenizer::StringMaker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
