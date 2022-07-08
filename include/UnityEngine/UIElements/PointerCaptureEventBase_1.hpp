// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.EventBase`1
#include "UnityEngine/UIElements/EventBase_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IEventHandler
  class IEventHandler;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: PointerCaptureEventBase`1<T>
  template<typename T>
  class PointerCaptureEventBase_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::PointerCaptureEventBase_1, "UnityEngine.UIElements", "PointerCaptureEventBase`1");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.PointerCaptureEventBase`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class PointerCaptureEventBase_1 : public ::UnityEngine::UIElements::EventBase_1<T> {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xAA04D0
    // [CompilerGeneratedAttribute] Offset: 0xAA04D0
    // private UnityEngine.UIElements.IEventHandler <relatedTarget>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::UIElements::IEventHandler* relatedTarget;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::IEventHandler*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xAA050C
    // [CompilerGeneratedAttribute] Offset: 0xAA050C
    // private System.Int32 <pointerId>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    int pointerId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.UIElements.IEventHandler <relatedTarget>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::IEventHandler*& dyn_$relatedTarget$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PointerCaptureEventBase_1::dyn_$relatedTarget$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<relatedTarget>k__BackingField"))->offset;
      return *reinterpret_cast<::UnityEngine::UIElements::IEventHandler**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 <pointerId>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$pointerId$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PointerCaptureEventBase_1::dyn_$pointerId$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<pointerId>k__BackingField"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // private System.Void set_relatedTarget(UnityEngine.UIElements.IEventHandler value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_relatedTarget(::UnityEngine::UIElements::IEventHandler* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PointerCaptureEventBase_1::set_relatedTarget");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_relatedTarget", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // private System.Void set_pointerId(System.Int32 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_pointerId(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PointerCaptureEventBase_1::set_pointerId");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_pointerId", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // static public T GetPooled(UnityEngine.UIElements.IEventHandler target, UnityEngine.UIElements.IEventHandler relatedTarget, System.Int32 pointerId)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static T GetPooled(::UnityEngine::UIElements::IEventHandler* target, ::UnityEngine::UIElements::IEventHandler* relatedTarget, int pointerId) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PointerCaptureEventBase_1::GetPooled");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PointerCaptureEventBase_1<T>*>::get(), "GetPooled", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(target), ::il2cpp_utils::ExtractType(relatedTarget), ::il2cpp_utils::ExtractType(pointerId)})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, target, relatedTarget, pointerId);
    }
    // protected override System.Void Init()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.EventBase`1
    // Base method: System.Void EventBase_1::Init()
    void Init() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PointerCaptureEventBase_1::Init");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::EventBase_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Void LocalInit()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.EventBase
    // Base method: System.Void EventBase::LocalInit()
    void LocalInit() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PointerCaptureEventBase_1::LocalInit");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "LocalInit", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.EventBase`1
    // Base method: System.Void EventBase_1::.ctor()
    // Base method: System.Void EventBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointerCaptureEventBase_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PointerCaptureEventBase_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointerCaptureEventBase_1<T>*, creationType>()));
    }
  }; // UnityEngine.UIElements.PointerCaptureEventBase`1
  // Could not write size check! Type: UnityEngine.UIElements.PointerCaptureEventBase`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
