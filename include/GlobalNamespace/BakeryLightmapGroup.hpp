// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BakeryLightmapGroupPlain
  struct BakeryLightmapGroupPlain;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BakeryLightmapGroup
  class BakeryLightmapGroup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BakeryLightmapGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BakeryLightmapGroup*, "", "BakeryLightmapGroup");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xAC
  #pragma pack(push, 1)
  // Autogenerated type: BakeryLightmapGroup
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: AE4A3C
  class BakeryLightmapGroup : public ::UnityEngine::ScriptableObject {
    public:
    // Nested type: ::GlobalNamespace::BakeryLightmapGroup::ftLMGroupMode
    struct ftLMGroupMode;
    // Nested type: ::GlobalNamespace::BakeryLightmapGroup::RenderMode
    struct RenderMode;
    // Nested type: ::GlobalNamespace::BakeryLightmapGroup::RenderDirMode
    struct RenderDirMode;
    // Nested type: ::GlobalNamespace::BakeryLightmapGroup::AtlasPacker
    struct AtlasPacker;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: BakeryLightmapGroup/ftLMGroupMode
    // [TokenAttribute] Offset: FFFFFFFF
    struct ftLMGroupMode/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ftLMGroupMode
      constexpr ftLMGroupMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public BakeryLightmapGroup/ftLMGroupMode OriginalUV
      static constexpr const int OriginalUV = 0;
      // Get static field: static public BakeryLightmapGroup/ftLMGroupMode OriginalUV
      static ::GlobalNamespace::BakeryLightmapGroup::ftLMGroupMode _get_OriginalUV();
      // Set static field: static public BakeryLightmapGroup/ftLMGroupMode OriginalUV
      static void _set_OriginalUV(::GlobalNamespace::BakeryLightmapGroup::ftLMGroupMode value);
      // static field const value: static public BakeryLightmapGroup/ftLMGroupMode PackAtlas
      static constexpr const int PackAtlas = 1;
      // Get static field: static public BakeryLightmapGroup/ftLMGroupMode PackAtlas
      static ::GlobalNamespace::BakeryLightmapGroup::ftLMGroupMode _get_PackAtlas();
      // Set static field: static public BakeryLightmapGroup/ftLMGroupMode PackAtlas
      static void _set_PackAtlas(::GlobalNamespace::BakeryLightmapGroup::ftLMGroupMode value);
      // static field const value: static public BakeryLightmapGroup/ftLMGroupMode Vertex
      static constexpr const int Vertex = 2;
      // Get static field: static public BakeryLightmapGroup/ftLMGroupMode Vertex
      static ::GlobalNamespace::BakeryLightmapGroup::ftLMGroupMode _get_Vertex();
      // Set static field: static public BakeryLightmapGroup/ftLMGroupMode Vertex
      static void _set_Vertex(::GlobalNamespace::BakeryLightmapGroup::ftLMGroupMode value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // BakeryLightmapGroup/ftLMGroupMode
    #pragma pack(pop)
    static check_size<sizeof(BakeryLightmapGroup::ftLMGroupMode), 0 + sizeof(int)> __GlobalNamespace_BakeryLightmapGroup_ftLMGroupModeSizeCheck;
    static_assert(sizeof(BakeryLightmapGroup::ftLMGroupMode) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: BakeryLightmapGroup/RenderMode
    // [TokenAttribute] Offset: FFFFFFFF
    struct RenderMode/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: RenderMode
      constexpr RenderMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public BakeryLightmapGroup/RenderMode FullLighting
      static constexpr const int FullLighting = 0;
      // Get static field: static public BakeryLightmapGroup/RenderMode FullLighting
      static ::GlobalNamespace::BakeryLightmapGroup::RenderMode _get_FullLighting();
      // Set static field: static public BakeryLightmapGroup/RenderMode FullLighting
      static void _set_FullLighting(::GlobalNamespace::BakeryLightmapGroup::RenderMode value);
      // static field const value: static public BakeryLightmapGroup/RenderMode Indirect
      static constexpr const int Indirect = 1;
      // Get static field: static public BakeryLightmapGroup/RenderMode Indirect
      static ::GlobalNamespace::BakeryLightmapGroup::RenderMode _get_Indirect();
      // Set static field: static public BakeryLightmapGroup/RenderMode Indirect
      static void _set_Indirect(::GlobalNamespace::BakeryLightmapGroup::RenderMode value);
      // static field const value: static public BakeryLightmapGroup/RenderMode Shadowmask
      static constexpr const int Shadowmask = 2;
      // Get static field: static public BakeryLightmapGroup/RenderMode Shadowmask
      static ::GlobalNamespace::BakeryLightmapGroup::RenderMode _get_Shadowmask();
      // Set static field: static public BakeryLightmapGroup/RenderMode Shadowmask
      static void _set_Shadowmask(::GlobalNamespace::BakeryLightmapGroup::RenderMode value);
      // static field const value: static public BakeryLightmapGroup/RenderMode Subtractive
      static constexpr const int Subtractive = 3;
      // Get static field: static public BakeryLightmapGroup/RenderMode Subtractive
      static ::GlobalNamespace::BakeryLightmapGroup::RenderMode _get_Subtractive();
      // Set static field: static public BakeryLightmapGroup/RenderMode Subtractive
      static void _set_Subtractive(::GlobalNamespace::BakeryLightmapGroup::RenderMode value);
      // static field const value: static public BakeryLightmapGroup/RenderMode AmbientOcclusionOnly
      static constexpr const int AmbientOcclusionOnly = 4;
      // Get static field: static public BakeryLightmapGroup/RenderMode AmbientOcclusionOnly
      static ::GlobalNamespace::BakeryLightmapGroup::RenderMode _get_AmbientOcclusionOnly();
      // Set static field: static public BakeryLightmapGroup/RenderMode AmbientOcclusionOnly
      static void _set_AmbientOcclusionOnly(::GlobalNamespace::BakeryLightmapGroup::RenderMode value);
      // static field const value: static public BakeryLightmapGroup/RenderMode Auto
      static constexpr const int Auto = 1000;
      // Get static field: static public BakeryLightmapGroup/RenderMode Auto
      static ::GlobalNamespace::BakeryLightmapGroup::RenderMode _get_Auto();
      // Set static field: static public BakeryLightmapGroup/RenderMode Auto
      static void _set_Auto(::GlobalNamespace::BakeryLightmapGroup::RenderMode value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // BakeryLightmapGroup/RenderMode
    #pragma pack(pop)
    static check_size<sizeof(BakeryLightmapGroup::RenderMode), 0 + sizeof(int)> __GlobalNamespace_BakeryLightmapGroup_RenderModeSizeCheck;
    static_assert(sizeof(BakeryLightmapGroup::RenderMode) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: BakeryLightmapGroup/RenderDirMode
    // [TokenAttribute] Offset: FFFFFFFF
    struct RenderDirMode/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: RenderDirMode
      constexpr RenderDirMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public BakeryLightmapGroup/RenderDirMode None
      static constexpr const int None = 0;
      // Get static field: static public BakeryLightmapGroup/RenderDirMode None
      static ::GlobalNamespace::BakeryLightmapGroup::RenderDirMode _get_None();
      // Set static field: static public BakeryLightmapGroup/RenderDirMode None
      static void _set_None(::GlobalNamespace::BakeryLightmapGroup::RenderDirMode value);
      // static field const value: static public BakeryLightmapGroup/RenderDirMode BakedNormalMaps
      static constexpr const int BakedNormalMaps = 1;
      // Get static field: static public BakeryLightmapGroup/RenderDirMode BakedNormalMaps
      static ::GlobalNamespace::BakeryLightmapGroup::RenderDirMode _get_BakedNormalMaps();
      // Set static field: static public BakeryLightmapGroup/RenderDirMode BakedNormalMaps
      static void _set_BakedNormalMaps(::GlobalNamespace::BakeryLightmapGroup::RenderDirMode value);
      // static field const value: static public BakeryLightmapGroup/RenderDirMode DominantDirection
      static constexpr const int DominantDirection = 2;
      // Get static field: static public BakeryLightmapGroup/RenderDirMode DominantDirection
      static ::GlobalNamespace::BakeryLightmapGroup::RenderDirMode _get_DominantDirection();
      // Set static field: static public BakeryLightmapGroup/RenderDirMode DominantDirection
      static void _set_DominantDirection(::GlobalNamespace::BakeryLightmapGroup::RenderDirMode value);
      // static field const value: static public BakeryLightmapGroup/RenderDirMode RNM
      static constexpr const int RNM = 3;
      // Get static field: static public BakeryLightmapGroup/RenderDirMode RNM
      static ::GlobalNamespace::BakeryLightmapGroup::RenderDirMode _get_RNM();
      // Set static field: static public BakeryLightmapGroup/RenderDirMode RNM
      static void _set_RNM(::GlobalNamespace::BakeryLightmapGroup::RenderDirMode value);
      // static field const value: static public BakeryLightmapGroup/RenderDirMode SH
      static constexpr const int SH = 4;
      // Get static field: static public BakeryLightmapGroup/RenderDirMode SH
      static ::GlobalNamespace::BakeryLightmapGroup::RenderDirMode _get_SH();
      // Set static field: static public BakeryLightmapGroup/RenderDirMode SH
      static void _set_SH(::GlobalNamespace::BakeryLightmapGroup::RenderDirMode value);
      // static field const value: static public BakeryLightmapGroup/RenderDirMode ProbeSH
      static constexpr const int ProbeSH = 5;
      // Get static field: static public BakeryLightmapGroup/RenderDirMode ProbeSH
      static ::GlobalNamespace::BakeryLightmapGroup::RenderDirMode _get_ProbeSH();
      // Set static field: static public BakeryLightmapGroup/RenderDirMode ProbeSH
      static void _set_ProbeSH(::GlobalNamespace::BakeryLightmapGroup::RenderDirMode value);
      // static field const value: static public BakeryLightmapGroup/RenderDirMode Auto
      static constexpr const int Auto = 1000;
      // Get static field: static public BakeryLightmapGroup/RenderDirMode Auto
      static ::GlobalNamespace::BakeryLightmapGroup::RenderDirMode _get_Auto();
      // Set static field: static public BakeryLightmapGroup/RenderDirMode Auto
      static void _set_Auto(::GlobalNamespace::BakeryLightmapGroup::RenderDirMode value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // BakeryLightmapGroup/RenderDirMode
    #pragma pack(pop)
    static check_size<sizeof(BakeryLightmapGroup::RenderDirMode), 0 + sizeof(int)> __GlobalNamespace_BakeryLightmapGroup_RenderDirModeSizeCheck;
    static_assert(sizeof(BakeryLightmapGroup::RenderDirMode) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: BakeryLightmapGroup/AtlasPacker
    // [TokenAttribute] Offset: FFFFFFFF
    struct AtlasPacker/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: AtlasPacker
      constexpr AtlasPacker(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public BakeryLightmapGroup/AtlasPacker Default
      static constexpr const int Default = 0;
      // Get static field: static public BakeryLightmapGroup/AtlasPacker Default
      static ::GlobalNamespace::BakeryLightmapGroup::AtlasPacker _get_Default();
      // Set static field: static public BakeryLightmapGroup/AtlasPacker Default
      static void _set_Default(::GlobalNamespace::BakeryLightmapGroup::AtlasPacker value);
      // static field const value: static public BakeryLightmapGroup/AtlasPacker xatlas
      static constexpr const int xatlas = 1;
      // Get static field: static public BakeryLightmapGroup/AtlasPacker xatlas
      static ::GlobalNamespace::BakeryLightmapGroup::AtlasPacker _get_xatlas();
      // Set static field: static public BakeryLightmapGroup/AtlasPacker xatlas
      static void _set_xatlas(::GlobalNamespace::BakeryLightmapGroup::AtlasPacker value);
      // static field const value: static public BakeryLightmapGroup/AtlasPacker Auto
      static constexpr const int Auto = 1000;
      // Get static field: static public BakeryLightmapGroup/AtlasPacker Auto
      static ::GlobalNamespace::BakeryLightmapGroup::AtlasPacker _get_Auto();
      // Set static field: static public BakeryLightmapGroup/AtlasPacker Auto
      static void _set_Auto(::GlobalNamespace::BakeryLightmapGroup::AtlasPacker value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // BakeryLightmapGroup/AtlasPacker
    #pragma pack(pop)
    static check_size<sizeof(BakeryLightmapGroup::AtlasPacker), 0 + sizeof(int)> __GlobalNamespace_BakeryLightmapGroup_AtlasPackerSizeCheck;
    static_assert(sizeof(BakeryLightmapGroup::AtlasPacker) == 0x4);
    public:
    // [RangeAttribute] Offset: 0xAE4B18
    // public System.Int32 resolution
    // Size: 0x4
    // Offset: 0x18
    int resolution;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 bitmask
    // Size: 0x4
    // Offset: 0x1C
    int bitmask;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 id
    // Size: 0x4
    // Offset: 0x20
    int id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 sortingID
    // Size: 0x4
    // Offset: 0x24
    int sortingID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean isImplicit
    // Size: 0x1
    // Offset: 0x28
    bool isImplicit;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isImplicit and: area
    char __padding4[0x3] = {};
    // public System.Single area
    // Size: 0x4
    // Offset: 0x2C
    float area;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 totalVertexCount
    // Size: 0x4
    // Offset: 0x30
    int totalVertexCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 vertexCounter
    // Size: 0x4
    // Offset: 0x34
    int vertexCounter;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 sceneLodLevel
    // Size: 0x4
    // Offset: 0x38
    int sceneLodLevel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: sceneLodLevel and: sceneName
    char __padding8[0x4] = {};
    // public System.String sceneName
    // Size: 0x8
    // Offset: 0x40
    ::StringW sceneName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean containsTerrains
    // Size: 0x1
    // Offset: 0x48
    bool containsTerrains;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean probes
    // Size: 0x1
    // Offset: 0x49
    bool probes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: probes and: mode
    char __padding11[0x2] = {};
    // public BakeryLightmapGroup/ftLMGroupMode mode
    // Size: 0x4
    // Offset: 0x4C
    ::GlobalNamespace::BakeryLightmapGroup::ftLMGroupMode mode;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BakeryLightmapGroup::ftLMGroupMode) == 0x4);
    // public BakeryLightmapGroup/RenderMode renderMode
    // Size: 0x4
    // Offset: 0x50
    ::GlobalNamespace::BakeryLightmapGroup::RenderMode renderMode;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BakeryLightmapGroup::RenderMode) == 0x4);
    // public BakeryLightmapGroup/RenderDirMode renderDirMode
    // Size: 0x4
    // Offset: 0x54
    ::GlobalNamespace::BakeryLightmapGroup::RenderDirMode renderDirMode;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BakeryLightmapGroup::RenderDirMode) == 0x4);
    // public BakeryLightmapGroup/AtlasPacker atlasPacker
    // Size: 0x4
    // Offset: 0x58
    ::GlobalNamespace::BakeryLightmapGroup::AtlasPacker atlasPacker;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BakeryLightmapGroup::AtlasPacker) == 0x4);
    // public System.Boolean computeSSS
    // Size: 0x1
    // Offset: 0x5C
    bool computeSSS;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: computeSSS and: sssSamples
    char __padding16[0x3] = {};
    // public System.Int32 sssSamples
    // Size: 0x4
    // Offset: 0x60
    int sssSamples;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single sssDensity
    // Size: 0x4
    // Offset: 0x64
    float sssDensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Color sssColor
    // Size: 0x10
    // Offset: 0x68
    ::UnityEngine::Color sssColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public System.Single sssScale
    // Size: 0x4
    // Offset: 0x78
    float sssScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single fakeShadowBias
    // Size: 0x4
    // Offset: 0x7C
    float fakeShadowBias;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean transparentSelfShadow
    // Size: 0x1
    // Offset: 0x80
    bool transparentSelfShadow;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean flipNormal
    // Size: 0x1
    // Offset: 0x81
    bool flipNormal;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: flipNormal and: parentName
    char __padding23[0x6] = {};
    // public System.String parentName
    // Size: 0x8
    // Offset: 0x88
    ::StringW parentName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String overridePath
    // Size: 0x8
    // Offset: 0x90
    ::StringW overridePath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean fixPos3D
    // Size: 0x1
    // Offset: 0x98
    bool fixPos3D;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fixPos3D and: voxelSize
    char __padding26[0x3] = {};
    // public UnityEngine.Vector3 voxelSize
    // Size: 0xC
    // Offset: 0x9C
    ::UnityEngine::Vector3 voxelSize;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Int32 passedFilter
    // Size: 0x4
    // Offset: 0xA8
    int passedFilter;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Int32 resolution
    [[deprecated("Use field access instead!")]] int& dyn_resolution();
    // Get instance field reference: public System.Int32 bitmask
    [[deprecated("Use field access instead!")]] int& dyn_bitmask();
    // Get instance field reference: public System.Int32 id
    [[deprecated("Use field access instead!")]] int& dyn_id();
    // Get instance field reference: public System.Int32 sortingID
    [[deprecated("Use field access instead!")]] int& dyn_sortingID();
    // Get instance field reference: public System.Boolean isImplicit
    [[deprecated("Use field access instead!")]] bool& dyn_isImplicit();
    // Get instance field reference: public System.Single area
    [[deprecated("Use field access instead!")]] float& dyn_area();
    // Get instance field reference: public System.Int32 totalVertexCount
    [[deprecated("Use field access instead!")]] int& dyn_totalVertexCount();
    // Get instance field reference: public System.Int32 vertexCounter
    [[deprecated("Use field access instead!")]] int& dyn_vertexCounter();
    // Get instance field reference: public System.Int32 sceneLodLevel
    [[deprecated("Use field access instead!")]] int& dyn_sceneLodLevel();
    // Get instance field reference: public System.String sceneName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_sceneName();
    // Get instance field reference: public System.Boolean containsTerrains
    [[deprecated("Use field access instead!")]] bool& dyn_containsTerrains();
    // Get instance field reference: public System.Boolean probes
    [[deprecated("Use field access instead!")]] bool& dyn_probes();
    // Get instance field reference: public BakeryLightmapGroup/ftLMGroupMode mode
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BakeryLightmapGroup::ftLMGroupMode& dyn_mode();
    // Get instance field reference: public BakeryLightmapGroup/RenderMode renderMode
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BakeryLightmapGroup::RenderMode& dyn_renderMode();
    // Get instance field reference: public BakeryLightmapGroup/RenderDirMode renderDirMode
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BakeryLightmapGroup::RenderDirMode& dyn_renderDirMode();
    // Get instance field reference: public BakeryLightmapGroup/AtlasPacker atlasPacker
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BakeryLightmapGroup::AtlasPacker& dyn_atlasPacker();
    // Get instance field reference: public System.Boolean computeSSS
    [[deprecated("Use field access instead!")]] bool& dyn_computeSSS();
    // Get instance field reference: public System.Int32 sssSamples
    [[deprecated("Use field access instead!")]] int& dyn_sssSamples();
    // Get instance field reference: public System.Single sssDensity
    [[deprecated("Use field access instead!")]] float& dyn_sssDensity();
    // Get instance field reference: public UnityEngine.Color sssColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_sssColor();
    // Get instance field reference: public System.Single sssScale
    [[deprecated("Use field access instead!")]] float& dyn_sssScale();
    // Get instance field reference: public System.Single fakeShadowBias
    [[deprecated("Use field access instead!")]] float& dyn_fakeShadowBias();
    // Get instance field reference: public System.Boolean transparentSelfShadow
    [[deprecated("Use field access instead!")]] bool& dyn_transparentSelfShadow();
    // Get instance field reference: public System.Boolean flipNormal
    [[deprecated("Use field access instead!")]] bool& dyn_flipNormal();
    // Get instance field reference: public System.String parentName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_parentName();
    // Get instance field reference: public System.String overridePath
    [[deprecated("Use field access instead!")]] ::StringW& dyn_overridePath();
    // Get instance field reference: public System.Boolean fixPos3D
    [[deprecated("Use field access instead!")]] bool& dyn_fixPos3D();
    // Get instance field reference: public UnityEngine.Vector3 voxelSize
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_voxelSize();
    // Get instance field reference: public System.Int32 passedFilter
    [[deprecated("Use field access instead!")]] int& dyn_passedFilter();
    // public BakeryLightmapGroupPlain GetPlainStruct()
    // Offset: 0x1B0C1DC
    ::GlobalNamespace::BakeryLightmapGroupPlain GetPlainStruct();
    // public System.Void .ctor()
    // Offset: 0x1B0C29C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BakeryLightmapGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BakeryLightmapGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BakeryLightmapGroup*, creationType>()));
    }
  }; // BakeryLightmapGroup
  #pragma pack(pop)
  static check_size<sizeof(BakeryLightmapGroup), 168 + sizeof(int)> __GlobalNamespace_BakeryLightmapGroupSizeCheck;
  static_assert(sizeof(BakeryLightmapGroup) == 0xAC);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BakeryLightmapGroup::AtlasPacker, "", "BakeryLightmapGroup/AtlasPacker");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BakeryLightmapGroup::RenderDirMode, "", "BakeryLightmapGroup/RenderDirMode");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BakeryLightmapGroup::RenderMode, "", "BakeryLightmapGroup/RenderMode");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BakeryLightmapGroup::ftLMGroupMode, "", "BakeryLightmapGroup/ftLMGroupMode");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BakeryLightmapGroup::GetPlainStruct
// Il2CppName: GetPlainStruct
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BakeryLightmapGroupPlain (GlobalNamespace::BakeryLightmapGroup::*)()>(&GlobalNamespace::BakeryLightmapGroup::GetPlainStruct)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BakeryLightmapGroup*), "GetPlainStruct", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BakeryLightmapGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
