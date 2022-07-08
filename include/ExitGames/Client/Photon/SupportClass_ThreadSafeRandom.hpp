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
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Random
  class Random;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExitGames::Client::Photon::SupportClass::ThreadSafeRandom);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::SupportClass::ThreadSafeRandom*, "ExitGames.Client.Photon", "SupportClass/ThreadSafeRandom");
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ExitGames.Client.Photon.SupportClass/ThreadSafeRandom
  // [TokenAttribute] Offset: FFFFFFFF
  class SupportClass::ThreadSafeRandom : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.Random _r
    static ::System::Random* _get__r();
    // Set static field: static private readonly System.Random _r
    static void _set__r(::System::Random* value);
    // static public System.Int32 Next()
    // Offset: 0x1AB9D5C
    static int Next();
    // public System.Void .ctor()
    // Offset: 0x1AB9E8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SupportClass::ThreadSafeRandom* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::SupportClass::ThreadSafeRandom::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SupportClass::ThreadSafeRandom*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1AB9E94
    static void _cctor();
  }; // ExitGames.Client.Photon.SupportClass/ThreadSafeRandom
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExitGames::Client::Photon::SupportClass::ThreadSafeRandom::Next
// Il2CppName: Next
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&ExitGames::Client::Photon::SupportClass::ThreadSafeRandom::Next)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::SupportClass::ThreadSafeRandom*), "Next", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::SupportClass::ThreadSafeRandom::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ExitGames::Client::Photon::SupportClass::ThreadSafeRandom::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&ExitGames::Client::Photon::SupportClass::ThreadSafeRandom::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::SupportClass::ThreadSafeRandom*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
