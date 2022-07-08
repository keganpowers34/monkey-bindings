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
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: ExitGames::Client::Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: OperationResponse
  class OperationResponse;
}
// Completed forward declares
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Forward declaring type: WebRpcResponse
  class WebRpcResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Realtime::WebRpcResponse);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::WebRpcResponse*, "Photon.Realtime", "WebRpcResponse");
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Realtime.WebRpcResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class WebRpcResponse : public ::Il2CppObject {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xAAE7D0
    // private System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAAE7E0
    // private System.Int32 <ResultCode>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int ResultCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: ResultCode and: Message
    char __padding1[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xAAE7F0
    // private System.String <Message>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::StringW Message;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAAE800
    // private System.Collections.Generic.Dictionary`2<System.String,System.Object> <Parameters>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>* Parameters;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>*) == 0x8);
    public:
    // Get instance field reference: private System.String <Name>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Name$k__BackingField();
    // Get instance field reference: private System.Int32 <ResultCode>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$ResultCode$k__BackingField();
    // Get instance field reference: private System.String <Message>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Message$k__BackingField();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,System.Object> <Parameters>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>*& dyn_$Parameters$k__BackingField();
    // public System.String get_Name()
    // Offset: 0x1C28574
    ::StringW get_Name();
    // private System.Void set_Name(System.String value)
    // Offset: 0x1C2857C
    void set_Name(::StringW value);
    // public System.Int32 get_ResultCode()
    // Offset: 0x1C28584
    int get_ResultCode();
    // private System.Void set_ResultCode(System.Int32 value)
    // Offset: 0x1C2858C
    void set_ResultCode(int value);
    // public System.Int32 get_ReturnCode()
    // Offset: 0x1C28594
    int get_ReturnCode();
    // public System.String get_Message()
    // Offset: 0x1C2859C
    ::StringW get_Message();
    // private System.Void set_Message(System.String value)
    // Offset: 0x1C285A4
    void set_Message(::StringW value);
    // public System.String get_DebugMessage()
    // Offset: 0x1C285AC
    ::StringW get_DebugMessage();
    // public System.Collections.Generic.Dictionary`2<System.String,System.Object> get_Parameters()
    // Offset: 0x1C285B4
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>* get_Parameters();
    // private System.Void set_Parameters(System.Collections.Generic.Dictionary`2<System.String,System.Object> value)
    // Offset: 0x1C285BC
    void set_Parameters(::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>* value);
    // public System.Void .ctor(ExitGames.Client.Photon.OperationResponse response)
    // Offset: 0x1C285C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebRpcResponse* New_ctor(::ExitGames::Client::Photon::OperationResponse* response) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Realtime::WebRpcResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebRpcResponse*, creationType>(response)));
    }
    // public System.String ToStringFull()
    // Offset: 0x1C28768
    ::StringW ToStringFull();
  }; // Photon.Realtime.WebRpcResponse
  #pragma pack(pop)
  static check_size<sizeof(WebRpcResponse), 40 + sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>*)> __Photon_Realtime_WebRpcResponseSizeCheck;
  static_assert(sizeof(WebRpcResponse) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Realtime::WebRpcResponse::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Photon::Realtime::WebRpcResponse::*)()>(&Photon::Realtime::WebRpcResponse::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::WebRpcResponse*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::WebRpcResponse::set_Name
// Il2CppName: set_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::WebRpcResponse::*)(::StringW)>(&Photon::Realtime::WebRpcResponse::set_Name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::WebRpcResponse*), "set_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::WebRpcResponse::get_ResultCode
// Il2CppName: get_ResultCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Photon::Realtime::WebRpcResponse::*)()>(&Photon::Realtime::WebRpcResponse::get_ResultCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::WebRpcResponse*), "get_ResultCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::WebRpcResponse::set_ResultCode
// Il2CppName: set_ResultCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::WebRpcResponse::*)(int)>(&Photon::Realtime::WebRpcResponse::set_ResultCode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::WebRpcResponse*), "set_ResultCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::WebRpcResponse::get_ReturnCode
// Il2CppName: get_ReturnCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Photon::Realtime::WebRpcResponse::*)()>(&Photon::Realtime::WebRpcResponse::get_ReturnCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::WebRpcResponse*), "get_ReturnCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::WebRpcResponse::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Photon::Realtime::WebRpcResponse::*)()>(&Photon::Realtime::WebRpcResponse::get_Message)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::WebRpcResponse*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::WebRpcResponse::set_Message
// Il2CppName: set_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::WebRpcResponse::*)(::StringW)>(&Photon::Realtime::WebRpcResponse::set_Message)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::WebRpcResponse*), "set_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::WebRpcResponse::get_DebugMessage
// Il2CppName: get_DebugMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Photon::Realtime::WebRpcResponse::*)()>(&Photon::Realtime::WebRpcResponse::get_DebugMessage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::WebRpcResponse*), "get_DebugMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::WebRpcResponse::get_Parameters
// Il2CppName: get_Parameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>* (Photon::Realtime::WebRpcResponse::*)()>(&Photon::Realtime::WebRpcResponse::get_Parameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::WebRpcResponse*), "get_Parameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::WebRpcResponse::set_Parameters
// Il2CppName: set_Parameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::WebRpcResponse::*)(::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>*)>(&Photon::Realtime::WebRpcResponse::set_Parameters)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::WebRpcResponse*), "set_Parameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::WebRpcResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Realtime::WebRpcResponse::ToStringFull
// Il2CppName: ToStringFull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Photon::Realtime::WebRpcResponse::*)()>(&Photon::Realtime::WebRpcResponse::ToStringFull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::WebRpcResponse*), "ToStringFull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
