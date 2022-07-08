// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ExceptionArgument
#include "System/ExceptionArgument.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: ExceptionResource
  struct ExceptionResource;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: ThrowHelper
  class ThrowHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ThrowHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::ThrowHelper*, "System", "ThrowHelper");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ThrowHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class ThrowHelper : public ::Il2CppObject {
    public:
    // static System.Void ThrowArgumentNullException(System.ExceptionArgument argument)
    // Offset: 0xE26064
    static void ThrowArgumentNullException(::System::ExceptionArgument argument);
    // static private System.Exception CreateArgumentNullException(System.ExceptionArgument argument)
    // Offset: 0xE260B0
    static ::System::Exception* CreateArgumentNullException(::System::ExceptionArgument argument);
    // static System.Void ThrowArrayTypeMismatchException_ArrayTypeMustBeExactMatch(System.Type type)
    // Offset: 0xE2615C
    static void ThrowArrayTypeMismatchException_ArrayTypeMustBeExactMatch(::System::Type* type);
    // static private System.Exception CreateArrayTypeMismatchException_ArrayTypeMustBeExactMatch(System.Type type)
    // Offset: 0xE261A8
    static ::System::Exception* CreateArrayTypeMismatchException_ArrayTypeMustBeExactMatch(::System::Type* type);
    // static System.Void ThrowIndexOutOfRangeException()
    // Offset: 0xE2622C
    static void ThrowIndexOutOfRangeException();
    // static private System.Exception CreateIndexOutOfRangeException()
    // Offset: 0xE26270
    static ::System::Exception* CreateIndexOutOfRangeException();
    // static System.Void ThrowArgumentOutOfRangeException(System.ExceptionArgument argument)
    // Offset: 0xE262CC
    static void ThrowArgumentOutOfRangeException(::System::ExceptionArgument argument);
    // static private System.Exception CreateArgumentOutOfRangeException(System.ExceptionArgument argument)
    // Offset: 0xE26318
    static ::System::Exception* CreateArgumentOutOfRangeException(::System::ExceptionArgument argument);
    // static System.Void ThrowArgumentOutOfRangeException()
    // Offset: 0xE263C4
    static void ThrowArgumentOutOfRangeException();
    // static System.Void ThrowWrongValueTypeArgumentException(System.Object value, System.Type targetType)
    // Offset: 0xE264AC
    static void ThrowWrongValueTypeArgumentException(::Il2CppObject* value, ::System::Type* targetType);
    // static System.Void ThrowArgumentException(System.ExceptionResource resource)
    // Offset: 0xE265A4
    static void ThrowArgumentException(::System::ExceptionResource resource);
    // static System.Void ThrowArgumentOutOfRangeException(System.ExceptionArgument argument, System.ExceptionResource resource)
    // Offset: 0xE263D8
    static void ThrowArgumentOutOfRangeException(::System::ExceptionArgument argument, ::System::ExceptionResource resource);
    // static System.Void ThrowInvalidOperationException(System.ExceptionResource resource)
    // Offset: 0xE266FC
    static void ThrowInvalidOperationException(::System::ExceptionResource resource);
    // static System.Void ThrowNotSupportedException(System.ExceptionResource resource)
    // Offset: 0xE2677C
    static void ThrowNotSupportedException(::System::ExceptionResource resource);
    // static System.Void IfNullAndNullsAreIllegalThenThrow(System.Object value, System.ExceptionArgument argName)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void IfNullAndNullsAreIllegalThenThrow(::Il2CppObject* value, ::System::ExceptionArgument argName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ThrowHelper::IfNullAndNullsAreIllegalThenThrow");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System", "ThrowHelper", "IfNullAndNullsAreIllegalThenThrow", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(argName)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, value, argName);
    }
    // static System.String GetArgumentName(System.ExceptionArgument argument)
    // Offset: 0xE26690
    static ::StringW GetArgumentName(::System::ExceptionArgument argument);
    // static System.String GetResourceName(System.ExceptionResource resource)
    // Offset: 0xE26624
    static ::StringW GetResourceName(::System::ExceptionResource resource);
  }; // System.ThrowHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ThrowHelper::ThrowArgumentNullException
