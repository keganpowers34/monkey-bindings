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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: PlayFab.SharedModels
namespace PlayFab::SharedModels {
  // Forward declaring type: HttpResponseObject
  class HttpResponseObject;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::SharedModels::HttpResponseObject);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::SharedModels::HttpResponseObject*, "PlayFab.SharedModels", "HttpResponseObject");
// Type namespace: PlayFab.SharedModels
namespace PlayFab::SharedModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.SharedModels.HttpResponseObject
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpResponseObject : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 code
    // Size: 0x4
    // Offset: 0x10
    int code;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: code and: status
    char __padding0[0x4] = {};
    // public System.String status
    // Size: 0x8
    // Offset: 0x18
    ::StringW status;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Object data
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* data;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: public System.Int32 code
    [[deprecated("Use field access instead!")]] int& dyn_code();
    // Get instance field reference: public System.String status
    [[deprecated("Use field access instead!")]] ::StringW& dyn_status();
    // Get instance field reference: public System.Object data
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_data();
    // public System.Void .ctor()
    // Offset: 0x19A0200
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpResponseObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::SharedModels::HttpResponseObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpResponseObject*, creationType>()));
    }
  }; // PlayFab.SharedModels.HttpResponseObject
  #pragma pack(pop)
  static check_size<sizeof(HttpResponseObject), 32 + sizeof(::Il2CppObject*)> __PlayFab_SharedModels_HttpResponseObjectSizeCheck;
  static_assert(sizeof(HttpResponseObject) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::SharedModels::HttpResponseObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
