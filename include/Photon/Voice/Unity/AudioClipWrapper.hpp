// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Voice.IAudioReader`1
#include "Photon/Voice/IAudioReader_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: Photon.Voice.Unity
namespace Photon::Voice::Unity {
  // Forward declaring type: AudioClipWrapper
  class AudioClipWrapper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Voice::Unity::AudioClipWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::Unity::AudioClipWrapper*, "Photon.Voice.Unity", "AudioClipWrapper");
// Type namespace: Photon.Voice.Unity
namespace Photon::Voice::Unity {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Voice.Unity.AudioClipWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioClipWrapper : public ::Il2CppObject/*, public ::Photon::Voice::IAudioReader_1<float>*/ {
    public:
    public:
    // private UnityEngine.AudioClip audioClip
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::AudioClip* audioClip;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // private System.Int32 readPos
    // Size: 0x4
    // Offset: 0x18
    int readPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single startTime
    // Size: 0x4
    // Offset: 0x1C
    float startTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xAAF780
    // private System.Boolean <Loop>k__BackingField
    // Size: 0x1
    // Offset: 0x20
    bool Loop;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean playing
    // Size: 0x1
    // Offset: 0x21
    bool playing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: playing and: Error
    char __padding4[0x6] = {};
    // [CompilerGeneratedAttribute] Offset: 0xAAF790
    // private System.String <Error>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::StringW Error;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Photon::Voice::IAudioReader_1<float>
    operator ::Photon::Voice::IAudioReader_1<float>() noexcept {
      return *reinterpret_cast<::Photon::Voice::IAudioReader_1<float>*>(this);
    }
    // Get instance field reference: private UnityEngine.AudioClip audioClip
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn_audioClip();
    // Get instance field reference: private System.Int32 readPos
    [[deprecated("Use field access instead!")]] int& dyn_readPos();
    // Get instance field reference: private System.Single startTime
    [[deprecated("Use field access instead!")]] float& dyn_startTime();
    // Get instance field reference: private System.Boolean <Loop>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$Loop$k__BackingField();
    // Get instance field reference: private System.Boolean playing
    [[deprecated("Use field access instead!")]] bool& dyn_playing();
    // Get instance field reference: private System.String <Error>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Error$k__BackingField();
    // public System.Boolean get_Loop()
    // Offset: 0x10DCBA8
    bool get_Loop();
    // public System.Void set_Loop(System.Boolean value)
    // Offset: 0x10DCBB0
    void set_Loop(bool value);
    // public System.Void .ctor(UnityEngine.AudioClip audioClip)
    // Offset: 0x10DCBBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioClipWrapper* New_ctor(::UnityEngine::AudioClip* audioClip) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::Unity::AudioClipWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioClipWrapper*, creationType>(audioClip)));
    }
    // public System.Boolean Read(System.Single[] buffer)
    // Offset: 0x10DCBFC
    bool Read(::ArrayW<float> buffer);
    // public System.Int32 get_SamplingRate()
    // Offset: 0x10DCCFC
    int get_SamplingRate();
    // public System.Int32 get_Channels()
    // Offset: 0x10DCD18
    int get_Channels();
    // public System.String get_Error()
    // Offset: 0x10DCD34
    ::StringW get_Error();
    // private System.Void set_Error(System.String value)
    // Offset: 0x10DCD3C
    void set_Error(::StringW value);
    // public System.Void Dispose()
    // Offset: 0x10DCD44
    void Dispose();
  }; // Photon.Voice.Unity.AudioClipWrapper
  #pragma pack(pop)
  static check_size<sizeof(AudioClipWrapper), 40 + sizeof(::StringW)> __Photon_Voice_Unity_AudioClipWrapperSizeCheck;
  static_assert(sizeof(AudioClipWrapper) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Voice::Unity::AudioClipWrapper::get_Loop
// Il2CppName: get_Loop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::Unity::AudioClipWrapper::*)()>(&Photon::Voice::Unity::AudioClipWrapper::get_Loop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Unity::AudioClipWrapper*), "get_Loop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Unity::AudioClipWrapper::set_Loop
// Il2CppName: set_Loop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::Unity::AudioClipWrapper::*)(bool)>(&Photon::Voice::Unity::AudioClipWrapper::set_Loop)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Unity::AudioClipWrapper*), "set_Loop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Unity::AudioClipWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Voice::Unity::AudioClipWrapper::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::Unity::AudioClipWrapper::*)(::ArrayW<float>)>(&Photon::Voice::Unity::AudioClipWrapper::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Unity::AudioClipWrapper*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Unity::AudioClipWrapper::get_SamplingRate
// Il2CppName: get_SamplingRate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Photon::Voice::Unity::AudioClipWrapper::*)()>(&Photon::Voice::Unity::AudioClipWrapper::get_SamplingRate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Unity::AudioClipWrapper*), "get_SamplingRate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Unity::AudioClipWrapper::get_Channels
// Il2CppName: get_Channels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Photon::Voice::Unity::AudioClipWrapper::*)()>(&Photon::Voice::Unity::AudioClipWrapper::get_Channels)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Unity::AudioClipWrapper*), "get_Channels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Unity::AudioClipWrapper::get_Error
// Il2CppName: get_Error
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Photon::Voice::Unity::AudioClipWrapper::*)()>(&Photon::Voice::Unity::AudioClipWrapper::get_Error)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Unity::AudioClipWrapper*), "get_Error", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Unity::AudioClipWrapper::set_Error
// Il2CppName: set_Error
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::Unity::AudioClipWrapper::*)(::StringW)>(&Photon::Voice::Unity::AudioClipWrapper::set_Error)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Unity::AudioClipWrapper*), "set_Error", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Unity::AudioClipWrapper::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::Unity::AudioClipWrapper::*)()>(&Photon::Voice::Unity::AudioClipWrapper::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Unity::AudioClipWrapper*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
