// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Runtime.Remoting.Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: IDynamicProperty
  class IDynamicProperty;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::IDynamicProperty);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::IDynamicProperty*, "System.Runtime.Remoting.Contexts", "IDynamicProperty");
// Type namespace: System.Runtime.Remoting.Contexts
namespace System::Runtime::Remoting::Contexts {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Contexts.IDynamicProperty
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: A53E90
  class IDynamicProperty {
    public:
    // public System.String get_Name()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_Name();
  }; // System.Runtime.Remoting.Contexts.IDynamicProperty
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Contexts::IDynamicProperty::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Contexts::IDynamicProperty::*)()>(&System::Runtime::Remoting::Contexts::IDynamicProperty::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Contexts::IDynamicProperty*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
