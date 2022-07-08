// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.Protocol.Tls.AlertLevel
#include "Mono/Security/Protocol/Tls/AlertLevel.hpp"
// Including type: Mono.Security.Protocol.Tls.AlertDescription
#include "Mono/Security/Protocol/Tls/AlertDescription.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Mono.Security.Protocol.Tls
namespace Mono::Security::Protocol::Tls {
  // Forward declaring type: Alert
  class Alert;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Protocol::Tls::Alert);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Tls::Alert*, "Mono.Security.Protocol.Tls", "Alert");
// Type namespace: Mono.Security.Protocol.Tls
namespace Mono::Security::Protocol::Tls {
  // Size: 0x12
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Protocol.Tls.Alert
  // [TokenAttribute] Offset: FFFFFFFF
  class Alert : public ::Il2CppObject {
    public:
    public:
    // private Mono.Security.Protocol.Tls.AlertLevel level
    // Size: 0x1
    // Offset: 0x10
    ::Mono::Security::Protocol::Tls::AlertLevel level;
    // Field size check
    static_assert(sizeof(::Mono::Security::Protocol::Tls::AlertLevel) == 0x1);
    // private Mono.Security.Protocol.Tls.AlertDescription description
    // Size: 0x1
    // Offset: 0x11
    ::Mono::Security::Protocol::Tls::AlertDescription description;
    // Field size check
    static_assert(sizeof(::Mono::Security::Protocol::Tls::AlertDescription) == 0x1);
    public:
    // Get instance field reference: private Mono.Security.Protocol.Tls.AlertLevel level
    [[deprecated("Use field access instead!")]] ::Mono::Security::Protocol::Tls::AlertLevel& dyn_level();
    // Get instance field reference: private Mono.Security.Protocol.Tls.AlertDescription description
    [[deprecated("Use field access instead!")]] ::Mono::Security::Protocol::Tls::AlertDescription& dyn_description();
    // public Mono.Security.Protocol.Tls.AlertLevel get_Level()
    // Offset: 0x16DAAEC
    ::Mono::Security::Protocol::Tls::AlertLevel get_Level();
    // public Mono.Security.Protocol.Tls.AlertDescription get_Description()
    // Offset: 0x16DAAF4
    ::Mono::Security::Protocol::Tls::AlertDescription get_Description();
    // public System.String get_Message()
    // Offset: 0x16DAAFC
    ::StringW get_Message();
    // public System.Boolean get_IsWarning()
    // Offset: 0x16DAB8C
    bool get_IsWarning();
    // public System.Boolean get_IsCloseNotify()
    // Offset: 0x16DAB9C
    bool get_IsCloseNotify();
    // public System.Void .ctor(Mono.Security.Protocol.Tls.AlertDescription description)
    // Offset: 0x16DABC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Alert* New_ctor(::Mono::Security::Protocol::Tls::AlertDescription description) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Protocol::Tls::Alert::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Alert*, creationType>(description)));
    }
    // public System.Void .ctor(Mono.Security.Protocol.Tls.AlertLevel level, Mono.Security.Protocol.Tls.AlertDescription description)
    // Offset: 0x16DAC90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Alert* New_ctor(::Mono::Security::Protocol::Tls::AlertLevel level, ::Mono::Security::Protocol::Tls::AlertDescription description) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Protocol::Tls::Alert::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Alert*, creationType>(level, description)));
    }
    // static private Mono.Security.Protocol.Tls.AlertLevel inferAlertLevel(Mono.Security.Protocol.Tls.AlertDescription description)
    // Offset: 0x16DAC40
    static ::Mono::Security::Protocol::Tls::AlertLevel inferAlertLevel(::Mono::Security::Protocol::Tls::AlertDescription description);
    // static public System.String GetAlertMessage(Mono.Security.Protocol.Tls.AlertDescription description)
    // Offset: 0x16DAB44
    static ::StringW GetAlertMessage(::Mono::Security::Protocol::Tls::AlertDescription description);
  }; // Mono.Security.Protocol.Tls.Alert
  #pragma pack(pop)
  static check_size<sizeof(Alert), 17 + sizeof(::Mono::Security::Protocol::Tls::AlertDescription)> __Mono_Security_Protocol_Tls_AlertSizeCheck;
  static_assert(sizeof(Alert) == 0x12);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::Alert::get_Level
// Il2CppName: get_Level
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Protocol::Tls::AlertLevel (Mono::Security::Protocol::Tls::Alert::*)()>(&Mono::Security::Protocol::Tls::Alert::get_Level)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::Alert*), "get_Level", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::Alert::get_Description
// Il2CppName: get_Description
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Protocol::Tls::AlertDescription (Mono::Security::Protocol::Tls::Alert::*)()>(&Mono::Security::Protocol::Tls::Alert::get_Description)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::Alert*), "get_Description", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::Alert::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Security::Protocol::Tls::Alert::*)()>(&Mono::Security::Protocol::Tls::Alert::get_Message)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::Alert*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::Alert::get_IsWarning
// Il2CppName: get_IsWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Protocol::Tls::Alert::*)()>(&Mono::Security::Protocol::Tls::Alert::get_IsWarning)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::Alert*), "get_IsWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::Alert::get_IsCloseNotify
// Il2CppName: get_IsCloseNotify
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Protocol::Tls::Alert::*)()>(&Mono::Security::Protocol::Tls::Alert::get_IsCloseNotify)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::Alert*), "get_IsCloseNotify", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::Alert::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::Alert::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::Alert::inferAlertLevel
// Il2CppName: inferAlertLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Protocol::Tls::AlertLevel (*)(::Mono::Security::Protocol::Tls::AlertDescription)>(&Mono::Security::Protocol::Tls::Alert::inferAlertLevel)> {
  static const MethodInfo* get() {
    static auto* description = &::il2cpp_utils::GetClassFromName("Mono.Security.Protocol.Tls", "AlertDescription")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::Alert*), "inferAlertLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{description});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::Alert::GetAlertMessage
// Il2CppName: GetAlertMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Mono::Security::Protocol::Tls::AlertDescription)>(&Mono::Security::Protocol::Tls::Alert::GetAlertMessage)> {
  static const MethodInfo* get() {
    static auto* description = &::il2cpp_utils::GetClassFromName("Mono.Security.Protocol.Tls", "AlertDescription")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::Alert*), "GetAlertMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{description});
  }
};
