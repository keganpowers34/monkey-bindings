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
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Math::Prime
namespace Mono::Math::Prime {
  // Forward declaring type: ConfidenceFactor
  struct ConfidenceFactor;
  // Forward declaring type: PrimalityTest
  class PrimalityTest;
}
// Forward declaring namespace: Mono::Math
namespace Mono::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Mono.Math.Prime.Generator
namespace Mono::Math::Prime::Generator {
  // Forward declaring type: PrimeGeneratorBase
  class PrimeGeneratorBase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Math::Prime::Generator::PrimeGeneratorBase);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Math::Prime::Generator::PrimeGeneratorBase*, "Mono.Math.Prime.Generator", "PrimeGeneratorBase");
// Type namespace: Mono.Math.Prime.Generator
namespace Mono::Math::Prime::Generator {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Math.Prime.Generator.PrimeGeneratorBase
  // [TokenAttribute] Offset: FFFFFFFF
  class PrimeGeneratorBase : public ::Il2CppObject {
    public:
    // public Mono.Math.Prime.ConfidenceFactor get_Confidence()
    // Offset: 0x16C9300
    ::Mono::Math::Prime::ConfidenceFactor get_Confidence();
    // public Mono.Math.Prime.PrimalityTest get_PrimalityTest()
    // Offset: 0x16C9308
    ::Mono::Math::Prime::PrimalityTest* get_PrimalityTest();
    // public System.Int32 get_TrialDivisionBounds()
    // Offset: 0x16C937C
    int get_TrialDivisionBounds();
    // public Mono.Math.BigInteger GenerateNewPrime(System.Int32 bits)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Mono::Math::BigInteger* GenerateNewPrime(int bits);
    // protected System.Void .ctor()
    // Offset: 0x16C9384
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrimeGeneratorBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Math::Prime::Generator::PrimeGeneratorBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrimeGeneratorBase*, creationType>()));
    }
  }; // Mono.Math.Prime.Generator.PrimeGeneratorBase
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Math::Prime::Generator::PrimeGeneratorBase::get_Confidence
// Il2CppName: get_Confidence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::Prime::ConfidenceFactor (Mono::Math::Prime::Generator::PrimeGeneratorBase::*)()>(&Mono::Math::Prime::Generator::PrimeGeneratorBase::get_Confidence)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::Prime::Generator::PrimeGeneratorBase*), "get_Confidence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Math::Prime::Generator::PrimeGeneratorBase::get_PrimalityTest
// Il2CppName: get_PrimalityTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::Prime::PrimalityTest* (Mono::Math::Prime::Generator::PrimeGeneratorBase::*)()>(&Mono::Math::Prime::Generator::PrimeGeneratorBase::get_PrimalityTest)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::Prime::Generator::PrimeGeneratorBase*), "get_PrimalityTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Math::Prime::Generator::PrimeGeneratorBase::get_TrialDivisionBounds
// Il2CppName: get_TrialDivisionBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Math::Prime::Generator::PrimeGeneratorBase::*)()>(&Mono::Math::Prime::Generator::PrimeGeneratorBase::get_TrialDivisionBounds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::Prime::Generator::PrimeGeneratorBase*), "get_TrialDivisionBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Math::Prime::Generator::PrimeGeneratorBase::GenerateNewPrime
// Il2CppName: GenerateNewPrime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger* (Mono::Math::Prime::Generator::PrimeGeneratorBase::*)(int)>(&Mono::Math::Prime::Generator::PrimeGeneratorBase::GenerateNewPrime)> {
  static const MethodInfo* get() {
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::Prime::Generator::PrimeGeneratorBase*), "GenerateNewPrime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bits});
  }
};
// Writing MetadataGetter for method: Mono::Math::Prime::Generator::PrimeGeneratorBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
