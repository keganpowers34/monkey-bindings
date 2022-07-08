// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Voice.AudioUtil
#include "Photon/Voice/AudioUtil.hpp"
// Including type: Photon.Voice.IAudioPusher`1
#include "Photon/Voice/IAudioPusher_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Timers
namespace System::Timers {
  // Forward declaring type: Timer
  class Timer;
  // Forward declaring type: ElapsedEventArgs
  class ElapsedEventArgs;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: Photon::Voice
namespace Photon::Voice {
  // Forward declaring type: ObjectFactory`2<TType, TInfo>
  template<typename TType, typename TInfo>
  class ObjectFactory_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Photon::Voice::AudioUtil::ToneAudioPusher_1, "Photon.Voice", "AudioUtil/ToneAudioPusher`1");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // WARNING Size may be invalid!
  // Autogenerated type: Photon.Voice.AudioUtil/ToneAudioPusher`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class AudioUtil::ToneAudioPusher_1 : public ::Il2CppObject/*, public ::Photon::Voice::IAudioPusher_1<T>*/ {
    public:
    public:
    // private System.Double k
    // Size: 0x8
    // Offset: 0x0
    double k;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Timers.Timer timer
    // Size: 0x8
    // Offset: 0x0
    ::System::Timers::Timer* timer;
    // Field size check
    static_assert(sizeof(::System::Timers::Timer*) == 0x8);
    // private System.Action`1<T[]> callback
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_1<::ArrayW<T>>* callback;
    // Field size check
    static_assert(sizeof(::System::Action_1<::ArrayW<T>>*) == 0x8);
    // private Photon.Voice.ObjectFactory`2<T[],System.Int32> bufferFactory
    // Size: 0x8
    // Offset: 0x0
    ::Photon::Voice::ObjectFactory_2<::ArrayW<T>, int>* bufferFactory;
    // Field size check
    static_assert(sizeof(::Photon::Voice::ObjectFactory_2<::ArrayW<T>, int>*) == 0x8);
    // private System.Int32 cntFrame
    // Size: 0x4
    // Offset: 0x0
    int cntFrame;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 posSamples
    // Size: 0x4
    // Offset: 0x0
    int posSamples;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 bufSizeSamples
    // Size: 0x4
    // Offset: 0x0
    int bufSizeSamples;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 samplingRate
    // Size: 0x4
    // Offset: 0x0
    int samplingRate;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 channels
    // Size: 0x4
    // Offset: 0x0
    int channels;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xAAF800
    // private System.String <Error>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    ::StringW Error;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Photon::Voice::IAudioPusher_1<T>
    operator ::Photon::Voice::IAudioPusher_1<T>() noexcept {
      return *reinterpret_cast<::Photon::Voice::IAudioPusher_1<T>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Double k
    [[deprecated("Use field access instead!")]] double& dyn_k() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::ToneAudioPusher_1::dyn_k");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "k"))->offset;
      return *reinterpret_cast<double*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Timers.Timer timer
    [[deprecated("Use field access instead!")]] ::System::Timers::Timer*& dyn_timer() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::ToneAudioPusher_1::dyn_timer");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "timer"))->offset;
      return *reinterpret_cast<::System::Timers::Timer**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Action`1<T[]> callback
    [[deprecated("Use field access instead!")]] ::System::Action_1<::ArrayW<T>>*& dyn_callback() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::ToneAudioPusher_1::dyn_callback");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "callback"))->offset;
      return *reinterpret_cast<::System::Action_1<::ArrayW<T>>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private Photon.Voice.ObjectFactory`2<T[],System.Int32> bufferFactory
    [[deprecated("Use field access instead!")]] ::Photon::Voice::ObjectFactory_2<::ArrayW<T>, int>*& dyn_bufferFactory() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::ToneAudioPusher_1::dyn_bufferFactory");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "bufferFactory"))->offset;
      return *reinterpret_cast<::Photon::Voice::ObjectFactory_2<::ArrayW<T>, int>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 cntFrame
    [[deprecated("Use field access instead!")]] int& dyn_cntFrame() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::ToneAudioPusher_1::dyn_cntFrame");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "cntFrame"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 posSamples
    [[deprecated("Use field access instead!")]] int& dyn_posSamples() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::ToneAudioPusher_1::dyn_posSamples");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "posSamples"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 bufSizeSamples
    [[deprecated("Use field access instead!")]] int& dyn_bufSizeSamples() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::ToneAudioPusher_1::dyn_bufSizeSamples");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "bufSizeSamples"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 samplingRate
    [[deprecated("Use field access instead!")]] int& dyn_samplingRate() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::ToneAudioPusher_1::dyn_samplingRate");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "samplingRate"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 channels
    [[deprecated("Use field access instead!")]] int& dyn_channels() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::ToneAudioPusher_1::dyn_channels");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "channels"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.String <Error>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Error$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::ToneAudioPusher_1::dyn_$Error$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<Error>k__BackingField"))->offset;
      return *reinterpret_cast<::StringW*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Int32 frequency, System.Int32 bufSizeMs, System.Int32 samplingRate, System.Int32 channels)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioUtil::ToneAudioPusher_1<T>* New_ctor(int frequency, int bufSizeMs, int samplingRate, int channels) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::ToneAudioPusher_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioUtil::ToneAudioPusher_1<T>*, creationType>(frequency, bufSizeMs, samplingRate, channels)));
    }
    // public System.Void SetCallback(System.Action`1<T[]> callback, Photon.Voice.ObjectFactory`2<T[],System.Int32> bufferFactory)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetCallback(::System::Action_1<::ArrayW<T>>* callback, ::Photon::Voice::ObjectFactory_2<::ArrayW<T>, int>* bufferFactory) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::ToneAudioPusher_1::SetCallback");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::AudioUtil::ToneAudioPusher_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, callback, bufferFactory);
    }
    // private System.Void OnTimedEvent(System.Object source, System.Timers.ElapsedEventArgs e)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnTimedEvent(::Il2CppObject* source, ::System::Timers::ElapsedEventArgs* e) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::ToneAudioPusher_1::OnTimedEvent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnTimedEvent", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(source), ::il2cpp_utils::ExtractType(e)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, source, e);
    }
    // public System.Int32 get_Channels()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Channels() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::ToneAudioPusher_1::get_Channels");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::AudioUtil::ToneAudioPusher_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Int32 get_SamplingRate()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_SamplingRate() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::ToneAudioPusher_1::get_SamplingRate");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::AudioUtil::ToneAudioPusher_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.String get_Error()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_Error() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::ToneAudioPusher_1::get_Error");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::AudioUtil::ToneAudioPusher_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
    // private System.Void set_Error(System.String value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Error(::StringW value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::ToneAudioPusher_1::set_Error");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Error", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void Dispose()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::ToneAudioPusher_1::Dispose");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::AudioUtil::ToneAudioPusher_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
  }; // Photon.Voice.AudioUtil/ToneAudioPusher`1
  // Could not write size check! Type: Photon.Voice.AudioUtil/ToneAudioPusher`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
