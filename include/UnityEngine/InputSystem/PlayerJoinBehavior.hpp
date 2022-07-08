// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: PlayerJoinBehavior
  struct PlayerJoinBehavior;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::PlayerJoinBehavior, "UnityEngine.InputSystem", "PlayerJoinBehavior");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.PlayerJoinBehavior
  // [TokenAttribute] Offset: FFFFFFFF
  struct PlayerJoinBehavior/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PlayerJoinBehavior
    constexpr PlayerJoinBehavior(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.InputSystem.PlayerJoinBehavior JoinPlayersWhenButtonIsPressed
    static constexpr const int JoinPlayersWhenButtonIsPressed = 0;
    // Get static field: static public UnityEngine.InputSystem.PlayerJoinBehavior JoinPlayersWhenButtonIsPressed
    static ::UnityEngine::InputSystem::PlayerJoinBehavior _get_JoinPlayersWhenButtonIsPressed();
    // Set static field: static public UnityEngine.InputSystem.PlayerJoinBehavior JoinPlayersWhenButtonIsPressed
    static void _set_JoinPlayersWhenButtonIsPressed(::UnityEngine::InputSystem::PlayerJoinBehavior value);
    // static field const value: static public UnityEngine.InputSystem.PlayerJoinBehavior JoinPlayersWhenJoinActionIsTriggered
    static constexpr const int JoinPlayersWhenJoinActionIsTriggered = 1;
    // Get static field: static public UnityEngine.InputSystem.PlayerJoinBehavior JoinPlayersWhenJoinActionIsTriggered
    static ::UnityEngine::InputSystem::PlayerJoinBehavior _get_JoinPlayersWhenJoinActionIsTriggered();
    // Set static field: static public UnityEngine.InputSystem.PlayerJoinBehavior JoinPlayersWhenJoinActionIsTriggered
    static void _set_JoinPlayersWhenJoinActionIsTriggered(::UnityEngine::InputSystem::PlayerJoinBehavior value);
    // static field const value: static public UnityEngine.InputSystem.PlayerJoinBehavior JoinPlayersManually
    static constexpr const int JoinPlayersManually = 2;
    // Get static field: static public UnityEngine.InputSystem.PlayerJoinBehavior JoinPlayersManually
    static ::UnityEngine::InputSystem::PlayerJoinBehavior _get_JoinPlayersManually();
    // Set static field: static public UnityEngine.InputSystem.PlayerJoinBehavior JoinPlayersManually
    static void _set_JoinPlayersManually(::UnityEngine::InputSystem::PlayerJoinBehavior value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.InputSystem.PlayerJoinBehavior
  #pragma pack(pop)
  static check_size<sizeof(PlayerJoinBehavior), 0 + sizeof(int)> __UnityEngine_InputSystem_PlayerJoinBehaviorSizeCheck;
  static_assert(sizeof(PlayerJoinBehavior) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
