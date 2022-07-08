// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw
#include "Microsoft/Win32/UnsafeNativeMethods_ManifestEtw.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::TRACE_QUERY_INFO_CLASS, "Microsoft.Win32", "UnsafeNativeMethods/ManifestEtw/TRACE_QUERY_INFO_CLASS");
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_QUERY_INFO_CLASS
  // [TokenAttribute] Offset: FFFFFFFF
  struct UnsafeNativeMethods_ManifestEtw::TRACE_QUERY_INFO_CLASS/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TRACE_QUERY_INFO_CLASS
    constexpr TRACE_QUERY_INFO_CLASS(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_QUERY_INFO_CLASS TraceGuidQueryList
    static constexpr const int TraceGuidQueryList = 0;
    // Get static field: static public Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_QUERY_INFO_CLASS TraceGuidQueryList
    static ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::TRACE_QUERY_INFO_CLASS _get_TraceGuidQueryList();
    // Set static field: static public Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_QUERY_INFO_CLASS TraceGuidQueryList
    static void _set_TraceGuidQueryList(::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::TRACE_QUERY_INFO_CLASS value);
    // static field const value: static public Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_QUERY_INFO_CLASS TraceGuidQueryInfo
    static constexpr const int TraceGuidQueryInfo = 1;
    // Get static field: static public Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_QUERY_INFO_CLASS TraceGuidQueryInfo
    static ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::TRACE_QUERY_INFO_CLASS _get_TraceGuidQueryInfo();
    // Set static field: static public Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_QUERY_INFO_CLASS TraceGuidQueryInfo
    static void _set_TraceGuidQueryInfo(::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::TRACE_QUERY_INFO_CLASS value);
    // static field const value: static public Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_QUERY_INFO_CLASS TraceGuidQueryProcess
    static constexpr const int TraceGuidQueryProcess = 2;
    // Get static field: static public Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_QUERY_INFO_CLASS TraceGuidQueryProcess
    static ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::TRACE_QUERY_INFO_CLASS _get_TraceGuidQueryProcess();
    // Set static field: static public Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_QUERY_INFO_CLASS TraceGuidQueryProcess
    static void _set_TraceGuidQueryProcess(::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::TRACE_QUERY_INFO_CLASS value);
    // static field const value: static public Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_QUERY_INFO_CLASS TraceStackTracingInfo
    static constexpr const int TraceStackTracingInfo = 3;
    // Get static field: static public Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_QUERY_INFO_CLASS TraceStackTracingInfo
    static ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::TRACE_QUERY_INFO_CLASS _get_TraceStackTracingInfo();
    // Set static field: static public Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_QUERY_INFO_CLASS TraceStackTracingInfo
    static void _set_TraceStackTracingInfo(::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::TRACE_QUERY_INFO_CLASS value);
    // static field const value: static public Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_QUERY_INFO_CLASS MaxTraceSetInfoClass
    static constexpr const int MaxTraceSetInfoClass = 4;
    // Get static field: static public Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_QUERY_INFO_CLASS MaxTraceSetInfoClass
    static ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::TRACE_QUERY_INFO_CLASS _get_MaxTraceSetInfoClass();
    // Set static field: static public Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_QUERY_INFO_CLASS MaxTraceSetInfoClass
    static void _set_MaxTraceSetInfoClass(::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::TRACE_QUERY_INFO_CLASS value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_QUERY_INFO_CLASS
  #pragma pack(pop)
  static check_size<sizeof(UnsafeNativeMethods_ManifestEtw::TRACE_QUERY_INFO_CLASS), 0 + sizeof(int)> __Microsoft_Win32_UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASSSizeCheck;
  static_assert(sizeof(UnsafeNativeMethods_ManifestEtw::TRACE_QUERY_INFO_CLASS) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
