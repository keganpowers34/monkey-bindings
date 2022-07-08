// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ExitGames.Client.Photon.StructWrapping.StructWrapperPool
#include "ExitGames/Client/Photon/StructWrapping/StructWrapperPool.hpp"
// Including type: ExitGames.Client.Photon.StructWrapping.WrappedType
#include "ExitGames/Client/Photon/StructWrapping/WrappedType.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
}
// Forward declaring namespace: ExitGames::Client::Photon::StructWrapping
namespace ExitGames::Client::Photon::StructWrapping {
  // Forward declaring type: StructWrapper`1<T>
  template<typename T>
  class StructWrapper_1;
}
// Completed forward declares
// Type namespace: ExitGames.Client.Photon.StructWrapping
namespace ExitGames::Client::Photon::StructWrapping {
  // Forward declaring type: StructWrapperPool`1<T>
  template<typename T>
  class StructWrapperPool_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1, "ExitGames.Client.Photon.StructWrapping", "StructWrapperPool`1");
// Type namespace: ExitGames.Client.Photon.StructWrapping
namespace ExitGames::Client::Photon::StructWrapping {
  // WARNING Size may be invalid!
  // Autogenerated type: ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class StructWrapperPool_1 : public ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool {
    public:
    public:
    // public readonly System.Type tType
    // Size: 0x8
    // Offset: 0x0
    ::System::Type* tType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // public readonly ExitGames.Client.Photon.StructWrapping.WrappedType wType
    // Size: 0x4
    // Offset: 0x0
    ::ExitGames::Client::Photon::StructWrapping::WrappedType wType;
    // Field size check
    static_assert(sizeof(::ExitGames::Client::Photon::StructWrapping::WrappedType) == 0x4);
    // public System.Collections.Generic.Stack`1<ExitGames.Client.Photon.StructWrapping.StructWrapper`1<T>> pool
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>* pool;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>*) == 0x8);
    // public readonly System.Boolean isStaticPool
    // Size: 0x1
    // Offset: 0x0
    bool isStaticPool;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Autogenerated static field getter
    // Get static field: static public System.Int32 GROWBY
    static int _get_GROWBY() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1::_get_GROWBY");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<StructWrapperPool_1<T>*>::get(), "GROWBY"));
    }
    // Autogenerated static field setter
    // Set static field: static public System.Int32 GROWBY
    static void _set_GROWBY(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1::_set_GROWBY");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<StructWrapperPool_1<T>*>::get(), "GROWBY", value));
    }
    // Autogenerated instance field getter
    // Get instance field: public readonly System.Type tType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_tType() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1::dyn_tType");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "tType"))->offset;
      return *reinterpret_cast<::System::Type**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public readonly ExitGames.Client.Photon.StructWrapping.WrappedType wType
    [[deprecated("Use field access instead!")]] ::ExitGames::Client::Photon::StructWrapping::WrappedType& dyn_wType() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1::dyn_wType");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "wType"))->offset;
      return *reinterpret_cast<::ExitGames::Client::Photon::StructWrapping::WrappedType*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Collections.Generic.Stack`1<ExitGames.Client.Photon.StructWrapping.StructWrapper`1<T>> pool
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>*& dyn_pool() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1::dyn_pool");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "pool"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public readonly System.Boolean isStaticPool
    [[deprecated("Use field access instead!")]] bool& dyn_isStaticPool() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1::dyn_isStaticPool");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "isStaticPool"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Boolean isStaticPool)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StructWrapperPool_1<T>* New_ctor(bool isStaticPool) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StructWrapperPool_1<T>*, creationType>(isStaticPool)));
    }
    // public ExitGames.Client.Photon.StructWrapping.StructWrapper`1<T> Acquire()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>* Acquire() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1::Acquire");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Acquire", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*, false>(this, ___internal__method);
    }
    // public ExitGames.Client.Photon.StructWrapping.StructWrapper`1<T> Acquire(T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>* Acquire(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1::Acquire");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Acquire", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      return ::il2cpp_utils::RunMethodRethrow<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*, false>(this, ___internal__method, value);
    }
    // System.Void Release(ExitGames.Client.Photon.StructWrapping.StructWrapper`1<T> obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Release(::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1::Release");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Release", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, obj);
    }
  }; // ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1
  // Could not write size check! Type: ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
