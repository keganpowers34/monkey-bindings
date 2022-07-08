// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabBaseModel
#include "PlayFab/SharedModels/PlayFabBaseModel.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: PlayFab.CloudScriptModels.LoginIdentityProvider
#include "PlayFab/CloudScriptModels/LoginIdentityProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: PlayFab::CloudScriptModels
namespace PlayFab::CloudScriptModels {
  // Forward declaring type: AdCampaignAttributionModel
  class AdCampaignAttributionModel;
  // Forward declaring type: ContactEmailInfoModel
  class ContactEmailInfoModel;
  // Forward declaring type: LinkedPlatformAccountModel
  class LinkedPlatformAccountModel;
  // Forward declaring type: LocationModel
  class LocationModel;
  // Forward declaring type: MembershipModel
  class MembershipModel;
  // Forward declaring type: PushNotificationRegistrationModel
  class PushNotificationRegistrationModel;
  // Forward declaring type: StatisticModel
  class StatisticModel;
  // Forward declaring type: TagModel
  class TagModel;
  // Forward declaring type: ValueToDateModel
  class ValueToDateModel;
}
// Completed forward declares
// Type namespace: PlayFab.CloudScriptModels
namespace PlayFab::CloudScriptModels {
  // Forward declaring type: PlayerProfileModel
  class PlayerProfileModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::CloudScriptModels::PlayerProfileModel);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::CloudScriptModels::PlayerProfileModel*, "PlayFab.CloudScriptModels", "PlayerProfileModel");
