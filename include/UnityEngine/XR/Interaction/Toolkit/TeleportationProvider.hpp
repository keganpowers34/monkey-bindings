// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.LocomotionProvider
#include "UnityEngine/XR/Interaction/Toolkit/LocomotionProvider.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.TeleportRequest
#include "UnityEngine/XR/Interaction/Toolkit/TeleportRequest.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: TeleportationProvider
  class TeleportationProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider*, "UnityEngine.XR.Interaction.Toolkit", "TeleportationProvider");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x55
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.TeleportationProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class TeleportationProvider : public ::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xAE0EF0
    // private UnityEngine.XR.Interaction.Toolkit.TeleportRequest <currentRequest>k__BackingField
    // Size: 0x24
    // Offset: 0x30
    ::UnityEngine::XR::Interaction::Toolkit::TeleportRequest currentRequest;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::TeleportRequest) == 0x24);
    // [CompilerGeneratedAttribute] Offset: 0xAE0F00
    // private System.Boolean <validRequest>k__BackingField
    // Size: 0x1
    // Offset: 0x54
    bool validRequest;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.TeleportRequest <currentRequest>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::TeleportRequest& dyn_$currentRequest$k__BackingField();
    // Get instance field reference: private System.Boolean <validRequest>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$validRequest$k__BackingField();
    // protected UnityEngine.XR.Interaction.Toolkit.TeleportRequest get_currentRequest()
    // Offset: 0xF5DA2C
    ::UnityEngine::XR::Interaction::Toolkit::TeleportRequest get_currentRequest();
    // protected System.Void set_currentRequest(UnityEngine.XR.Interaction.Toolkit.TeleportRequest value)
    // Offset: 0xF5DA40
    void set_currentRequest(::UnityEngine::XR::Interaction::Toolkit::TeleportRequest value);
    // protected System.Boolean get_validRequest()
    // Offset: 0xF5DA54
    bool get_validRequest();
    // protected System.Void set_validRequest(System.Boolean value)
    // Offset: 0xF5DA5C
    void set_validRequest(bool value);
    // public System.Boolean QueueTeleportRequest(UnityEngine.XR.Interaction.Toolkit.TeleportRequest teleportRequest)
    // Offset: 0xF5DA68
    bool QueueTeleportRequest(::UnityEngine::XR::Interaction::Toolkit::TeleportRequest teleportRequest);
    // protected System.Void Update()
    // Offset: 0xF5DA8C
    void Update();
    // public System.Void .ctor()
    // Offset: 0xF5DDBC
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.LocomotionProvider
    // Base method: System.Void LocomotionProvider::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TeleportationProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TeleportationProvider*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.TeleportationProvider
  #pragma pack(pop)
  static check_size<sizeof(TeleportationProvider), 84 + sizeof(bool)> __UnityEngine_XR_Interaction_Toolkit_TeleportationProviderSizeCheck;
  static_assert(sizeof(TeleportationProvider) == 0x55);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::TeleportationProvider::get_currentRequest
// Il2CppName: get_currentRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::TeleportRequest (UnityEngine::XR::Interaction::Toolkit::TeleportationProvider::*)()>(&UnityEngine::XR::Interaction::Toolkit::TeleportationProvider::get_currentRequest)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::TeleportationProvider*), "get_currentRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::TeleportationProvider::set_currentRequest
// Il2CppName: set_currentRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::TeleportationProvider::*)(::UnityEngine::XR::Interaction::Toolkit::TeleportRequest)>(&UnityEngine::XR::Interaction::Toolkit::TeleportationProvider::set_currentRequest)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "TeleportRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::TeleportationProvider*), "set_currentRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::TeleportationProvider::get_validRequest
// Il2CppName: get_validRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::TeleportationProvider::*)()>(&UnityEngine::XR::Interaction::Toolkit::TeleportationProvider::get_validRequest)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::TeleportationProvider*), "get_validRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::TeleportationProvider::set_validRequest
// Il2CppName: set_validRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::TeleportationProvider::*)(bool)>(&UnityEngine::XR::Interaction::Toolkit::TeleportationProvider::set_validRequest)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::TeleportationProvider*), "set_validRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::TeleportationProvider::QueueTeleportRequest
// Il2CppName: QueueTeleportRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::TeleportationProvider::*)(::UnityEngine::XR::Interaction::Toolkit::TeleportRequest)>(&UnityEngine::XR::Interaction::Toolkit::TeleportationProvider::QueueTeleportRequest)> {
  static const MethodInfo* get() {
    static auto* teleportRequest = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "TeleportRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::TeleportationProvider*), "QueueTeleportRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{teleportRequest});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::TeleportationProvider::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::TeleportationProvider::*)()>(&UnityEngine::XR::Interaction::Toolkit::TeleportationProvider::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::TeleportationProvider*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::TeleportationProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
