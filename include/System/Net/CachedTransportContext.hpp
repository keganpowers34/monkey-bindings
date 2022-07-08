// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.TransportContext
#include "System/Net/TransportContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Authentication::ExtendedProtection
namespace System::Security::Authentication::ExtendedProtection {
  // Forward declaring type: ChannelBinding
  class ChannelBinding;
  // Forward declaring type: ChannelBindingKind
  struct ChannelBindingKind;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: CachedTransportContext
  class CachedTransportContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::CachedTransportContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CachedTransportContext*, "System.Net", "CachedTransportContext");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.CachedTransportContext
  // [TokenAttribute] Offset: FFFFFFFF
  class CachedTransportContext : public ::System::Net::TransportContext {
    public:
    public:
    // private System.Security.Authentication.ExtendedProtection.ChannelBinding binding
    // Size: 0x8
    // Offset: 0x10
    ::System::Security::Authentication::ExtendedProtection::ChannelBinding* binding;
    // Field size check
    static_assert(sizeof(::System::Security::Authentication::ExtendedProtection::ChannelBinding*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Security::Authentication::ExtendedProtection::ChannelBinding*
    constexpr operator ::System::Security::Authentication::ExtendedProtection::ChannelBinding*() const noexcept {
      return binding;
    }
    // Get instance field reference: private System.Security.Authentication.ExtendedProtection.ChannelBinding binding
    [[deprecated("Use field access instead!")]] ::System::Security::Authentication::ExtendedProtection::ChannelBinding*& dyn_binding();
    // System.Void .ctor(System.Security.Authentication.ExtendedProtection.ChannelBinding binding)
    // Offset: 0x126A108
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CachedTransportContext* New_ctor(::System::Security::Authentication::ExtendedProtection::ChannelBinding* binding) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::CachedTransportContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CachedTransportContext*, creationType>(binding)));
    }
    // public override System.Security.Authentication.ExtendedProtection.ChannelBinding GetChannelBinding(System.Security.Authentication.ExtendedProtection.ChannelBindingKind kind)
    // Offset: 0x126A134
    // Implemented from: System.Net.TransportContext
    // Base method: System.Security.Authentication.ExtendedProtection.ChannelBinding TransportContext::GetChannelBinding(System.Security.Authentication.ExtendedProtection.ChannelBindingKind kind)
    ::System::Security::Authentication::ExtendedProtection::ChannelBinding* GetChannelBinding(::System::Security::Authentication::ExtendedProtection::ChannelBindingKind kind);
  }; // System.Net.CachedTransportContext
  #pragma pack(pop)
  static check_size<sizeof(CachedTransportContext), 16 + sizeof(::System::Security::Authentication::ExtendedProtection::ChannelBinding*)> __System_Net_CachedTransportContextSizeCheck;
  static_assert(sizeof(CachedTransportContext) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::CachedTransportContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::CachedTransportContext::GetChannelBinding
// Il2CppName: GetChannelBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Authentication::ExtendedProtection::ChannelBinding* (System::Net::CachedTransportContext::*)(::System::Security::Authentication::ExtendedProtection::ChannelBindingKind)>(&System::Net::CachedTransportContext::GetChannelBinding)> {
  static const MethodInfo* get() {
    static auto* kind = &::il2cpp_utils::GetClassFromName("System.Security.Authentication.ExtendedProtection", "ChannelBindingKind")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CachedTransportContext*), "GetChannelBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{kind});
  }
};
