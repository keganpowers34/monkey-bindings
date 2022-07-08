// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Forward declaring type: ObjectPool`2<TType, TInfo>
  template<typename TType, typename TInfo>
  class ObjectPool_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Photon::Voice::ObjectPool_2, "Photon.Voice", "ObjectPool`2");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // WARNING Size may be invalid!
  // Autogenerated type: Photon.Voice.ObjectPool`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TType, typename TInfo>
  class ObjectPool_2 : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // protected System.Int32 capacity
    // Size: 0x4
    // Offset: 0x0
    int capacity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected TInfo info
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TInfo info;
    // private TType[] freeObj
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<TType> freeObj;
    // Field size check
    static_assert(sizeof(::ArrayW<TType>) == 0x8);
    // protected System.Int32 pos
    // Size: 0x4
    // Offset: 0x0
    int pos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.String name
    // Size: 0x8
    // Offset: 0x0
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean inited
    // Size: 0x1
    // Offset: 0x0
    bool inited;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: protected System.Int32 capacity
    [[deprecated("Use field access instead!")]] int& dyn_capacity() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::ObjectPool_2::dyn_capacity");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "capacity"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: protected TInfo info
    [[deprecated("Use field access instead!")]] TInfo& dyn_info() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::ObjectPool_2::dyn_info");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "info"))->offset;
      return *reinterpret_cast<TInfo*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private TType[] freeObj
    [[deprecated("Use field access instead!")]] ::ArrayW<TType>& dyn_freeObj() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::ObjectPool_2::dyn_freeObj");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "freeObj"))->offset;
      return *reinterpret_cast<::ArrayW<TType>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: protected System.Int32 pos
    [[deprecated("Use field access instead!")]] int& dyn_pos() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::ObjectPool_2::dyn_pos");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "pos"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: protected System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::ObjectPool_2::dyn_name");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "name"))->offset;
      return *reinterpret_cast<::StringW*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Boolean inited
    [[deprecated("Use field access instead!")]] bool& dyn_inited() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::ObjectPool_2::dyn_inited");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "inited"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // protected TType createObject(TInfo info)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TType createObject(TInfo info) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::ObjectPool_2::createObject");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::ObjectPool_2<TType, TInfo>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<TType, false>(this, ___internal__method, info);
    }
    // protected System.Void destroyObject(TType obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void destroyObject(TType obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::ObjectPool_2::destroyObject");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::ObjectPool_2<TType, TInfo>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, obj);
    }
    // protected System.Boolean infosMatch(TInfo i0, TInfo i1)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool infosMatch(TInfo i0, TInfo i1) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::ObjectPool_2::infosMatch");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::ObjectPool_2<TType, TInfo>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, i0, i1);
    }
    // System.String get_LogPrefix()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_LogPrefix() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::ObjectPool_2::get_LogPrefix");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_LogPrefix", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
    // public System.Void .ctor(System.Int32 capacity, System.String name)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectPool_2<TType, TInfo>* New_ctor(int capacity, ::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::ObjectPool_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectPool_2<TType, TInfo>*, creationType>(capacity, name)));
    }
    // public System.Void .ctor(System.Int32 capacity, System.String name, TInfo info)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectPool_2<TType, TInfo>* New_ctor(int capacity, ::StringW name, TInfo info) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::ObjectPool_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectPool_2<TType, TInfo>*, creationType>(capacity, name, info)));
    }
    // public System.Void Init(TInfo info)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Init(TInfo info) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::ObjectPool_2::Init");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Init", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(info)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, info);
    }
    // public TInfo get_Info()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TInfo get_Info() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::ObjectPool_2::get_Info");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Info", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<TInfo, false>(this, ___internal__method);
    }
    // public TType AcquireOrCreate()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TType AcquireOrCreate() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::ObjectPool_2::AcquireOrCreate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AcquireOrCreate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<TType, false>(this, ___internal__method);
    }
    // public TType AcquireOrCreate(TInfo info)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TType AcquireOrCreate(TInfo info) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::ObjectPool_2::AcquireOrCreate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AcquireOrCreate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(info)})));
      return ::il2cpp_utils::RunMethodRethrow<TType, false>(this, ___internal__method, info);
    }
    // public System.Boolean Release(TType obj, TInfo objInfo)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Release(TType obj, TInfo objInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::ObjectPool_2::Release");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::ObjectPool_2<TType, TInfo>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, obj, objInfo);
    }
    // public System.Boolean Release(TType obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Release(TType obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::ObjectPool_2::Release");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::ObjectPool_2<TType, TInfo>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, obj);
    }
    // public System.Void Dispose()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::ObjectPool_2::Dispose");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::ObjectPool_2<TType, TInfo>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
  }; // Photon.Voice.ObjectPool`2
  // Could not write size check! Type: Photon.Voice.ObjectPool`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