// Il2CppName: ThrowArgumentNullException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::ExceptionArgument)>(&System::ThrowHelper::ThrowArgumentNullException)> {
  static const MethodInfo* get() {
    static auto* argument = &::il2cpp_utils::GetClassFromName("System", "ExceptionArgument")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ThrowHelper*), "ThrowArgumentNullException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{argument});
  }
};
// Writing MetadataGetter for method: System::ThrowHelper::CreateArgumentNullException
// Il2CppName: CreateArgumentNullException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(::System::ExceptionArgument)>(&System::ThrowHelper::CreateArgumentNullException)> {
  static const MethodInfo* get() {
    static auto* argument = &::il2cpp_utils::GetClassFromName("System", "ExceptionArgument")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ThrowHelper*), "CreateArgumentNullException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{argument});
  }
};
// Writing MetadataGetter for method: System::ThrowHelper::ThrowArrayTypeMismatchException_ArrayTypeMustBeExactMatch
// Il2CppName: ThrowArrayTypeMismatchException_ArrayTypeMustBeExactMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*)>(&System::ThrowHelper::ThrowArrayTypeMismatchException_ArrayTypeMustBeExactMatch)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ThrowHelper*), "ThrowArrayTypeMismatchException_ArrayTypeMustBeExactMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::ThrowHelper::CreateArrayTypeMismatchException_ArrayTypeMustBeExactMatch
// Il2CppName: CreateArrayTypeMismatchException_ArrayTypeMustBeExactMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(::System::Type*)>(&System::ThrowHelper::CreateArrayTypeMismatchException_ArrayTypeMustBeExactMatch)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ThrowHelper*), "CreateArrayTypeMismatchException_ArrayTypeMustBeExactMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::ThrowHelper::ThrowIndexOutOfRangeException
// Il2CppName: ThrowIndexOutOfRangeException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ThrowHelper::ThrowIndexOutOfRangeException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ThrowHelper*), "ThrowIndexOutOfRangeException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ThrowHelper::CreateIndexOutOfRangeException
// Il2CppName: CreateIndexOutOfRangeException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)()>(&System::ThrowHelper::CreateIndexOutOfRangeException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ThrowHelper*), "CreateIndexOutOfRangeException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ThrowHelper::ThrowArgumentOutOfRangeException
// Il2CppName: ThrowArgumentOutOfRangeException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::ExceptionArgument)>(&System::ThrowHelper::ThrowArgumentOutOfRangeException)> {
  static const MethodInfo* get() {
    static auto* argument = &::il2cpp_utils::GetClassFromName("System", "ExceptionArgument")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ThrowHelper*), "ThrowArgumentOutOfRangeException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{argument});
  }
};
// Writing MetadataGetter for method: System::ThrowHelper::CreateArgumentOutOfRangeException
// Il2CppName: CreateArgumentOutOfRangeException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(::System::ExceptionArgument)>(&System::ThrowHelper::CreateArgumentOutOfRangeException)> {
  static const MethodInfo* get() {
    static auto* argument = &::il2cpp_utils::GetClassFromName("System", "ExceptionArgument")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ThrowHelper*), "CreateArgumentOutOfRangeException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{argument});
  }
};
// Writing MetadataGetter for method: System::ThrowHelper::ThrowArgumentOutOfRangeException
// Il2CppName: ThrowArgumentOutOfRangeException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ThrowHelper::ThrowArgumentOutOfRangeException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ThrowHelper*), "ThrowArgumentOutOfRangeException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ThrowHelper::ThrowWrongValueTypeArgumentException
// Il2CppName: ThrowWrongValueTypeArgumentException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::System::Type*)>(&System::ThrowHelper::ThrowWrongValueTypeArgumentException)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* targetType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ThrowHelper*), "ThrowWrongValueTypeArgumentException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, targetType});
  }
};
// Writing MetadataGetter for method: System::ThrowHelper::ThrowArgumentException
// Il2CppName: ThrowArgumentException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::ExceptionResource)>(&System::ThrowHelper::ThrowArgumentException)> {
  static const MethodInfo* get() {
    static auto* resource = &::il2cpp_utils::GetClassFromName("System", "ExceptionResource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ThrowHelper*), "ThrowArgumentException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resource});
  }
};
// Writing MetadataGetter for method: System::ThrowHelper::ThrowArgumentOutOfRangeException
// Il2CppName: ThrowArgumentOutOfRangeException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::ExceptionArgument, ::System::ExceptionResource)>(&System::ThrowHelper::ThrowArgumentOutOfRangeException)> {
  static const MethodInfo* get() {
    static auto* argument = &::il2cpp_utils::GetClassFromName("System", "ExceptionArgument")->byval_arg;
    static auto* resource = &::il2cpp_utils::GetClassFromName("System", "ExceptionResource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ThrowHelper*), "ThrowArgumentOutOfRangeException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{argument, resource});
  }
};
// Writing MetadataGetter for method: System::ThrowHelper::ThrowInvalidOperationException
// Il2CppName: ThrowInvalidOperationException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::ExceptionResource)>(&System::ThrowHelper::ThrowInvalidOperationException)> {
  static const MethodInfo* get() {
    static auto* resource = &::il2cpp_utils::GetClassFromName("System", "ExceptionResource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ThrowHelper*), "ThrowInvalidOperationException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resource});
  }
};
// Writing MetadataGetter for method: System::ThrowHelper::ThrowNotSupportedException
// Il2CppName: ThrowNotSupportedException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::ExceptionResource)>(&System::ThrowHelper::ThrowNotSupportedException)> {
  static const MethodInfo* get() {
    static auto* resource = &::il2cpp_utils::GetClassFromName("System", "ExceptionResource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ThrowHelper*), "ThrowNotSupportedException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resource});
  }
};
// Writing MetadataGetter for method: System::ThrowHelper::IfNullAndNullsAreIllegalThenThrow
// Il2CppName: IfNullAndNullsAreIllegalThenThrow
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::ThrowHelper::GetArgumentName
// Il2CppName: GetArgumentName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::ExceptionArgument)>(&System::ThrowHelper::GetArgumentName)> {
  static const MethodInfo* get() {
    static auto* argument = &::il2cpp_utils::GetClassFromName("System", "ExceptionArgument")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ThrowHelper*), "GetArgumentName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{argument});
  }
};
// Writing MetadataGetter for method: System::ThrowHelper::GetResourceName
// Il2CppName: GetResourceName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::ExceptionResource)>(&System::ThrowHelper::GetResourceName)> {
  static const MethodInfo* get() {
    static auto* resource = &::il2cpp_utils::GetClassFromName("System", "ExceptionResource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ThrowHelper*), "GetResourceName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resource});
  }
};
