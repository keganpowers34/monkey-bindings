// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AddComponentMenu
  class AddComponentMenu;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AddComponentMenu);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddComponentMenu*, "UnityEngine", "AddComponentMenu");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddComponentMenu
  // [TokenAttribute] Offset: FFFFFFFF
  class AddComponentMenu : public ::System::Attribute {
    public:
    public:
    // private System.String m_AddComponentMenu
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_AddComponentMenu;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 m_Ordering
    // Size: 0x4
    // Offset: 0x18
    int m_Ordering;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.String m_AddComponentMenu
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_AddComponentMenu();
    // Get instance field reference: private System.Int32 m_Ordering
    [[deprecated("Use field access instead!")]] int& dyn_m_Ordering();
    // public System.Void .ctor(System.String menuName)
    // Offset: 0x159EA14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddComponentMenu* New_ctor(::StringW menuName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddComponentMenu::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddComponentMenu*, creationType>(menuName)));
    }
    // public System.Void .ctor(System.String menuName, System.Int32 order)
    // Offset: 0x159EA44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddComponentMenu* New_ctor(::StringW menuName, int order) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddComponentMenu::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddComponentMenu*, creationType>(menuName, order)));
    }
  }; // UnityEngine.AddComponentMenu
  #pragma pack(pop)
  static check_size<sizeof(AddComponentMenu), 24 + sizeof(int)> __UnityEngine_AddComponentMenuSizeCheck;
  static_assert(sizeof(AddComponentMenu) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddComponentMenu::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddComponentMenu::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
