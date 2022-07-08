// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Video.VideoPlayer
#include "UnityEngine/Video/VideoPlayer.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Video::VideoPlayer::EventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoPlayer::EventHandler*, "UnityEngine.Video", "VideoPlayer/EventHandler");
// Type namespace: UnityEngine.Video
namespace UnityEngine::Video {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Video.VideoPlayer/EventHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class VideoPlayer::EventHandler : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1B58948
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VideoPlayer::EventHandler* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Video::VideoPlayer::EventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VideoPlayer::EventHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.Video.VideoPlayer source)
    // Offset: 0x1B577FC
    void Invoke(::UnityEngine::Video::VideoPlayer* source);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Video.VideoPlayer source, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1B58958
    ::System::IAsyncResult* BeginInvoke(::UnityEngine::Video::VideoPlayer* source, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1B5897C
    void EndInvoke(::System::IAsyncResult* result);
  }; // UnityEngine.Video.VideoPlayer/EventHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Video::VideoPlayer::EventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Video::VideoPlayer::EventHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Video::VideoPlayer::EventHandler::*)(::UnityEngine::Video::VideoPlayer*)>(&UnityEngine::Video::VideoPlayer::EventHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine.Video", "VideoPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoPlayer::EventHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoPlayer::EventHandler::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (UnityEngine::Video::VideoPlayer::EventHandler::*)(::UnityEngine::Video::VideoPlayer*, ::System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::Video::VideoPlayer::EventHandler::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine.Video", "VideoPlayer")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoPlayer::EventHandler*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoPlayer::EventHandler::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Video::VideoPlayer::EventHandler::*)(::System::IAsyncResult*)>(&UnityEngine::Video::VideoPlayer::EventHandler::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoPlayer::EventHandler*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
