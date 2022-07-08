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
// Forward declaring namespace: PlayFab::ProfilesModels
namespace PlayFab::ProfilesModels {
  // Forward declaring type: GetGlobalPolicyRequest
  class GetGlobalPolicyRequest;
  // Forward declaring type: GetGlobalPolicyResponse
  class GetGlobalPolicyResponse;
  // Forward declaring type: GetEntityProfileRequest
  class GetEntityProfileRequest;
  // Forward declaring type: GetEntityProfileResponse
  class GetEntityProfileResponse;
  // Forward declaring type: GetEntityProfilesRequest
  class GetEntityProfilesRequest;
  // Forward declaring type: GetEntityProfilesResponse
  class GetEntityProfilesResponse;
  // Forward declaring type: GetTitlePlayersFromMasterPlayerAccountIdsRequest
  class GetTitlePlayersFromMasterPlayerAccountIdsRequest;
  // Forward declaring type: GetTitlePlayersFromMasterPlayerAccountIdsResponse
  class GetTitlePlayersFromMasterPlayerAccountIdsResponse;
  // Forward declaring type: SetGlobalPolicyRequest
  class SetGlobalPolicyRequest;
  // Forward declaring type: SetGlobalPolicyResponse
  class SetGlobalPolicyResponse;
  // Forward declaring type: SetProfileLanguageRequest
  class SetProfileLanguageRequest;
  // Forward declaring type: SetProfileLanguageResponse
  class SetProfileLanguageResponse;
  // Forward declaring type: SetEntityProfilePolicyRequest
  class SetEntityProfilePolicyRequest;
  // Forward declaring type: SetEntityProfilePolicyResponse
  class SetEntityProfilePolicyResponse;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: PlayFab
namespace PlayFab {
  // Forward declaring type: PlayFabError
  class PlayFabError;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: PlayFab
namespace PlayFab {
  // Forward declaring type: PlayFabProfilesAPI
  class PlayFabProfilesAPI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::PlayFabProfilesAPI);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::PlayFabProfilesAPI*, "PlayFab", "PlayFabProfilesAPI");
// Type namespace: PlayFab
namespace PlayFab {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.PlayFabProfilesAPI
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayFabProfilesAPI : public ::Il2CppObject {
    public:
    // static private System.Void .cctor()
    // Offset: 0x199A6A8
    static void _cctor();
    // static public System.Boolean IsEntityLoggedIn()
    // Offset: 0x199A6AC
    static bool IsEntityLoggedIn();
    // static public System.Void ForgetAllCredentials()
    // Offset: 0x199A720
    static void ForgetAllCredentials();
    // static public System.Void GetGlobalPolicy(PlayFab.ProfilesModels.GetGlobalPolicyRequest request, System.Action`1<PlayFab.ProfilesModels.GetGlobalPolicyResponse> resultCallback, System.Action`1<PlayFab.PlayFabError> errorCallback, System.Object customData, System.Collections.Generic.Dictionary`2<System.String,System.String> extraHeaders)
    // Offset: 0x199A794
    static void GetGlobalPolicy(::PlayFab::ProfilesModels::GetGlobalPolicyRequest* request, ::System::Action_1<::PlayFab::ProfilesModels::GetGlobalPolicyResponse*>* resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>* errorCallback, ::Il2CppObject* customData, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* extraHeaders);
    // static public System.Void GetProfile(PlayFab.ProfilesModels.GetEntityProfileRequest request, System.Action`1<PlayFab.ProfilesModels.GetEntityProfileResponse> resultCallback, System.Action`1<PlayFab.PlayFabError> errorCallback, System.Object customData, System.Collections.Generic.Dictionary`2<System.String,System.String> extraHeaders)
    // Offset: 0x199A92C
    static void GetProfile(::PlayFab::ProfilesModels::GetEntityProfileRequest* request, ::System::Action_1<::PlayFab::ProfilesModels::GetEntityProfileResponse*>* resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>* errorCallback, ::Il2CppObject* customData, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* extraHeaders);
    // static public System.Void GetProfiles(PlayFab.ProfilesModels.GetEntityProfilesRequest request, System.Action`1<PlayFab.ProfilesModels.GetEntityProfilesResponse> resultCallback, System.Action`1<PlayFab.PlayFabError> errorCallback, System.Object customData, System.Collections.Generic.Dictionary`2<System.String,System.String> extraHeaders)
    // Offset: 0x199AAC4
    static void GetProfiles(::PlayFab::ProfilesModels::GetEntityProfilesRequest* request, ::System::Action_1<::PlayFab::ProfilesModels::GetEntityProfilesResponse*>* resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>* errorCallback, ::Il2CppObject* customData, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* extraHeaders);
    // static public System.Void GetTitlePlayersFromMasterPlayerAccountIds(PlayFab.ProfilesModels.GetTitlePlayersFromMasterPlayerAccountIdsRequest request, System.Action`1<PlayFab.ProfilesModels.GetTitlePlayersFromMasterPlayerAccountIdsResponse> resultCallback, System.Action`1<PlayFab.PlayFabError> errorCallback, System.Object customData, System.Collections.Generic.Dictionary`2<System.String,System.String> extraHeaders)
    // Offset: 0x199AC5C
    static void GetTitlePlayersFromMasterPlayerAccountIds(::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest* request, ::System::Action_1<::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse*>* resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>* errorCallback, ::Il2CppObject* customData, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* extraHeaders);
    // static public System.Void SetGlobalPolicy(PlayFab.ProfilesModels.SetGlobalPolicyRequest request, System.Action`1<PlayFab.ProfilesModels.SetGlobalPolicyResponse> resultCallback, System.Action`1<PlayFab.PlayFabError> errorCallback, System.Object customData, System.Collections.Generic.Dictionary`2<System.String,System.String> extraHeaders)
    // Offset: 0x199ADF4
    static void SetGlobalPolicy(::PlayFab::ProfilesModels::SetGlobalPolicyRequest* request, ::System::Action_1<::PlayFab::ProfilesModels::SetGlobalPolicyResponse*>* resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>* errorCallback, ::Il2CppObject* customData, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* extraHeaders);
    // static public System.Void SetProfileLanguage(PlayFab.ProfilesModels.SetProfileLanguageRequest request, System.Action`1<PlayFab.ProfilesModels.SetProfileLanguageResponse> resultCallback, System.Action`1<PlayFab.PlayFabError> errorCallback, System.Object customData, System.Collections.Generic.Dictionary`2<System.String,System.String> extraHeaders)
    // Offset: 0x199AF8C
    static void SetProfileLanguage(::PlayFab::ProfilesModels::SetProfileLanguageRequest* request, ::System::Action_1<::PlayFab::ProfilesModels::SetProfileLanguageResponse*>* resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>* errorCallback, ::Il2CppObject* customData, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* extraHeaders);
    // static public System.Void SetProfilePolicy(PlayFab.ProfilesModels.SetEntityProfilePolicyRequest request, System.Action`1<PlayFab.ProfilesModels.SetEntityProfilePolicyResponse> resultCallback, System.Action`1<PlayFab.PlayFabError> errorCallback, System.Object customData, System.Collections.Generic.Dictionary`2<System.String,System.String> extraHeaders)
    // Offset: 0x199B124
    static void SetProfilePolicy(::PlayFab::ProfilesModels::SetEntityProfilePolicyRequest* request, ::System::Action_1<::PlayFab::ProfilesModels::SetEntityProfilePolicyResponse*>* resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>* errorCallback, ::Il2CppObject* customData, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* extraHeaders);
  }; // PlayFab.PlayFabProfilesAPI
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::PlayFabProfilesAPI::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PlayFab::PlayFabProfilesAPI::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabProfilesAPI*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabProfilesAPI::IsEntityLoggedIn
// Il2CppName: IsEntityLoggedIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&PlayFab::PlayFabProfilesAPI::IsEntityLoggedIn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabProfilesAPI*), "IsEntityLoggedIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabProfilesAPI::ForgetAllCredentials
// Il2CppName: ForgetAllCredentials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PlayFab::PlayFabProfilesAPI::ForgetAllCredentials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabProfilesAPI*), "ForgetAllCredentials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabProfilesAPI::GetGlobalPolicy
// Il2CppName: GetGlobalPolicy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::PlayFab::ProfilesModels::GetGlobalPolicyRequest*, ::System::Action_1<::PlayFab::ProfilesModels::GetGlobalPolicyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::Il2CppObject*, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&PlayFab::PlayFabProfilesAPI::GetGlobalPolicy)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("PlayFab.ProfilesModels", "GetGlobalPolicyRequest")->byval_arg;
    static auto* resultCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("PlayFab.ProfilesModels", "GetGlobalPolicyResponse")})->byval_arg;
    static auto* errorCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("PlayFab", "PlayFabError")})->byval_arg;
    static auto* customData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* extraHeaders = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabProfilesAPI*), "GetGlobalPolicy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, resultCallback, errorCallback, customData, extraHeaders});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabProfilesAPI::GetProfile
