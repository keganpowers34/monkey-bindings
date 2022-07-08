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
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: AddressFamily
  struct AddressFamily;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: SocketAddress
  class SocketAddress;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: EndPoint
  class EndPoint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::EndPoint);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::EndPoint*, "System.Net", "EndPoint");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.EndPoint
  // [TokenAttribute] Offset: FFFFFFFF
  class EndPoint : public ::Il2CppObject {
    public:
    // public System.Net.Sockets.AddressFamily get_AddressFamily()
    // Offset: 0xFDD4A0
    ::System::Net::Sockets::AddressFamily get_AddressFamily();
    // public System.Net.SocketAddress Serialize()
    // Offset: 0xFDD560
    ::System::Net::SocketAddress* Serialize();
    // public System.Net.EndPoint Create(System.Net.SocketAddress socketAddress)
    // Offset: 0xFDD620
    ::System::Net::EndPoint* Create(::System::Net::SocketAddress* socketAddress);
    // protected System.Void .ctor()
    // Offset: 0xFDBFDC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EndPoint* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::EndPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EndPoint*, creationType>()));
    }
  }; // System.Net.EndPoint
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::EndPoint::get_AddressFamily
// Il2CppName: get_AddressFamily
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::AddressFamily (System::Net::EndPoint::*)()>(&System::Net::EndPoint::get_AddressFamily)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndPoint*), "get_AddressFamily", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::EndPoint::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::SocketAddress* (System::Net::EndPoint::*)()>(&System::Net::EndPoint::Serialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndPoint*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::EndPoint::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::EndPoint* (System::Net::EndPoint::*)(::System::Net::SocketAddress*)>(&System::Net::EndPoint::Create)> {
  static const MethodInfo* get() {
    static auto* socketAddress = &::il2cpp_utils::GetClassFromName("System.Net", "SocketAddress")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndPoint*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{socketAddress});
  }
};
// Writing MetadataGetter for method: System::Net::EndPoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
