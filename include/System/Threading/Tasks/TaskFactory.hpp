// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Threading.Tasks.TaskCreationOptions
#include "System/Threading/Tasks/TaskCreationOptions.hpp"
// Including type: System.Threading.Tasks.TaskContinuationOptions
#include "System/Threading/Tasks/TaskContinuationOptions.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskScheduler
  class TaskScheduler;
  // Forward declaring type: Task
  class Task;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Func`5<T1, T2, T3, T4, TResult>
  template<typename T1, typename T2, typename T3, typename T4, typename TResult>
  class Func_5;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskFactory
  class TaskFactory;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::Tasks::TaskFactory);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskFactory*, "System.Threading.Tasks", "TaskFactory");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.TaskFactory
  // [TokenAttribute] Offset: FFFFFFFF
  class TaskFactory : public ::Il2CppObject {
    public:
    // Nested type: ::System::Threading::Tasks::TaskFactory::CompleteOnInvokePromise
    class CompleteOnInvokePromise;
    public:
    // private System.Threading.CancellationToken m_defaultCancellationToken
    // Size: 0x8
    // Offset: 0x10
    ::System::Threading::CancellationToken m_defaultCancellationToken;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    // private System.Threading.Tasks.TaskScheduler m_defaultScheduler
    // Size: 0x8
    // Offset: 0x18
    ::System::Threading::Tasks::TaskScheduler* m_defaultScheduler;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::TaskScheduler*) == 0x8);
    // private System.Threading.Tasks.TaskCreationOptions m_defaultCreationOptions
    // Size: 0x4
    // Offset: 0x20
    ::System::Threading::Tasks::TaskCreationOptions m_defaultCreationOptions;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::TaskCreationOptions) == 0x4);
    // private System.Threading.Tasks.TaskContinuationOptions m_defaultContinuationOptions
    // Size: 0x4
    // Offset: 0x24
    ::System::Threading::Tasks::TaskContinuationOptions m_defaultContinuationOptions;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::TaskContinuationOptions) == 0x4);
    public:
    // Get instance field reference: private System.Threading.CancellationToken m_defaultCancellationToken
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationToken& dyn_m_defaultCancellationToken();
    // Get instance field reference: private System.Threading.Tasks.TaskScheduler m_defaultScheduler
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::TaskScheduler*& dyn_m_defaultScheduler();
    // Get instance field reference: private System.Threading.Tasks.TaskCreationOptions m_defaultCreationOptions
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::TaskCreationOptions& dyn_m_defaultCreationOptions();
    // Get instance field reference: private System.Threading.Tasks.TaskContinuationOptions m_defaultContinuationOptions
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::TaskContinuationOptions& dyn_m_defaultContinuationOptions();
    // public System.Void .ctor(System.Threading.CancellationToken cancellationToken, System.Threading.Tasks.TaskCreationOptions creationOptions, System.Threading.Tasks.TaskContinuationOptions continuationOptions, System.Threading.Tasks.TaskScheduler scheduler)
    // Offset: 0xE1DB90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskFactory* New_ctor(::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions, ::System::Threading::Tasks::TaskScheduler* scheduler) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::TaskFactory::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskFactory*, creationType>(cancellationToken, creationOptions, continuationOptions, scheduler)));
    }
    // static System.Void CheckCreationOptions(System.Threading.Tasks.TaskCreationOptions creationOptions)
    // Offset: 0xE1DCF8
    static void CheckCreationOptions(::System::Threading::Tasks::TaskCreationOptions creationOptions);
    // public System.Threading.Tasks.Task StartNew(System.Action`1<System.Object> action, System.Object state, System.Threading.CancellationToken cancellationToken, System.Threading.Tasks.TaskCreationOptions creationOptions, System.Threading.Tasks.TaskScheduler scheduler)
    // Offset: 0xE1DD80
    ::System::Threading::Tasks::Task* StartNew(::System::Action_1<::Il2CppObject*>* action, ::Il2CppObject* state, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::TaskScheduler* scheduler);
    // public System.Threading.Tasks.Task FromAsync(System.Func`5<TArg1,TArg2,System.AsyncCallback,System.Object,System.IAsyncResult> beginMethod, System.Action`1<System.IAsyncResult> endMethod, TArg1 arg1, TArg2 arg2, System.Object state)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TArg1, class TArg2>
    ::System::Threading::Tasks::Task* FromAsync(::System::Func_5<TArg1, TArg2, ::System::AsyncCallback*, ::Il2CppObject*, ::System::IAsyncResult*>* beginMethod, ::System::Action_1<::System::IAsyncResult*>* endMethod, TArg1 arg1, TArg2 arg2, ::Il2CppObject* state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::TaskFactory::FromAsync");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromAsync", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(beginMethod), ::il2cpp_utils::ExtractType(endMethod), ::il2cpp_utils::ExtractType(arg1), ::il2cpp_utils::ExtractType(arg2), ::il2cpp_utils::ExtractType(state)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___generic__method, beginMethod, endMethod, arg1, arg2, state);
    }
    // public System.Threading.Tasks.Task FromAsync(System.Func`5<TArg1,TArg2,System.AsyncCallback,System.Object,System.IAsyncResult> beginMethod, System.Action`1<System.IAsyncResult> endMethod, TArg1 arg1, TArg2 arg2, System.Object state, System.Threading.Tasks.TaskCreationOptions creationOptions)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TArg1, class TArg2>
    ::System::Threading::Tasks::Task* FromAsync(::System::Func_5<TArg1, TArg2, ::System::AsyncCallback*, ::Il2CppObject*, ::System::IAsyncResult*>* beginMethod, ::System::Action_1<::System::IAsyncResult*>* endMethod, TArg1 arg1, TArg2 arg2, ::Il2CppObject* state, ::System::Threading::Tasks::TaskCreationOptions creationOptions) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::TaskFactory::FromAsync");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromAsync", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(beginMethod), ::il2cpp_utils::ExtractType(endMethod), ::il2cpp_utils::ExtractType(arg1), ::il2cpp_utils::ExtractType(arg2), ::il2cpp_utils::ExtractType(state), ::il2cpp_utils::ExtractType(creationOptions)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___generic__method, beginMethod, endMethod, arg1, arg2, state, creationOptions);
    }
    // static System.Void CheckFromAsyncOptions(System.Threading.Tasks.TaskCreationOptions creationOptions, System.Boolean hasBeginMethod)
    // Offset: 0xE1DE38
    static void CheckFromAsyncOptions(::System::Threading::Tasks::TaskCreationOptions creationOptions, bool hasBeginMethod);
    // static System.Threading.Tasks.Task`1<System.Threading.Tasks.Task> CommonCWAnyLogic(System.Collections.Generic.IList`1<System.Threading.Tasks.Task> tasks)
    // Offset: 0xE1BF00
    static ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>* CommonCWAnyLogic(::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>* tasks);
    // static System.Void CheckMultiTaskContinuationOptions(System.Threading.Tasks.TaskContinuationOptions continuationOptions)
    // Offset: 0xE1DBEC
    static void CheckMultiTaskContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions continuationOptions);
    // public System.Void .ctor()
    // Offset: 0xE1C37C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskFactory* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::TaskFactory::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskFactory*, creationType>()));
    }
  }; // System.Threading.Tasks.TaskFactory
  #pragma pack(pop)
  static check_size<sizeof(TaskFactory), 36 + sizeof(::System::Threading::Tasks::TaskContinuationOptions)> __System_Threading_Tasks_TaskFactorySizeCheck;
  static_assert(sizeof(TaskFactory) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::TaskFactory::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::Tasks::TaskFactory::CheckCreationOptions
// Il2CppName: CheckCreationOptions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::Tasks::TaskCreationOptions)>(&System::Threading::Tasks::TaskFactory::CheckCreationOptions)> {
  static const MethodInfo* get() {
    static auto* creationOptions = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "TaskCreationOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::TaskFactory*), "CheckCreationOptions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{creationOptions});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::TaskFactory::StartNew
// Il2CppName: StartNew
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Threading::Tasks::TaskFactory::*)(::System::Action_1<::Il2CppObject*>*, ::Il2CppObject*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::TaskScheduler*)>(&System::Threading::Tasks::TaskFactory::StartNew)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    static auto* creationOptions = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "TaskCreationOptions")->byval_arg;
    static auto* scheduler = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "TaskScheduler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::TaskFactory*), "StartNew", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, state, cancellationToken, creationOptions, scheduler});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::TaskFactory::FromAsync
