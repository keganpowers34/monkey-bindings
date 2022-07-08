// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties
#include "DigitalOpus/MB/Core/MB3_TextureCombinerNonTextureProperties.hpp"
// Including type: DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/MaterialProperty
#include "DigitalOpus/MB/Core/MB3_TextureCombinerNonTextureProperties_MaterialProperty.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyFloat);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyFloat*, "DigitalOpus.MB.Core", "MB3_TextureCombinerNonTextureProperties/MaterialPropertyFloat");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/MaterialPropertyFloat
  // [TokenAttribute] Offset: FFFFFFFF
  class MB3_TextureCombinerNonTextureProperties::MaterialPropertyFloat : public ::Il2CppObject/*, public ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialProperty*/ {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xAEEF54
    // private System.String <PropertyName>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW PropertyName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/MaterialPropertyValueAveragedFloat _averageCalc
    // Size: 0x8
    // Offset: 0x18
    ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyValueAveragedFloat* averageCalc;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyValueAveragedFloat*) == 0x8);
    // private System.Single _defaultValue
    // Size: 0x4
    // Offset: 0x20
    float defaultValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialProperty
    operator ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialProperty() noexcept {
      return *reinterpret_cast<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialProperty*>(this);
    }
    // Get instance field reference: private System.String <PropertyName>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$PropertyName$k__BackingField();
    // Get instance field reference: private DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/MaterialPropertyValueAveragedFloat _averageCalc
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyValueAveragedFloat*& dyn__averageCalc();
    // Get instance field reference: private System.Single _defaultValue
    [[deprecated("Use field access instead!")]] float& dyn__defaultValue();
    // public System.String get_PropertyName()
    // Offset: 0x117B820
    ::StringW get_PropertyName();
    // public System.Void set_PropertyName(System.String value)
    // Offset: 0x117B828
    void set_PropertyName(::StringW value);
    // public System.Void .ctor(System.String name, System.Single defValue)
    // Offset: 0x117A814
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_TextureCombinerNonTextureProperties::MaterialPropertyFloat* New_ctor(::StringW name, float defValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyFloat::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_TextureCombinerNonTextureProperties::MaterialPropertyFloat*, creationType>(name, defValue)));
    }
    // public DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/MaterialPropertyValueAveraged GetAverageCalculator()
    // Offset: 0x117B838
    ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyValueAveraged* GetAverageCalculator();
    // public System.Object GetDefaultValue()
    // Offset: 0x117B840
    ::Il2CppObject* GetDefaultValue();
  }; // DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/MaterialPropertyFloat
  #pragma pack(pop)
  static check_size<sizeof(MB3_TextureCombinerNonTextureProperties::MaterialPropertyFloat), 32 + sizeof(float)> __DigitalOpus_MB_Core_MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloatSizeCheck;
  static_assert(sizeof(MB3_TextureCombinerNonTextureProperties::MaterialPropertyFloat) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyFloat::get_PropertyName
// Il2CppName: get_PropertyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyFloat::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyFloat::get_PropertyName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyFloat*), "get_PropertyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyFloat::set_PropertyName
// Il2CppName: set_PropertyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyFloat::*)(::StringW)>(&DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyFloat::set_PropertyName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyFloat*), "set_PropertyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyFloat::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyFloat::GetAverageCalculator
// Il2CppName: GetAverageCalculator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyValueAveraged* (DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyFloat::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyFloat::GetAverageCalculator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyFloat*), "GetAverageCalculator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyFloat::GetDefaultValue
// Il2CppName: GetDefaultValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyFloat::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyFloat::GetDefaultValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyFloat*), "GetDefaultValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
