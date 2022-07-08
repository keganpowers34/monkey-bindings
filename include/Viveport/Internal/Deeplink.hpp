// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Viveport.Deeplink
#include "Viveport/Deeplink.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Viveport::Internal
namespace Viveport::Internal {
  // Forward declaring type: StatusCallback
  class StatusCallback;
}
// Completed forward declares
// Type namespace: Viveport.Internal
namespace Viveport::Internal {
  // Forward declaring type: Deeplink
  class Deeplink;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Viveport::Internal::Deeplink);
DEFINE_IL2CPP_ARG_TYPE(::Viveport::Internal::Deeplink*, "Viveport.Internal", "Deeplink");
// Type namespace: Viveport.Internal
namespace Viveport::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Viveport.Internal.Deeplink
  // [TokenAttribute] Offset: FFFFFFFF
  class Deeplink : public ::Il2CppObject {
    public:
    // Nested type: ::Viveport::Internal::Deeplink::AndroidDeeplinkChecker
    class AndroidDeeplinkChecker;
    // static System.Void IsReady(Viveport.Internal.StatusCallback callback)
    // Offset: 0x1C1C2E8
    static void IsReady(::Viveport::Internal::StatusCallback* callback);
    // static System.Void GoToApp(Viveport.Deeplink/DeeplinkChecker checker, System.String appId, System.String launchData)
    // Offset: 0x1C1C3D4
    static void GoToApp(::Viveport::Deeplink::DeeplinkChecker* checker, ::StringW appId, ::StringW launchData);
    // static System.Void GoToStore(Viveport.Deeplink/DeeplinkChecker checker, System.String appId)
    // Offset: 0x1C1C5D4
    static void GoToStore(::Viveport::Deeplink::DeeplinkChecker* checker, ::StringW appId);
    // static System.Void GoToAppOrGoToStore(Viveport.Deeplink/DeeplinkChecker checker, System.String appId, System.String launchData)
    // Offset: 0x1C1C720
    static void GoToAppOrGoToStore(::Viveport::Deeplink::DeeplinkChecker* checker, ::StringW appId, ::StringW launchData);
    // static System.String GetAppLaunchData()
    // Offset: 0x1C1C898
    static ::StringW GetAppLaunchData();
    // public System.Void .ctor()
    // Offset: 0x1C1C970
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Deeplink* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Viveport::Internal::Deeplink::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Deeplink*, creationType>()));
    }
  }; // Viveport.Internal.Deeplink
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Viveport::Internal::Deeplink::IsReady
// Il2CppName: IsReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Viveport::Internal::StatusCallback*)>(&Viveport::Internal::Deeplink::IsReady)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("Viveport.Internal", "StatusCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::Internal::Deeplink*), "IsReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: Viveport::Internal::Deeplink::GoToApp
// Il2CppName: GoToApp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Viveport::Deeplink::DeeplinkChecker*, ::StringW, ::StringW)>(&Viveport::Internal::Deeplink::GoToApp)> {
  static const MethodInfo* get() {
    static auto* checker = &::il2cpp_utils::GetClassFromName("Viveport", "Deeplink/DeeplinkChecker")->byval_arg;
    static auto* appId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* launchData = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::Internal::Deeplink*), "GoToApp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{checker, appId, launchData});
  }
};
// Writing MetadataGetter for method: Viveport::Internal::Deeplink::GoToStore
// Il2CppName: GoToStore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Viveport::Deeplink::DeeplinkChecker*, ::StringW)>(&Viveport::Internal::Deeplink::GoToStore)> {
  static const MethodInfo* get() {
    static auto* checker = &::il2cpp_utils::GetClassFromName("Viveport", "Deeplink/DeeplinkChecker")->byval_arg;
    static auto* appId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::Internal::Deeplink*), "GoToStore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{checker, appId});
  }
};
// Writing MetadataGetter for method: Viveport::Internal::Deeplink::GoToAppOrGoToStore
// Il2CppName: GoToAppOrGoToStore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Viveport::Deeplink::DeeplinkChecker*, ::StringW, ::StringW)>(&Viveport::Internal::Deeplink::GoToAppOrGoToStore)> {
  static const MethodInfo* get() {
    static auto* checker = &::il2cpp_utils::GetClassFromName("Viveport", "Deeplink/DeeplinkChecker")->byval_arg;
    static auto* appId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* launchData = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::Internal::Deeplink*), "GoToAppOrGoToStore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{checker, appId, launchData});
  }
};
// Writing MetadataGetter for method: Viveport::Internal::Deeplink::GetAppLaunchData
// Il2CppName: GetAppLaunchData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&Viveport::Internal::Deeplink::GetAppLaunchData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::Internal::Deeplink*), "GetAppLaunchData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::Internal::Deeplink::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
