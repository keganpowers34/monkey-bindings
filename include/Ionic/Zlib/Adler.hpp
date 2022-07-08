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
// Type namespace: Ionic.Zlib
namespace Ionic::Zlib {
  // Forward declaring type: Adler
  class Adler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Ionic::Zlib::Adler);
DEFINE_IL2CPP_ARG_TYPE(::Ionic::Zlib::Adler*, "Ionic.Zlib", "Adler");
// Type namespace: Ionic.Zlib
namespace Ionic::Zlib {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Ionic.Zlib.Adler
  // [TokenAttribute] Offset: FFFFFFFF
  class Adler : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.UInt32 BASE
    static uint _get_BASE();
    // Set static field: static private readonly System.UInt32 BASE
    static void _set_BASE(uint value);
    // Get static field: static private readonly System.Int32 NMAX
    static int _get_NMAX();
    // Set static field: static private readonly System.Int32 NMAX
    static void _set_NMAX(int value);
    // static public System.UInt32 Adler32(System.UInt32 adler, System.Byte[] buf, System.Int32 index, System.Int32 len)
    // Offset: 0x17CF3C4
    static uint Adler32(uint adler, ::ArrayW<uint8_t> buf, int index, int len);
    // public System.Void .ctor()
    // Offset: 0x17CF770
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Adler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Ionic::Zlib::Adler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Adler*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x17CF778
    static void _cctor();
  }; // Ionic.Zlib.Adler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Ionic::Zlib::Adler::Adler32
// Il2CppName: Adler32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, ::ArrayW<uint8_t>, int, int)>(&Ionic::Zlib::Adler::Adler32)> {
  static const MethodInfo* get() {
    static auto* adler = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* buf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Ionic::Zlib::Adler*), "Adler32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{adler, buf, index, len});
  }
};
// Writing MetadataGetter for method: Ionic::Zlib::Adler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Ionic::Zlib::Adler::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Ionic::Zlib::Adler::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Ionic::Zlib::Adler*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
