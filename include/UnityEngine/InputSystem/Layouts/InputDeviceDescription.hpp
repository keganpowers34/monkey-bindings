// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::Layouts
namespace UnityEngine::InputSystem::Layouts {
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.InputSystem.Layouts
namespace UnityEngine::InputSystem::Layouts {
  // Forward declaring type: InputDeviceDescription
  struct InputDeviceDescription;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputDeviceDescription, "UnityEngine.InputSystem.Layouts", "InputDeviceDescription");
// Type namespace: UnityEngine.InputSystem.Layouts
namespace UnityEngine::InputSystem::Layouts {
  // Size: 0x38
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.Layouts.InputDeviceDescription
  // [TokenAttribute] Offset: FFFFFFFF
  struct InputDeviceDescription/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*/ {
    public:
    // Nested type: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription::DeviceDescriptionJson
    struct DeviceDescriptionJson;
    public:
    // private System.String m_InterfaceName
    // Size: 0x8
    // Offset: 0x0
    ::StringW m_InterfaceName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String m_DeviceClass
    // Size: 0x8
    // Offset: 0x8
    ::StringW m_DeviceClass;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String m_Manufacturer
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_Manufacturer;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String m_Product
    // Size: 0x8
    // Offset: 0x18
    ::StringW m_Product;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String m_Serial
    // Size: 0x8
    // Offset: 0x20
    ::StringW m_Serial;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String m_Version
    // Size: 0x8
    // Offset: 0x28
    ::StringW m_Version;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String m_Capabilities
    // Size: 0x8
    // Offset: 0x30
    ::StringW m_Capabilities;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating value type constructor for type: InputDeviceDescription
    constexpr InputDeviceDescription(::StringW m_InterfaceName_ = {}, ::StringW m_DeviceClass_ = {}, ::StringW m_Manufacturer_ = {}, ::StringW m_Product_ = {}, ::StringW m_Serial_ = {}, ::StringW m_Version_ = {}, ::StringW m_Capabilities_ = {}) noexcept : m_InterfaceName{m_InterfaceName_}, m_DeviceClass{m_DeviceClass_}, m_Manufacturer{m_Manufacturer_}, m_Product{m_Product_}, m_Serial{m_Serial_}, m_Version{m_Version_}, m_Capabilities{m_Capabilities_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>
    operator ::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*>(this);
    }
    // Get instance field reference: private System.String m_InterfaceName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_InterfaceName();
    // Get instance field reference: private System.String m_DeviceClass
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_DeviceClass();
    // Get instance field reference: private System.String m_Manufacturer
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_Manufacturer();
    // Get instance field reference: private System.String m_Product
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_Product();
    // Get instance field reference: private System.String m_Serial
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_Serial();
    // Get instance field reference: private System.String m_Version
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_Version();
    // Get instance field reference: private System.String m_Capabilities
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_Capabilities();
    // public System.String get_interfaceName()
    // Offset: 0x9A7F18
    ::StringW get_interfaceName();
    // public System.Void set_interfaceName(System.String value)
    // Offset: 0x9A7F20
    void set_interfaceName(::StringW value);
    // public System.String get_deviceClass()
    // Offset: 0x9A7F28
    ::StringW get_deviceClass();
    // public System.Void set_deviceClass(System.String value)
    // Offset: 0x9A7F30
    void set_deviceClass(::StringW value);
    // public System.String get_manufacturer()
    // Offset: 0x9A7F38
    ::StringW get_manufacturer();
    // public System.Void set_manufacturer(System.String value)
    // Offset: 0x9A7F40
    void set_manufacturer(::StringW value);
    // public System.String get_product()
    // Offset: 0x9A7F48
    ::StringW get_product();
    // public System.Void set_product(System.String value)
    // Offset: 0x9A7F50
    void set_product(::StringW value);
    // public System.String get_serial()
    // Offset: 0x9A7F58
    ::StringW get_serial();
    // public System.Void set_serial(System.String value)
    // Offset: 0x9A7F60
    void set_serial(::StringW value);
    // public System.String get_version()
    // Offset: 0x9A7F68
    ::StringW get_version();
    // public System.Void set_version(System.String value)
    // Offset: 0x9A7F70
    void set_version(::StringW value);
    // public System.String get_capabilities()
    // Offset: 0x9A7F78
    ::StringW get_capabilities();
    // public System.Void set_capabilities(System.String value)
    // Offset: 0x9A7F80
    void set_capabilities(::StringW value);
    // public System.Boolean get_empty()
    // Offset: 0x9A7F88
    bool get_empty();
    // public System.Boolean Equals(UnityEngine.InputSystem.Layouts.InputDeviceDescription other)
    // Offset: 0x9A7F98
    bool Equals(::UnityEngine::InputSystem::Layouts::InputDeviceDescription other);
    // public System.String ToJson()
    // Offset: 0x9A7FE8
    ::StringW ToJson();
    // static public UnityEngine.InputSystem.Layouts.InputDeviceDescription FromJson(System.String json)
    // Offset: 0x1097224
    static ::UnityEngine::InputSystem::Layouts::InputDeviceDescription FromJson(::StringW json);
    // static System.Boolean ComparePropertyToDeviceDescriptor(System.String propertyName, System.String propertyValue, System.String deviceDescriptor)
    // Offset: 0x10972EC
    static bool ComparePropertyToDeviceDescriptor(::StringW propertyName, ::StringW propertyValue, ::StringW deviceDescriptor);
    // public override System.String ToString()
    // Offset: 0x9A7F90
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x9A7FD8
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x9A7FE0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.InputSystem.Layouts.InputDeviceDescription
  #pragma pack(pop)
  static check_size<sizeof(InputDeviceDescription), 48 + sizeof(::StringW)> __UnityEngine_InputSystem_Layouts_InputDeviceDescriptionSizeCheck;
  static_assert(sizeof(InputDeviceDescription) == 0x38);
  // static public System.Boolean op_Equality(UnityEngine.InputSystem.Layouts.InputDeviceDescription left, UnityEngine.InputSystem.Layouts.InputDeviceDescription right)
  // Offset: 0x1097120
  bool operator ==(const ::UnityEngine::InputSystem::Layouts::InputDeviceDescription& left, const ::UnityEngine::InputSystem::Layouts::InputDeviceDescription& right);
  // static public System.Boolean op_Inequality(UnityEngine.InputSystem.Layouts.InputDeviceDescription left, UnityEngine.InputSystem.Layouts.InputDeviceDescription right)
  // Offset: 0x109715C
  bool operator !=(const ::UnityEngine::InputSystem::Layouts::InputDeviceDescription& left, const ::UnityEngine::InputSystem::Layouts::InputDeviceDescription& right);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_interfaceName
// Il2CppName: get_interfaceName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_interfaceName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceDescription), "get_interfaceName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_interfaceName
// Il2CppName: set_interfaceName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_interfaceName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceDescription), "set_interfaceName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_deviceClass
// Il2CppName: get_deviceClass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_deviceClass)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceDescription), "get_deviceClass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_deviceClass
// Il2CppName: set_deviceClass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_deviceClass)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceDescription), "set_deviceClass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_manufacturer
// Il2CppName: get_manufacturer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_manufacturer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceDescription), "get_manufacturer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_manufacturer
// Il2CppName: set_manufacturer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_manufacturer)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceDescription), "set_manufacturer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_product
// Il2CppName: get_product
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_product)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceDescription), "get_product", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_product
// Il2CppName: set_product
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_product)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceDescription), "set_product", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_serial
// Il2CppName: get_serial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_serial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceDescription), "get_serial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_serial
// Il2CppName: set_serial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_serial)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceDescription), "set_serial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_version
// Il2CppName: get_version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceDescription), "get_version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_version
// Il2CppName: set_version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_version)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceDescription), "set_version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_capabilities
// Il2CppName: get_capabilities
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_capabilities)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceDescription), "get_capabilities", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_capabilities
// Il2CppName: set_capabilities
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_capabilities)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceDescription), "set_capabilities", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_empty
// Il2CppName: get_empty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_empty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceDescription), "get_empty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Layouts", "InputDeviceDescription")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceDescription), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription::ToJson
// Il2CppName: ToJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::ToJson)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceDescription), "ToJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription::FromJson
// Il2CppName: FromJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceDescription (*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::FromJson)> {
  static const MethodInfo* get() {
    static auto* json = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceDescription), "FromJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{json});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription::ComparePropertyToDeviceDescriptor
// Il2CppName: ComparePropertyToDeviceDescriptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, ::StringW)>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::ComparePropertyToDeviceDescriptor)> {
  static const MethodInfo* get() {
    static auto* propertyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* propertyValue = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* deviceDescriptor = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceDescription), "ComparePropertyToDeviceDescriptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertyName, propertyValue, deviceDescriptor});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceDescription), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::Il2CppObject*)>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceDescription), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceDescription), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
