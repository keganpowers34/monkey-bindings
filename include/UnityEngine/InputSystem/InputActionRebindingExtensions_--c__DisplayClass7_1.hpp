// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputActionRebindingExtensions
#include "UnityEngine/InputSystem/InputActionRebindingExtensions.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::InputActionRebindingExtensions::$$c__DisplayClass7_1);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionRebindingExtensions::$$c__DisplayClass7_1*, "UnityEngine.InputSystem", "InputActionRebindingExtensions/<>c__DisplayClass7_1");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.InputActionRebindingExtensions/<>c__DisplayClass7_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AB90D0
  class InputActionRebindingExtensions::$$c__DisplayClass7_1 : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 firstPartIndex
    // Size: 0x4
    // Offset: 0x10
    int firstPartIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: firstPartIndex and: partStrings
    char __padding0[0x4] = {};
    // public System.String[] partStrings
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::StringW> partStrings;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public System.Int32 partCount
    // Size: 0x4
    // Offset: 0x20
    int partCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: partCount and: CS$$$8__locals1
    char __padding2[0x4] = {};
    // public UnityEngine.InputSystem.InputActionRebindingExtensions/<>c__DisplayClass7_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::InputSystem::InputActionRebindingExtensions::$$c__DisplayClass7_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputActionRebindingExtensions::$$c__DisplayClass7_0*) == 0x8);
    public:
    // Get instance field reference: public System.Int32 firstPartIndex
    [[deprecated("Use field access instead!")]] int& dyn_firstPartIndex();
    // Get instance field reference: public System.String[] partStrings
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_partStrings();
    // Get instance field reference: public System.Int32 partCount
    [[deprecated("Use field access instead!")]] int& dyn_partCount();
    // Get instance field reference: public UnityEngine.InputSystem.InputActionRebindingExtensions/<>c__DisplayClass7_0 CS$<>8__locals1
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputActionRebindingExtensions::$$c__DisplayClass7_0*& dyn_CS$$$8__locals1();
    // public System.Void .ctor()
    // Offset: 0xEB48E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputActionRebindingExtensions::$$c__DisplayClass7_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::InputActionRebindingExtensions::$$c__DisplayClass7_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputActionRebindingExtensions::$$c__DisplayClass7_1*, creationType>()));
    }
    // System.String <GetBindingDisplayString>b__0(System.String fragment)
    // Offset: 0xEB6ABC
    ::StringW $GetBindingDisplayString$b__0(::StringW fragment);
  }; // UnityEngine.InputSystem.InputActionRebindingExtensions/<>c__DisplayClass7_1
  #pragma pack(pop)
  static check_size<sizeof(InputActionRebindingExtensions::$$c__DisplayClass7_1), 40 + sizeof(::UnityEngine::InputSystem::InputActionRebindingExtensions::$$c__DisplayClass7_0*)> __UnityEngine_InputSystem_InputActionRebindingExtensions_$$c__DisplayClass7_1SizeCheck;
  static_assert(sizeof(InputActionRebindingExtensions::$$c__DisplayClass7_1) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionRebindingExtensions::$$c__DisplayClass7_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionRebindingExtensions::$$c__DisplayClass7_1::$GetBindingDisplayString$b__0
// Il2CppName: <GetBindingDisplayString>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::InputActionRebindingExtensions::$$c__DisplayClass7_1::*)(::StringW)>(&UnityEngine::InputSystem::InputActionRebindingExtensions::$$c__DisplayClass7_1::$GetBindingDisplayString$b__0)> {
  static const MethodInfo* get() {
    static auto* fragment = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputActionRebindingExtensions::$$c__DisplayClass7_1*), "<GetBindingDisplayString>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fragment});
  }
};
