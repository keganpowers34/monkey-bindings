// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ArgumentException
#include "System/ArgumentException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Forward declaring type: EncoderFallbackException
  class EncoderFallbackException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::EncoderFallbackException);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::EncoderFallbackException*, "System.Text", "EncoderFallbackException");
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x9C
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.EncoderFallbackException
  // [TokenAttribute] Offset: FFFFFFFF
  class EncoderFallbackException : public ::System::ArgumentException {
    public:
    public:
    // private System.Char charUnknown
    // Size: 0x2
    // Offset: 0x90
    ::Il2CppChar charUnknown;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // private System.Char charUnknownHigh
    // Size: 0x2
    // Offset: 0x92
    ::Il2CppChar charUnknownHigh;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // private System.Char charUnknownLow
    // Size: 0x2
    // Offset: 0x94
    ::Il2CppChar charUnknownLow;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // Padding between fields: charUnknownLow and: index
    char __padding2[0x2] = {};
    // private System.Int32 index
    // Size: 0x4
    // Offset: 0x98
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept = delete;
    // Get instance field reference: private System.Char charUnknown
    [[deprecated("Use field access instead!")]] ::Il2CppChar& dyn_charUnknown();
    // Get instance field reference: private System.Char charUnknownHigh
    [[deprecated("Use field access instead!")]] ::Il2CppChar& dyn_charUnknownHigh();
    // Get instance field reference: private System.Char charUnknownLow
    [[deprecated("Use field access instead!")]] ::Il2CppChar& dyn_charUnknownLow();
    // Get instance field reference: private System.Int32 index
    [[deprecated("Use field access instead!")]] int& dyn_index();
    // System.Void .ctor(System.String message, System.Char charUnknown, System.Int32 index)
    // Offset: 0x15FE3DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EncoderFallbackException* New_ctor(::StringW message, ::Il2CppChar charUnknown, int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::EncoderFallbackException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EncoderFallbackException*, creationType>(message, charUnknown, index)));
    }
    // System.Void .ctor(System.String message, System.Char charUnknownHigh, System.Char charUnknownLow, System.Int32 index)
    // Offset: 0x15FE7A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EncoderFallbackException* New_ctor(::StringW message, ::Il2CppChar charUnknownHigh, ::Il2CppChar charUnknownLow, int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::EncoderFallbackException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EncoderFallbackException*, creationType>(message, charUnknownHigh, charUnknownLow, index)));
    }
    // public System.Void .ctor()
    // Offset: 0x15FEF90
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EncoderFallbackException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::EncoderFallbackException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EncoderFallbackException*, creationType>()));
    }
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x15FF004
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EncoderFallbackException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::EncoderFallbackException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EncoderFallbackException*, creationType>(info, context)));
    }
  }; // System.Text.EncoderFallbackException
  #pragma pack(pop)
  static check_size<sizeof(EncoderFallbackException), 152 + sizeof(int)> __System_Text_EncoderFallbackExceptionSizeCheck;
  static_assert(sizeof(EncoderFallbackException) == 0x9C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::EncoderFallbackException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::EncoderFallbackException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::EncoderFallbackException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::EncoderFallbackException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
