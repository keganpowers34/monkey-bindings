// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.ShrinkablePolygon
#include "Cinemachine/ShrinkablePolygon.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Converter`2<TInput, TOutput>
  template<typename TInput, typename TOutput>
  class Converter_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::ShrinkablePolygon::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::ShrinkablePolygon::$$c*, "Cinemachine", "ShrinkablePolygon/<>c");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.ShrinkablePolygon/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AE66AC
  class ShrinkablePolygon::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Cinemachine.ShrinkablePolygon/<>c <>9
    static ::Cinemachine::ShrinkablePolygon::$$c* _get_$$9();
    // Set static field: static public readonly Cinemachine.ShrinkablePolygon/<>c <>9
    static void _set_$$9(::Cinemachine::ShrinkablePolygon::$$c* value);
    // Get static field: static public System.Converter`2<Cinemachine.ShrinkablePolygon/ShrinkablePoint2,Cinemachine.ShrinkablePolygon/ShrinkablePoint2> <>9__11_0
    static ::System::Converter_2<::Cinemachine::ShrinkablePolygon::ShrinkablePoint2, ::Cinemachine::ShrinkablePolygon::ShrinkablePoint2>* _get_$$9__11_0();
    // Set static field: static public System.Converter`2<Cinemachine.ShrinkablePolygon/ShrinkablePoint2,Cinemachine.ShrinkablePolygon/ShrinkablePoint2> <>9__11_0
    static void _set_$$9__11_0(::System::Converter_2<::Cinemachine::ShrinkablePolygon::ShrinkablePoint2, ::Cinemachine::ShrinkablePolygon::ShrinkablePoint2>* value);
    // Get static field: static public System.Converter`2<UnityEngine.Vector2,UnityEngine.Vector2> <>9__11_1
    static ::System::Converter_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* _get_$$9__11_1();
    // Set static field: static public System.Converter`2<UnityEngine.Vector2,UnityEngine.Vector2> <>9__11_1
    static void _set_$$9__11_1(::System::Converter_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* value);
    // static private System.Void .cctor()
    // Offset: 0x13934F0
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1393554
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShrinkablePolygon::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::ShrinkablePolygon::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShrinkablePolygon::$$c*, creationType>()));
    }
    // Cinemachine.ShrinkablePolygon/ShrinkablePoint2 <DeepCopy>b__11_0(Cinemachine.ShrinkablePolygon/ShrinkablePoint2 point)
    // Offset: 0x139355C
    ::Cinemachine::ShrinkablePolygon::ShrinkablePoint2 $DeepCopy$b__11_0(::Cinemachine::ShrinkablePolygon::ShrinkablePoint2 point);
    // UnityEngine.Vector2 <DeepCopy>b__11_1(UnityEngine.Vector2 intersection)
    // Offset: 0x1393570
    ::UnityEngine::Vector2 $DeepCopy$b__11_1(::UnityEngine::Vector2 intersection);
  }; // Cinemachine.ShrinkablePolygon/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::ShrinkablePolygon::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Cinemachine::ShrinkablePolygon::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ShrinkablePolygon::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::ShrinkablePolygon::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Cinemachine::ShrinkablePolygon::$$c::$DeepCopy$b__11_0
// Il2CppName: <DeepCopy>b__11_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Cinemachine::ShrinkablePolygon::ShrinkablePoint2 (Cinemachine::ShrinkablePolygon::$$c::*)(::Cinemachine::ShrinkablePolygon::ShrinkablePoint2)>(&Cinemachine::ShrinkablePolygon::$$c::$DeepCopy$b__11_0)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("Cinemachine", "ShrinkablePolygon/ShrinkablePoint2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ShrinkablePolygon::$$c*), "<DeepCopy>b__11_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: Cinemachine::ShrinkablePolygon::$$c::$DeepCopy$b__11_1
// Il2CppName: <DeepCopy>b__11_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (Cinemachine::ShrinkablePolygon::$$c::*)(::UnityEngine::Vector2)>(&Cinemachine::ShrinkablePolygon::$$c::$DeepCopy$b__11_1)> {
  static const MethodInfo* get() {
    static auto* intersection = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ShrinkablePolygon::$$c*), "<DeepCopy>b__11_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{intersection});
  }
};