// Il2CppName: FromAsync
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Threading::Tasks::TaskFactory::FromAsync
// Il2CppName: FromAsync
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Threading::Tasks::TaskFactory::CheckFromAsyncOptions
// Il2CppName: CheckFromAsyncOptions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::Tasks::TaskCreationOptions, bool)>(&System::Threading::Tasks::TaskFactory::CheckFromAsyncOptions)> {
  static const MethodInfo* get() {
    static auto* creationOptions = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "TaskCreationOptions")->byval_arg;
    static auto* hasBeginMethod = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::TaskFactory*), "CheckFromAsyncOptions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{creationOptions, hasBeginMethod});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::TaskFactory::CommonCWAnyLogic
// Il2CppName: CommonCWAnyLogic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>* (*)(::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>*)>(&System::Threading::Tasks::TaskFactory::CommonCWAnyLogic)> {
  static const MethodInfo* get() {
    static auto* tasks = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::TaskFactory*), "CommonCWAnyLogic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tasks});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::TaskFactory::CheckMultiTaskContinuationOptions
// Il2CppName: CheckMultiTaskContinuationOptions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::Tasks::TaskContinuationOptions)>(&System::Threading::Tasks::TaskFactory::CheckMultiTaskContinuationOptions)> {
  static const MethodInfo* get() {
    static auto* continuationOptions = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "TaskContinuationOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::TaskFactory*), "CheckMultiTaskContinuationOptions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{continuationOptions});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::TaskFactory::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
