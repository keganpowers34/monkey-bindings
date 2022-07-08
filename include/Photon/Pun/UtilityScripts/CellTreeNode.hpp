// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Photon.Pun.UtilityScripts
namespace Photon::Pun::UtilityScripts {
  // Forward declaring type: CellTreeNode
  class CellTreeNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Pun::UtilityScripts::CellTreeNode);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::CellTreeNode*, "Photon.Pun.UtilityScripts", "CellTreeNode");
// Type namespace: Photon.Pun.UtilityScripts
namespace Photon::Pun::UtilityScripts {
  // Size: 0x5C
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Pun.UtilityScripts.CellTreeNode
  // [TokenAttribute] Offset: FFFFFFFF
  class CellTreeNode : public ::Il2CppObject {
    public:
    // Nested type: ::Photon::Pun::UtilityScripts::CellTreeNode::ENodeType
    struct ENodeType;
    // Size: 0x1
    #pragma pack(push, 1)
    // Autogenerated type: Photon.Pun.UtilityScripts.CellTreeNode/ENodeType
    // [TokenAttribute] Offset: FFFFFFFF
    struct ENodeType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Byte value__
      // Size: 0x1
      // Offset: 0x0
      uint8_t value;
      // Field size check
      static_assert(sizeof(uint8_t) == 0x1);
      public:
      // Creating value type constructor for type: ENodeType
      constexpr ENodeType(uint8_t value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator uint8_t
      constexpr operator uint8_t() const noexcept {
        return value;
      }
      // static field const value: static public Photon.Pun.UtilityScripts.CellTreeNode/ENodeType Root
      static constexpr const uint8_t Root = 0u;
      // Get static field: static public Photon.Pun.UtilityScripts.CellTreeNode/ENodeType Root
      static ::Photon::Pun::UtilityScripts::CellTreeNode::ENodeType _get_Root();
      // Set static field: static public Photon.Pun.UtilityScripts.CellTreeNode/ENodeType Root
      static void _set_Root(::Photon::Pun::UtilityScripts::CellTreeNode::ENodeType value);
      // static field const value: static public Photon.Pun.UtilityScripts.CellTreeNode/ENodeType Node
      static constexpr const uint8_t Node = 1u;
      // Get static field: static public Photon.Pun.UtilityScripts.CellTreeNode/ENodeType Node
      static ::Photon::Pun::UtilityScripts::CellTreeNode::ENodeType _get_Node();
      // Set static field: static public Photon.Pun.UtilityScripts.CellTreeNode/ENodeType Node
      static void _set_Node(::Photon::Pun::UtilityScripts::CellTreeNode::ENodeType value);
      // static field const value: static public Photon.Pun.UtilityScripts.CellTreeNode/ENodeType Leaf
      static constexpr const uint8_t Leaf = 2u;
      // Get static field: static public Photon.Pun.UtilityScripts.CellTreeNode/ENodeType Leaf
      static ::Photon::Pun::UtilityScripts::CellTreeNode::ENodeType _get_Leaf();
      // Set static field: static public Photon.Pun.UtilityScripts.CellTreeNode/ENodeType Leaf
      static void _set_Leaf(::Photon::Pun::UtilityScripts::CellTreeNode::ENodeType value);
      // Get instance field reference: public System.Byte value__
      [[deprecated("Use field access instead!")]] uint8_t& dyn_value__();
    }; // Photon.Pun.UtilityScripts.CellTreeNode/ENodeType
    #pragma pack(pop)
    static check_size<sizeof(CellTreeNode::ENodeType), 0 + sizeof(uint8_t)> __Photon_Pun_UtilityScripts_CellTreeNode_ENodeTypeSizeCheck;
    static_assert(sizeof(CellTreeNode::ENodeType) == 0x1);
    public:
    // public System.Byte Id
    // Size: 0x1
    // Offset: 0x10
    uint8_t Id;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: Id and: Center
    char __padding0[0x3] = {};
    // public UnityEngine.Vector3 Center
    // Size: 0xC
    // Offset: 0x14
    ::UnityEngine::Vector3 Center;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 Size
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Vector3 Size;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 TopLeft
    // Size: 0xC
    // Offset: 0x2C
    ::UnityEngine::Vector3 TopLeft;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 BottomRight
    // Size: 0xC
    // Offset: 0x38
    ::UnityEngine::Vector3 BottomRight;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public Photon.Pun.UtilityScripts.CellTreeNode/ENodeType NodeType
    // Size: 0x1
    // Offset: 0x44
    ::Photon::Pun::UtilityScripts::CellTreeNode::ENodeType NodeType;
    // Field size check
    static_assert(sizeof(::Photon::Pun::UtilityScripts::CellTreeNode::ENodeType) == 0x1);
    // Padding between fields: NodeType and: Parent
    char __padding5[0x3] = {};
    // public Photon.Pun.UtilityScripts.CellTreeNode Parent
    // Size: 0x8
    // Offset: 0x48
    ::Photon::Pun::UtilityScripts::CellTreeNode* Parent;
    // Field size check
    static_assert(sizeof(::Photon::Pun::UtilityScripts::CellTreeNode*) == 0x8);
    // public System.Collections.Generic.List`1<Photon.Pun.UtilityScripts.CellTreeNode> Childs
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<::Photon::Pun::UtilityScripts::CellTreeNode*>* Childs;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Photon::Pun::UtilityScripts::CellTreeNode*>*) == 0x8);
    // private System.Single maxDistance
    // Size: 0x4
    // Offset: 0x58
    float maxDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Byte Id
    [[deprecated("Use field access instead!")]] uint8_t& dyn_Id();
    // Get instance field reference: public UnityEngine.Vector3 Center
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_Center();
    // Get instance field reference: public UnityEngine.Vector3 Size
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_Size();
    // Get instance field reference: public UnityEngine.Vector3 TopLeft
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_TopLeft();
    // Get instance field reference: public UnityEngine.Vector3 BottomRight
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_BottomRight();
    // Get instance field reference: public Photon.Pun.UtilityScripts.CellTreeNode/ENodeType NodeType
    [[deprecated("Use field access instead!")]] ::Photon::Pun::UtilityScripts::CellTreeNode::ENodeType& dyn_NodeType();
    // Get instance field reference: public Photon.Pun.UtilityScripts.CellTreeNode Parent
    [[deprecated("Use field access instead!")]] ::Photon::Pun::UtilityScripts::CellTreeNode*& dyn_Parent();
    // Get instance field reference: public System.Collections.Generic.List`1<Photon.Pun.UtilityScripts.CellTreeNode> Childs
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Photon::Pun::UtilityScripts::CellTreeNode*>*& dyn_Childs();
    // Get instance field reference: private System.Single maxDistance
    [[deprecated("Use field access instead!")]] float& dyn_maxDistance();
    // public System.Void .ctor()
    // Offset: 0x158D080
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CellTreeNode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Pun::UtilityScripts::CellTreeNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CellTreeNode*, creationType>()));
    }
    // public System.Void .ctor(System.Byte id, Photon.Pun.UtilityScripts.CellTreeNode/ENodeType nodeType, Photon.Pun.UtilityScripts.CellTreeNode parent)
    // Offset: 0x158D088
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CellTreeNode* New_ctor(uint8_t id, ::Photon::Pun::UtilityScripts::CellTreeNode::ENodeType nodeType, ::Photon::Pun::UtilityScripts::CellTreeNode* parent) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Pun::UtilityScripts::CellTreeNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CellTreeNode*, creationType>(id, nodeType, parent)));
    }
    // public System.Void AddChild(Photon.Pun.UtilityScripts.CellTreeNode child)
    // Offset: 0x158D0CC
    void AddChild(::Photon::Pun::UtilityScripts::CellTreeNode* child);
    // public System.Void Draw()
    // Offset: 0x158D168
    void Draw();
    // public System.Void GetActiveCells(System.Collections.Generic.List`1<System.Byte> activeCells, System.Boolean yIsUpAxis, UnityEngine.Vector3 position)
    // Offset: 0x158D16C
    void GetActiveCells(::System::Collections::Generic::List_1<uint8_t>* activeCells, bool yIsUpAxis, ::UnityEngine::Vector3 position);
    // public System.Boolean IsPointInsideCell(System.Boolean yIsUpAxis, UnityEngine.Vector3 point)
    // Offset: 0x158D44C
    bool IsPointInsideCell(bool yIsUpAxis, ::UnityEngine::Vector3 point);
    // public System.Boolean IsPointNearCell(System.Boolean yIsUpAxis, UnityEngine.Vector3 point)
    // Offset: 0x158D344
    bool IsPointNearCell(bool yIsUpAxis, ::UnityEngine::Vector3 point);
  }; // Photon.Pun.UtilityScripts.CellTreeNode
  #pragma pack(pop)
  static check_size<sizeof(CellTreeNode), 88 + sizeof(float)> __Photon_Pun_UtilityScripts_CellTreeNodeSizeCheck;
  static_assert(sizeof(CellTreeNode) == 0x5C);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::CellTreeNode::ENodeType, "Photon.Pun.UtilityScripts", "CellTreeNode/ENodeType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::CellTreeNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::CellTreeNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::CellTreeNode::AddChild
