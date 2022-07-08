// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ArgumentException
#include "System/ArgumentException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: InvalidEnumArgumentException
  class InvalidEnumArgumentException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::InvalidEnumArgumentException);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::InvalidEnumArgumentException*, "System.ComponentModel", "InvalidEnumArgumentException");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.InvalidEnumArgumentException
  // [TokenAttribute] Offset: FFFFFFFF
  class InvalidEnumArgumentException : public ::System::ArgumentException {
    public:
    // public System.Void .ctor()
    // Offset: 0x118A630
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvalidEnumArgumentException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::InvalidEnumArgumentException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvalidEnumArgumentException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x118A63C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvalidEnumArgumentException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::InvalidEnumArgumentException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvalidEnumArgumentException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception innerException)
    // Offset: 0x118A644
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvalidEnumArgumentException* New_ctor(::StringW message, ::System::Exception* innerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::InvalidEnumArgumentException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvalidEnumArgumentException*, creationType>(message, innerException)));
    }
    // public System.Void .ctor(System.String argumentName, System.Int32 invalidValue, System.Type enumClass)
    // Offset: 0x118A64C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvalidEnumArgumentException* New_ctor(::StringW argumentName, int invalidValue, ::System::Type* enumClass) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::InvalidEnumArgumentException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvalidEnumArgumentException*, creationType>(argumentName, invalidValue, enumClass)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x118A7D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvalidEnumArgumentException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::InvalidEnumArgumentException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvalidEnumArgumentException*, creationType>(info, context)));
    }
  }; // System.ComponentModel.InvalidEnumArgumentException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::InvalidEnumArgumentException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::InvalidEnumArgumentException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::InvalidEnumArgumentException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::InvalidEnumArgumentException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::InvalidEnumArgumentException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
