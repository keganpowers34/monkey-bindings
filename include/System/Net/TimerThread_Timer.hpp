// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.TimerThread
#include "System/Net/TimerThread.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::TimerThread::Timer);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::TimerThread::Timer*, "System.Net", "TimerThread/Timer");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.TimerThread/Timer
  // [TokenAttribute] Offset: FFFFFFFF
  class TimerThread::Timer : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private readonly System.Int32 m_StartTimeMilliseconds
    // Size: 0x4
    // Offset: 0x10
    int m_StartTimeMilliseconds;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 m_DurationMilliseconds
    // Size: 0x4
    // Offset: 0x14
    int m_DurationMilliseconds;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private readonly System.Int32 m_StartTimeMilliseconds
    [[deprecated("Use field access instead!")]] int& dyn_m_StartTimeMilliseconds();
    // Get instance field reference: private readonly System.Int32 m_DurationMilliseconds
    [[deprecated("Use field access instead!")]] int& dyn_m_DurationMilliseconds();
    // System.Void .ctor(System.Int32 durationMilliseconds)
    // Offset: 0xC6F438
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimerThread::Timer* New_ctor(int durationMilliseconds) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::TimerThread::Timer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimerThread::Timer*, creationType>(durationMilliseconds)));
    }
    // System.Int32 get_Duration()
    // Offset: 0xC6F558
    int get_Duration();
    // System.Int32 get_StartTime()
    // Offset: 0xC6F560
    int get_StartTime();
    // System.Int32 get_Expiration()
    // Offset: 0xC6F568
    int get_Expiration();
    // System.Int32 get_TimeRemaining()
    // Offset: 0xC6F574
    int get_TimeRemaining();
    // System.Boolean Cancel()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Cancel();
    // System.Boolean get_HasExpired()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_HasExpired();
    // public System.Void Dispose()
    // Offset: 0xC6F694
    void Dispose();
  }; // System.Net.TimerThread/Timer
  #pragma pack(pop)
  static check_size<sizeof(TimerThread::Timer), 20 + sizeof(int)> __System_Net_TimerThread_TimerSizeCheck;
  static_assert(sizeof(TimerThread::Timer) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::TimerThread::Timer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::TimerThread::Timer::get_Duration
// Il2CppName: get_Duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::TimerThread::Timer::*)()>(&System::Net::TimerThread::Timer::get_Duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::TimerThread::Timer*), "get_Duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::TimerThread::Timer::get_StartTime
// Il2CppName: get_StartTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::TimerThread::Timer::*)()>(&System::Net::TimerThread::Timer::get_StartTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::TimerThread::Timer*), "get_StartTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::TimerThread::Timer::get_Expiration
// Il2CppName: get_Expiration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::TimerThread::Timer::*)()>(&System::Net::TimerThread::Timer::get_Expiration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::TimerThread::Timer*), "get_Expiration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::TimerThread::Timer::get_TimeRemaining
// Il2CppName: get_TimeRemaining
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::TimerThread::Timer::*)()>(&System::Net::TimerThread::Timer::get_TimeRemaining)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::TimerThread::Timer*), "get_TimeRemaining", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::TimerThread::Timer::Cancel
// Il2CppName: Cancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::TimerThread::Timer::*)()>(&System::Net::TimerThread::Timer::Cancel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::TimerThread::Timer*), "Cancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::TimerThread::Timer::get_HasExpired
// Il2CppName: get_HasExpired
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::TimerThread::Timer::*)()>(&System::Net::TimerThread::Timer::get_HasExpired)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::TimerThread::Timer*), "get_HasExpired", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::TimerThread::Timer::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::TimerThread::Timer::*)()>(&System::Net::TimerThread::Timer::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::TimerThread::Timer*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
