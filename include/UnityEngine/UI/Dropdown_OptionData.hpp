// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.Dropdown
#include "UnityEngine/UI/Dropdown.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::Dropdown::OptionData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Dropdown::OptionData*, "UnityEngine.UI", "Dropdown/OptionData");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.Dropdown/OptionData
  // [TokenAttribute] Offset: FFFFFFFF
  class Dropdown::OptionData : public ::Il2CppObject {
    public:
    public:
    // private System.String m_Text
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_Text;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.Sprite m_Image
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Sprite* m_Image;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    public:
    // Get instance field reference: private System.String m_Text
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_Text();
    // Get instance field reference: private UnityEngine.Sprite m_Image
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn_m_Image();
    // public System.String get_text()
    // Offset: 0x127E46C
    ::StringW get_text();
    // public System.Void set_text(System.String value)
    // Offset: 0x127E474
    void set_text(::StringW value);
    // public UnityEngine.Sprite get_image()
    // Offset: 0x127E47C
    ::UnityEngine::Sprite* get_image();
    // public System.Void set_image(UnityEngine.Sprite value)
    // Offset: 0x127E484
    void set_image(::UnityEngine::Sprite* value);
    // public System.Void .ctor()
    // Offset: 0x127E48C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dropdown::OptionData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::Dropdown::OptionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dropdown::OptionData*, creationType>()));
    }
    // public System.Void .ctor(System.String text)
    // Offset: 0x127E494
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dropdown::OptionData* New_ctor(::StringW text) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::Dropdown::OptionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dropdown::OptionData*, creationType>(text)));
    }
    // public System.Void .ctor(UnityEngine.Sprite image)
    // Offset: 0x127E4C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dropdown::OptionData* New_ctor(::UnityEngine::Sprite* image) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::Dropdown::OptionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dropdown::OptionData*, creationType>(image)));
    }
    // public System.Void .ctor(System.String text, UnityEngine.Sprite image)
    // Offset: 0x127E4EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dropdown::OptionData* New_ctor(::StringW text, ::UnityEngine::Sprite* image) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::Dropdown::OptionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dropdown::OptionData*, creationType>(text, image)));
    }
  }; // UnityEngine.UI.Dropdown/OptionData
  #pragma pack(pop)
  static check_size<sizeof(Dropdown::OptionData), 24 + sizeof(::UnityEngine::Sprite*)> __UnityEngine_UI_Dropdown_OptionDataSizeCheck;
  static_assert(sizeof(Dropdown::OptionData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::OptionData::get_text
// Il2CppName: get_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UI::Dropdown::OptionData::*)()>(&UnityEngine::UI::Dropdown::OptionData::get_text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Dropdown::OptionData*), "get_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::OptionData::set_text
// Il2CppName: set_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Dropdown::OptionData::*)(::StringW)>(&UnityEngine::UI::Dropdown::OptionData::set_text)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Dropdown::OptionData*), "set_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::OptionData::get_image
// Il2CppName: get_image
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Sprite* (UnityEngine::UI::Dropdown::OptionData::*)()>(&UnityEngine::UI::Dropdown::OptionData::get_image)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Dropdown::OptionData*), "get_image", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::OptionData::set_image
// Il2CppName: set_image
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Dropdown::OptionData::*)(::UnityEngine::Sprite*)>(&UnityEngine::UI::Dropdown::OptionData::set_image)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Dropdown::OptionData*), "set_image", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::OptionData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::OptionData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::OptionData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::OptionData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
