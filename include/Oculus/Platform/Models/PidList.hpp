// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Models.DeserializableList`1
#include "Oculus/Platform/Models/DeserializableList_1.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Pid
  class Pid;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: PidList
  class PidList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::PidList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::PidList*, "Oculus.Platform.Models", "PidList");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.Models.PidList
  // [TokenAttribute] Offset: FFFFFFFF
  class PidList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::Pid*> {
    public:
    // public System.Void .ctor(System.IntPtr a)
    // Offset: 0xECE104
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PidList* New_ctor(::System::IntPtr a) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::PidList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PidList*, creationType>(a)));
    }
  }; // Oculus.Platform.Models.PidList
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::PidList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
