// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.RuntimeElement
#include "UnityEngine/Timeline/RuntimeElement.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: RuntimeClipBase
  class RuntimeClipBase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::RuntimeClipBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::RuntimeClipBase*, "UnityEngine.Timeline", "RuntimeClipBase");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.RuntimeClipBase
  // [TokenAttribute] Offset: FFFFFFFF
  class RuntimeClipBase : public ::UnityEngine::Timeline::RuntimeElement {
    public:
    // public System.Double get_start()
    // Offset: 0xFFFFFFFFFFFFFFFF
    double get_start();
    // public System.Double get_duration()
    // Offset: 0xFFFFFFFFFFFFFFFF
    double get_duration();
    // public override System.Int64 get_intervalStart()
    // Offset: 0x153D5E8
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Int64 RuntimeElement::get_intervalStart()
    int64_t get_intervalStart();
    // public override System.Int64 get_intervalEnd()
    // Offset: 0x153D668
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Int64 RuntimeElement::get_intervalEnd()
    int64_t get_intervalEnd();
    // protected System.Void .ctor()
    // Offset: 0x153CD4C
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Void RuntimeElement::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeClipBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Timeline::RuntimeClipBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeClipBase*, creationType>()));
    }
  }; // UnityEngine.Timeline.RuntimeClipBase
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::RuntimeClipBase::get_start
// Il2CppName: get_start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (UnityEngine::Timeline::RuntimeClipBase::*)()>(&UnityEngine::Timeline::RuntimeClipBase::get_start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::RuntimeClipBase*), "get_start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::RuntimeClipBase::get_duration
// Il2CppName: get_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (UnityEngine::Timeline::RuntimeClipBase::*)()>(&UnityEngine::Timeline::RuntimeClipBase::get_duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::RuntimeClipBase*), "get_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::RuntimeClipBase::get_intervalStart
// Il2CppName: get_intervalStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (UnityEngine::Timeline::RuntimeClipBase::*)()>(&UnityEngine::Timeline::RuntimeClipBase::get_intervalStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::RuntimeClipBase*), "get_intervalStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::RuntimeClipBase::get_intervalEnd
// Il2CppName: get_intervalEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (UnityEngine::Timeline::RuntimeClipBase::*)()>(&UnityEngine::Timeline::RuntimeClipBase::get_intervalEnd)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::RuntimeClipBase*), "get_intervalEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::RuntimeClipBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
