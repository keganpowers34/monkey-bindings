// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
// Including type: POpusCodec.Enums.OpusStatusCode
#include "POpusCodec/Enums/OpusStatusCode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: POpusCodec
namespace POpusCodec {
  // Forward declaring type: OpusException
  class OpusException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::POpusCodec::OpusException);
DEFINE_IL2CPP_ARG_TYPE(::POpusCodec::OpusException*, "POpusCodec", "OpusException");
// Type namespace: POpusCodec
namespace POpusCodec {
  // Size: 0x8C
  #pragma pack(push, 1)
  // Autogenerated type: POpusCodec.OpusException
  // [TokenAttribute] Offset: FFFFFFFF
  class OpusException : public ::System::Exception {
    public:
    public:
    // private POpusCodec.Enums.OpusStatusCode _statusCode
    // Size: 0x4
    // Offset: 0x88
    ::POpusCodec::Enums::OpusStatusCode statusCode;
    // Field size check
    static_assert(sizeof(::POpusCodec::Enums::OpusStatusCode) == 0x4);
    public:
    // Creating conversion operator: operator ::POpusCodec::Enums::OpusStatusCode
    constexpr operator ::POpusCodec::Enums::OpusStatusCode() const noexcept {
      return statusCode;
    }
    // Get instance field reference: private POpusCodec.Enums.OpusStatusCode _statusCode
    [[deprecated("Use field access instead!")]] ::POpusCodec::Enums::OpusStatusCode& dyn__statusCode();
    // public POpusCodec.Enums.OpusStatusCode get_StatusCode()
    // Offset: 0x10CCF40
    ::POpusCodec::Enums::OpusStatusCode get_StatusCode();
    // public System.Void .ctor(POpusCodec.Enums.OpusStatusCode statusCode, System.String message)
    // Offset: 0x10CCA08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OpusException* New_ctor(::POpusCodec::Enums::OpusStatusCode statusCode, ::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::POpusCodec::OpusException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OpusException*, creationType>(statusCode, message)));
    }
  }; // POpusCodec.OpusException
  #pragma pack(pop)
  static check_size<sizeof(OpusException), 136 + sizeof(::POpusCodec::Enums::OpusStatusCode)> __POpusCodec_OpusExceptionSizeCheck;
  static_assert(sizeof(OpusException) == 0x8C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: POpusCodec::OpusException::get_StatusCode
// Il2CppName: get_StatusCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::POpusCodec::Enums::OpusStatusCode (POpusCodec::OpusException::*)()>(&POpusCodec::OpusException::get_StatusCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(POpusCodec::OpusException*), "get_StatusCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: POpusCodec::OpusException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
