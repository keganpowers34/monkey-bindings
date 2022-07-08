// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.ProgressChangedEventArgs
#include "System/ComponentModel/ProgressChangedEventArgs.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: UploadProgressChangedEventArgs
  class UploadProgressChangedEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::UploadProgressChangedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::UploadProgressChangedEventArgs*, "System.Net", "UploadProgressChangedEventArgs");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.UploadProgressChangedEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class UploadProgressChangedEventArgs : public ::System::ComponentModel::ProgressChangedEventArgs {
    public:
    public:
    // private System.Int64 m_BytesReceived
    // Size: 0x8
    // Offset: 0x20
    int64_t m_BytesReceived;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 m_TotalBytesToReceive
    // Size: 0x8
    // Offset: 0x28
    int64_t m_TotalBytesToReceive;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 m_BytesSent
    // Size: 0x8
    // Offset: 0x30
    int64_t m_BytesSent;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 m_TotalBytesToSend
    // Size: 0x8
    // Offset: 0x38
    int64_t m_TotalBytesToSend;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Get instance field reference: private System.Int64 m_BytesReceived
    [[deprecated("Use field access instead!")]] int64_t& dyn_m_BytesReceived();
    // Get instance field reference: private System.Int64 m_TotalBytesToReceive
    [[deprecated("Use field access instead!")]] int64_t& dyn_m_TotalBytesToReceive();
    // Get instance field reference: private System.Int64 m_BytesSent
    [[deprecated("Use field access instead!")]] int64_t& dyn_m_BytesSent();
    // Get instance field reference: private System.Int64 m_TotalBytesToSend
    [[deprecated("Use field access instead!")]] int64_t& dyn_m_TotalBytesToSend();
    // System.Void .ctor(System.Int32 progressPercentage, System.Object userToken, System.Int64 bytesSent, System.Int64 totalBytesToSend, System.Int64 bytesReceived, System.Int64 totalBytesToReceive)
    // Offset: 0xC72DF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UploadProgressChangedEventArgs* New_ctor(int progressPercentage, ::Il2CppObject* userToken, int64_t bytesSent, int64_t totalBytesToSend, int64_t bytesReceived, int64_t totalBytesToReceive) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::UploadProgressChangedEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UploadProgressChangedEventArgs*, creationType>(progressPercentage, userToken, bytesSent, totalBytesToSend, bytesReceived, totalBytesToReceive)));
    }
    // public System.Int64 get_BytesReceived()
    // Offset: 0xC72E3C
    int64_t get_BytesReceived();
    // public System.Int64 get_TotalBytesToReceive()
    // Offset: 0xC72E44
    int64_t get_TotalBytesToReceive();
    // public System.Int64 get_BytesSent()
    // Offset: 0xC72E4C
    int64_t get_BytesSent();
    // public System.Int64 get_TotalBytesToSend()
    // Offset: 0xC72E54
    int64_t get_TotalBytesToSend();
    // System.Void .ctor()
    // Offset: 0xC72E5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UploadProgressChangedEventArgs* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::UploadProgressChangedEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UploadProgressChangedEventArgs*, creationType>()));
    }
  }; // System.Net.UploadProgressChangedEventArgs
  #pragma pack(pop)
  static check_size<sizeof(UploadProgressChangedEventArgs), 56 + sizeof(int64_t)> __System_Net_UploadProgressChangedEventArgsSizeCheck;
  static_assert(sizeof(UploadProgressChangedEventArgs) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::UploadProgressChangedEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::UploadProgressChangedEventArgs::get_BytesReceived
// Il2CppName: get_BytesReceived
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::UploadProgressChangedEventArgs::*)()>(&System::Net::UploadProgressChangedEventArgs::get_BytesReceived)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::UploadProgressChangedEventArgs*), "get_BytesReceived", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::UploadProgressChangedEventArgs::get_TotalBytesToReceive
// Il2CppName: get_TotalBytesToReceive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::UploadProgressChangedEventArgs::*)()>(&System::Net::UploadProgressChangedEventArgs::get_TotalBytesToReceive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::UploadProgressChangedEventArgs*), "get_TotalBytesToReceive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::UploadProgressChangedEventArgs::get_BytesSent
// Il2CppName: get_BytesSent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::UploadProgressChangedEventArgs::*)()>(&System::Net::UploadProgressChangedEventArgs::get_BytesSent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::UploadProgressChangedEventArgs*), "get_BytesSent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::UploadProgressChangedEventArgs::get_TotalBytesToSend
// Il2CppName: get_TotalBytesToSend
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::UploadProgressChangedEventArgs::*)()>(&System::Net::UploadProgressChangedEventArgs::get_TotalBytesToSend)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::UploadProgressChangedEventArgs*), "get_TotalBytesToSend", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::UploadProgressChangedEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
