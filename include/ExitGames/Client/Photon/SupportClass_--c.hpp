// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ExitGames.Client.Photon.SupportClass
#include "ExitGames/Client/Photon/SupportClass.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExitGames::Client::Photon::SupportClass::$$c);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::SupportClass::$$c*, "ExitGames.Client.Photon", "SupportClass/<>c");
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ExitGames.Client.Photon.SupportClass/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AAC280
  class SupportClass::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly ExitGames.Client.Photon.SupportClass/<>c <>9
    static ::ExitGames::Client::Photon::SupportClass::$$c* _get_$$9();
    // Set static field: static public readonly ExitGames.Client.Photon.SupportClass/<>c <>9
    static void _set_$$9(::ExitGames::Client::Photon::SupportClass::$$c* value);
    // static private System.Void .cctor()
    // Offset: 0x1AB9BA4
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1AB9C08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SupportClass::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::SupportClass::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SupportClass::$$c*, creationType>()));
    }
    // System.Int32 <.cctor>b__20_0()
    // Offset: 0x1AB9C10
    int $_cctor$b__20_0();
  }; // ExitGames.Client.Photon.SupportClass/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExitGames::Client::Photon::SupportClass::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&ExitGames::Client::Photon::SupportClass::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::SupportClass::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::SupportClass::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ExitGames::Client::Photon::SupportClass::$$c::$_cctor$b__20_0
// Il2CppName: <.cctor>b__20_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::SupportClass::$$c::*)()>(&ExitGames::Client::Photon::SupportClass::$$c::$_cctor$b__20_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::SupportClass::$$c*), "<.cctor>b__20_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
