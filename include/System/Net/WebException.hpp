// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.InvalidOperationException
#include "System/InvalidOperationException.hpp"
// Including type: System.Net.WebExceptionStatus
#include "System/Net/WebExceptionStatus.hpp"
// Including type: System.Net.WebExceptionInternalStatus
#include "System/Net/WebExceptionInternalStatus.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebResponse
  class WebResponse;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: WebException
  class WebException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::WebException);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebException*, "System.Net", "WebException");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x9C
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebException
  // [TokenAttribute] Offset: FFFFFFFF
  class WebException : public ::System::InvalidOperationException {
    public:
    public:
    // private System.Net.WebExceptionStatus m_Status
    // Size: 0x4
    // Offset: 0x88
    ::System::Net::WebExceptionStatus m_Status;
    // Field size check
    static_assert(sizeof(::System::Net::WebExceptionStatus) == 0x4);
    // Padding between fields: m_Status and: m_Response
    char __padding0[0x4] = {};
    // private System.Net.WebResponse m_Response
    // Size: 0x8
    // Offset: 0x90
    ::System::Net::WebResponse* m_Response;
    // Field size check
    static_assert(sizeof(::System::Net::WebResponse*) == 0x8);
    // private System.Net.WebExceptionInternalStatus m_InternalStatus
    // Size: 0x4
    // Offset: 0x98
    ::System::Net::WebExceptionInternalStatus m_InternalStatus;
    // Field size check
    static_assert(sizeof(::System::Net::WebExceptionInternalStatus) == 0x4);
    public:
    // Get instance field reference: private System.Net.WebExceptionStatus m_Status
    [[deprecated("Use field access instead!")]] ::System::Net::WebExceptionStatus& dyn_m_Status();
    // Get instance field reference: private System.Net.WebResponse m_Response
    [[deprecated("Use field access instead!")]] ::System::Net::WebResponse*& dyn_m_Response();
    // Get instance field reference: private System.Net.WebExceptionInternalStatus m_InternalStatus
    [[deprecated("Use field access instead!")]] ::System::Net::WebExceptionInternalStatus& dyn_m_InternalStatus();
    // public System.Void .ctor()
    // Offset: 0xF2751C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0xF2752C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception innerException)
    // Offset: 0xF27540
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebException* New_ctor(::StringW message, ::System::Exception* innerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebException*, creationType>(message, innerException)));
    }
    // public System.Void .ctor(System.String message, System.Net.WebExceptionStatus status)
    // Offset: 0xF1B980
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebException* New_ctor(::StringW message, ::System::Net::WebExceptionStatus status) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebException*, creationType>(message, status)));
    }
    // System.Void .ctor(System.String message, System.Net.WebExceptionStatus status, System.Net.WebExceptionInternalStatus internalStatus, System.Exception innerException)
    // Offset: 0xF26D2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebException* New_ctor(::StringW message, ::System::Net::WebExceptionStatus status, ::System::Net::WebExceptionInternalStatus internalStatus, ::System::Exception* innerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebException*, creationType>(message, status, internalStatus, innerException)));
    }
    // public System.Void .ctor(System.String message, System.Exception innerException, System.Net.WebExceptionStatus status, System.Net.WebResponse response)
    // Offset: 0xF203B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebException* New_ctor(::StringW message, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse* response) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebException*, creationType>(message, innerException, status, response)));
    }
    // System.Void .ctor(System.String message, System.String data, System.Exception innerException, System.Net.WebExceptionStatus status, System.Net.WebResponse response)
    // Offset: 0xF27568
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebException* New_ctor(::StringW message, ::StringW data, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse* response) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebException*, creationType>(message, data, innerException, status, response)));
    }
    // System.Void .ctor(System.String message, System.Exception innerException, System.Net.WebExceptionStatus status, System.Net.WebResponse response, System.Net.WebExceptionInternalStatus internalStatus)
    // Offset: 0xF27550
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebException* New_ctor(::StringW message, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse* response, ::System::Net::WebExceptionInternalStatus internalStatus) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebException*, creationType>(message, innerException, status, response, internalStatus)));
    }
    // System.Void .ctor(System.String message, System.String data, System.Exception innerException, System.Net.WebExceptionStatus status, System.Net.WebResponse response, System.Net.WebExceptionInternalStatus internalStatus)
    // Offset: 0xF27640
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebException* New_ctor(::StringW message, ::StringW data, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse* response, ::System::Net::WebExceptionInternalStatus internalStatus) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebException*, creationType>(message, data, innerException, status, response, internalStatus)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0xF27720
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebException* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebException*, creationType>(serializationInfo, streamingContext)));
    }
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0xF27730
    void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);
    // public System.Net.WebExceptionStatus get_Status()
    // Offset: 0xF27744
    ::System::Net::WebExceptionStatus get_Status();
    // public System.Net.WebResponse get_Response()
    // Offset: 0xF2774C
    ::System::Net::WebResponse* get_Response();
    // System.Net.WebExceptionInternalStatus get_InternalStatus()
    // Offset: 0xF27754
    ::System::Net::WebExceptionInternalStatus get_InternalStatus();
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0xF2773C
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);
  }; // System.Net.WebException
  #pragma pack(pop)
  static check_size<sizeof(WebException), 152 + sizeof(::System::Net::WebExceptionInternalStatus)> __System_Net_WebExceptionSizeCheck;
  static_assert(sizeof(WebException) == 0x9C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebException::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Net::WebException::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* serializationInfo = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* streamingContext = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebException*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializationInfo, streamingContext});
  }
};
// Writing MetadataGetter for method: System::Net::WebException::get_Status
// Il2CppName: get_Status
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebExceptionStatus (System::Net::WebException::*)()>(&System::Net::WebException::get_Status)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebException*), "get_Status", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebException::get_Response
// Il2CppName: get_Response
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebResponse* (System::Net::WebException::*)()>(&System::Net::WebException::get_Response)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebException*), "get_Response", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebException::get_InternalStatus
// Il2CppName: get_InternalStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebExceptionInternalStatus (System::Net::WebException::*)()>(&System::Net::WebException::get_InternalStatus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebException*), "get_InternalStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebException::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Net::WebException::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* serializationInfo = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* streamingContext = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebException*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializationInfo, streamingContext});
  }
};
