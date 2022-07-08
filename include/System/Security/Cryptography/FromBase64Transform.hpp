// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.ICryptoTransform
#include "System/Security/Cryptography/ICryptoTransform.hpp"
// Including type: System.Security.Cryptography.FromBase64TransformMode
#include "System/Security/Cryptography/FromBase64TransformMode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: FromBase64Transform
  class FromBase64Transform;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::FromBase64Transform);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::FromBase64Transform*, "System.Security.Cryptography", "FromBase64Transform");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.FromBase64Transform
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: A53170
  class FromBase64Transform : public ::Il2CppObject/*, public ::System::Security::Cryptography::ICryptoTransform*/ {
    public:
    public:
    // private System.Byte[] _inputBuffer
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> inputBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 _inputIndex
    // Size: 0x4
    // Offset: 0x18
    int inputIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Security.Cryptography.FromBase64TransformMode _whitespaces
    // Size: 0x4
    // Offset: 0x1C
    ::System::Security::Cryptography::FromBase64TransformMode whitespaces;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::FromBase64TransformMode) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Security::Cryptography::ICryptoTransform
    operator ::System::Security::Cryptography::ICryptoTransform() noexcept {
      return *reinterpret_cast<::System::Security::Cryptography::ICryptoTransform*>(this);
    }
    // Get instance field reference: private System.Byte[] _inputBuffer
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__inputBuffer();
    // Get instance field reference: private System.Int32 _inputIndex
    [[deprecated("Use field access instead!")]] int& dyn__inputIndex();
    // Get instance field reference: private System.Security.Cryptography.FromBase64TransformMode _whitespaces
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::FromBase64TransformMode& dyn__whitespaces();
    // public System.Void .ctor(System.Security.Cryptography.FromBase64TransformMode whitespaces)
    // Offset: 0x121E4F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FromBase64Transform* New_ctor(::System::Security::Cryptography::FromBase64TransformMode whitespaces) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::FromBase64Transform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FromBase64Transform*, creationType>(whitespaces)));
    }
    // public System.Int32 get_InputBlockSize()
    // Offset: 0x121E568
    int get_InputBlockSize();
    // public System.Int32 get_OutputBlockSize()
    // Offset: 0x121E570
    int get_OutputBlockSize();
    // public System.Boolean get_CanTransformMultipleBlocks()
    // Offset: 0x121E578
    bool get_CanTransformMultipleBlocks();
    // public System.Boolean get_CanReuseTransform()
    // Offset: 0x121E580
    bool get_CanReuseTransform();
    // public System.Int32 TransformBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount, System.Byte[] outputBuffer, System.Int32 outputOffset)
    // Offset: 0x121E588
    int TransformBlock(::ArrayW<uint8_t> inputBuffer, int inputOffset, int inputCount, ::ArrayW<uint8_t> outputBuffer, int outputOffset);
    // public System.Byte[] TransformFinalBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x121EAC0
    ::ArrayW<uint8_t> TransformFinalBlock(::ArrayW<uint8_t> inputBuffer, int inputOffset, int inputCount);
    // private System.Byte[] DiscardWhiteSpaces(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x121E8F0
    ::ArrayW<uint8_t> DiscardWhiteSpaces(::ArrayW<uint8_t> inputBuffer, int inputOffset, int inputCount);
    // public System.Void Dispose()
    // Offset: 0x121EE08
    void Dispose();
    // private System.Void Reset()
    // Offset: 0x121EE00
    void Reset();
    // public System.Void Clear()
    // Offset: 0x121EE84
    void Clear();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x121EE88
    void Dispose(bool disposing);
    // public System.Void .ctor()
    // Offset: 0x121E4EC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FromBase64Transform* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::FromBase64Transform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FromBase64Transform*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x121EEC8
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // System.Security.Cryptography.FromBase64Transform
  #pragma pack(pop)
  static check_size<sizeof(FromBase64Transform), 28 + sizeof(::System::Security::Cryptography::FromBase64TransformMode)> __System_Security_Cryptography_FromBase64TransformSizeCheck;
  static_assert(sizeof(FromBase64Transform) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::FromBase64Transform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::FromBase64Transform::get_InputBlockSize
// Il2CppName: get_InputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::FromBase64Transform::*)()>(&System::Security::Cryptography::FromBase64Transform::get_InputBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::FromBase64Transform*), "get_InputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::FromBase64Transform::get_OutputBlockSize
// Il2CppName: get_OutputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::FromBase64Transform::*)()>(&System::Security::Cryptography::FromBase64Transform::get_OutputBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::FromBase64Transform*), "get_OutputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::FromBase64Transform::get_CanTransformMultipleBlocks
// Il2CppName: get_CanTransformMultipleBlocks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::FromBase64Transform::*)()>(&System::Security::Cryptography::FromBase64Transform::get_CanTransformMultipleBlocks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::FromBase64Transform*), "get_CanTransformMultipleBlocks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::FromBase64Transform::get_CanReuseTransform
// Il2CppName: get_CanReuseTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::FromBase64Transform::*)()>(&System::Security::Cryptography::FromBase64Transform::get_CanReuseTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::FromBase64Transform*), "get_CanReuseTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::FromBase64Transform::TransformBlock
// Il2CppName: TransformBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::FromBase64Transform::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<uint8_t>, int)>(&System::Security::Cryptography::FromBase64Transform::TransformBlock)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::FromBase64Transform*), "TransformBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::FromBase64Transform::TransformFinalBlock
// Il2CppName: TransformFinalBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::FromBase64Transform::*)(::ArrayW<uint8_t>, int, int)>(&System::Security::Cryptography::FromBase64Transform::TransformFinalBlock)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::FromBase64Transform*), "TransformFinalBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::FromBase64Transform::DiscardWhiteSpaces
// Il2CppName: DiscardWhiteSpaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::FromBase64Transform::*)(::ArrayW<uint8_t>, int, int)>(&System::Security::Cryptography::FromBase64Transform::DiscardWhiteSpaces)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::FromBase64Transform*), "DiscardWhiteSpaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::FromBase64Transform::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::FromBase64Transform::*)()>(&System::Security::Cryptography::FromBase64Transform::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::FromBase64Transform*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::FromBase64Transform::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::FromBase64Transform::*)()>(&System::Security::Cryptography::FromBase64Transform::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::FromBase64Transform*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::FromBase64Transform::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::FromBase64Transform::*)()>(&System::Security::Cryptography::FromBase64Transform::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::FromBase64Transform*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::FromBase64Transform::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::FromBase64Transform::*)(bool)>(&System::Security::Cryptography::FromBase64Transform::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::FromBase64Transform*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::FromBase64Transform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::FromBase64Transform::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::FromBase64Transform::*)()>(&System::Security::Cryptography::FromBase64Transform::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::FromBase64Transform*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
