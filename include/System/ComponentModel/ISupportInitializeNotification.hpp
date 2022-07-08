// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.ISupportInitialize
#include "System/ComponentModel/ISupportInitialize.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: EventHandler
  class EventHandler;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ISupportInitializeNotification
  class ISupportInitializeNotification;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::ISupportInitializeNotification);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ISupportInitializeNotification*, "System.ComponentModel", "ISupportInitializeNotification");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ISupportInitializeNotification
  // [TokenAttribute] Offset: FFFFFFFF
  class ISupportInitializeNotification/*, public ::System::ComponentModel::ISupportInitialize*/ {
    public:
    // Creating interface conversion operator: operator ::System::ComponentModel::ISupportInitialize
    operator ::System::ComponentModel::ISupportInitialize() noexcept {
      return *reinterpret_cast<::System::ComponentModel::ISupportInitialize*>(this);
    }
    // public System.Boolean get_IsInitialized()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsInitialized();
    // public System.Void add_Initialized(System.EventHandler value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void add_Initialized(::System::EventHandler* value);
    // public System.Void remove_Initialized(System.EventHandler value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void remove_Initialized(::System::EventHandler* value);
  }; // System.ComponentModel.ISupportInitializeNotification
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::ISupportInitializeNotification::get_IsInitialized
// Il2CppName: get_IsInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ISupportInitializeNotification::*)()>(&System::ComponentModel::ISupportInitializeNotification::get_IsInitialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ISupportInitializeNotification*), "get_IsInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ISupportInitializeNotification::add_Initialized
// Il2CppName: add_Initialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ISupportInitializeNotification::*)(::System::EventHandler*)>(&System::ComponentModel::ISupportInitializeNotification::add_Initialized)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "EventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ISupportInitializeNotification*), "add_Initialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ISupportInitializeNotification::remove_Initialized
// Il2CppName: remove_Initialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ISupportInitializeNotification::*)(::System::EventHandler*)>(&System::ComponentModel::ISupportInitializeNotification::remove_Initialized)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "EventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ISupportInitializeNotification*), "remove_Initialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
