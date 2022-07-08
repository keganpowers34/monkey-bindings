// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Forward declaring namespace: UnityEngine::Animations::Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: WeightedTransformArray
  struct WeightedTransformArray;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: ITwistCorrectionData
  class ITwistCorrectionData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Animations::Rigging::ITwistCorrectionData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::ITwistCorrectionData*, "UnityEngine.Animations.Rigging", "ITwistCorrectionData");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Animations.Rigging.ITwistCorrectionData
  // [TokenAttribute] Offset: FFFFFFFF
  class ITwistCorrectionData {
    public:
    // public UnityEngine.Transform get_source()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Transform* get_source();
    // public UnityEngine.Animations.Rigging.WeightedTransformArray get_twistNodes()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Animations::Rigging::WeightedTransformArray get_twistNodes();
    // public UnityEngine.Vector3 get_twistAxis()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Vector3 get_twistAxis();
    // public System.String get_twistNodesProperty()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_twistNodesProperty();
  }; // UnityEngine.Animations.Rigging.ITwistCorrectionData
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::ITwistCorrectionData::get_source
// Il2CppName: get_source
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::Animations::Rigging::ITwistCorrectionData::*)()>(&UnityEngine::Animations::Rigging::ITwistCorrectionData::get_source)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::ITwistCorrectionData*), "get_source", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::ITwistCorrectionData::get_twistNodes
// Il2CppName: get_twistNodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::Rigging::WeightedTransformArray (UnityEngine::Animations::Rigging::ITwistCorrectionData::*)()>(&UnityEngine::Animations::Rigging::ITwistCorrectionData::get_twistNodes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::ITwistCorrectionData*), "get_twistNodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::ITwistCorrectionData::get_twistAxis
// Il2CppName: get_twistAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Animations::Rigging::ITwistCorrectionData::*)()>(&UnityEngine::Animations::Rigging::ITwistCorrectionData::get_twistAxis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::ITwistCorrectionData*), "get_twistAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::ITwistCorrectionData::get_twistNodesProperty
// Il2CppName: get_twistNodesProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Animations::Rigging::ITwistCorrectionData::*)()>(&UnityEngine::Animations::Rigging::ITwistCorrectionData::get_twistNodesProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::ITwistCorrectionData*), "get_twistNodesProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
