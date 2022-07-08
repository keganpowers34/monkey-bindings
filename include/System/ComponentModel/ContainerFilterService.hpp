// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ComponentCollection
  class ComponentCollection;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ContainerFilterService
  class ContainerFilterService;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::ContainerFilterService);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ContainerFilterService*, "System.ComponentModel", "ContainerFilterService");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ContainerFilterService
  // [TokenAttribute] Offset: FFFFFFFF
  class ContainerFilterService : public ::Il2CppObject {
    public:
    // protected System.Void .ctor()
    // Offset: 0x114E6F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContainerFilterService* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::ContainerFilterService::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContainerFilterService*, creationType>()));
    }
    // public System.ComponentModel.ComponentCollection FilterComponents(System.ComponentModel.ComponentCollection components)
    // Offset: 0x114E6F8
    ::System::ComponentModel::ComponentCollection* FilterComponents(::System::ComponentModel::ComponentCollection* components);
  }; // System.ComponentModel.ContainerFilterService
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::ContainerFilterService::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::ContainerFilterService::FilterComponents
// Il2CppName: FilterComponents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ComponentCollection* (System::ComponentModel::ContainerFilterService::*)(::System::ComponentModel::ComponentCollection*)>(&System::ComponentModel::ContainerFilterService::FilterComponents)> {
  static const MethodInfo* get() {
    static auto* components = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ComponentCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ContainerFilterService*), "FilterComponents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{components});
  }
};
