// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Voice.IDecoderDirect`1
#include "Photon/Voice/IDecoderDirect_1.hpp"
// Including type: Photon.Voice.ImageOutputBuf
#include "Photon/Voice/ImageOutputBuf.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Photon::Voice
namespace Photon::Voice {
  // Skipping declaration: ImageFormat because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
}
// Completed forward declares
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Forward declaring type: IDecoderQueuedOutputImageNative
  class IDecoderQueuedOutputImageNative;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Voice::IDecoderQueuedOutputImageNative);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::IDecoderQueuedOutputImageNative*, "Photon.Voice", "IDecoderQueuedOutputImageNative");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Voice.IDecoderQueuedOutputImageNative
  // [TokenAttribute] Offset: FFFFFFFF
  class IDecoderQueuedOutputImageNative/*, public ::Photon::Voice::IDecoderDirect_1<::Photon::Voice::ImageOutputBuf>*/ {
    public:
    // Creating interface conversion operator: operator ::Photon::Voice::IDecoderDirect_1<::Photon::Voice::ImageOutputBuf>
    operator ::Photon::Voice::IDecoderDirect_1<::Photon::Voice::ImageOutputBuf>() noexcept {
      return *reinterpret_cast<::Photon::Voice::IDecoderDirect_1<::Photon::Voice::ImageOutputBuf>*>(this);
    }
    // public Photon.Voice.ImageFormat get_OutputImageFormat()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Photon::Voice::ImageFormat get_OutputImageFormat();
    // public System.Void set_OutputImageFormat(Photon.Voice.ImageFormat value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_OutputImageFormat(::Photon::Voice::ImageFormat value);
    // public System.Func`3<System.Int32,System.Int32,System.IntPtr> get_OutputImageBufferGetter()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Func_3<int, int, ::System::IntPtr>* get_OutputImageBufferGetter();
    // public System.Void set_OutputImageBufferGetter(System.Func`3<System.Int32,System.Int32,System.IntPtr> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_OutputImageBufferGetter(::System::Func_3<int, int, ::System::IntPtr>* value);
  }; // Photon.Voice.IDecoderQueuedOutputImageNative
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Voice::IDecoderQueuedOutputImageNative::get_OutputImageFormat
// Il2CppName: get_OutputImageFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Voice::ImageFormat (Photon::Voice::IDecoderQueuedOutputImageNative::*)()>(&Photon::Voice::IDecoderQueuedOutputImageNative::get_OutputImageFormat)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::IDecoderQueuedOutputImageNative*), "get_OutputImageFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::IDecoderQueuedOutputImageNative::set_OutputImageFormat
// Il2CppName: set_OutputImageFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::IDecoderQueuedOutputImageNative::*)(::Photon::Voice::ImageFormat)>(&Photon::Voice::IDecoderQueuedOutputImageNative::set_OutputImageFormat)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Photon.Voice", "ImageFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::IDecoderQueuedOutputImageNative*), "set_OutputImageFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::IDecoderQueuedOutputImageNative::get_OutputImageBufferGetter
// Il2CppName: get_OutputImageBufferGetter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_3<int, int, ::System::IntPtr>* (Photon::Voice::IDecoderQueuedOutputImageNative::*)()>(&Photon::Voice::IDecoderQueuedOutputImageNative::get_OutputImageBufferGetter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::IDecoderQueuedOutputImageNative*), "get_OutputImageBufferGetter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::IDecoderQueuedOutputImageNative::set_OutputImageBufferGetter
// Il2CppName: set_OutputImageBufferGetter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::IDecoderQueuedOutputImageNative::*)(::System::Func_3<int, int, ::System::IntPtr>*)>(&Photon::Voice::IDecoderQueuedOutputImageNative::set_OutputImageBufferGetter)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "IntPtr")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::IDecoderQueuedOutputImageNative*), "set_OutputImageBufferGetter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
