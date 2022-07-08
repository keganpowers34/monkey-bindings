// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.Messaging.MessageDictionary
#include "System/Runtime/Remoting/Messaging/MessageDictionary.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMethodReturnMessage
  class IMethodReturnMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: MethodReturnDictionary
  class MethodReturnDictionary;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::MethodReturnDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::MethodReturnDictionary*, "System.Runtime.Remoting.Messaging", "MethodReturnDictionary");
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.MethodReturnDictionary
  // [TokenAttribute] Offset: FFFFFFFF
  class MethodReturnDictionary : public ::System::Runtime::Remoting::Messaging::MessageDictionary {
    public:
    // Get static field: static public System.String[] InternalReturnKeys
    static ::ArrayW<::StringW> _get_InternalReturnKeys();
    // Set static field: static public System.String[] InternalReturnKeys
    static void _set_InternalReturnKeys(::ArrayW<::StringW> value);
    // Get static field: static public System.String[] InternalExceptionKeys
    static ::ArrayW<::StringW> _get_InternalExceptionKeys();
    // Set static field: static public System.String[] InternalExceptionKeys
    static void _set_InternalExceptionKeys(::ArrayW<::StringW> value);
    // public System.Void .ctor(System.Runtime.Remoting.Messaging.IMethodReturnMessage message)
    // Offset: 0x11A2DFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodReturnDictionary* New_ctor(::System::Runtime::Remoting::Messaging::IMethodReturnMessage* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Messaging::MethodReturnDictionary::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodReturnDictionary*, creationType>(message)));
    }
    // static private System.Void .cctor()
    // Offset: 0x11A3418
    static void _cctor();
  }; // System.Runtime.Remoting.Messaging.MethodReturnDictionary
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodReturnDictionary::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodReturnDictionary::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::Remoting::Messaging::MethodReturnDictionary::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodReturnDictionary*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
