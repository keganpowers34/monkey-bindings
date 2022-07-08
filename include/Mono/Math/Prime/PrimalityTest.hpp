// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Mono.Math.Prime
namespace Mono::Math::Prime {
  // Forward declaring type: PrimalityTest
  class PrimalityTest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Math::Prime::PrimalityTest);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Math::Prime::PrimalityTest*, "Mono.Math.Prime", "PrimalityTest");
// Type namespace: Mono.Math.Prime
namespace Mono::Math::Prime {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Math.Prime.PrimalityTest
  // [TokenAttribute] Offset: FFFFFFFF
  class PrimalityTest : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16C936C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrimalityTest* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Math::Prime::PrimalityTest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrimalityTest*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(Mono.Math.BigInteger bi, Mono.Math.Prime.ConfidenceFactor confidence)
    // Offset: 0x16C971C
    bool Invoke(::Mono::Math::BigInteger* bi, ::Mono::Math::Prime::ConfidenceFactor confidence);
    // public System.IAsyncResult BeginInvoke(Mono.Math.BigInteger bi, Mono.Math.Prime.ConfidenceFactor confidence, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16C9B5C
    ::System::IAsyncResult* BeginInvoke(::Mono::Math::BigInteger* bi, ::Mono::Math::Prime::ConfidenceFactor confidence, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x16C9BF8
    bool EndInvoke(::System::IAsyncResult* result);
  }; // Mono.Math.Prime.PrimalityTest
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Math::Prime::PrimalityTest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Math::Prime::PrimalityTest::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Math::Prime::PrimalityTest::*)(::Mono::Math::BigInteger*, ::Mono::Math::Prime::ConfidenceFactor)>(&Mono::Math::Prime::PrimalityTest::Invoke)> {
  static const MethodInfo* get() {
    static auto* bi = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    static auto* confidence = &::il2cpp_utils::GetClassFromName("Mono.Math.Prime", "ConfidenceFactor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::Prime::PrimalityTest*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bi, confidence});
  }
};
// Writing MetadataGetter for method: Mono::Math::Prime::PrimalityTest::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Mono::Math::Prime::PrimalityTest::*)(::Mono::Math::BigInteger*, ::Mono::Math::Prime::ConfidenceFactor, ::System::AsyncCallback*, ::Il2CppObject*)>(&Mono::Math::Prime::PrimalityTest::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* bi = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    static auto* confidence = &::il2cpp_utils::GetClassFromName("Mono.Math.Prime", "ConfidenceFactor")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::Prime::PrimalityTest*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bi, confidence, callback, object});
  }
};
// Writing MetadataGetter for method: Mono::Math::Prime::PrimalityTest::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Math::Prime::PrimalityTest::*)(::System::IAsyncResult*)>(&Mono::Math::Prime::PrimalityTest::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::Prime::PrimalityTest*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
