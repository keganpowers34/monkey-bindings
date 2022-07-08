// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputActionState/BindingState
#include "UnityEngine/InputSystem/InputActionState_BindingState.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionState::BindingState::Flags, "UnityEngine.InputSystem", "InputActionState/BindingState/Flags");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.InputActionState/BindingState/Flags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct InputActionState::BindingState::Flags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Flags
    constexpr Flags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.InputSystem.InputActionState/BindingState/Flags ChainsWithNext
    static constexpr const int ChainsWithNext = 1;
    // Get static field: static public UnityEngine.InputSystem.InputActionState/BindingState/Flags ChainsWithNext
    static ::UnityEngine::InputSystem::InputActionState::BindingState::Flags _get_ChainsWithNext();
    // Set static field: static public UnityEngine.InputSystem.InputActionState/BindingState/Flags ChainsWithNext
    static void _set_ChainsWithNext(::UnityEngine::InputSystem::InputActionState::BindingState::Flags value);
    // static field const value: static public UnityEngine.InputSystem.InputActionState/BindingState/Flags EndOfChain
    static constexpr const int EndOfChain = 2;
    // Get static field: static public UnityEngine.InputSystem.InputActionState/BindingState/Flags EndOfChain
    static ::UnityEngine::InputSystem::InputActionState::BindingState::Flags _get_EndOfChain();
    // Set static field: static public UnityEngine.InputSystem.InputActionState/BindingState/Flags EndOfChain
    static void _set_EndOfChain(::UnityEngine::InputSystem::InputActionState::BindingState::Flags value);
    // static field const value: static public UnityEngine.InputSystem.InputActionState/BindingState/Flags Composite
    static constexpr const int Composite = 4;
    // Get static field: static public UnityEngine.InputSystem.InputActionState/BindingState/Flags Composite
    static ::UnityEngine::InputSystem::InputActionState::BindingState::Flags _get_Composite();
    // Set static field: static public UnityEngine.InputSystem.InputActionState/BindingState/Flags Composite
    static void _set_Composite(::UnityEngine::InputSystem::InputActionState::BindingState::Flags value);
    // static field const value: static public UnityEngine.InputSystem.InputActionState/BindingState/Flags PartOfComposite
    static constexpr const int PartOfComposite = 8;
    // Get static field: static public UnityEngine.InputSystem.InputActionState/BindingState/Flags PartOfComposite
    static ::UnityEngine::InputSystem::InputActionState::BindingState::Flags _get_PartOfComposite();
    // Set static field: static public UnityEngine.InputSystem.InputActionState/BindingState/Flags PartOfComposite
    static void _set_PartOfComposite(::UnityEngine::InputSystem::InputActionState::BindingState::Flags value);
    // static field const value: static public UnityEngine.InputSystem.InputActionState/BindingState/Flags InitialStateCheckPending
    static constexpr const int InitialStateCheckPending = 16;
    // Get static field: static public UnityEngine.InputSystem.InputActionState/BindingState/Flags InitialStateCheckPending
    static ::UnityEngine::InputSystem::InputActionState::BindingState::Flags _get_InitialStateCheckPending();
    // Set static field: static public UnityEngine.InputSystem.InputActionState/BindingState/Flags InitialStateCheckPending
    static void _set_InitialStateCheckPending(::UnityEngine::InputSystem::InputActionState::BindingState::Flags value);
    // static field const value: static public UnityEngine.InputSystem.InputActionState/BindingState/Flags WantsInitialStateCheck
    static constexpr const int WantsInitialStateCheck = 32;
    // Get static field: static public UnityEngine.InputSystem.InputActionState/BindingState/Flags WantsInitialStateCheck
    static ::UnityEngine::InputSystem::InputActionState::BindingState::Flags _get_WantsInitialStateCheck();
    // Set static field: static public UnityEngine.InputSystem.InputActionState/BindingState/Flags WantsInitialStateCheck
    static void _set_WantsInitialStateCheck(::UnityEngine::InputSystem::InputActionState::BindingState::Flags value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.InputSystem.InputActionState/BindingState/Flags
  #pragma pack(pop)
  static check_size<sizeof(InputActionState::BindingState::Flags), 0 + sizeof(int)> __UnityEngine_InputSystem_InputActionState_BindingState_FlagsSizeCheck;
  static_assert(sizeof(InputActionState::BindingState::Flags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
