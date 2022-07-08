// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.Utilities.TypeTable
#include "UnityEngine/InputSystem/Utilities/TypeTable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputControl
  class InputControl;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputProcessor
  class InputProcessor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::InputProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputProcessor*, "UnityEngine.InputSystem", "InputProcessor");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.InputProcessor
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class InputProcessor : public ::Il2CppObject {
    public:
    // Get static field: static UnityEngine.InputSystem.Utilities.TypeTable s_Processors
    static ::UnityEngine::InputSystem::Utilities::TypeTable _get_s_Processors();
    // Set static field: static UnityEngine.InputSystem.Utilities.TypeTable s_Processors
    static void _set_s_Processors(::UnityEngine::InputSystem::Utilities::TypeTable value);
    // public System.Object ProcessAsObject(System.Object value, UnityEngine.InputSystem.InputControl control)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* ProcessAsObject(::Il2CppObject* value, ::UnityEngine::InputSystem::InputControl* control);
    // public System.Void Process(System.Void* buffer, System.Int32 bufferSize, UnityEngine.InputSystem.InputControl control)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Process(void* buffer, int bufferSize, ::UnityEngine::InputSystem::InputControl* control);
    // static System.Type GetValueTypeFromType(System.Type processorType)
    // Offset: 0xD378E8
    static ::System::Type* GetValueTypeFromType(::System::Type* processorType);
    // protected System.Void .ctor()
    // Offset: 0xD379D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputProcessor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::InputProcessor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputProcessor*, creationType>()));
    }
  }; // UnityEngine.InputSystem.InputProcessor
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputProcessor::ProcessAsObject
// Il2CppName: ProcessAsObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::InputSystem::InputProcessor::*)(::Il2CppObject*, ::UnityEngine::InputSystem::InputControl*)>(&UnityEngine::InputSystem::InputProcessor::ProcessAsObject)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* control = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputProcessor*), "ProcessAsObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, control});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputProcessor::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputProcessor::*)(void*, int, ::UnityEngine::InputSystem::InputControl*)>(&UnityEngine::InputSystem::InputProcessor::Process)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* bufferSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* control = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputProcessor*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, bufferSize, control});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputProcessor::GetValueTypeFromType
// Il2CppName: GetValueTypeFromType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&UnityEngine::InputSystem::InputProcessor::GetValueTypeFromType)> {
  static const MethodInfo* get() {
    static auto* processorType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputProcessor*), "GetValueTypeFromType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{processorType});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputProcessor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
