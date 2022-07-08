// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB3_MeshCombiner
#include "DigitalOpus/MB/Core/MB3_MeshCombiner.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB3_MeshCombiner::GenerateUV2Delegate);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB3_MeshCombiner::GenerateUV2Delegate*, "DigitalOpus.MB.Core", "MB3_MeshCombiner/GenerateUV2Delegate");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB3_MeshCombiner/GenerateUV2Delegate
  // [TokenAttribute] Offset: FFFFFFFF
  class MB3_MeshCombiner::GenerateUV2Delegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xC29890
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_MeshCombiner::GenerateUV2Delegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_MeshCombiner::GenerateUV2Delegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_MeshCombiner::GenerateUV2Delegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.Mesh m, System.Single hardAngle, System.Single packMargin)
    // Offset: 0xC298A0
    void Invoke(::UnityEngine::Mesh* m, float hardAngle, float packMargin);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Mesh m, System.Single hardAngle, System.Single packMargin, System.AsyncCallback callback, System.Object object)
    // Offset: 0xC29CE0
    ::System::IAsyncResult* BeginInvoke(::UnityEngine::Mesh* m, float hardAngle, float packMargin, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xC29D94
    void EndInvoke(::System::IAsyncResult* result);
  }; // DigitalOpus.MB.Core.MB3_MeshCombiner/GenerateUV2Delegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombiner::GenerateUV2Delegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombiner::GenerateUV2Delegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB3_MeshCombiner::GenerateUV2Delegate::*)(::UnityEngine::Mesh*, float, float)>(&DigitalOpus::MB::Core::MB3_MeshCombiner::GenerateUV2Delegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* hardAngle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* packMargin = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshCombiner::GenerateUV2Delegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, hardAngle, packMargin});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombiner::GenerateUV2Delegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (DigitalOpus::MB::Core::MB3_MeshCombiner::GenerateUV2Delegate::*)(::UnityEngine::Mesh*, float, float, ::System::AsyncCallback*, ::Il2CppObject*)>(&DigitalOpus::MB::Core::MB3_MeshCombiner::GenerateUV2Delegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* hardAngle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* packMargin = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshCombiner::GenerateUV2Delegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, hardAngle, packMargin, callback, object});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombiner::GenerateUV2Delegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB3_MeshCombiner::GenerateUV2Delegate::*)(::System::IAsyncResult*)>(&DigitalOpus::MB::Core::MB3_MeshCombiner::GenerateUV2Delegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshCombiner::GenerateUV2Delegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
