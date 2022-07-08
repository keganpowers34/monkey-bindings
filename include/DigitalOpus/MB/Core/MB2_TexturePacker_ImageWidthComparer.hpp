// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB2_TexturePacker
#include "DigitalOpus/MB/Core/MB2_TexturePacker.hpp"
// Including type: System.Collections.Generic.IComparer`1
#include "System/Collections/Generic/IComparer_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB2_TexturePacker::ImageWidthComparer);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB2_TexturePacker::ImageWidthComparer*, "DigitalOpus.MB.Core", "MB2_TexturePacker/ImageWidthComparer");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB2_TexturePacker/ImageWidthComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class MB2_TexturePacker::ImageWidthComparer : public ::Il2CppObject/*, public ::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker::Image*>*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker::Image*>
    operator ::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker::Image*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker::Image*>*>(this);
    }
    // public System.Int32 Compare(DigitalOpus.MB.Core.MB2_TexturePacker/Image x, DigitalOpus.MB.Core.MB2_TexturePacker/Image y)
    // Offset: 0xC17488
    int Compare(::DigitalOpus::MB::Core::MB2_TexturePacker::Image* x, ::DigitalOpus::MB::Core::MB2_TexturePacker::Image* y);
    // public System.Void .ctor()
    // Offset: 0xC174C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB2_TexturePacker::ImageWidthComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB2_TexturePacker::ImageWidthComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB2_TexturePacker::ImageWidthComparer*, creationType>()));
    }
  }; // DigitalOpus.MB.Core.MB2_TexturePacker/ImageWidthComparer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB2_TexturePacker::ImageWidthComparer::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (DigitalOpus::MB::Core::MB2_TexturePacker::ImageWidthComparer::*)(::DigitalOpus::MB::Core::MB2_TexturePacker::Image*, ::DigitalOpus::MB::Core::MB2_TexturePacker::Image*)>(&DigitalOpus::MB::Core::MB2_TexturePacker::ImageWidthComparer::Compare)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_TexturePacker/Image")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_TexturePacker/Image")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB2_TexturePacker::ImageWidthComparer*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB2_TexturePacker::ImageWidthComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
