// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: ITupleInternal
  class ITupleInternal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ITupleInternal);
DEFINE_IL2CPP_ARG_TYPE(::System::ITupleInternal*, "System", "ITupleInternal");
// Type namespace: System
namespace System {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.ITupleInternal
  // [TokenAttribute] Offset: FFFFFFFF
  class ITupleInternal {
    public:
    // public System.String ToString(System.Text.StringBuilder sb)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW ToString(::System::Text::StringBuilder* sb);
  }; // System.ITupleInternal
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ITupleInternal::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ITupleInternal::*)(::System::Text::StringBuilder*)>(&System::ITupleInternal::ToString)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ITupleInternal*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb});
  }
};