// Type namespace: PlayFab.CloudScriptModels
namespace PlayFab::CloudScriptModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.CloudScriptModels.PlayerProfileModel
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerProfileModel : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.Collections.Generic.List`1<PlayFab.CloudScriptModels.AdCampaignAttributionModel> AdCampaignAttributions
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::AdCampaignAttributionModel*>* AdCampaignAttributions;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::AdCampaignAttributionModel*>*) == 0x8);
    // public System.String AvatarUrl
    // Size: 0x8
    // Offset: 0x18
    ::StringW AvatarUrl;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Nullable`1<System.DateTime> BannedUntil
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    ::System::Nullable_1<::System::DateTime> BannedUntil;
    // public System.Collections.Generic.List`1<PlayFab.CloudScriptModels.ContactEmailInfoModel> ContactEmailAddresses
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::ContactEmailInfoModel*>* ContactEmailAddresses;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::ContactEmailInfoModel*>*) == 0x8);
    // public System.Nullable`1<System.DateTime> Created
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    ::System::Nullable_1<::System::DateTime> Created;
    // public System.String DisplayName
    // Size: 0x8
    // Offset: 0x48
    ::StringW DisplayName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Collections.Generic.List`1<System.String> ExperimentVariants
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<::StringW>* ExperimentVariants;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // public System.Nullable`1<System.DateTime> LastLogin
    // Size: 0xFFFFFFFF
    // Offset: 0x58
    ::System::Nullable_1<::System::DateTime> LastLogin;
    // public System.Collections.Generic.List`1<PlayFab.CloudScriptModels.LinkedPlatformAccountModel> LinkedAccounts
    // Size: 0x8
    // Offset: 0x68
    ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::LinkedPlatformAccountModel*>* LinkedAccounts;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::LinkedPlatformAccountModel*>*) == 0x8);
    // public System.Collections.Generic.List`1<PlayFab.CloudScriptModels.LocationModel> Locations
    // Size: 0x8
    // Offset: 0x70
    ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::LocationModel*>* Locations;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::LocationModel*>*) == 0x8);
    // public System.Collections.Generic.List`1<PlayFab.CloudScriptModels.MembershipModel> Memberships
    // Size: 0x8
    // Offset: 0x78
    ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::MembershipModel*>* Memberships;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::MembershipModel*>*) == 0x8);
    // public System.Nullable`1<PlayFab.CloudScriptModels.LoginIdentityProvider> Origination
    // Size: 0xFFFFFFFF
    // Offset: 0x80
    ::System::Nullable_1<::PlayFab::CloudScriptModels::LoginIdentityProvider> Origination;
    // public System.String PlayerId
    // Size: 0x8
    // Offset: 0x88
    ::StringW PlayerId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String PublisherId
    // Size: 0x8
    // Offset: 0x90
    ::StringW PublisherId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Collections.Generic.List`1<PlayFab.CloudScriptModels.PushNotificationRegistrationModel> PushNotificationRegistrations
    // Size: 0x8
    // Offset: 0x98
    ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::PushNotificationRegistrationModel*>* PushNotificationRegistrations;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::PushNotificationRegistrationModel*>*) == 0x8);
    // public System.Collections.Generic.List`1<PlayFab.CloudScriptModels.StatisticModel> Statistics
    // Size: 0x8
    // Offset: 0xA0
    ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::StatisticModel*>* Statistics;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::StatisticModel*>*) == 0x8);
    // public System.Collections.Generic.List`1<PlayFab.CloudScriptModels.TagModel> Tags
    // Size: 0x8
    // Offset: 0xA8
    ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::TagModel*>* Tags;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::TagModel*>*) == 0x8);
    // public System.String TitleId
    // Size: 0x8
    // Offset: 0xB0
    ::StringW TitleId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Nullable`1<System.UInt32> TotalValueToDateInUSD
    // Size: 0xFFFFFFFF
    // Offset: 0xB8
    ::System::Nullable_1<uint> TotalValueToDateInUSD;
    // public System.Collections.Generic.List`1<PlayFab.CloudScriptModels.ValueToDateModel> ValuesToDate
    // Size: 0x8
    // Offset: 0xC0
    ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::ValueToDateModel*>* ValuesToDate;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::ValueToDateModel*>*) == 0x8);
    public:
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.CloudScriptModels.AdCampaignAttributionModel> AdCampaignAttributions
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::AdCampaignAttributionModel*>*& dyn_AdCampaignAttributions();
    // Get instance field reference: public System.String AvatarUrl
    [[deprecated("Use field access instead!")]] ::StringW& dyn_AvatarUrl();
    // Get instance field reference: public System.Nullable`1<System.DateTime> BannedUntil
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::System::DateTime>& dyn_BannedUntil();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.CloudScriptModels.ContactEmailInfoModel> ContactEmailAddresses
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::ContactEmailInfoModel*>*& dyn_ContactEmailAddresses();
    // Get instance field reference: public System.Nullable`1<System.DateTime> Created
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::System::DateTime>& dyn_Created();
    // Get instance field reference: public System.String DisplayName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_DisplayName();
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> ExperimentVariants
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_ExperimentVariants();
    // Get instance field reference: public System.Nullable`1<System.DateTime> LastLogin
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::System::DateTime>& dyn_LastLogin();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.CloudScriptModels.LinkedPlatformAccountModel> LinkedAccounts
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::LinkedPlatformAccountModel*>*& dyn_LinkedAccounts();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.CloudScriptModels.LocationModel> Locations
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::LocationModel*>*& dyn_Locations();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.CloudScriptModels.MembershipModel> Memberships
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::MembershipModel*>*& dyn_Memberships();
    // Get instance field reference: public System.Nullable`1<PlayFab.CloudScriptModels.LoginIdentityProvider> Origination
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::PlayFab::CloudScriptModels::LoginIdentityProvider>& dyn_Origination();
    // Get instance field reference: public System.String PlayerId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_PlayerId();
    // Get instance field reference: public System.String PublisherId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_PublisherId();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.CloudScriptModels.PushNotificationRegistrationModel> PushNotificationRegistrations
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::PushNotificationRegistrationModel*>*& dyn_PushNotificationRegistrations();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.CloudScriptModels.StatisticModel> Statistics
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::StatisticModel*>*& dyn_Statistics();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.CloudScriptModels.TagModel> Tags
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::TagModel*>*& dyn_Tags();
    // Get instance field reference: public System.String TitleId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_TitleId();
    // Get instance field reference: public System.Nullable`1<System.UInt32> TotalValueToDateInUSD
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<uint>& dyn_TotalValueToDateInUSD();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.CloudScriptModels.ValueToDateModel> ValuesToDate
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::ValueToDateModel*>*& dyn_ValuesToDate();
    // public System.Void .ctor()
    // Offset: 0xB5D6A0
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerProfileModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::CloudScriptModels::PlayerProfileModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerProfileModel*, creationType>()));
    }
  }; // PlayFab.CloudScriptModels.PlayerProfileModel
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::CloudScriptModels::PlayerProfileModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
