// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Math
namespace Mono::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Mono::Math::Prime
namespace Mono::Math::Prime {
  // Forward declaring type: ConfidenceFactor
  struct ConfidenceFactor;
}
// Completed forward declares
// Type namespace: Mono.Math.Prime
namespace Mono::Math::Prime {
  // Forward declaring type: PrimalityTests
  class PrimalityTests;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Math::Prime::PrimalityTests);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Math::Prime::PrimalityTests*, "Mono.Math.Prime", "PrimalityTests");
// Type namespace: Mono.Math.Prime
namespace Mono::Math::Prime {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Math.Prime.PrimalityTests
  // [TokenAttribute] Offset: FFFFFFFF
  class PrimalityTests : public ::Il2CppObject {
    public:
    // static private System.Int32 GetSPPRounds(Mono.Math.BigInteger bi, Mono.Math.Prime.ConfidenceFactor confidence)
    // Offset: 0x16C9C24
    static int GetSPPRounds(::Mono::Math::BigInteger* bi, ::Mono::Math::Prime::ConfidenceFactor confidence);
    // static public System.Boolean RabinMillerTest(Mono.Math.BigInteger n, Mono.Math.Prime.ConfidenceFactor confidence)
    // Offset: 0x16C9DD8
    static bool RabinMillerTest(::Mono::Math::BigInteger* n, ::Mono::Math::Prime::ConfidenceFactor confidence);
  }; // Mono.Math.Prime.PrimalityTests
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Math::Prime::PrimalityTests::GetSPPRounds
// Il2CppName: GetSPPRounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Mono::Math::BigInteger*, ::Mono::Math::Prime::ConfidenceFactor)>(&Mono::Math::Prime::PrimalityTests::GetSPPRounds)> {
  static const MethodInfo* get() {
    static auto* bi = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    static auto* confidence = &::il2cpp_utils::GetClassFromName("Mono.Math.Prime", "ConfidenceFactor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::Prime::PrimalityTests*), "GetSPPRounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bi, confidence});
  }
};
// Writing MetadataGetter for method: Mono::Math::Prime::PrimalityTests::RabinMillerTest
// Il2CppName: RabinMillerTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Mono::Math::BigInteger*, ::Mono::Math::Prime::ConfidenceFactor)>(&Mono::Math::Prime::PrimalityTests::RabinMillerTest)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    static auto* confidence = &::il2cpp_utils::GetClassFromName("Mono.Math.Prime", "ConfidenceFactor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::Prime::PrimalityTests*), "RabinMillerTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, confidence});
  }
};
