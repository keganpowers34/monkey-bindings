// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.XR.InputDevice
#include "UnityEngine/XR/InputDevice.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRRig
  class VRRig;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ActionableItem
  class ActionableItem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ActionableItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ActionableItem*, "", "ActionableItem");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: ActionableItem
  // [TokenAttribute] Offset: FFFFFFFF
  class ActionableItem : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::ActionableItem::ActivationType
    struct ActivationType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: ActionableItem/ActivationType
    // [TokenAttribute] Offset: FFFFFFFF
    struct ActivationType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ActivationType
      constexpr ActivationType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public ActionableItem/ActivationType Thumb
      static constexpr const int Thumb = 0;
      // Get static field: static public ActionableItem/ActivationType Thumb
      static ::GlobalNamespace::ActionableItem::ActivationType _get_Thumb();
      // Set static field: static public ActionableItem/ActivationType Thumb
      static void _set_Thumb(::GlobalNamespace::ActionableItem::ActivationType value);
      // static field const value: static public ActionableItem/ActivationType Index
      static constexpr const int Index = 1;
      // Get static field: static public ActionableItem/ActivationType Index
      static ::GlobalNamespace::ActionableItem::ActivationType _get_Index();
      // Set static field: static public ActionableItem/ActivationType Index
      static void _set_Index(::GlobalNamespace::ActionableItem::ActivationType value);
      // static field const value: static public ActionableItem/ActivationType Middle
      static constexpr const int Middle = 2;
      // Get static field: static public ActionableItem/ActivationType Middle
      static ::GlobalNamespace::ActionableItem::ActivationType _get_Middle();
      // Set static field: static public ActionableItem/ActivationType Middle
      static void _set_Middle(::GlobalNamespace::ActionableItem::ActivationType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // ActionableItem/ActivationType
    #pragma pack(pop)
    static check_size<sizeof(ActionableItem::ActivationType), 0 + sizeof(int)> __GlobalNamespace_ActionableItem_ActivationTypeSizeCheck;
    static_assert(sizeof(ActionableItem::ActivationType) == 0x4);
    public:
    // public VRRig myRig
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::VRRig* myRig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRRig*) == 0x8);
    // public VRRig myOnlineRig
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::VRRig* myOnlineRig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRRig*) == 0x8);
    // public System.Int32 myState
    // Size: 0x4
    // Offset: 0x28
    int myState;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean forLeftHand
    // Size: 0x1
    // Offset: 0x2C
    bool forLeftHand;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: forLeftHand and: myInputDevice
    char __padding3[0x3] = {};
    // private UnityEngine.XR.InputDevice myInputDevice
    // Size: 0x9
    // Offset: 0x30
    ::UnityEngine::XR::InputDevice myInputDevice;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::InputDevice) == 0x9);
    // Padding between fields: myInputDevice and: primaryButtonPress
    char __padding4[0x7] = {};
    // private System.Boolean primaryButtonPress
    // Size: 0x1
    // Offset: 0x40
    bool primaryButtonPress;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean secondaryButtonPress
    // Size: 0x1
    // Offset: 0x41
    bool secondaryButtonPress;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: secondaryButtonPress and: indexTrigger
    char __padding6[0x2] = {};
    // private System.Single indexTrigger
    // Size: 0x4
    // Offset: 0x44
    float indexTrigger;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single myThreshold
    // Size: 0x4
    // Offset: 0x48
    float myThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single hysterisis
    // Size: 0x4
    // Offset: 0x4C
    float hysterisis;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public ActionableItem/ActivationType myActivationType
    // Size: 0x4
    // Offset: 0x50
    ::GlobalNamespace::ActionableItem::ActivationType myActivationType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ActionableItem::ActivationType) == 0x4);
    // public System.Boolean latched
    // Size: 0x1
    // Offset: 0x54
    bool latched;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean isLocal
    // Size: 0x1
    // Offset: 0x55
    bool isLocal;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean testActivate
    // Size: 0x1
    // Offset: 0x56
    bool testActivate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean testDeactivate
    // Size: 0x1
    // Offset: 0x57
    bool testDeactivate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public VRRig myRig
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRRig*& dyn_myRig();
    // Get instance field reference: public VRRig myOnlineRig
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRRig*& dyn_myOnlineRig();
    // Get instance field reference: public System.Int32 myState
    [[deprecated("Use field access instead!")]] int& dyn_myState();
    // Get instance field reference: public System.Boolean forLeftHand
    [[deprecated("Use field access instead!")]] bool& dyn_forLeftHand();
    // Get instance field reference: private UnityEngine.XR.InputDevice myInputDevice
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::InputDevice& dyn_myInputDevice();
    // Get instance field reference: private System.Boolean primaryButtonPress
    [[deprecated("Use field access instead!")]] bool& dyn_primaryButtonPress();
    // Get instance field reference: private System.Boolean secondaryButtonPress
    [[deprecated("Use field access instead!")]] bool& dyn_secondaryButtonPress();
    // Get instance field reference: private System.Single indexTrigger
    [[deprecated("Use field access instead!")]] float& dyn_indexTrigger();
    // Get instance field reference: public System.Single myThreshold
    [[deprecated("Use field access instead!")]] float& dyn_myThreshold();
    // Get instance field reference: public System.Single hysterisis
    [[deprecated("Use field access instead!")]] float& dyn_hysterisis();
    // Get instance field reference: public ActionableItem/ActivationType myActivationType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ActionableItem::ActivationType& dyn_myActivationType();
    // Get instance field reference: public System.Boolean latched
    [[deprecated("Use field access instead!")]] bool& dyn_latched();
    // Get instance field reference: private System.Boolean isLocal
    [[deprecated("Use field access instead!")]] bool& dyn_isLocal();
    // Get instance field reference: public System.Boolean testActivate
    [[deprecated("Use field access instead!")]] bool& dyn_testActivate();
    // Get instance field reference: public System.Boolean testDeactivate
    [[deprecated("Use field access instead!")]] bool& dyn_testDeactivate();
    // private System.Void Awake()
    // Offset: 0x1B5D858
    void Awake();
    // private System.Void Update()
    // Offset: 0x1B5D9A0
    void Update();
    // public System.Void StateChange()
    // Offset: 0x1B5DD98
    void StateChange();
    // public System.Boolean CanActivate()
    // Offset: 0x1B5DD9C
    bool CanActivate();
    // public System.Boolean CanDeactivate()
    // Offset: 0x1B5DDA4
    bool CanDeactivate();
    // public System.Void OnActivate()
    // Offset: 0x1B5DDAC
    void OnActivate();
    // public System.Void OnDeactivate()
    // Offset: 0x1B5DDB8
    void OnDeactivate();
    // public System.Boolean IsMyItem()
    // Offset: 0x1B5DDC0
    bool IsMyItem();
    // public System.Void PlayNote(System.Int32 note, System.Single volume)
    // Offset: 0x1B5DE58
    void PlayNote(int note, float volume);
    // public System.Void .ctor()
    // Offset: 0x1B5DE5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ActionableItem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ActionableItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ActionableItem*, creationType>()));
    }
  }; // ActionableItem
  #pragma pack(pop)
  static check_size<sizeof(ActionableItem), 87 + sizeof(bool)> __GlobalNamespace_ActionableItemSizeCheck;
  static_assert(sizeof(ActionableItem) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ActionableItem::ActivationType, "", "ActionableItem/ActivationType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ActionableItem::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ActionableItem::*)()>(&GlobalNamespace::ActionableItem::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ActionableItem*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ActionableItem::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ActionableItem::*)()>(&GlobalNamespace::ActionableItem::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ActionableItem*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ActionableItem::StateChange
// Il2CppName: StateChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ActionableItem::*)()>(&GlobalNamespace::ActionableItem::StateChange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ActionableItem*), "StateChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ActionableItem::CanActivate
// Il2CppName: CanActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ActionableItem::*)()>(&GlobalNamespace::ActionableItem::CanActivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ActionableItem*), "CanActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ActionableItem::CanDeactivate
// Il2CppName: CanDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ActionableItem::*)()>(&GlobalNamespace::ActionableItem::CanDeactivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ActionableItem*), "CanDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ActionableItem::OnActivate
// Il2CppName: OnActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ActionableItem::*)()>(&GlobalNamespace::ActionableItem::OnActivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ActionableItem*), "OnActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ActionableItem::OnDeactivate
// Il2CppName: OnDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ActionableItem::*)()>(&GlobalNamespace::ActionableItem::OnDeactivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ActionableItem*), "OnDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ActionableItem::IsMyItem
// Il2CppName: IsMyItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ActionableItem::*)()>(&GlobalNamespace::ActionableItem::IsMyItem)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ActionableItem*), "IsMyItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ActionableItem::PlayNote
// Il2CppName: PlayNote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ActionableItem::*)(int, float)>(&GlobalNamespace::ActionableItem::PlayNote)> {
  static const MethodInfo* get() {
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* volume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ActionableItem*), "PlayNote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{note, volume});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ActionableItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
