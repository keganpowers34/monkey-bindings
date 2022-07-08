// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Text.UTF8Encoding
#include "System/Text/UTF8Encoding.hpp"
// Including type: System.Text.DecoderNLS
#include "System/Text/DecoderNLS.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::UTF8Encoding::UTF8Decoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::UTF8Encoding::UTF8Decoder*, "System.Text", "UTF8Encoding/UTF8Decoder");
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.UTF8Encoding/UTF8Decoder
  // [TokenAttribute] Offset: FFFFFFFF
  class UTF8Encoding::UTF8Decoder : public ::System::Text::DecoderNLS {
    public:
    public:
    // System.Int32 bits
    // Size: 0x4
    // Offset: 0x30
    int bits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return bits;
    }
    // Get instance field reference: System.Int32 bits
    [[deprecated("Use field access instead!")]] int& dyn_bits();
    // public System.Void .ctor(System.Text.UTF8Encoding encoding)
    // Offset: 0x136F0DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UTF8Encoding::UTF8Decoder* New_ctor(::System::Text::UTF8Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::UTF8Encoding::UTF8Decoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UTF8Encoding::UTF8Decoder*, creationType>(encoding)));
    }
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x136F810
    void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x136F568
    // Implemented from: System.Text.DecoderNLS
    // Base method: System.Void DecoderNLS::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UTF8Encoding::UTF8Decoder* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::UTF8Encoding::UTF8Decoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UTF8Encoding::UTF8Decoder*, creationType>(info, context)));
    }
    // public override System.Void Reset()
    // Offset: 0x136F95C
    // Implemented from: System.Text.DecoderNLS
    // Base method: System.Void DecoderNLS::Reset()
    void Reset();
    // override System.Boolean get_HasState()
    // Offset: 0x136F97C
    // Implemented from: System.Text.DecoderNLS
    // Base method: System.Boolean DecoderNLS::get_HasState()
    bool get_HasState();
  }; // System.Text.UTF8Encoding/UTF8Decoder
  #pragma pack(pop)
  static check_size<sizeof(UTF8Encoding::UTF8Decoder), 48 + sizeof(int)> __System_Text_UTF8Encoding_UTF8DecoderSizeCheck;
  static_assert(sizeof(UTF8Encoding::UTF8Decoder) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::UTF8Encoding::UTF8Decoder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::UTF8Encoding::UTF8Decoder::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::UTF8Encoding::UTF8Decoder::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Text::UTF8Encoding::UTF8Decoder::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding::UTF8Decoder*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Text::UTF8Encoding::UTF8Decoder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::UTF8Encoding::UTF8Decoder::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::UTF8Encoding::UTF8Decoder::*)()>(&System::Text::UTF8Encoding::UTF8Decoder::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding::UTF8Decoder*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::UTF8Encoding::UTF8Decoder::get_HasState
// Il2CppName: get_HasState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::UTF8Encoding::UTF8Decoder::*)()>(&System::Text::UTF8Encoding::UTF8Decoder::get_HasState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding::UTF8Decoder*), "get_HasState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