// Il2CppName: AddChild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::CellTreeNode::*)(::Photon::Pun::UtilityScripts::CellTreeNode*)>(&Photon::Pun::UtilityScripts::CellTreeNode::AddChild)> {
  static const MethodInfo* get() {
    static auto* child = &::il2cpp_utils::GetClassFromName("Photon.Pun.UtilityScripts", "CellTreeNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::CellTreeNode*), "AddChild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{child});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::CellTreeNode::Draw
// Il2CppName: Draw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::CellTreeNode::*)()>(&Photon::Pun::UtilityScripts::CellTreeNode::Draw)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::CellTreeNode*), "Draw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::CellTreeNode::GetActiveCells
// Il2CppName: GetActiveCells
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::CellTreeNode::*)(::System::Collections::Generic::List_1<uint8_t>*, bool, ::UnityEngine::Vector3)>(&Photon::Pun::UtilityScripts::CellTreeNode::GetActiveCells)> {
  static const MethodInfo* get() {
    static auto* activeCells = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    static auto* yIsUpAxis = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::CellTreeNode*), "GetActiveCells", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{activeCells, yIsUpAxis, position});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::CellTreeNode::IsPointInsideCell
// Il2CppName: IsPointInsideCell
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Pun::UtilityScripts::CellTreeNode::*)(bool, ::UnityEngine::Vector3)>(&Photon::Pun::UtilityScripts::CellTreeNode::IsPointInsideCell)> {
  static const MethodInfo* get() {
    static auto* yIsUpAxis = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::CellTreeNode*), "IsPointInsideCell", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{yIsUpAxis, point});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::CellTreeNode::IsPointNearCell
// Il2CppName: IsPointNearCell
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Pun::UtilityScripts::CellTreeNode::*)(bool, ::UnityEngine::Vector3)>(&Photon::Pun::UtilityScripts::CellTreeNode::IsPointNearCell)> {
  static const MethodInfo* get() {
    static auto* yIsUpAxis = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::CellTreeNode*), "IsPointNearCell", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{yIsUpAxis, point});
  }
};
