// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ISupportInitialize
  class ISupportInitialize;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::ISupportInitialize);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ISupportInitialize*, "System.ComponentModel", "ISupportInitialize");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ISupportInitialize
  // [TokenAttribute] Offset: FFFFFFFF
  // [SRDescriptionAttribute] Offset: A5ECA4
  class ISupportInitialize {
    public:
    // public System.Void BeginInit()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void BeginInit();
    // public System.Void EndInit()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void EndInit();
  }; // System.ComponentModel.ISupportInitialize
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::ISupportInitialize::BeginInit
// Il2CppName: BeginInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ISupportInitialize::*)()>(&System::ComponentModel::ISupportInitialize::BeginInit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ISupportInitialize*), "BeginInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ISupportInitialize::EndInit
// Il2CppName: EndInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ISupportInitialize::*)()>(&System::ComponentModel::ISupportInitialize::EndInit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ISupportInitialize*), "EndInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
