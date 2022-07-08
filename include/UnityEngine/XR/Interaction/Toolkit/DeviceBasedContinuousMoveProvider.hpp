// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase
#include "UnityEngine/XR/Interaction/Toolkit/ContinuousMoveProviderBase.hpp"
// Including type: UnityEngine.XR.InputFeatureUsage`1
#include "UnityEngine/XR/InputFeatureUsage_1.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: XRBaseController
  class XRBaseController;
  // Skipping declaration: InputAxes because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: DeviceBasedContinuousMoveProvider
  class DeviceBasedContinuousMoveProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider*, "UnityEngine.XR.Interaction.Toolkit", "DeviceBasedContinuousMoveProvider");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousMoveProvider
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: ADDCC0
  class DeviceBasedContinuousMoveProvider : public ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase {
    public:
    // Nested type: ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::InputAxes
    struct InputAxes;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousMoveProvider/InputAxes
    // [TokenAttribute] Offset: FFFFFFFF
    struct InputAxes/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: InputAxes
      constexpr InputAxes(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousMoveProvider/InputAxes Primary2DAxis
      static constexpr const int Primary2DAxis = 0;
      // Get static field: static public UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousMoveProvider/InputAxes Primary2DAxis
      static ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::InputAxes _get_Primary2DAxis();
      // Set static field: static public UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousMoveProvider/InputAxes Primary2DAxis
      static void _set_Primary2DAxis(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::InputAxes value);
      // static field const value: static public UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousMoveProvider/InputAxes Secondary2DAxis
      static constexpr const int Secondary2DAxis = 1;
      // Get static field: static public UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousMoveProvider/InputAxes Secondary2DAxis
      static ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::InputAxes _get_Secondary2DAxis();
      // Set static field: static public UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousMoveProvider/InputAxes Secondary2DAxis
      static void _set_Secondary2DAxis(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::InputAxes value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousMoveProvider/InputAxes
    #pragma pack(pop)
    static check_size<sizeof(DeviceBasedContinuousMoveProvider::InputAxes), 0 + sizeof(int)> __UnityEngine_XR_Interaction_Toolkit_DeviceBasedContinuousMoveProvider_InputAxesSizeCheck;
    static_assert(sizeof(DeviceBasedContinuousMoveProvider::InputAxes) == 0x4);
    public:
    // [TooltipAttribute] Offset: 0xAE07B0
    // private UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousMoveProvider/InputAxes m_InputBinding
    // Size: 0x4
    // Offset: 0x60
    ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::InputAxes m_InputBinding;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::InputAxes) == 0x4);
    // Padding between fields: m_InputBinding and: m_Controllers
    char __padding0[0x4] = {};
    // [TooltipAttribute] Offset: 0xAE07FC
    // private System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseController> m_Controllers
    // Size: 0x8
    // Offset: 0x68
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>* m_Controllers;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>*) == 0x8);
    // [TooltipAttribute] Offset: 0xAE0848
    // private System.Single m_DeadzoneMin
    // Size: 0x4
    // Offset: 0x70
    float m_DeadzoneMin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xAE0894
    // private System.Single m_DeadzoneMax
    // Size: 0x4
    // Offset: 0x74
    float m_DeadzoneMax;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get static field: static private readonly UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>[] k_Vec2UsageList
    static ::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>> _get_k_Vec2UsageList();
    // Set static field: static private readonly UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>[] k_Vec2UsageList
    static void _set_k_Vec2UsageList(::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>> value);
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousMoveProvider/InputAxes m_InputBinding
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::InputAxes& dyn_m_InputBinding();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseController> m_Controllers
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>*& dyn_m_Controllers();
    // Get instance field reference: private System.Single m_DeadzoneMin
    [[deprecated("Use field access instead!")]] float& dyn_m_DeadzoneMin();
    // Get instance field reference: private System.Single m_DeadzoneMax
    [[deprecated("Use field access instead!")]] float& dyn_m_DeadzoneMax();
    // public UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousMoveProvider/InputAxes get_inputBinding()
    // Offset: 0xF53E34
    ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::InputAxes get_inputBinding();
    // public System.Void set_inputBinding(UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousMoveProvider/InputAxes value)
    // Offset: 0xF53E3C
    void set_inputBinding(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::InputAxes value);
    // public System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseController> get_controllers()
    // Offset: 0xF53E44
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>* get_controllers();
    // public System.Void set_controllers(System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseController> value)
    // Offset: 0xF53E4C
    void set_controllers(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>* value);
    // public System.Single get_deadzoneMin()
    // Offset: 0xF53E54
    float get_deadzoneMin();
    // public System.Void set_deadzoneMin(System.Single value)
    // Offset: 0xF53E5C
    void set_deadzoneMin(float value);
    // public System.Single get_deadzoneMax()
    // Offset: 0xF53E64
    float get_deadzoneMax();
    // public System.Void set_deadzoneMax(System.Single value)
    // Offset: 0xF53E6C
    void set_deadzoneMax(float value);
    // protected UnityEngine.Vector2 GetDeadzoneAdjustedValue(UnityEngine.Vector2 value)
    // Offset: 0xF540E4
    ::UnityEngine::Vector2 GetDeadzoneAdjustedValue(::UnityEngine::Vector2 value);
    // protected System.Single GetDeadzoneAdjustedValue(System.Single value)
    // Offset: 0xF541EC
    float GetDeadzoneAdjustedValue(float value);
    // static private System.Void .cctor()
    // Offset: 0xF54368
    static void _cctor();
    // protected override UnityEngine.Vector2 ReadInput()
    // Offset: 0xF53E74
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase
    // Base method: UnityEngine.Vector2 ContinuousMoveProviderBase::ReadInput()
    ::UnityEngine::Vector2 ReadInput();
    // public System.Void .ctor()
    // Offset: 0xF542DC
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase
    // Base method: System.Void ContinuousMoveProviderBase::.ctor()
    // Base method: System.Void LocomotionProvider::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeviceBasedContinuousMoveProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeviceBasedContinuousMoveProvider*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousMoveProvider
  #pragma pack(pop)
  static check_size<sizeof(DeviceBasedContinuousMoveProvider), 116 + sizeof(float)> __UnityEngine_XR_Interaction_Toolkit_DeviceBasedContinuousMoveProviderSizeCheck;
  static_assert(sizeof(DeviceBasedContinuousMoveProvider) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::InputAxes, "UnityEngine.XR.Interaction.Toolkit", "DeviceBasedContinuousMoveProvider/InputAxes");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::get_inputBinding
