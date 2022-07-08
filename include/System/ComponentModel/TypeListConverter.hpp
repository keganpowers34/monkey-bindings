// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.TypeConverter
#include "System/ComponentModel/TypeConverter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ITypeDescriptorContext
  class ITypeDescriptorContext;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: TypeListConverter
  class TypeListConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::TypeListConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeListConverter*, "System.ComponentModel", "TypeListConverter");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.TypeListConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class TypeListConverter : public ::System::ComponentModel::TypeConverter {
    public:
    public:
    // private System.Type[] types
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::System::Type*> types;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Type*>) == 0x8);
    // private System.ComponentModel.TypeConverter/StandardValuesCollection values
    // Size: 0x8
    // Offset: 0x18
    ::System::ComponentModel::TypeConverter::StandardValuesCollection* values;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::TypeConverter::StandardValuesCollection*) == 0x8);
    public:
    // Get instance field reference: private System.Type[] types
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Type*>& dyn_types();
    // Get instance field reference: private System.ComponentModel.TypeConverter/StandardValuesCollection values
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::TypeConverter::StandardValuesCollection*& dyn_values();
    // protected System.Void .ctor(System.Type[] types)
    // Offset: 0x14C0EBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeListConverter* New_ctor(::ArrayW<::System::Type*> types) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::TypeListConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeListConverter*, creationType>(types)));
    }
    // public override System.Boolean CanConvertFrom(System.ComponentModel.ITypeDescriptorContext context, System.Type sourceType)
    // Offset: 0x14C0F38
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Boolean TypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext context, System.Type sourceType)
    bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType);
    // public override System.Boolean CanConvertTo(System.ComponentModel.ITypeDescriptorContext context, System.Type destinationType)
    // Offset: 0x14C0FF8
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Boolean TypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext context, System.Type destinationType)
    bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType);
    // public override System.Object ConvertFrom(System.ComponentModel.ITypeDescriptorContext context, System.Globalization.CultureInfo culture, System.Object value)
    // Offset: 0x14C10B8
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Object TypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext context, System.Globalization.CultureInfo culture, System.Object value)
    ::Il2CppObject* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::Il2CppObject* value);
    // public override System.Object ConvertTo(System.ComponentModel.ITypeDescriptorContext context, System.Globalization.CultureInfo culture, System.Object value, System.Type destinationType)
    // Offset: 0x14C11E4
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Object TypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext context, System.Globalization.CultureInfo culture, System.Object value, System.Type destinationType)
    ::Il2CppObject* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::Il2CppObject* value, ::System::Type* destinationType);
    // public override System.ComponentModel.TypeConverter/StandardValuesCollection GetStandardValues(System.ComponentModel.ITypeDescriptorContext context)
    // Offset: 0x14C1598
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.ComponentModel.TypeConverter/StandardValuesCollection TypeConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext context)
    ::System::ComponentModel::TypeConverter::StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context);
    // public override System.Boolean GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext context)
    // Offset: 0x14C1658
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Boolean TypeConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext context)
    bool GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context);
    // public override System.Boolean GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext context)
    // Offset: 0x14C1660
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Boolean TypeConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext context)
    bool GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context);
  }; // System.ComponentModel.TypeListConverter
  #pragma pack(pop)
  static check_size<sizeof(TypeListConverter), 24 + sizeof(::System::ComponentModel::TypeConverter::StandardValuesCollection*)> __System_ComponentModel_TypeListConverterSizeCheck;
  static_assert(sizeof(TypeListConverter) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::TypeListConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::TypeListConverter::CanConvertFrom
// Il2CppName: CanConvertFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::TypeListConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(&System::ComponentModel::TypeListConverter::CanConvertFrom)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    static auto* sourceType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeListConverter*), "CanConvertFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, sourceType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeListConverter::CanConvertTo
// Il2CppName: CanConvertTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::TypeListConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(&System::ComponentModel::TypeListConverter::CanConvertTo)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeListConverter*), "CanConvertTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, destinationType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeListConverter::ConvertFrom
// Il2CppName: ConvertFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::TypeListConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::Il2CppObject*)>(&System::ComponentModel::TypeListConverter::ConvertFrom)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeListConverter*), "ConvertFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, culture, value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeListConverter::ConvertTo
// Il2CppName: ConvertTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::TypeListConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::Il2CppObject*, ::System::Type*)>(&System::ComponentModel::TypeListConverter::ConvertTo)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeListConverter*), "ConvertTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, culture, value, destinationType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeListConverter::GetStandardValues
// Il2CppName: GetStandardValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter::StandardValuesCollection* (System::ComponentModel::TypeListConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(&System::ComponentModel::TypeListConverter::GetStandardValues)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeListConverter*), "GetStandardValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeListConverter::GetStandardValuesExclusive
// Il2CppName: GetStandardValuesExclusive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::TypeListConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(&System::ComponentModel::TypeListConverter::GetStandardValuesExclusive)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeListConverter*), "GetStandardValuesExclusive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeListConverter::GetStandardValuesSupported
// Il2CppName: GetStandardValuesSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::TypeListConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(&System::ComponentModel::TypeListConverter::GetStandardValuesSupported)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeListConverter*), "GetStandardValuesSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
