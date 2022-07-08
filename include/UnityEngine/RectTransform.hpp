// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::RectTransform);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RectTransform*, "UnityEngine", "RectTransform");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.RectTransform
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeClassAttribute] Offset: A6AD58
  // [NativeHeaderAttribute] Offset: A6AD58
  class RectTransform : public ::UnityEngine::Transform {
    public:
    // Nested type: ::UnityEngine::RectTransform::Axis
    struct Axis;
    // Nested type: ::UnityEngine::RectTransform::ReapplyDrivenProperties
    class ReapplyDrivenProperties;
    // [DebuggerBrowsableAttribute] Offset: 0xA6DB60
    // [CompilerGeneratedAttribute] Offset: 0xA6DB60
    // Get static field: static private UnityEngine.RectTransform/ReapplyDrivenProperties reapplyDrivenProperties
    static ::UnityEngine::RectTransform::ReapplyDrivenProperties* _get_reapplyDrivenProperties();
    // Set static field: static private UnityEngine.RectTransform/ReapplyDrivenProperties reapplyDrivenProperties
    static void _set_reapplyDrivenProperties(::UnityEngine::RectTransform::ReapplyDrivenProperties* value);
    // static public System.Void add_reapplyDrivenProperties(UnityEngine.RectTransform/ReapplyDrivenProperties value)
    // Offset: 0x1530924
    static void add_reapplyDrivenProperties(::UnityEngine::RectTransform::ReapplyDrivenProperties* value);
    // static public System.Void remove_reapplyDrivenProperties(UnityEngine.RectTransform/ReapplyDrivenProperties value)
    // Offset: 0x15309D8
    static void remove_reapplyDrivenProperties(::UnityEngine::RectTransform::ReapplyDrivenProperties* value);
    // public UnityEngine.Rect get_rect()
    // Offset: 0x1530A8C
    ::UnityEngine::Rect get_rect();
    // public UnityEngine.Vector2 get_anchorMin()
    // Offset: 0x1530B38
    ::UnityEngine::Vector2 get_anchorMin();
    // public System.Void set_anchorMin(UnityEngine.Vector2 value)
    // Offset: 0x1530BE0
    void set_anchorMin(::UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_anchorMax()
    // Offset: 0x1530C84
    ::UnityEngine::Vector2 get_anchorMax();
    // public System.Void set_anchorMax(UnityEngine.Vector2 value)
    // Offset: 0x1530D2C
    void set_anchorMax(::UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_anchoredPosition()
    // Offset: 0x1530DD0
    ::UnityEngine::Vector2 get_anchoredPosition();
    // public System.Void set_anchoredPosition(UnityEngine.Vector2 value)
    // Offset: 0x1530E78
    void set_anchoredPosition(::UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_sizeDelta()
    // Offset: 0x1530F1C
    ::UnityEngine::Vector2 get_sizeDelta();
    // public System.Void set_sizeDelta(UnityEngine.Vector2 value)
    // Offset: 0x1530FC4
    void set_sizeDelta(::UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_pivot()
    // Offset: 0x1531068
    ::UnityEngine::Vector2 get_pivot();
    // public System.Void set_pivot(UnityEngine.Vector2 value)
    // Offset: 0x1531110
    void set_pivot(::UnityEngine::Vector2 value);
    // public System.Void set_offsetMin(UnityEngine.Vector2 value)
    // Offset: 0x15311B4
    void set_offsetMin(::UnityEngine::Vector2 value);
    // public System.Void set_offsetMax(UnityEngine.Vector2 value)
    // Offset: 0x1531350
    void set_offsetMax(::UnityEngine::Vector2 value);
    // public System.Void ForceUpdateRectTransforms()
    // Offset: 0x15314E4
    void ForceUpdateRectTransforms();
    // public System.Void GetLocalCorners(UnityEngine.Vector3[] fourCornersArray)
    // Offset: 0x1531524
    void GetLocalCorners(::ArrayW<::UnityEngine::Vector3> fourCornersArray);
    // public System.Void GetWorldCorners(UnityEngine.Vector3[] fourCornersArray)
    // Offset: 0x15316F4
    void GetWorldCorners(::ArrayW<::UnityEngine::Vector3> fourCornersArray);
    // public System.Void SetSizeWithCurrentAnchors(UnityEngine.RectTransform/Axis axis, System.Single size)
    // Offset: 0x153181C
    void SetSizeWithCurrentAnchors(::UnityEngine::RectTransform::Axis axis, float size);
    // static System.Void SendReapplyDrivenProperties(UnityEngine.RectTransform driven)
    // Offset: 0x15319E0
    static void SendReapplyDrivenProperties(::UnityEngine::RectTransform* driven);
    // private UnityEngine.Vector2 GetParentSize()
    // Offset: 0x15318E4
    ::UnityEngine::Vector2 GetParentSize();
    // private System.Void get_rect_Injected(out UnityEngine.Rect ret)
    // Offset: 0x1530AE8
    void get_rect_Injected(ByRef<::UnityEngine::Rect> ret);
    // private System.Void get_anchorMin_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x1530B90
    void get_anchorMin_Injected(ByRef<::UnityEngine::Vector2> ret);
    // private System.Void set_anchorMin_Injected(ref UnityEngine.Vector2 value)
    // Offset: 0x1530C34
    void set_anchorMin_Injected(ByRef<::UnityEngine::Vector2> value);
    // private System.Void get_anchorMax_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x1530CDC
    void get_anchorMax_Injected(ByRef<::UnityEngine::Vector2> ret);
    // private System.Void set_anchorMax_Injected(ref UnityEngine.Vector2 value)
    // Offset: 0x1530D80
    void set_anchorMax_Injected(ByRef<::UnityEngine::Vector2> value);
    // private System.Void get_anchoredPosition_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x1530E28
    void get_anchoredPosition_Injected(ByRef<::UnityEngine::Vector2> ret);
    // private System.Void set_anchoredPosition_Injected(ref UnityEngine.Vector2 value)
    // Offset: 0x1530ECC
    void set_anchoredPosition_Injected(ByRef<::UnityEngine::Vector2> value);
    // private System.Void get_sizeDelta_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x1530F74
    void get_sizeDelta_Injected(ByRef<::UnityEngine::Vector2> ret);
    // private System.Void set_sizeDelta_Injected(ref UnityEngine.Vector2 value)
    // Offset: 0x1531018
    void set_sizeDelta_Injected(ByRef<::UnityEngine::Vector2> value);
    // private System.Void get_pivot_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x15310C0
    void get_pivot_Injected(ByRef<::UnityEngine::Vector2> ret);
    // private System.Void set_pivot_Injected(ref UnityEngine.Vector2 value)
    // Offset: 0x1531164
    void set_pivot_Injected(ByRef<::UnityEngine::Vector2> value);
  }; // UnityEngine.RectTransform
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::RectTransform::add_reapplyDrivenProperties
// Il2CppName: add_reapplyDrivenProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::RectTransform::ReapplyDrivenProperties*)>(&UnityEngine::RectTransform::add_reapplyDrivenProperties)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform/ReapplyDrivenProperties")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "add_reapplyDrivenProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::remove_reapplyDrivenProperties
// Il2CppName: remove_reapplyDrivenProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::RectTransform::ReapplyDrivenProperties*)>(&UnityEngine::RectTransform::remove_reapplyDrivenProperties)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform/ReapplyDrivenProperties")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "remove_reapplyDrivenProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::get_rect
// Il2CppName: get_rect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (UnityEngine::RectTransform::*)()>(&UnityEngine::RectTransform::get_rect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "get_rect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::get_anchorMin
// Il2CppName: get_anchorMin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::RectTransform::*)()>(&UnityEngine::RectTransform::get_anchorMin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "get_anchorMin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::set_anchorMin
// Il2CppName: set_anchorMin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(::UnityEngine::Vector2)>(&UnityEngine::RectTransform::set_anchorMin)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "set_anchorMin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::get_anchorMax
// Il2CppName: get_anchorMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::RectTransform::*)()>(&UnityEngine::RectTransform::get_anchorMax)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "get_anchorMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::set_anchorMax
// Il2CppName: set_anchorMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(::UnityEngine::Vector2)>(&UnityEngine::RectTransform::set_anchorMax)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "set_anchorMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::get_anchoredPosition
// Il2CppName: get_anchoredPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::RectTransform::*)()>(&UnityEngine::RectTransform::get_anchoredPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "get_anchoredPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::set_anchoredPosition
// Il2CppName: set_anchoredPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(::UnityEngine::Vector2)>(&UnityEngine::RectTransform::set_anchoredPosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "set_anchoredPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::get_sizeDelta
// Il2CppName: get_sizeDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::RectTransform::*)()>(&UnityEngine::RectTransform::get_sizeDelta)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "get_sizeDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::set_sizeDelta
// Il2CppName: set_sizeDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(::UnityEngine::Vector2)>(&UnityEngine::RectTransform::set_sizeDelta)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "set_sizeDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::get_pivot
// Il2CppName: get_pivot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::RectTransform::*)()>(&UnityEngine::RectTransform::get_pivot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "get_pivot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::set_pivot
// Il2CppName: set_pivot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(::UnityEngine::Vector2)>(&UnityEngine::RectTransform::set_pivot)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "set_pivot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::set_offsetMin
// Il2CppName: set_offsetMin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(::UnityEngine::Vector2)>(&UnityEngine::RectTransform::set_offsetMin)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "set_offsetMin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::set_offsetMax
// Il2CppName: set_offsetMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(::UnityEngine::Vector2)>(&UnityEngine::RectTransform::set_offsetMax)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "set_offsetMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::ForceUpdateRectTransforms
// Il2CppName: ForceUpdateRectTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)()>(&UnityEngine::RectTransform::ForceUpdateRectTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "ForceUpdateRectTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::GetLocalCorners
// Il2CppName: GetLocalCorners
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(::ArrayW<::UnityEngine::Vector3>)>(&UnityEngine::RectTransform::GetLocalCorners)> {
  static const MethodInfo* get() {
    static auto* fourCornersArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "GetLocalCorners", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fourCornersArray});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::GetWorldCorners
// Il2CppName: GetWorldCorners
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(::ArrayW<::UnityEngine::Vector3>)>(&UnityEngine::RectTransform::GetWorldCorners)> {
  static const MethodInfo* get() {
    static auto* fourCornersArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "GetWorldCorners", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fourCornersArray});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::SetSizeWithCurrentAnchors
// Il2CppName: SetSizeWithCurrentAnchors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(::UnityEngine::RectTransform::Axis, float)>(&UnityEngine::RectTransform::SetSizeWithCurrentAnchors)> {
  static const MethodInfo* get() {
    static auto* axis = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform/Axis")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "SetSizeWithCurrentAnchors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axis, size});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::SendReapplyDrivenProperties
// Il2CppName: SendReapplyDrivenProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::RectTransform*)>(&UnityEngine::RectTransform::SendReapplyDrivenProperties)> {
  static const MethodInfo* get() {
    static auto* driven = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "SendReapplyDrivenProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{driven});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::GetParentSize
// Il2CppName: GetParentSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::RectTransform::*)()>(&UnityEngine::RectTransform::GetParentSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "GetParentSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::get_rect_Injected
// Il2CppName: get_rect_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(ByRef<::UnityEngine::Rect>)>(&UnityEngine::RectTransform::get_rect_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "get_rect_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::get_anchorMin_Injected
// Il2CppName: get_anchorMin_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(ByRef<::UnityEngine::Vector2>)>(&UnityEngine::RectTransform::get_anchorMin_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "get_anchorMin_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::set_anchorMin_Injected
// Il2CppName: set_anchorMin_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(ByRef<::UnityEngine::Vector2>)>(&UnityEngine::RectTransform::set_anchorMin_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "set_anchorMin_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::get_anchorMax_Injected
// Il2CppName: get_anchorMax_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(ByRef<::UnityEngine::Vector2>)>(&UnityEngine::RectTransform::get_anchorMax_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "get_anchorMax_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::set_anchorMax_Injected
// Il2CppName: set_anchorMax_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(ByRef<::UnityEngine::Vector2>)>(&UnityEngine::RectTransform::set_anchorMax_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "set_anchorMax_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::get_anchoredPosition_Injected
// Il2CppName: get_anchoredPosition_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(ByRef<::UnityEngine::Vector2>)>(&UnityEngine::RectTransform::get_anchoredPosition_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "get_anchoredPosition_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::set_anchoredPosition_Injected
// Il2CppName: set_anchoredPosition_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(ByRef<::UnityEngine::Vector2>)>(&UnityEngine::RectTransform::set_anchoredPosition_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "set_anchoredPosition_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::get_sizeDelta_Injected
// Il2CppName: get_sizeDelta_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(ByRef<::UnityEngine::Vector2>)>(&UnityEngine::RectTransform::get_sizeDelta_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "get_sizeDelta_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::set_sizeDelta_Injected
// Il2CppName: set_sizeDelta_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(ByRef<::UnityEngine::Vector2>)>(&UnityEngine::RectTransform::set_sizeDelta_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "set_sizeDelta_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::get_pivot_Injected
// Il2CppName: get_pivot_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(ByRef<::UnityEngine::Vector2>)>(&UnityEngine::RectTransform::get_pivot_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "get_pivot_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectTransform::set_pivot_Injected
// Il2CppName: set_pivot_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RectTransform::*)(ByRef<::UnityEngine::Vector2>)>(&UnityEngine::RectTransform::set_pivot_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectTransform*), "set_pivot_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
