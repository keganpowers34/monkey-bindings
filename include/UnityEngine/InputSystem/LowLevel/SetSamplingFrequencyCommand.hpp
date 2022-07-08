// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.IInputDeviceCommandInfo
#include "UnityEngine/InputSystem/LowLevel/IInputDeviceCommandInfo.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.InputDeviceCommand
#include "UnityEngine/InputSystem/LowLevel/InputDeviceCommand.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Skipping declaration: FourCC because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Forward declaring type: SetSamplingFrequencyCommand
  struct SetSamplingFrequencyCommand;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand, "UnityEngine.InputSystem.LowLevel", "SetSamplingFrequencyCommand");
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.LowLevel.SetSamplingFrequencyCommand
  // [TokenAttribute] Offset: FFFFFFFF
  struct SetSamplingFrequencyCommand/*, public ::System::ValueType, public ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*/ {
    public:
    public:
    // public UnityEngine.InputSystem.LowLevel.InputDeviceCommand baseCommand
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand) == 0x8);
    // public System.Single frequency
    // Size: 0x4
    // Offset: 0x8
    float frequency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: SetSamplingFrequencyCommand
    constexpr SetSamplingFrequencyCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand_ = {}, float frequency_ = {}) noexcept : baseCommand{baseCommand_}, frequency{frequency_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo
    operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo() noexcept {
      return *reinterpret_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(this);
    }
    // static field const value: static System.Int32 kSize
    static constexpr const int kSize = 12;
    // Get static field: static System.Int32 kSize
    static int _get_kSize();
    // Set static field: static System.Int32 kSize
    static void _set_kSize(int value);
    // Get instance field reference: public UnityEngine.InputSystem.LowLevel.InputDeviceCommand baseCommand
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& dyn_baseCommand();
    // Get instance field reference: public System.Single frequency
    [[deprecated("Use field access instead!")]] float& dyn_frequency();
    // static public UnityEngine.InputSystem.Utilities.FourCC get_Type()
    // Offset: 0xC83D88
    static ::UnityEngine::InputSystem::Utilities::FourCC get_Type();
    // public UnityEngine.InputSystem.Utilities.FourCC get_typeStatic()
    // Offset: 0x990520
    ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();
    // static public UnityEngine.InputSystem.LowLevel.SetSamplingFrequencyCommand Create(System.Single frequency)
    // Offset: 0xC83E00
    static ::UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand Create(float frequency);
  }; // UnityEngine.InputSystem.LowLevel.SetSamplingFrequencyCommand
  #pragma pack(pop)
  static check_size<sizeof(SetSamplingFrequencyCommand), 8 + sizeof(float)> __UnityEngine_InputSystem_LowLevel_SetSamplingFrequencyCommandSizeCheck;
  static_assert(sizeof(SetSamplingFrequencyCommand) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(&UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand::get_typeStatic
// Il2CppName: get_typeStatic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand::*)()>(&UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand::get_typeStatic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand), "get_typeStatic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand (*)(float)>(&UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand::Create)> {
  static const MethodInfo* get() {
    static auto* frequency = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frequency});
  }
};
