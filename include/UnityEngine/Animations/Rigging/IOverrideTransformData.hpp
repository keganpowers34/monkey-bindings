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
}
// Completed forward declares
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: IOverrideTransformData
  class IOverrideTransformData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Animations::Rigging::IOverrideTransformData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::IOverrideTransformData*, "UnityEngine.Animations.Rigging", "IOverrideTransformData");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Animations.Rigging.IOverrideTransformData
  // [TokenAttribute] Offset: FFFFFFFF
  class IOverrideTransformData {
    public:
    // public UnityEngine.Transform get_constrainedObject()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Transform* get_constrainedObject();
    // public UnityEngine.Transform get_sourceObject()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Transform* get_sourceObject();
    // public System.Int32 get_space()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_space();
    // public System.String get_positionWeightFloatProperty()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_positionWeightFloatProperty();
    // public System.String get_rotationWeightFloatProperty()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_rotationWeightFloatProperty();
    // public System.String get_positionVector3Property()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_positionVector3Property();
    // public System.String get_rotationVector3Property()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_rotationVector3Property();
  }; // UnityEngine.Animations.Rigging.IOverrideTransformData
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IOverrideTransformData::get_constrainedObject
// Il2CppName: get_constrainedObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::Animations::Rigging::IOverrideTransformData::*)()>(&UnityEngine::Animations::Rigging::IOverrideTransformData::get_constrainedObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IOverrideTransformData*), "get_constrainedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IOverrideTransformData::get_sourceObject
// Il2CppName: get_sourceObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::Animations::Rigging::IOverrideTransformData::*)()>(&UnityEngine::Animations::Rigging::IOverrideTransformData::get_sourceObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IOverrideTransformData*), "get_sourceObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IOverrideTransformData::get_space
// Il2CppName: get_space
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Animations::Rigging::IOverrideTransformData::*)()>(&UnityEngine::Animations::Rigging::IOverrideTransformData::get_space)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IOverrideTransformData*), "get_space", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IOverrideTransformData::get_positionWeightFloatProperty
// Il2CppName: get_positionWeightFloatProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Animations::Rigging::IOverrideTransformData::*)()>(&UnityEngine::Animations::Rigging::IOverrideTransformData::get_positionWeightFloatProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IOverrideTransformData*), "get_positionWeightFloatProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IOverrideTransformData::get_rotationWeightFloatProperty
// Il2CppName: get_rotationWeightFloatProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Animations::Rigging::IOverrideTransformData::*)()>(&UnityEngine::Animations::Rigging::IOverrideTransformData::get_rotationWeightFloatProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IOverrideTransformData*), "get_rotationWeightFloatProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IOverrideTransformData::get_positionVector3Property
// Il2CppName: get_positionVector3Property
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Animations::Rigging::IOverrideTransformData::*)()>(&UnityEngine::Animations::Rigging::IOverrideTransformData::get_positionVector3Property)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IOverrideTransformData*), "get_positionVector3Property", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IOverrideTransformData::get_rotationVector3Property
// Il2CppName: get_rotationVector3Property
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Animations::Rigging::IOverrideTransformData::*)()>(&UnityEngine::Animations::Rigging::IOverrideTransformData::get_rotationVector3Property)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IOverrideTransformData*), "get_rotationVector3Property", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
