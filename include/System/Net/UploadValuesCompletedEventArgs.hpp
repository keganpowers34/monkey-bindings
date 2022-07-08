// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.AsyncCompletedEventArgs
#include "System/ComponentModel/AsyncCompletedEventArgs.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: UploadValuesCompletedEventArgs
  class UploadValuesCompletedEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::UploadValuesCompletedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::UploadValuesCompletedEventArgs*, "System.Net", "UploadValuesCompletedEventArgs");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.UploadValuesCompletedEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class UploadValuesCompletedEventArgs : public ::System::ComponentModel::AsyncCompletedEventArgs {
    public:
    public:
    // private System.Byte[] m_Result
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> m_Result;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<uint8_t>
    constexpr operator ::ArrayW<uint8_t>() const noexcept {
      return m_Result;
    }
    // Get instance field reference: private System.Byte[] m_Result
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_m_Result();
    // System.Void .ctor(System.Byte[] result, System.Exception exception, System.Boolean cancelled, System.Object userToken)
    // Offset: 0xC737E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UploadValuesCompletedEventArgs* New_ctor(::ArrayW<uint8_t> result, ::System::Exception* exception, bool cancelled, ::Il2CppObject* userToken) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::UploadValuesCompletedEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UploadValuesCompletedEventArgs*, creationType>(result, exception, cancelled, userToken)));
    }
    // public System.Byte[] get_Result()
    // Offset: 0xC7381C
    ::ArrayW<uint8_t> get_Result();
    // System.Void .ctor()
    // Offset: 0xC73844
    // Implemented from: System.ComponentModel.AsyncCompletedEventArgs
    // Base method: System.Void AsyncCompletedEventArgs::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UploadValuesCompletedEventArgs* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::UploadValuesCompletedEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UploadValuesCompletedEventArgs*, creationType>()));
    }
  }; // System.Net.UploadValuesCompletedEventArgs
  #pragma pack(pop)
  static check_size<sizeof(UploadValuesCompletedEventArgs), 40 + sizeof(::ArrayW<uint8_t>)> __System_Net_UploadValuesCompletedEventArgsSizeCheck;
  static_assert(sizeof(UploadValuesCompletedEventArgs) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::UploadValuesCompletedEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::UploadValuesCompletedEventArgs::get_Result
// Il2CppName: get_Result
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Net::UploadValuesCompletedEventArgs::*)()>(&System::Net::UploadValuesCompletedEventArgs::get_Result)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::UploadValuesCompletedEventArgs*), "get_Result", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::UploadValuesCompletedEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
