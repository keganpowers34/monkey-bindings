// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputRemoting/ChangeUsageMsg
#include "UnityEngine/InputSystem/InputRemoting_ChangeUsageMsg.hpp"
// Including type: UnityEngine.InputSystem.Utilities.InternedString
#include "UnityEngine/InputSystem/Utilities/InternedString.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::InputRemoting::ChangeUsageMsg::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputRemoting::ChangeUsageMsg::$$c*, "UnityEngine.InputSystem", "InputRemoting/ChangeUsageMsg/<>c");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.InputRemoting/ChangeUsageMsg/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AB978C
  class InputRemoting::ChangeUsageMsg::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.InputSystem.InputRemoting/ChangeUsageMsg/<>c <>9
    static ::UnityEngine::InputSystem::InputRemoting::ChangeUsageMsg::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.InputSystem.InputRemoting/ChangeUsageMsg/<>c <>9
    static void _set_$$9(::UnityEngine::InputSystem::InputRemoting::ChangeUsageMsg::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.String> <>9__1_0
    static ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* _get_$$9__1_0();
    // Set static field: static public System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.String> <>9__1_0
    static void _set_$$9__1_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* value);
    // static private System.Void .cctor()
    // Offset: 0xD39638
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0xD3969C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputRemoting::ChangeUsageMsg::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::InputRemoting::ChangeUsageMsg::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputRemoting::ChangeUsageMsg::$$c*, creationType>()));
    }
    // System.String <Create>b__1_0(UnityEngine.InputSystem.Utilities.InternedString x)
    // Offset: 0xD396A4
    ::StringW $Create$b__1_0(::UnityEngine::InputSystem::Utilities::InternedString x);
  }; // UnityEngine.InputSystem.InputRemoting/ChangeUsageMsg/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputRemoting::ChangeUsageMsg::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::InputSystem::InputRemoting::ChangeUsageMsg::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputRemoting::ChangeUsageMsg::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputRemoting::ChangeUsageMsg::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputRemoting::ChangeUsageMsg::$$c::$Create$b__1_0
// Il2CppName: <Create>b__1_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::InputRemoting::ChangeUsageMsg::$$c::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(&UnityEngine::InputSystem::InputRemoting::ChangeUsageMsg::$$c::$Create$b__1_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Utilities", "InternedString")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputRemoting::ChangeUsageMsg::$$c*), "<Create>b__1_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