// Il2CppName: get_inputBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::InputAxes (UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::*)()>(&UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::get_inputBinding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider*), "get_inputBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::set_inputBinding
// Il2CppName: set_inputBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::*)(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::InputAxes)>(&UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::set_inputBinding)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "DeviceBasedContinuousMoveProvider/InputAxes")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider*), "set_inputBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::get_controllers
// Il2CppName: get_controllers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>* (UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::*)()>(&UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::get_controllers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider*), "get_controllers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::set_controllers
// Il2CppName: set_controllers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>*)>(&UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::set_controllers)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRBaseController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider*), "set_controllers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::get_deadzoneMin
// Il2CppName: get_deadzoneMin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::*)()>(&UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::get_deadzoneMin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider*), "get_deadzoneMin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::set_deadzoneMin
// Il2CppName: set_deadzoneMin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::*)(float)>(&UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::set_deadzoneMin)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider*), "set_deadzoneMin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::get_deadzoneMax
// Il2CppName: get_deadzoneMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::*)()>(&UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::get_deadzoneMax)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider*), "get_deadzoneMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::set_deadzoneMax
// Il2CppName: set_deadzoneMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::*)(float)>(&UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::set_deadzoneMax)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider*), "set_deadzoneMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::GetDeadzoneAdjustedValue
// Il2CppName: GetDeadzoneAdjustedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::*)(::UnityEngine::Vector2)>(&UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::GetDeadzoneAdjustedValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider*), "GetDeadzoneAdjustedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::GetDeadzoneAdjustedValue
// Il2CppName: GetDeadzoneAdjustedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::*)(float)>(&UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::GetDeadzoneAdjustedValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider*), "GetDeadzoneAdjustedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::ReadInput
// Il2CppName: ReadInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::*)()>(&UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::ReadInput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider*), "ReadInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
