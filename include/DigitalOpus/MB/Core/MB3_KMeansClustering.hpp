// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Renderer
  class Renderer;
}
// Completed forward declares
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MB3_KMeansClustering
  class MB3_KMeansClustering;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB3_KMeansClustering);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB3_KMeansClustering*, "DigitalOpus.MB.Core", "MB3_KMeansClustering");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB3_KMeansClustering
  // [TokenAttribute] Offset: FFFFFFFF
  class MB3_KMeansClustering : public ::Il2CppObject {
    public:
    // Nested type: ::DigitalOpus::MB::Core::MB3_KMeansClustering::DataPoint
    class DataPoint;
    public:
    // private System.Collections.Generic.List`1<DigitalOpus.MB.Core.MB3_KMeansClustering/DataPoint> _normalizedDataToCluster
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_KMeansClustering::DataPoint*>* normalizedDataToCluster;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_KMeansClustering::DataPoint*>*) == 0x8);
    // private UnityEngine.Vector3[] _clusters
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::Vector3> clusters;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private System.Int32 _numberOfClusters
    // Size: 0x4
    // Offset: 0x20
    int numberOfClusters;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Collections.Generic.List`1<DigitalOpus.MB.Core.MB3_KMeansClustering/DataPoint> _normalizedDataToCluster
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_KMeansClustering::DataPoint*>*& dyn__normalizedDataToCluster();
    // Get instance field reference: private UnityEngine.Vector3[] _clusters
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn__clusters();
    // Get instance field reference: private System.Int32 _numberOfClusters
    [[deprecated("Use field access instead!")]] int& dyn__numberOfClusters();
    // public System.Void .ctor(System.Collections.Generic.List`1<UnityEngine.GameObject> gos, System.Int32 numClusters)
    // Offset: 0xC2324C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_KMeansClustering* New_ctor(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* gos, int numClusters) {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_KMeansClustering::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_KMeansClustering*, creationType>(gos, numClusters)));
    }
    // private System.Void InitializeCentroids()
    // Offset: 0xC2362C
    void InitializeCentroids();
    // private System.Boolean UpdateDataPointMeans(System.Boolean force)
    // Offset: 0xC23724
    bool UpdateDataPointMeans(bool force);
    // private System.Boolean AnyAreEmpty(System.Collections.Generic.List`1<DigitalOpus.MB.Core.MB3_KMeansClustering/DataPoint> data)
    // Offset: 0xC239C8
    bool AnyAreEmpty(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_KMeansClustering::DataPoint*>* data);
    // private System.Boolean UpdateClusterMembership()
    // Offset: 0xC23AE0
    bool UpdateClusterMembership();
    // private System.Single ElucidanDistance(DigitalOpus.MB.Core.MB3_KMeansClustering/DataPoint dataPoint, UnityEngine.Vector3 mean)
    // Offset: 0xC23CA8
    float ElucidanDistance(::DigitalOpus::MB::Core::MB3_KMeansClustering::DataPoint* dataPoint, ::UnityEngine::Vector3 mean);
    // private System.Int32 MinIndex(System.Single[] distances)
    // Offset: 0xC23D58
    int MinIndex(::ArrayW<float> distances);
    // public System.Collections.Generic.List`1<UnityEngine.Renderer> GetCluster(System.Int32 idx, out UnityEngine.Vector3 mean, out System.Single size)
    // Offset: 0xC23DC8
    ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* GetCluster(int idx, ByRef<::UnityEngine::Vector3> mean, ByRef<float> size);
    // public System.Void Cluster()
    // Offset: 0xC240E4
    void Cluster();
  }; // DigitalOpus.MB.Core.MB3_KMeansClustering
  #pragma pack(pop)
  static check_size<sizeof(MB3_KMeansClustering), 32 + sizeof(int)> __DigitalOpus_MB_Core_MB3_KMeansClusteringSizeCheck;
  static_assert(sizeof(MB3_KMeansClustering) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_KMeansClustering::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_KMeansClustering::InitializeCentroids
// Il2CppName: InitializeCentroids
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB3_KMeansClustering::*)()>(&DigitalOpus::MB::Core::MB3_KMeansClustering::InitializeCentroids)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_KMeansClustering*), "InitializeCentroids", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_KMeansClustering::UpdateDataPointMeans
// Il2CppName: UpdateDataPointMeans
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MB3_KMeansClustering::*)(bool)>(&DigitalOpus::MB::Core::MB3_KMeansClustering::UpdateDataPointMeans)> {
  static const MethodInfo* get() {
    static auto* force = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_KMeansClustering*), "UpdateDataPointMeans", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{force});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_KMeansClustering::AnyAreEmpty
// Il2CppName: AnyAreEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MB3_KMeansClustering::*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_KMeansClustering::DataPoint*>*)>(&DigitalOpus::MB::Core::MB3_KMeansClustering::AnyAreEmpty)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_KMeansClustering/DataPoint")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_KMeansClustering*), "AnyAreEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_KMeansClustering::UpdateClusterMembership
// Il2CppName: UpdateClusterMembership
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MB3_KMeansClustering::*)()>(&DigitalOpus::MB::Core::MB3_KMeansClustering::UpdateClusterMembership)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_KMeansClustering*), "UpdateClusterMembership", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_KMeansClustering::ElucidanDistance
// Il2CppName: ElucidanDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (DigitalOpus::MB::Core::MB3_KMeansClustering::*)(::DigitalOpus::MB::Core::MB3_KMeansClustering::DataPoint*, ::UnityEngine::Vector3)>(&DigitalOpus::MB::Core::MB3_KMeansClustering::ElucidanDistance)> {
  static const MethodInfo* get() {
    static auto* dataPoint = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_KMeansClustering/DataPoint")->byval_arg;
    static auto* mean = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_KMeansClustering*), "ElucidanDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dataPoint, mean});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_KMeansClustering::MinIndex
// Il2CppName: MinIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (DigitalOpus::MB::Core::MB3_KMeansClustering::*)(::ArrayW<float>)>(&DigitalOpus::MB::Core::MB3_KMeansClustering::MinIndex)> {
  static const MethodInfo* get() {
    static auto* distances = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_KMeansClustering*), "MinIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{distances});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_KMeansClustering::GetCluster
// Il2CppName: GetCluster
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* (DigitalOpus::MB::Core::MB3_KMeansClustering::*)(int, ByRef<::UnityEngine::Vector3>, ByRef<float>)>(&DigitalOpus::MB::Core::MB3_KMeansClustering::GetCluster)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* mean = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_KMeansClustering*), "GetCluster", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx, mean, size});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_KMeansClustering::Cluster
// Il2CppName: Cluster
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB3_KMeansClustering::*)()>(&DigitalOpus::MB::Core::MB3_KMeansClustering::Cluster)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_KMeansClustering*), "Cluster", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
