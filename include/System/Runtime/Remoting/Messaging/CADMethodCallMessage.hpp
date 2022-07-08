// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.Messaging.CADMessageBase
#include "System/Runtime/Remoting/Messaging/CADMessageBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessage
  class IMessage;
  // Forward declaring type: IMethodCallMessage
  class IMethodCallMessage;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: CADMethodCallMessage
  class CADMethodCallMessage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::CADMethodCallMessage);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::CADMethodCallMessage*, "System.Runtime.Remoting.Messaging", "CADMethodCallMessage");
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.CADMethodCallMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class CADMethodCallMessage : public ::System::Runtime::Remoting::Messaging::CADMessageBase {
    public:
    public:
    // private System.String _uri
    // Size: 0x8
    // Offset: 0x38
    ::StringW uri;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return uri;
    }
    // Get instance field reference: private System.String _uri
    [[deprecated("Use field access instead!")]] ::StringW& dyn__uri();
    // System.String get_Uri()
    // Offset: 0xE8E550
    ::StringW get_Uri();
    // static System.Runtime.Remoting.Messaging.CADMethodCallMessage Create(System.Runtime.Remoting.Messaging.IMessage callMsg)
    // Offset: 0xE82C38
    static ::System::Runtime::Remoting::Messaging::CADMethodCallMessage* Create(::System::Runtime::Remoting::Messaging::IMessage* callMsg);
    // System.Void .ctor(System.Runtime.Remoting.Messaging.IMethodCallMessage callMsg)
    // Offset: 0xE8E558
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CADMethodCallMessage* New_ctor(::System::Runtime::Remoting::Messaging::IMethodCallMessage* callMsg) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Messaging::CADMethodCallMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CADMethodCallMessage*, creationType>(callMsg)));
    }
    // System.Collections.ArrayList GetArguments()
    // Offset: 0xE8E75C
    ::System::Collections::ArrayList* GetArguments();
    // System.Object[] GetArgs(System.Collections.ArrayList args)
    // Offset: 0xE8E838
    ::ArrayW<::Il2CppObject*> GetArgs(::System::Collections::ArrayList* args);
    // System.Int32 get_PropertiesCount()
    // Offset: 0xE8E848
    int get_PropertiesCount();
  }; // System.Runtime.Remoting.Messaging.CADMethodCallMessage
  #pragma pack(pop)
  static check_size<sizeof(CADMethodCallMessage), 56 + sizeof(::StringW)> __System_Runtime_Remoting_Messaging_CADMethodCallMessageSizeCheck;
  static_assert(sizeof(CADMethodCallMessage) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMethodCallMessage::get_Uri
// Il2CppName: get_Uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Messaging::CADMethodCallMessage::*)()>(&System::Runtime::Remoting::Messaging::CADMethodCallMessage::get_Uri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CADMethodCallMessage*), "get_Uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMethodCallMessage::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::CADMethodCallMessage* (*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&System::Runtime::Remoting::Messaging::CADMethodCallMessage::Create)> {
  static const MethodInfo* get() {
    static auto* callMsg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CADMethodCallMessage*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callMsg});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMethodCallMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMethodCallMessage::GetArguments
// Il2CppName: GetArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (System::Runtime::Remoting::Messaging::CADMethodCallMessage::*)()>(&System::Runtime::Remoting::Messaging::CADMethodCallMessage::GetArguments)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CADMethodCallMessage*), "GetArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMethodCallMessage::GetArgs
// Il2CppName: GetArgs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Runtime::Remoting::Messaging::CADMethodCallMessage::*)(::System::Collections::ArrayList*)>(&System::Runtime::Remoting::Messaging::CADMethodCallMessage::GetArgs)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CADMethodCallMessage*), "GetArgs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMethodCallMessage::get_PropertiesCount
// Il2CppName: get_PropertiesCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::Remoting::Messaging::CADMethodCallMessage::*)()>(&System::Runtime::Remoting::Messaging::CADMethodCallMessage::get_PropertiesCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CADMethodCallMessage*), "get_PropertiesCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
