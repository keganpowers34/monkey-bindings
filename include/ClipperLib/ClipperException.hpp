// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: ClipperLib
namespace ClipperLib {
  // Forward declaring type: ClipperException
  class ClipperException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ClipperLib::ClipperException);
DEFINE_IL2CPP_ARG_TYPE(::ClipperLib::ClipperException*, "ClipperLib", "ClipperException");
// Type namespace: ClipperLib
namespace ClipperLib {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: ClipperLib.ClipperException
  // [TokenAttribute] Offset: FFFFFFFF
  class ClipperException : public ::System::Exception {
    public:
    // public System.Void .ctor(System.String description)
    // Offset: 0x1AC55A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClipperException* New_ctor(::StringW description) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ClipperLib::ClipperException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClipperException*, creationType>(description)));
    }
  }; // ClipperLib.ClipperException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ClipperLib::ClipperException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
