// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.IOException
#include "System/IO/IOException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: DriveNotFoundException
  class DriveNotFoundException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::DriveNotFoundException);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::DriveNotFoundException*, "System.IO", "DriveNotFoundException");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.DriveNotFoundException
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: A51ED0
  class DriveNotFoundException : public ::System::IO::IOException {
    public:
    // public System.Void .ctor()
    // Offset: 0x10C6198
    // Implemented from: System.IO.IOException
    // Base method: System.Void IOException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DriveNotFoundException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::DriveNotFoundException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DriveNotFoundException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x10C620C
    // Implemented from: System.IO.IOException
    // Base method: System.Void IOException::.ctor(System.String message)
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DriveNotFoundException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::DriveNotFoundException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DriveNotFoundException*, creationType>(message)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x10C6240
    // Implemented from: System.IO.IOException
    // Base method: System.Void IOException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DriveNotFoundException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::DriveNotFoundException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DriveNotFoundException*, creationType>(info, context)));
    }
  }; // System.IO.DriveNotFoundException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::DriveNotFoundException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::DriveNotFoundException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::DriveNotFoundException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