// Il2CppName: GetProfile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::PlayFab::ProfilesModels::GetEntityProfileRequest*, ::System::Action_1<::PlayFab::ProfilesModels::GetEntityProfileResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::Il2CppObject*, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&PlayFab::PlayFabProfilesAPI::GetProfile)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("PlayFab.ProfilesModels", "GetEntityProfileRequest")->byval_arg;
    static auto* resultCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("PlayFab.ProfilesModels", "GetEntityProfileResponse")})->byval_arg;
    static auto* errorCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("PlayFab", "PlayFabError")})->byval_arg;
    static auto* customData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* extraHeaders = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabProfilesAPI*), "GetProfile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, resultCallback, errorCallback, customData, extraHeaders});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabProfilesAPI::GetProfiles
// Il2CppName: GetProfiles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::PlayFab::ProfilesModels::GetEntityProfilesRequest*, ::System::Action_1<::PlayFab::ProfilesModels::GetEntityProfilesResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::Il2CppObject*, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&PlayFab::PlayFabProfilesAPI::GetProfiles)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("PlayFab.ProfilesModels", "GetEntityProfilesRequest")->byval_arg;
    static auto* resultCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("PlayFab.ProfilesModels", "GetEntityProfilesResponse")})->byval_arg;
    static auto* errorCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("PlayFab", "PlayFabError")})->byval_arg;
    static auto* customData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* extraHeaders = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabProfilesAPI*), "GetProfiles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, resultCallback, errorCallback, customData, extraHeaders});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabProfilesAPI::GetTitlePlayersFromMasterPlayerAccountIds
