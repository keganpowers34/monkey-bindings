// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Forward declaring type: ContextStaticAttribute
  class ContextStaticAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ContextStaticAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ContextStaticAttribute*, "System", "ContextStaticAttribute");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ContextStaticAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: A4FB20
  // [AttributeUsageAttribute] Offset: A4FB20
  class ContextStaticAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x13DB064
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContextStaticAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ContextStaticAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContextStaticAttribute*, creationType>()));
    }
  }; // System.ContextStaticAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ContextStaticAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
