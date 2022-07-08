// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: System.Buffers
namespace System::Buffers {
  // Forward declaring type: Utilities
  class Utilities;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Buffers::Utilities);
DEFINE_IL2CPP_ARG_TYPE(::System::Buffers::Utilities*, "System.Buffers", "Utilities");
// Type namespace: System.Buffers
namespace System::Buffers {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Buffers.Utilities
  // [TokenAttribute] Offset: FFFFFFFF
  class Utilities : public ::Il2CppObject {
    public:
    // static System.Int32 SelectBucketIndex(System.Int32 bufferSize)
    // Offset: 0x113AEE4
    static int SelectBucketIndex(int bufferSize);
    // static System.Int32 GetMaxSizeForBucket(System.Int32 binIndex)
    // Offset: 0x113AF60
    static int GetMaxSizeForBucket(int binIndex);
  }; // System.Buffers.Utilities
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Buffers::Utilities::SelectBucketIndex
// Il2CppName: SelectBucketIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Buffers::Utilities::SelectBucketIndex)> {
  static const MethodInfo* get() {
    static auto* bufferSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Buffers::Utilities*), "SelectBucketIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bufferSize});
  }
};
// Writing MetadataGetter for method: System::Buffers::Utilities::GetMaxSizeForBucket
// Il2CppName: GetMaxSizeForBucket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Buffers::Utilities::GetMaxSizeForBucket)> {
  static const MethodInfo* get() {
    static auto* binIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Buffers::Utilities*), "GetMaxSizeForBucket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{binIndex});
  }
};