// Il2CppName: GetTitlePlayersFromMasterPlayerAccountIds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest*, ::System::Action_1<::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::Il2CppObject*, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&PlayFab::PlayFabProfilesAPI::GetTitlePlayersFromMasterPlayerAccountIds)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("PlayFab.ProfilesModels", "GetTitlePlayersFromMasterPlayerAccountIdsRequest")->byval_arg;
    static auto* resultCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("PlayFab.ProfilesModels", "GetTitlePlayersFromMasterPlayerAccountIdsResponse")})->byval_arg;
    static auto* errorCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("PlayFab", "PlayFabError")})->byval_arg;
    static auto* customData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* extraHeaders = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabProfilesAPI*), "GetTitlePlayersFromMasterPlayerAccountIds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, resultCallback, errorCallback, customData, extraHeaders});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabProfilesAPI::SetGlobalPolicy
// Il2CppName: SetGlobalPolicy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::PlayFab::ProfilesModels::SetGlobalPolicyRequest*, ::System::Action_1<::PlayFab::ProfilesModels::SetGlobalPolicyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::Il2CppObject*, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&PlayFab::PlayFabProfilesAPI::SetGlobalPolicy)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("PlayFab.ProfilesModels", "SetGlobalPolicyRequest")->byval_arg;
    static auto* resultCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("PlayFab.ProfilesModels", "SetGlobalPolicyResponse")})->byval_arg;
    static auto* errorCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("PlayFab", "PlayFabError")})->byval_arg;
    static auto* customData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* extraHeaders = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabProfilesAPI*), "SetGlobalPolicy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, resultCallback, errorCallback, customData, extraHeaders});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabProfilesAPI::SetProfileLanguage
// Il2CppName: SetProfileLanguage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::PlayFab::ProfilesModels::SetProfileLanguageRequest*, ::System::Action_1<::PlayFab::ProfilesModels::SetProfileLanguageResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::Il2CppObject*, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&PlayFab::PlayFabProfilesAPI::SetProfileLanguage)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("PlayFab.ProfilesModels", "SetProfileLanguageRequest")->byval_arg;
    static auto* resultCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("PlayFab.ProfilesModels", "SetProfileLanguageResponse")})->byval_arg;
    static auto* errorCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("PlayFab", "PlayFabError")})->byval_arg;
    static auto* customData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* extraHeaders = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabProfilesAPI*), "SetProfileLanguage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, resultCallback, errorCallback, customData, extraHeaders});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabProfilesAPI::SetProfilePolicy
// Il2CppName: SetProfilePolicy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::PlayFab::ProfilesModels::SetEntityProfilePolicyRequest*, ::System::Action_1<::PlayFab::ProfilesModels::SetEntityProfilePolicyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::Il2CppObject*, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&PlayFab::PlayFabProfilesAPI::SetProfilePolicy)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("PlayFab.ProfilesModels", "SetEntityProfilePolicyRequest")->byval_arg;
    static auto* resultCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("PlayFab.ProfilesModels", "SetEntityProfilePolicyResponse")})->byval_arg;
    static auto* errorCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("PlayFab", "PlayFabError")})->byval_arg;
    static auto* customData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* extraHeaders = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabProfilesAPI*), "SetProfilePolicy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, resultCallback, errorCallback, customData, extraHeaders});
  }
};
