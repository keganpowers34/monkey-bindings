// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: CSCore
namespace CSCore {
  // Forward declaring type: WaveFormat
  class WaveFormat;
}
// Completed forward declares
// Type namespace: CSCore
namespace CSCore {
  // Forward declaring type: Extensions
  class Extensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::CSCore::Extensions);
DEFINE_IL2CPP_ARG_TYPE(::CSCore::Extensions*, "CSCore", "Extensions");
// Type namespace: CSCore
namespace CSCore {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: CSCore.Extensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class Extensions : public ::Il2CppObject {
    public:
    // static System.Boolean IsPCM(CSCore.WaveFormat waveFormat)
    // Offset: 0xFA4318
    static bool IsPCM(::CSCore::WaveFormat* waveFormat);
    // static System.Boolean IsIeeeFloat(CSCore.WaveFormat waveFormat)
    // Offset: 0xFA4554
    static bool IsIeeeFloat(::CSCore::WaveFormat* waveFormat);
  }; // CSCore.Extensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: CSCore::Extensions::IsPCM
// Il2CppName: IsPCM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::CSCore::WaveFormat*)>(&CSCore::Extensions::IsPCM)> {
  static const MethodInfo* get() {
    static auto* waveFormat = &::il2cpp_utils::GetClassFromName("CSCore", "WaveFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CSCore::Extensions*), "IsPCM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{waveFormat});
  }
};
// Writing MetadataGetter for method: CSCore::Extensions::IsIeeeFloat
// Il2CppName: IsIeeeFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::CSCore::WaveFormat*)>(&CSCore::Extensions::IsIeeeFloat)> {
  static const MethodInfo* get() {
    static auto* waveFormat = &::il2cpp_utils::GetClassFromName("CSCore", "WaveFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CSCore::Extensions*), "IsIeeeFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{waveFormat});
  }
};
