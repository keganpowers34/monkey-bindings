// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Voice.RawCodec
#include "Photon/Voice/RawCodec.hpp"
// Including type: Photon.Voice.IEncoderDirect`1
#include "Photon/Voice/IEncoderDirect_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Photon::Voice::RawCodec::Encoder_1, "Photon.Voice", "RawCodec/Encoder`1");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // WARNING Size may be invalid!
  // Autogenerated type: Photon.Voice.RawCodec/Encoder`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class RawCodec::Encoder_1 : public ::Il2CppObject/*, public ::Photon::Voice::IEncoderDirect_1<::ArrayW<T>>*/ {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xAAF8E0
    // private System.String <Error>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    ::StringW Error;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAAF8F0
    // private System.Action`2<System.ArraySegment`1<System.Byte>,Photon.Voice.FrameFlags> <Output>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_2<::System::ArraySegment_1<uint8_t>, ::Photon::Voice::FrameFlags>* Output;
    // Field size check
    static_assert(sizeof(::System::Action_2<::System::ArraySegment_1<uint8_t>, ::Photon::Voice::FrameFlags>*) == 0x8);
    // private System.Int32 sizeofT
    // Size: 0x4
    // Offset: 0x0
    int sizeofT;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Byte[] byteBuf
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<uint8_t> byteBuf;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Photon::Voice::IEncoderDirect_1<::ArrayW<T>>
    operator ::Photon::Voice::IEncoderDirect_1<::ArrayW<T>>() noexcept {
      return *reinterpret_cast<::Photon::Voice::IEncoderDirect_1<::ArrayW<T>>*>(this);
    }
    // Autogenerated static field getter
    // Get static field: static private readonly System.ArraySegment`1<System.Byte> EmptyBuffer
    static ::System::ArraySegment_1<uint8_t> _get_EmptyBuffer() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::RawCodec::Encoder_1::_get_EmptyBuffer");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::System::ArraySegment_1<uint8_t>>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RawCodec::Encoder_1<T>*>::get(), "EmptyBuffer"));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly System.ArraySegment`1<System.Byte> EmptyBuffer
    static void _set_EmptyBuffer(::System::ArraySegment_1<uint8_t> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::RawCodec::Encoder_1::_set_EmptyBuffer");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RawCodec::Encoder_1<T>*>::get(), "EmptyBuffer", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private System.String <Error>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Error$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::RawCodec::Encoder_1::dyn_$Error$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<Error>k__BackingField"))->offset;
      return *reinterpret_cast<::StringW*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Action`2<System.ArraySegment`1<System.Byte>,Photon.Voice.FrameFlags> <Output>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Action_2<::System::ArraySegment_1<uint8_t>, ::Photon::Voice::FrameFlags>*& dyn_$Output$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::RawCodec::Encoder_1::dyn_$Output$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<Output>k__BackingField"))->offset;
      return *reinterpret_cast<::System::Action_2<::System::ArraySegment_1<uint8_t>, ::Photon::Voice::FrameFlags>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 sizeofT
    [[deprecated("Use field access instead!")]] int& dyn_sizeofT() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::RawCodec::Encoder_1::dyn_sizeofT");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "sizeofT"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Byte[] byteBuf
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_byteBuf() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::RawCodec::Encoder_1::dyn_byteBuf");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "byteBuf"))->offset;
      return *reinterpret_cast<::ArrayW<uint8_t>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.String get_Error()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_Error() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::RawCodec::Encoder_1::get_Error");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::RawCodec::Encoder_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
    // private System.Void set_Error(System.String value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Error(::StringW value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::RawCodec::Encoder_1::set_Error");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Error", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void set_Output(System.Action`2<System.ArraySegment`1<System.Byte>,Photon.Voice.FrameFlags> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Output(::System::Action_2<::System::ArraySegment_1<uint8_t>, ::Photon::Voice::FrameFlags>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::RawCodec::Encoder_1::set_Output");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::RawCodec::Encoder_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Action`2<System.ArraySegment`1<System.Byte>,Photon.Voice.FrameFlags> get_Output()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Action_2<::System::ArraySegment_1<uint8_t>, ::Photon::Voice::FrameFlags>* get_Output() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::RawCodec::Encoder_1::get_Output");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Output", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Action_2<::System::ArraySegment_1<uint8_t>, ::Photon::Voice::FrameFlags>*, false>(this, ___internal__method);
    }
    // public System.ArraySegment`1<System.Byte> DequeueOutput(out Photon.Voice.FrameFlags flags)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::ArraySegment_1<uint8_t> DequeueOutput(ByRef<::Photon::Voice::FrameFlags> flags) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::RawCodec::Encoder_1::DequeueOutput");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::RawCodec::Encoder_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::ArraySegment_1<uint8_t>, false>(this, ___internal__method, byref(flags));
    }
    // public System.Void EndOfStream()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void EndOfStream() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::RawCodec::Encoder_1::EndOfStream");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::RawCodec::Encoder_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public I GetPlatformAPI()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class I>
    I GetPlatformAPI() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::RawCodec::Encoder_1::GetPlatformAPI");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::RawCodec::Encoder_1<T>*), -1));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<I>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<I, false>(this, ___generic__method);
    }
    // public System.Void Dispose()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::RawCodec::Encoder_1::Dispose");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::RawCodec::Encoder_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void Input(T[] buf)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Input(::ArrayW<T> buf) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::RawCodec::Encoder_1::Input");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::RawCodec::Encoder_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, buf);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RawCodec::Encoder_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::RawCodec::Encoder_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RawCodec::Encoder_1<T>*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::RawCodec::Encoder_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RawCodec::Encoder_1<T>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // Photon.Voice.RawCodec/Encoder`1
  // Could not write size check! Type: Photon.Voice.RawCodec/Encoder`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
