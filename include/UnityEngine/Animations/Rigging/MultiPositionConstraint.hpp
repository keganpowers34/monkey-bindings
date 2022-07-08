// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Animations.Rigging.RigConstraint`3
#include "UnityEngine/Animations/Rigging/RigConstraint_3.hpp"
// Including type: UnityEngine.Animations.Rigging.MultiPositionConstraintJob
#include "UnityEngine/Animations/Rigging/MultiPositionConstraintJob.hpp"
// Including type: UnityEngine.Animations.Rigging.MultiPositionConstraintData
#include "UnityEngine/Animations/Rigging/MultiPositionConstraintData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Animations::Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: MultiPositionConstraintJobBinder`1<T>
  template<typename T>
  class MultiPositionConstraintJobBinder_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: MultiPositionConstraint
  class MultiPositionConstraint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Animations::Rigging::MultiPositionConstraint);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::MultiPositionConstraint*, "UnityEngine.Animations.Rigging", "MultiPositionConstraint");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Animations.Rigging.MultiPositionConstraint
  // [TokenAttribute] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: ADA388
  // [HelpURLAttribute] Offset: ADA388
  class MultiPositionConstraint : public ::UnityEngine::Animations::Rigging::RigConstraint_3<::UnityEngine::Animations::Rigging::MultiPositionConstraintJob, ::UnityEngine::Animations::Rigging::MultiPositionConstraintData, ::UnityEngine::Animations::Rigging::MultiPositionConstraintJobBinder_1<::UnityEngine::Animations::Rigging::MultiPositionConstraintData>*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x115DA30
    // Implemented from: UnityEngine.Animations.Rigging.RigConstraint`3
    // Base method: System.Void RigConstraint_3::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiPositionConstraint* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Animations::Rigging::MultiPositionConstraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiPositionConstraint*, creationType>()));
    }
  }; // UnityEngine.Animations.Rigging.MultiPositionConstraint
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiPositionConstraint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
