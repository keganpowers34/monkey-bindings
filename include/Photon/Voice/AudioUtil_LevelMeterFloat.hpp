// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Voice.AudioUtil
#include "Photon/Voice/AudioUtil.hpp"
// Including type: Photon.Voice.AudioUtil/LevelMeter`1
#include "Photon/Voice/AudioUtil_LevelMeter_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Voice::AudioUtil::LevelMeterFloat);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::AudioUtil::LevelMeterFloat*, "Photon.Voice", "AudioUtil/LevelMeterFloat");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // WARNING Size may be invalid!
  // Autogenerated type: Photon.Voice.AudioUtil/LevelMeterFloat
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioUtil::LevelMeterFloat : public ::Photon::Voice::AudioUtil::LevelMeter_1<float> {
    public:
    // public System.Single[] Process(System.Single[] buf)
    // Offset: 0x10CE7D8
    ::ArrayW<float> Process(::ArrayW<float> buf);
    // public System.Void .ctor(System.Int32 samplingRate, System.Int32 numChannels)
    // Offset: 0x10CE764
    // Implemented from: Photon.Voice.AudioUtil/LevelMeter`1
    // Base method: System.Void LevelMeter_1::.ctor(System.Int32 samplingRate, System.Int32 numChannels)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioUtil::LevelMeterFloat* New_ctor(int samplingRate, int numChannels) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::LevelMeterFloat::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioUtil::LevelMeterFloat*, creationType>(samplingRate, numChannels)));
    }
  }; // Photon.Voice.AudioUtil/LevelMeterFloat
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Voice::AudioUtil::LevelMeterFloat::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float> (Photon::Voice::AudioUtil::LevelMeterFloat::*)(::ArrayW<float>)>(&Photon::Voice::AudioUtil::LevelMeterFloat::Process)> {
  static const MethodInfo* get() {
    static auto* buf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::AudioUtil::LevelMeterFloat*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buf});
  }
};
// Writing MetadataGetter for method: Photon::Voice::AudioUtil::LevelMeterFloat::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
