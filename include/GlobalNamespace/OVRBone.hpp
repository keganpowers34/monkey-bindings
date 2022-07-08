// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRSkeleton/BoneId
#include "GlobalNamespace/OVRSkeleton_BoneId.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRBone
  class OVRBone;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRBone);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRBone*, "", "OVRBone");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OVRBone
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRBone : public ::Il2CppObject {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xAD06FC
    // private OVRSkeleton/BoneId <Id>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    ::GlobalNamespace::OVRSkeleton::BoneId Id;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRSkeleton::BoneId) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xAD070C
    // private System.Int16 <ParentBoneIndex>k__BackingField
    // Size: 0x2
    // Offset: 0x14
    int16_t ParentBoneIndex;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // Padding between fields: ParentBoneIndex and: Transform
    char __padding1[0x2] = {};
    // [CompilerGeneratedAttribute] Offset: 0xAD071C
    // private UnityEngine.Transform <Transform>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* Transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    public:
    // Get instance field reference: private OVRSkeleton/BoneId <Id>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRSkeleton::BoneId& dyn_$Id$k__BackingField();
    // Get instance field reference: private System.Int16 <ParentBoneIndex>k__BackingField
    [[deprecated("Use field access instead!")]] int16_t& dyn_$ParentBoneIndex$k__BackingField();
    // Get instance field reference: private UnityEngine.Transform <Transform>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_$Transform$k__BackingField();
    // public OVRSkeleton/BoneId get_Id()
    // Offset: 0xCCA268
    ::GlobalNamespace::OVRSkeleton::BoneId get_Id();
    // public System.Void set_Id(OVRSkeleton/BoneId value)
    // Offset: 0xCCA270
    void set_Id(::GlobalNamespace::OVRSkeleton::BoneId value);
    // public System.Int16 get_ParentBoneIndex()
    // Offset: 0xCCA278
    int16_t get_ParentBoneIndex();
    // public System.Void set_ParentBoneIndex(System.Int16 value)
    // Offset: 0xCCA280
    void set_ParentBoneIndex(int16_t value);
    // public UnityEngine.Transform get_Transform()
    // Offset: 0xCCA288
    ::UnityEngine::Transform* get_Transform();
    // public System.Void set_Transform(UnityEngine.Transform value)
    // Offset: 0xCCA290
    void set_Transform(::UnityEngine::Transform* value);
    // public System.Void .ctor()
    // Offset: 0xCCA298
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRBone* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRBone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRBone*, creationType>()));
    }
    // public System.Void .ctor(OVRSkeleton/BoneId id, System.Int16 parentBoneIndex, UnityEngine.Transform trans)
    // Offset: 0xCCA2A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRBone* New_ctor(::GlobalNamespace::OVRSkeleton::BoneId id, int16_t parentBoneIndex, ::UnityEngine::Transform* trans) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRBone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRBone*, creationType>(id, parentBoneIndex, trans)));
    }
  }; // OVRBone
  #pragma pack(pop)
  static check_size<sizeof(OVRBone), 24 + sizeof(::UnityEngine::Transform*)> __GlobalNamespace_OVRBoneSizeCheck;
  static_assert(sizeof(OVRBone) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRBone::get_Id
// Il2CppName: get_Id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSkeleton::BoneId (GlobalNamespace::OVRBone::*)()>(&GlobalNamespace::OVRBone::get_Id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBone*), "get_Id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBone::set_Id
// Il2CppName: set_Id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRBone::*)(::GlobalNamespace::OVRSkeleton::BoneId)>(&GlobalNamespace::OVRBone::set_Id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "OVRSkeleton/BoneId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBone*), "set_Id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBone::get_ParentBoneIndex
// Il2CppName: get_ParentBoneIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (GlobalNamespace::OVRBone::*)()>(&GlobalNamespace::OVRBone::get_ParentBoneIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBone*), "get_ParentBoneIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBone::set_ParentBoneIndex
// Il2CppName: set_ParentBoneIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRBone::*)(int16_t)>(&GlobalNamespace::OVRBone::set_ParentBoneIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBone*), "set_ParentBoneIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBone::get_Transform
// Il2CppName: get_Transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (GlobalNamespace::OVRBone::*)()>(&GlobalNamespace::OVRBone::get_Transform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBone*), "get_Transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBone::set_Transform
// Il2CppName: set_Transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRBone::*)(::UnityEngine::Transform*)>(&GlobalNamespace::OVRBone::set_Transform)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBone*), "set_Transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBone::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRBone::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
