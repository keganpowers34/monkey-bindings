// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ISubsystemDescriptorImpl
  class ISubsystemDescriptorImpl;
  // Forward declaring type: ISubsystemDescriptor
  class ISubsystemDescriptor;
  // Forward declaring type: SubsystemDescriptor
  class SubsystemDescriptor;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Internal_SubsystemDescriptors
  class Internal_SubsystemDescriptors;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Internal_SubsystemDescriptors);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Internal_SubsystemDescriptors*, "UnityEngine", "Internal_SubsystemDescriptors");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Internal_SubsystemDescriptors
  // [TokenAttribute] Offset: FFFFFFFF
  class Internal_SubsystemDescriptors : public ::Il2CppObject {
    public:
    // Get static field: static System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptorImpl> s_IntegratedSubsystemDescriptors
    static ::System::Collections::Generic::List_1<::UnityEngine::ISubsystemDescriptorImpl*>* _get_s_IntegratedSubsystemDescriptors();
    // Set static field: static System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptorImpl> s_IntegratedSubsystemDescriptors
    static void _set_s_IntegratedSubsystemDescriptors(::System::Collections::Generic::List_1<::UnityEngine::ISubsystemDescriptorImpl*>* value);
    // Get static field: static System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptor> s_StandaloneSubsystemDescriptors
    static ::System::Collections::Generic::List_1<::UnityEngine::ISubsystemDescriptor*>* _get_s_StandaloneSubsystemDescriptors();
    // Set static field: static System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptor> s_StandaloneSubsystemDescriptors
    static void _set_s_StandaloneSubsystemDescriptors(::System::Collections::Generic::List_1<::UnityEngine::ISubsystemDescriptor*>* value);
    // static System.Boolean Internal_AddDescriptor(UnityEngine.SubsystemDescriptor descriptor)
    // Offset: 0x1B56658
    static bool Internal_AddDescriptor(::UnityEngine::SubsystemDescriptor* descriptor);
    // static System.Void Internal_InitializeManagedDescriptor(System.IntPtr ptr, UnityEngine.ISubsystemDescriptorImpl desc)
    // Offset: 0x1B56858
    static void Internal_InitializeManagedDescriptor(::System::IntPtr ptr, ::UnityEngine::ISubsystemDescriptorImpl* desc);
    // static System.Void Internal_ClearManagedDescriptors()
    // Offset: 0x1B56958
    static void Internal_ClearManagedDescriptors();
    // static private System.Void .cctor()
    // Offset: 0x1B56B18
    static void _cctor();
  }; // UnityEngine.Internal_SubsystemDescriptors
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Internal_SubsystemDescriptors::Internal_AddDescriptor
// Il2CppName: Internal_AddDescriptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::SubsystemDescriptor*)>(&UnityEngine::Internal_SubsystemDescriptors::Internal_AddDescriptor)> {
  static const MethodInfo* get() {
    static auto* descriptor = &::il2cpp_utils::GetClassFromName("UnityEngine", "SubsystemDescriptor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Internal_SubsystemDescriptors*), "Internal_AddDescriptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{descriptor});
  }
};
// Writing MetadataGetter for method: UnityEngine::Internal_SubsystemDescriptors::Internal_InitializeManagedDescriptor
// Il2CppName: Internal_InitializeManagedDescriptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::ISubsystemDescriptorImpl*)>(&UnityEngine::Internal_SubsystemDescriptors::Internal_InitializeManagedDescriptor)> {
  static const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* desc = &::il2cpp_utils::GetClassFromName("UnityEngine", "ISubsystemDescriptorImpl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Internal_SubsystemDescriptors*), "Internal_InitializeManagedDescriptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr, desc});
  }
};
// Writing MetadataGetter for method: UnityEngine::Internal_SubsystemDescriptors::Internal_ClearManagedDescriptors
// Il2CppName: Internal_ClearManagedDescriptors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Internal_SubsystemDescriptors::Internal_ClearManagedDescriptors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Internal_SubsystemDescriptors*), "Internal_ClearManagedDescriptors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Internal_SubsystemDescriptors::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Internal_SubsystemDescriptors::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Internal_SubsystemDescriptors*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
