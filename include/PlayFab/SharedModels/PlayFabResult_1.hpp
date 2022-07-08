// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::SharedModels
namespace PlayFab::SharedModels {
  // Forward declaring type: PlayFabResultCommon
  class PlayFabResultCommon;
}
// Completed forward declares
// Type namespace: PlayFab.SharedModels
namespace PlayFab::SharedModels {
  // Forward declaring type: PlayFabResult`1<TResult>
  template<typename TResult>
  class PlayFabResult_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::PlayFab::SharedModels::PlayFabResult_1, "PlayFab.SharedModels", "PlayFabResult`1");
// Type namespace: PlayFab.SharedModels
namespace PlayFab::SharedModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.SharedModels.PlayFabResult`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TResult>
  class PlayFabResult_1 : public ::Il2CppObject {
    public:
    public:
    // public TResult Result
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TResult Result;
    // public System.Object CustomData
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* CustomData;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: public TResult Result
    [[deprecated("Use field access instead!")]] TResult& dyn_Result() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::SharedModels::PlayFabResult_1::dyn_Result");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Result"))->offset;
      return *reinterpret_cast<TResult*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Object CustomData
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_CustomData() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::SharedModels::PlayFabResult_1::dyn_CustomData");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "CustomData"))->offset;
      return *reinterpret_cast<::Il2CppObject**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayFabResult_1<TResult>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::SharedModels::PlayFabResult_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayFabResult_1<TResult>*, creationType>()));
    }
  }; // PlayFab.SharedModels.PlayFabResult`1
  // Could not write size check! Type: PlayFab.SharedModels.PlayFabResult`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
