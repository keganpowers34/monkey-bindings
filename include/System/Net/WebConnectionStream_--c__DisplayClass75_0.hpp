// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebConnectionStream
#include "System/Net/WebConnectionStream.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: SimpleAsyncResult
  class SimpleAsyncResult;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::WebConnectionStream::$$c__DisplayClass75_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebConnectionStream::$$c__DisplayClass75_0*, "System.Net", "WebConnectionStream/<>c__DisplayClass75_0");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebConnectionStream/<>c__DisplayClass75_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: A5F988
  class WebConnectionStream::$$c__DisplayClass75_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Net.WebConnectionStream <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::System::Net::WebConnectionStream* $$4__this;
    // Field size check
    static_assert(sizeof(::System::Net::WebConnectionStream*) == 0x8);
    // public System.Boolean setInternalLength
    // Size: 0x1
    // Offset: 0x18
    bool setInternalLength;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.Net.WebConnectionStream <>4__this
    [[deprecated("Use field access instead!")]] ::System::Net::WebConnectionStream*& dyn_$$4__this();
    // Get instance field reference: public System.Boolean setInternalLength
    [[deprecated("Use field access instead!")]] bool& dyn_setInternalLength();
    // public System.Void .ctor()
    // Offset: 0xF26480
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebConnectionStream::$$c__DisplayClass75_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebConnectionStream::$$c__DisplayClass75_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebConnectionStream::$$c__DisplayClass75_0*, creationType>()));
    }
    // System.Boolean <SetHeadersAsync>b__0(System.Net.SimpleAsyncResult r)
    // Offset: 0xF27024
    bool $SetHeadersAsync$b__0(::System::Net::SimpleAsyncResult* r);
  }; // System.Net.WebConnectionStream/<>c__DisplayClass75_0
  #pragma pack(pop)
  static check_size<sizeof(WebConnectionStream::$$c__DisplayClass75_0), 24 + sizeof(bool)> __System_Net_WebConnectionStream_$$c__DisplayClass75_0SizeCheck;
  static_assert(sizeof(WebConnectionStream::$$c__DisplayClass75_0) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebConnectionStream::$$c__DisplayClass75_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebConnectionStream::$$c__DisplayClass75_0::$SetHeadersAsync$b__0
// Il2CppName: <SetHeadersAsync>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebConnectionStream::$$c__DisplayClass75_0::*)(::System::Net::SimpleAsyncResult*)>(&System::Net::WebConnectionStream::$$c__DisplayClass75_0::$SetHeadersAsync$b__0)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("System.Net", "SimpleAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionStream::$$c__DisplayClass75_0*), "<SetHeadersAsync>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r});
  }
};
