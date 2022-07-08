// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ONSPSettings
  class ONSPSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ONSPSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ONSPSettings*, "", "ONSPSettings");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: ONSPSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class ONSPSettings : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // public System.Int32 voiceLimit
    // Size: 0x4
    // Offset: 0x18
    int voiceLimit;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private ONSPSettings instance
    static ::GlobalNamespace::ONSPSettings* _get_instance();
    // Set static field: static private ONSPSettings instance
    static void _set_instance(::GlobalNamespace::ONSPSettings* value);
    // Get instance field reference: public System.Int32 voiceLimit
    [[deprecated("Use field access instead!")]] int& dyn_voiceLimit();
    // static public ONSPSettings get_Instance()
    // Offset: 0x1BEF184
    static ::GlobalNamespace::ONSPSettings* get_Instance();
    // public System.Void .ctor()
    // Offset: 0x1BFEC60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ONSPSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ONSPSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ONSPSettings*, creationType>()));
    }
  }; // ONSPSettings
  #pragma pack(pop)
  static check_size<sizeof(ONSPSettings), 24 + sizeof(int)> __GlobalNamespace_ONSPSettingsSizeCheck;
  static_assert(sizeof(ONSPSettings) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ONSPSettings::get_Instance
// Il2CppName: get_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ONSPSettings* (*)()>(&GlobalNamespace::ONSPSettings::get_Instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPSettings*), "get_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
