// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.IComponent
#include "System/ComponentModel/IComponent.hpp"
// Including type: System.IServiceProvider
#include "System/IServiceProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ISite
  class ISite;
  // Forward declaring type: EventHandlerList
  class EventHandlerList;
  // Forward declaring type: IContainer
  class IContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: EventHandler
  class EventHandler;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: MarshalByValueComponent
  class MarshalByValueComponent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::MarshalByValueComponent);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::MarshalByValueComponent*, "System.ComponentModel", "MarshalByValueComponent");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.MarshalByValueComponent
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: A5EDD4
  // [DesignerAttribute] Offset: A5EDD4
  // [TypeConverterAttribute] Offset: A5EDD4
  // [DesignerCategoryAttribute] Offset: A5EDD4
  class MarshalByValueComponent : public ::Il2CppObject/*, public ::System::ComponentModel::IComponent, public ::System::IServiceProvider*/ {
    public:
    public:
    // private System.ComponentModel.ISite site
    // Size: 0x8
    // Offset: 0x10
    ::System::ComponentModel::ISite* site;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::ISite*) == 0x8);
    // private System.ComponentModel.EventHandlerList events
    // Size: 0x8
    // Offset: 0x18
    ::System::ComponentModel::EventHandlerList* events;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::EventHandlerList*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::ComponentModel::IComponent
    operator ::System::ComponentModel::IComponent() noexcept {
      return *reinterpret_cast<::System::ComponentModel::IComponent*>(this);
    }
    // Creating interface conversion operator: operator ::System::IServiceProvider
    operator ::System::IServiceProvider() noexcept {
      return *reinterpret_cast<::System::IServiceProvider*>(this);
    }
    // Get static field: static private readonly System.Object EventDisposed
    static ::Il2CppObject* _get_EventDisposed();
    // Set static field: static private readonly System.Object EventDisposed
    static void _set_EventDisposed(::Il2CppObject* value);
    // Get instance field reference: private System.ComponentModel.ISite site
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::ISite*& dyn_site();
    // Get instance field reference: private System.ComponentModel.EventHandlerList events
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::EventHandlerList*& dyn_events();
    // public System.Void .ctor()
    // Offset: 0x118EA1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MarshalByValueComponent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::MarshalByValueComponent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MarshalByValueComponent*, creationType>()));
    }
    // public System.Void add_Disposed(System.EventHandler value)
    // Offset: 0x118EA98
    void add_Disposed(::System::EventHandler* value);
    // public System.Void remove_Disposed(System.EventHandler value)
    // Offset: 0x118EB9C
    void remove_Disposed(::System::EventHandler* value);
    // protected System.ComponentModel.EventHandlerList get_Events()
    // Offset: 0x118EB30
    ::System::ComponentModel::EventHandlerList* get_Events();
    // public System.ComponentModel.ISite get_Site()
    // Offset: 0x118EC34
    ::System::ComponentModel::ISite* get_Site();
    // public System.Void set_Site(System.ComponentModel.ISite value)
    // Offset: 0x118EC3C
    void set_Site(::System::ComponentModel::ISite* value);
    // public System.Void Dispose()
    // Offset: 0x118EC44
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x118ECC0
    void Dispose(bool disposing);
    // public System.ComponentModel.IContainer get_Container()
    // Offset: 0x118EFA4
    ::System::ComponentModel::IContainer* get_Container();
    // public System.Object GetService(System.Type service)
    // Offset: 0x118F064
    ::Il2CppObject* GetService(::System::Type* service);
    // public System.Boolean get_DesignMode()
    // Offset: 0x118F134
    bool get_DesignMode();
    // static private System.Void .cctor()
    // Offset: 0x118F31C
    static void _cctor();
    // protected override System.Void Finalize()
    // Offset: 0x118EA24
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public override System.String ToString()
    // Offset: 0x118F1F4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.ComponentModel.MarshalByValueComponent
  #pragma pack(pop)
  static check_size<sizeof(MarshalByValueComponent), 24 + sizeof(::System::ComponentModel::EventHandlerList*)> __System_ComponentModel_MarshalByValueComponentSizeCheck;
  static_assert(sizeof(MarshalByValueComponent) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::MarshalByValueComponent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::MarshalByValueComponent::add_Disposed
// Il2CppName: add_Disposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::MarshalByValueComponent::*)(::System::EventHandler*)>(&System::ComponentModel::MarshalByValueComponent::add_Disposed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "EventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MarshalByValueComponent*), "add_Disposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::MarshalByValueComponent::remove_Disposed
// Il2CppName: remove_Disposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::MarshalByValueComponent::*)(::System::EventHandler*)>(&System::ComponentModel::MarshalByValueComponent::remove_Disposed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "EventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MarshalByValueComponent*), "remove_Disposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::MarshalByValueComponent::get_Events
// Il2CppName: get_Events
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventHandlerList* (System::ComponentModel::MarshalByValueComponent::*)()>(&System::ComponentModel::MarshalByValueComponent::get_Events)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MarshalByValueComponent*), "get_Events", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::MarshalByValueComponent::get_Site
// Il2CppName: get_Site
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ISite* (System::ComponentModel::MarshalByValueComponent::*)()>(&System::ComponentModel::MarshalByValueComponent::get_Site)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MarshalByValueComponent*), "get_Site", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::MarshalByValueComponent::set_Site
// Il2CppName: set_Site
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::MarshalByValueComponent::*)(::System::ComponentModel::ISite*)>(&System::ComponentModel::MarshalByValueComponent::set_Site)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ISite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MarshalByValueComponent*), "set_Site", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::MarshalByValueComponent::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::MarshalByValueComponent::*)()>(&System::ComponentModel::MarshalByValueComponent::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MarshalByValueComponent*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::MarshalByValueComponent::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::MarshalByValueComponent::*)(bool)>(&System::ComponentModel::MarshalByValueComponent::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MarshalByValueComponent*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::MarshalByValueComponent::get_Container
// Il2CppName: get_Container
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::IContainer* (System::ComponentModel::MarshalByValueComponent::*)()>(&System::ComponentModel::MarshalByValueComponent::get_Container)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MarshalByValueComponent*), "get_Container", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::MarshalByValueComponent::GetService
// Il2CppName: GetService
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::MarshalByValueComponent::*)(::System::Type*)>(&System::ComponentModel::MarshalByValueComponent::GetService)> {
  static const MethodInfo* get() {
    static auto* service = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MarshalByValueComponent*), "GetService", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{service});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::MarshalByValueComponent::get_DesignMode
// Il2CppName: get_DesignMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::MarshalByValueComponent::*)()>(&System::ComponentModel::MarshalByValueComponent::get_DesignMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MarshalByValueComponent*), "get_DesignMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::MarshalByValueComponent::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::MarshalByValueComponent::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MarshalByValueComponent*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::MarshalByValueComponent::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::MarshalByValueComponent::*)()>(&System::ComponentModel::MarshalByValueComponent::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MarshalByValueComponent*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::MarshalByValueComponent::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::MarshalByValueComponent::*)()>(&System::ComponentModel::MarshalByValueComponent::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MarshalByValueComponent*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
