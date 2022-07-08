// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Animations.Rigging.SyncableProperties
#include "UnityEngine/Animations/Rigging/SyncableProperties.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: IRigSyncSceneToStreamData
  class IRigSyncSceneToStreamData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData*, "UnityEngine.Animations.Rigging", "IRigSyncSceneToStreamData");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Animations.Rigging.IRigSyncSceneToStreamData
  // [TokenAttribute] Offset: FFFFFFFF
  class IRigSyncSceneToStreamData {
    public:
    // public UnityEngine.Transform[] get_syncableTransforms()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<::UnityEngine::Transform*> get_syncableTransforms();
    // public UnityEngine.Animations.Rigging.SyncableProperties[] get_syncableProperties()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<::UnityEngine::Animations::Rigging::SyncableProperties> get_syncableProperties();
    // public System.Boolean[] get_rigStates()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<bool> get_rigStates();
  }; // UnityEngine.Animations.Rigging.IRigSyncSceneToStreamData
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData::get_syncableTransforms
// Il2CppName: get_syncableTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Transform*> (UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData::*)()>(&UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData::get_syncableTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData*), "get_syncableTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData::get_syncableProperties
// Il2CppName: get_syncableProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Animations::Rigging::SyncableProperties> (UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData::*)()>(&UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData::get_syncableProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData*), "get_syncableProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData::get_rigStates
// Il2CppName: get_rigStates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<bool> (UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData::*)()>(&UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData::get_rigStates)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData*), "get_rigStates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
