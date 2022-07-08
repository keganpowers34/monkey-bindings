// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: EventType
  struct EventType;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: PointerType
  struct PointerType;
  // Forward declaring type: EventModifiers
  struct EventModifiers;
  // Forward declaring type: KeyCode
  struct KeyCode;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Event
  class Event;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Event);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Event*, "UnityEngine", "Event");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Event
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: A81C4C
  // [StaticAccessorAttribute] Offset: A81C4C
  class Event : public ::Il2CppObject {
    public:
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // Get static field: static private UnityEngine.Event s_Current
    static ::UnityEngine::Event* _get_s_Current();
    // Set static field: static private UnityEngine.Event s_Current
    static void _set_s_Current(::UnityEngine::Event* value);
    // Get static field: static private UnityEngine.Event s_MasterEvent
    static ::UnityEngine::Event* _get_s_MasterEvent();
    // Set static field: static private UnityEngine.Event s_MasterEvent
    static void _set_s_MasterEvent(::UnityEngine::Event* value);
    // Get instance field reference: System.IntPtr m_Ptr
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_m_Ptr();
    // public UnityEngine.EventType get_rawType()
    // Offset: 0x1A8AE48
    ::UnityEngine::EventType get_rawType();
    // public UnityEngine.Vector2 get_mousePosition()
    // Offset: 0x1A8AE88
    ::UnityEngine::Vector2 get_mousePosition();
    // public System.Void set_mousePosition(UnityEngine.Vector2 value)
    // Offset: 0x1A8AF30
    void set_mousePosition(::UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_delta()
    // Offset: 0x1A8AFD4
    ::UnityEngine::Vector2 get_delta();
    // public UnityEngine.PointerType get_pointerType()
    // Offset: 0x1A8B07C
    ::UnityEngine::PointerType get_pointerType();
    // public System.Int32 get_button()
    // Offset: 0x1A8B0BC
    int get_button();
    // public UnityEngine.EventModifiers get_modifiers()
    // Offset: 0x1A8B0FC
    ::UnityEngine::EventModifiers get_modifiers();
    // public System.Single get_pressure()
    // Offset: 0x1A8B13C
    float get_pressure();
    // public System.Int32 get_clickCount()
    // Offset: 0x1A8B17C
    int get_clickCount();
    // public System.Char get_character()
    // Offset: 0x1A8B1BC
    ::Il2CppChar get_character();
    // public UnityEngine.KeyCode get_keyCode()
    // Offset: 0x1A8B1FC
    ::UnityEngine::KeyCode get_keyCode();
    // public System.Int32 get_displayIndex()
    // Offset: 0x1A8B23C
    int get_displayIndex();
    // public System.Void set_displayIndex(System.Int32 value)
    // Offset: 0x1A8B27C
    void set_displayIndex(int value);
    // public UnityEngine.EventType get_type()
    // Offset: 0x1A8B2CC
    ::UnityEngine::EventType get_type();
    // public System.Void set_type(UnityEngine.EventType value)
    // Offset: 0x1A8B30C
    void set_type(::UnityEngine::EventType value);
    // public System.String get_commandName()
    // Offset: 0x1A8B35C
    ::StringW get_commandName();
    // public System.Void set_commandName(System.String value)
    // Offset: 0x1A8B39C
    void set_commandName(::StringW value);
    // private System.Void Internal_Use()
    // Offset: 0x1A8B3EC
    void Internal_Use();
    // static private System.IntPtr Internal_Create(System.Int32 displayIndex)
    // Offset: 0x1A8B42C
    static ::System::IntPtr Internal_Create(int displayIndex);
    // static private System.Void Internal_Destroy(System.IntPtr ptr)
    // Offset: 0x1A8B46C
    static void Internal_Destroy(::System::IntPtr ptr);
    // public UnityEngine.EventType GetTypeForControl(System.Int32 controlID)
    // Offset: 0x1A8B4AC
    ::UnityEngine::EventType GetTypeForControl(int controlID);
    // System.Void CopyFromPtr(System.IntPtr ptr)
    // Offset: 0x1A8B4FC
    void CopyFromPtr(::System::IntPtr ptr);
    // static public System.Boolean PopEvent(UnityEngine.Event outEvent)
    // Offset: 0x1A8B54C
    static bool PopEvent(::UnityEngine::Event* outEvent);
    // static private System.Void Internal_SetNativeEvent(System.IntPtr ptr)
    // Offset: 0x1A8B58C
    static void Internal_SetNativeEvent(::System::IntPtr ptr);
    // static System.Void Internal_MakeMasterEventCurrent(System.Int32 displayIndex)
    // Offset: 0x1A8B5CC
    static void Internal_MakeMasterEventCurrent(int displayIndex);
    // public System.Void .ctor()
    // Offset: 0x1A8B728
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Event* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Event::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Event*, creationType>()));
    }
    // public System.Void .ctor(System.Int32 displayIndex)
    // Offset: 0x1A8B6CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Event* New_ctor(int displayIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Event::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Event*, creationType>(displayIndex)));
    }
    // System.Void CopyFrom(UnityEngine.Event e)
    // Offset: 0x1A8B854
    void CopyFrom(::UnityEngine::Event* e);
    // public System.Boolean get_shift()
    // Offset: 0x1A8B8D4
    bool get_shift();
    // public System.Boolean get_control()
    // Offset: 0x1A8B91C
    bool get_control();
    // public System.Boolean get_alt()
    // Offset: 0x1A8B964
    bool get_alt();
    // public System.Boolean get_command()
    // Offset: 0x1A8B9AC
    bool get_command();
    // static public UnityEngine.Event get_current()
    // Offset: 0x1A8B9F4
    static ::UnityEngine::Event* get_current();
    // static public System.Void set_current(UnityEngine.Event value)
    // Offset: 0x1A8BA44
    static void set_current(::UnityEngine::Event* value);
    // public System.Boolean get_isKey()
    // Offset: 0x1A8BADC
    bool get_isKey();
    // public System.Boolean get_isMouse()
    // Offset: 0x1A8BB2C
    bool get_isMouse();
    // System.Boolean get_isDirectManipulationDevice()
    // Offset: 0x1A8BB94
    bool get_isDirectManipulationDevice();
    // public System.Void Use()
    // Offset: 0x1A8C760
    void Use();
    // private System.Void get_mousePosition_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x1A8AEE0
    void get_mousePosition_Injected(ByRef<::UnityEngine::Vector2> ret);
    // private System.Void set_mousePosition_Injected(ref UnityEngine.Vector2 value)
    // Offset: 0x1A8AF84
    void set_mousePosition_Injected(ByRef<::UnityEngine::Vector2> value);
    // private System.Void get_delta_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x1A8B02C
    void get_delta_Injected(ByRef<::UnityEngine::Vector2> ret);
    // protected override System.Void Finalize()
    // Offset: 0x1A8B778
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public override System.Int32 GetHashCode()
    // Offset: 0x1A8BC14
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1A8BD00
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.String ToString()
    // Offset: 0x1A8BF7C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // UnityEngine.Event
  #pragma pack(pop)
  static check_size<sizeof(Event), 16 + sizeof(::System::IntPtr)> __UnityEngine_EventSizeCheck;
  static_assert(sizeof(Event) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Event::get_rawType
// Il2CppName: get_rawType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventType (UnityEngine::Event::*)()>(&UnityEngine::Event::get_rawType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "get_rawType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::get_mousePosition
// Il2CppName: get_mousePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::Event::*)()>(&UnityEngine::Event::get_mousePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "get_mousePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::set_mousePosition
// Il2CppName: set_mousePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Event::*)(::UnityEngine::Vector2)>(&UnityEngine::Event::set_mousePosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "set_mousePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::get_delta
// Il2CppName: get_delta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::Event::*)()>(&UnityEngine::Event::get_delta)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "get_delta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::get_pointerType
// Il2CppName: get_pointerType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::PointerType (UnityEngine::Event::*)()>(&UnityEngine::Event::get_pointerType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "get_pointerType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::get_button
// Il2CppName: get_button
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Event::*)()>(&UnityEngine::Event::get_button)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "get_button", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::get_modifiers
// Il2CppName: get_modifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventModifiers (UnityEngine::Event::*)()>(&UnityEngine::Event::get_modifiers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "get_modifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::get_pressure
// Il2CppName: get_pressure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Event::*)()>(&UnityEngine::Event::get_pressure)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "get_pressure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::get_clickCount
// Il2CppName: get_clickCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Event::*)()>(&UnityEngine::Event::get_clickCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "get_clickCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::get_character
// Il2CppName: get_character
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (UnityEngine::Event::*)()>(&UnityEngine::Event::get_character)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "get_character", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::get_keyCode
// Il2CppName: get_keyCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::KeyCode (UnityEngine::Event::*)()>(&UnityEngine::Event::get_keyCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "get_keyCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::get_displayIndex
// Il2CppName: get_displayIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Event::*)()>(&UnityEngine::Event::get_displayIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "get_displayIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::set_displayIndex
// Il2CppName: set_displayIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Event::*)(int)>(&UnityEngine::Event::set_displayIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "set_displayIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::get_type
// Il2CppName: get_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventType (UnityEngine::Event::*)()>(&UnityEngine::Event::get_type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "get_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::set_type
// Il2CppName: set_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Event::*)(::UnityEngine::EventType)>(&UnityEngine::Event::set_type)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "EventType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "set_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::get_commandName
// Il2CppName: get_commandName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Event::*)()>(&UnityEngine::Event::get_commandName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "get_commandName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::set_commandName
// Il2CppName: set_commandName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Event::*)(::StringW)>(&UnityEngine::Event::set_commandName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "set_commandName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::Internal_Use
// Il2CppName: Internal_Use
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Event::*)()>(&UnityEngine::Event::Internal_Use)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "Internal_Use", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::Internal_Create
// Il2CppName: Internal_Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(int)>(&UnityEngine::Event::Internal_Create)> {
  static const MethodInfo* get() {
    static auto* displayIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "Internal_Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{displayIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::Internal_Destroy
// Il2CppName: Internal_Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&UnityEngine::Event::Internal_Destroy)> {
  static const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "Internal_Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::GetTypeForControl
// Il2CppName: GetTypeForControl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventType (UnityEngine::Event::*)(int)>(&UnityEngine::Event::GetTypeForControl)> {
  static const MethodInfo* get() {
    static auto* controlID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "GetTypeForControl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controlID});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::CopyFromPtr
// Il2CppName: CopyFromPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Event::*)(::System::IntPtr)>(&UnityEngine::Event::CopyFromPtr)> {
  static const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "CopyFromPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::PopEvent
// Il2CppName: PopEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Event*)>(&UnityEngine::Event::PopEvent)> {
  static const MethodInfo* get() {
    static auto* outEvent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Event")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "PopEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{outEvent});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::Internal_SetNativeEvent
// Il2CppName: Internal_SetNativeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&UnityEngine::Event::Internal_SetNativeEvent)> {
  static const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "Internal_SetNativeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::Internal_MakeMasterEventCurrent
// Il2CppName: Internal_MakeMasterEventCurrent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&UnityEngine::Event::Internal_MakeMasterEventCurrent)> {
  static const MethodInfo* get() {
    static auto* displayIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "Internal_MakeMasterEventCurrent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{displayIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Event::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Event::CopyFrom
// Il2CppName: CopyFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Event::*)(::UnityEngine::Event*)>(&UnityEngine::Event::CopyFrom)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("UnityEngine", "Event")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "CopyFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::get_shift
// Il2CppName: get_shift
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Event::*)()>(&UnityEngine::Event::get_shift)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "get_shift", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::get_control
// Il2CppName: get_control
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Event::*)()>(&UnityEngine::Event::get_control)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "get_control", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::get_alt
// Il2CppName: get_alt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Event::*)()>(&UnityEngine::Event::get_alt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "get_alt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::get_command
// Il2CppName: get_command
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Event::*)()>(&UnityEngine::Event::get_command)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "get_command", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::get_current
// Il2CppName: get_current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Event* (*)()>(&UnityEngine::Event::get_current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "get_current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::set_current
// Il2CppName: set_current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Event*)>(&UnityEngine::Event::set_current)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Event")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "set_current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::get_isKey
// Il2CppName: get_isKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Event::*)()>(&UnityEngine::Event::get_isKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "get_isKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::get_isMouse
// Il2CppName: get_isMouse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Event::*)()>(&UnityEngine::Event::get_isMouse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "get_isMouse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::get_isDirectManipulationDevice
// Il2CppName: get_isDirectManipulationDevice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Event::*)()>(&UnityEngine::Event::get_isDirectManipulationDevice)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "get_isDirectManipulationDevice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::Use
// Il2CppName: Use
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Event::*)()>(&UnityEngine::Event::Use)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "Use", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::get_mousePosition_Injected
// Il2CppName: get_mousePosition_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Event::*)(ByRef<::UnityEngine::Vector2>)>(&UnityEngine::Event::get_mousePosition_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "get_mousePosition_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::set_mousePosition_Injected
// Il2CppName: set_mousePosition_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Event::*)(ByRef<::UnityEngine::Vector2>)>(&UnityEngine::Event::set_mousePosition_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "set_mousePosition_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::get_delta_Injected
// Il2CppName: get_delta_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Event::*)(ByRef<::UnityEngine::Vector2>)>(&UnityEngine::Event::get_delta_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "get_delta_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Event::*)()>(&UnityEngine::Event::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Event::*)()>(&UnityEngine::Event::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Event::*)(::Il2CppObject*)>(&UnityEngine::Event::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Event::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Event::*)()>(&UnityEngine::Event::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Event*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
