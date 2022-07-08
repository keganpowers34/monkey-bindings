// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Voice.ObjectPool`2
#include "Photon/Voice/ObjectPool_2.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Photon::Voice
namespace Photon::Voice {
  // Skipping declaration: Factory because it is already included!
  // Forward declaring type: ImageBufferInfo
  class ImageBufferInfo;
  // Forward declaring type: ImageBufferNative
  class ImageBufferNative;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Forward declaring type: ImageBufferNativePool`1<T>
  template<typename T>
  class ImageBufferNativePool_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Photon::Voice::ImageBufferNativePool_1, "Photon.Voice", "ImageBufferNativePool`1");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // WARNING Size may be invalid!
  // Autogenerated type: Photon.Voice.ImageBufferNativePool`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class ImageBufferNativePool_1 : public ::Photon::Voice::ObjectPool_2<T, ::Photon::Voice::ImageBufferInfo*> {
    public:
    // Nested type: ::Photon::Voice::ImageBufferNativePool_1::Factory<T>
    class Factory;
    // WARNING Size may be invalid!
    // Autogenerated type: Photon.Voice.ImageBufferNativePool`1/Factory
    // [TokenAttribute] Offset: FFFFFFFF
    class Factory : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::System::MulticastDelegate {
      public:
      using declaring_type = ImageBufferNativePool_1<T>*;
      static constexpr std::string_view NESTED_NAME = "Factory";
      static constexpr bool IS_VALUE_TYPE = false;
      // public System.Void .ctor(System.Object object, System.IntPtr method)
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename ImageBufferNativePool_1<T>::Factory* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::ImageBufferNativePool_1::Factory::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename ImageBufferNativePool_1<T>::Factory*, creationType>(object, method)));
      }
      // public T Invoke(Photon.Voice.ImageBufferNativePool`1<T> pool, Photon.Voice.ImageBufferInfo info)
      // Offset: 0xFFFFFFFFFFFFFFFF
      T Invoke(::Photon::Voice::ImageBufferNativePool_1<T>* pool, ::Photon::Voice::ImageBufferInfo* info) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::ImageBufferNativePool_1::Factory::Invoke");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::Photon::Voice::ImageBufferNativePool_1<T>::Factory*), -1));
        return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, pool, info);
      }
      // public System.IAsyncResult BeginInvoke(Photon.Voice.ImageBufferNativePool`1<T> pool, Photon.Voice.ImageBufferInfo info, System.AsyncCallback callback, System.Object object)
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::System::IAsyncResult* BeginInvoke(::Photon::Voice::ImageBufferNativePool_1<T>* pool, ::Photon::Voice::ImageBufferInfo* info, ::System::AsyncCallback* callback, ::Il2CppObject* object) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::ImageBufferNativePool_1::Factory::BeginInvoke");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::Photon::Voice::ImageBufferNativePool_1<T>::Factory*), -1));
        return ::il2cpp_utils::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal__method, pool, info, callback, object);
      }
      // public T EndInvoke(System.IAsyncResult result)
      // Offset: 0xFFFFFFFFFFFFFFFF
      T EndInvoke(::System::IAsyncResult* result) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::ImageBufferNativePool_1::Factory::EndInvoke");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::Photon::Voice::ImageBufferNativePool_1<T>::Factory*), -1));
        return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, result);
      }
    }; // Photon.Voice.ImageBufferNativePool`1/Factory
    // Could not write size check! Type: Photon.Voice.ImageBufferNativePool`1/Factory is generic, or has no fields that are valid for size checks!
    public:
    // private Photon.Voice.ImageBufferNativePool`1/Factory<T> factory
    // Size: 0x8
    // Offset: 0x0
    typename ::Photon::Voice::ImageBufferNativePool_1<T>::Factory* factory;
    // Field size check
    static_assert(sizeof(typename ::Photon::Voice::ImageBufferNativePool_1<T>::Factory*) == 0x8);
    public:
    // Creating conversion operator: operator typename ::Photon::Voice::ImageBufferNativePool_1<T>::Factory*
    constexpr operator typename ::Photon::Voice::ImageBufferNativePool_1<T>::Factory*() const noexcept {
      return factory;
    }
    // Autogenerated instance field getter
    // Get instance field: private Photon.Voice.ImageBufferNativePool`1/Factory<T> factory
    [[deprecated("Use field access instead!")]] typename ::Photon::Voice::ImageBufferNativePool_1<T>::Factory*& dyn_factory() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::ImageBufferNativePool_1::dyn_factory");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "factory"))->offset;
      return *reinterpret_cast<typename ::Photon::Voice::ImageBufferNativePool_1<T>::Factory**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Int32 capacity, Photon.Voice.ImageBufferNativePool`1/Factory<T> factory, System.String name)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ImageBufferNativePool_1<T>* New_ctor(int capacity, typename ::Photon::Voice::ImageBufferNativePool_1<T>::Factory* factory, ::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::ImageBufferNativePool_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ImageBufferNativePool_1<T>*, creationType>(capacity, factory, name)));
    }
    // public System.Void .ctor(System.Int32 capacity, Photon.Voice.ImageBufferNativePool`1/Factory<T> factory, System.String name, Photon.Voice.ImageBufferInfo info)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ImageBufferNativePool_1<T>* New_ctor(int capacity, typename ::Photon::Voice::ImageBufferNativePool_1<T>::Factory* factory, ::StringW name, ::Photon::Voice::ImageBufferInfo* info) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::ImageBufferNativePool_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ImageBufferNativePool_1<T>*, creationType>(capacity, factory, name, info)));
    }
    // protected T createObject(Photon.Voice.ImageBufferInfo info)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T createObject(::Photon::Voice::ImageBufferInfo* info) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::ImageBufferNativePool_1::createObject");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::ImageBufferNativePool_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, info);
    }
    // protected System.Boolean infosMatch(Photon.Voice.ImageBufferInfo i0, Photon.Voice.ImageBufferInfo i1)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool infosMatch(::Photon::Voice::ImageBufferInfo* i0, ::Photon::Voice::ImageBufferInfo* i1) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::ImageBufferNativePool_1::infosMatch");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::ImageBufferNativePool_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, i0, i1);
    }
    // protected override System.Void destroyObject(T obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Photon.Voice.ObjectPool`2
    // Base method: System.Void ObjectPool_2::destroyObject(T obj)
    void destroyObject(T obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::ImageBufferNativePool_1::destroyObject");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::ObjectPool_2<TType, TInfo>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, obj);
    }
  }; // Photon.Voice.ImageBufferNativePool`1
  // Could not write size check! Type: Photon.Voice.ImageBufferNativePool`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
