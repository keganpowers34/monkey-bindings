// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: MaskGenerationMethod
  class MaskGenerationMethod;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::MaskGenerationMethod);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::MaskGenerationMethod*, "System.Security.Cryptography", "MaskGenerationMethod");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.MaskGenerationMethod
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: A533E8
  class MaskGenerationMethod : public ::Il2CppObject {
    public:
    // public System.Byte[] GenerateMask(System.Byte[] rgbSeed, System.Int32 cbReturn)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<uint8_t> GenerateMask(::ArrayW<uint8_t> rgbSeed, int cbReturn);
    // protected System.Void .ctor()
    // Offset: 0x1222604
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaskGenerationMethod* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::MaskGenerationMethod::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaskGenerationMethod*, creationType>()));
    }
  }; // System.Security.Cryptography.MaskGenerationMethod
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::MaskGenerationMethod::GenerateMask
// Il2CppName: GenerateMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::MaskGenerationMethod::*)(::ArrayW<uint8_t>, int)>(&System::Security::Cryptography::MaskGenerationMethod::GenerateMask)> {
  static const MethodInfo* get() {
    static auto* rgbSeed = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* cbReturn = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::MaskGenerationMethod*), "GenerateMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgbSeed, cbReturn});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::MaskGenerationMethod::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
