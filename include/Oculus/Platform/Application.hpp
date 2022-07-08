// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
  // Forward declaring type: ApplicationOptions
  class ApplicationOptions;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: ApplicationVersion
  class ApplicationVersion;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: Application
  class Application;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Application);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Application*, "Oculus.Platform", "Application");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Application
  // [TokenAttribute] Offset: FFFFFFFF
  class Application : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.ApplicationVersion> GetVersion()
    // Offset: 0x164864C
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ApplicationVersion*>* GetVersion();
    // static public Oculus.Platform.Request`1<System.String> LaunchOtherApp(System.UInt64 appID, Oculus.Platform.ApplicationOptions deeplink_options)
    // Offset: 0x16487C8
    static ::Oculus::Platform::Request_1<::StringW>* LaunchOtherApp(uint64_t appID, ::Oculus::Platform::ApplicationOptions* deeplink_options);
  }; // Oculus.Platform.Application
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Application::GetVersion
// Il2CppName: GetVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ApplicationVersion*>* (*)()>(&Oculus::Platform::Application::GetVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Application*), "GetVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Application::LaunchOtherApp
// Il2CppName: LaunchOtherApp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::StringW>* (*)(uint64_t, ::Oculus::Platform::ApplicationOptions*)>(&Oculus::Platform::Application::LaunchOtherApp)> {
  static const MethodInfo* get() {
    static auto* appID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* deeplink_options = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "ApplicationOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Application*), "LaunchOtherApp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{appID, deeplink_options});
  }
};
