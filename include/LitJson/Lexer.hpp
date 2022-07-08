// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LitJson
namespace LitJson {
  // Forward declaring type: FsmContext
  class FsmContext;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextReader
  class TextReader;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: LitJson
namespace LitJson {
  // Forward declaring type: Lexer
  class Lexer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LitJson::Lexer);
DEFINE_IL2CPP_ARG_TYPE(::LitJson::Lexer*, "LitJson", "Lexer");
// Type namespace: LitJson
namespace LitJson {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: LitJson.Lexer
  // [TokenAttribute] Offset: FFFFFFFF
  class Lexer : public ::Il2CppObject {
    public:
    // Nested type: ::LitJson::Lexer::StateHandler
    class StateHandler;
    public:
    // private System.Boolean allow_comments
    // Size: 0x1
    // Offset: 0x10
    bool allow_comments;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean allow_single_quoted_strings
    // Size: 0x1
    // Offset: 0x11
    bool allow_single_quoted_strings;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean end_of_input
    // Size: 0x1
    // Offset: 0x12
    bool end_of_input;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: end_of_input and: fsm_context
    char __padding2[0x5] = {};
    // private LitJson.FsmContext fsm_context
    // Size: 0x8
    // Offset: 0x18
    ::LitJson::FsmContext* fsm_context;
    // Field size check
    static_assert(sizeof(::LitJson::FsmContext*) == 0x8);
    // private System.Int32 input_buffer
    // Size: 0x4
    // Offset: 0x20
    int input_buffer;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 input_char
    // Size: 0x4
    // Offset: 0x24
    int input_char;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.IO.TextReader reader
    // Size: 0x8
    // Offset: 0x28
    ::System::IO::TextReader* reader;
    // Field size check
    static_assert(sizeof(::System::IO::TextReader*) == 0x8);
    // private System.Int32 state
    // Size: 0x4
    // Offset: 0x30
    int state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: state and: string_buffer
    char __padding7[0x4] = {};
    // private System.Text.StringBuilder string_buffer
    // Size: 0x8
    // Offset: 0x38
    ::System::Text::StringBuilder* string_buffer;
    // Field size check
    static_assert(sizeof(::System::Text::StringBuilder*) == 0x8);
    // private System.String string_value
    // Size: 0x8
    // Offset: 0x40
    ::StringW string_value;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 token
    // Size: 0x4
    // Offset: 0x48
    int token;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 unichar
    // Size: 0x4
    // Offset: 0x4C
    int unichar;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get static field: static private System.Int32[] fsm_return_table
    static ::ArrayW<int> _get_fsm_return_table();
    // Set static field: static private System.Int32[] fsm_return_table
    static void _set_fsm_return_table(::ArrayW<int> value);
    // Get static field: static private LitJson.Lexer/StateHandler[] fsm_handler_table
    static ::ArrayW<::LitJson::Lexer::StateHandler*> _get_fsm_handler_table();
    // Set static field: static private LitJson.Lexer/StateHandler[] fsm_handler_table
    static void _set_fsm_handler_table(::ArrayW<::LitJson::Lexer::StateHandler*> value);
    // Get instance field reference: private System.Boolean allow_comments
    [[deprecated("Use field access instead!")]] bool& dyn_allow_comments();
    // Get instance field reference: private System.Boolean allow_single_quoted_strings
    [[deprecated("Use field access instead!")]] bool& dyn_allow_single_quoted_strings();
    // Get instance field reference: private System.Boolean end_of_input
    [[deprecated("Use field access instead!")]] bool& dyn_end_of_input();
    // Get instance field reference: private LitJson.FsmContext fsm_context
    [[deprecated("Use field access instead!")]] ::LitJson::FsmContext*& dyn_fsm_context();
    // Get instance field reference: private System.Int32 input_buffer
    [[deprecated("Use field access instead!")]] int& dyn_input_buffer();
    // Get instance field reference: private System.Int32 input_char
    [[deprecated("Use field access instead!")]] int& dyn_input_char();
    // Get instance field reference: private System.IO.TextReader reader
    [[deprecated("Use field access instead!")]] ::System::IO::TextReader*& dyn_reader();
    // Get instance field reference: private System.Int32 state
    [[deprecated("Use field access instead!")]] int& dyn_state();
    // Get instance field reference: private System.Text.StringBuilder string_buffer
    [[deprecated("Use field access instead!")]] ::System::Text::StringBuilder*& dyn_string_buffer();
    // Get instance field reference: private System.String string_value
    [[deprecated("Use field access instead!")]] ::StringW& dyn_string_value();
    // Get instance field reference: private System.Int32 token
    [[deprecated("Use field access instead!")]] int& dyn_token();
    // Get instance field reference: private System.Int32 unichar
    [[deprecated("Use field access instead!")]] int& dyn_unichar();
    // public System.Boolean get_AllowComments()
    // Offset: 0x1BE3FE8
    bool get_AllowComments();
    // public System.Void set_AllowComments(System.Boolean value)
    // Offset: 0x1BE3FF0
    void set_AllowComments(bool value);
    // public System.Boolean get_AllowSingleQuotedStrings()
    // Offset: 0x1BE3FFC
    bool get_AllowSingleQuotedStrings();
    // public System.Void set_AllowSingleQuotedStrings(System.Boolean value)
    // Offset: 0x1BE4004
    void set_AllowSingleQuotedStrings(bool value);
    // public System.Boolean get_EndOfInput()
    // Offset: 0x1BE4010
    bool get_EndOfInput();
    // public System.Int32 get_Token()
    // Offset: 0x1BE4018
    int get_Token();
    // public System.String get_StringValue()
    // Offset: 0x1BE4020
    ::StringW get_StringValue();
    // static private System.Void .cctor()
    // Offset: 0x1BE4028
    static void _cctor();
    // public System.Void .ctor(System.IO.TextReader reader)
    // Offset: 0x1BE2E40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Lexer* New_ctor(::System::IO::TextReader* reader) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LitJson::Lexer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Lexer*, creationType>(reader)));
    }
    // static private System.Int32 HexValue(System.Int32 digit)
    // Offset: 0x1BE4968
    static int HexValue(int digit);
    // static private System.Void PopulateFsmTables()
    // Offset: 0x1BE402C
    static void PopulateFsmTables();
    // static private System.Char ProcessEscChar(System.Int32 esc_char)
    // Offset: 0x1BE49F4
    static ::Il2CppChar ProcessEscChar(int esc_char);
    // static private System.Boolean State1(LitJson.FsmContext ctx)
    // Offset: 0x1BE4AF4
    static bool State1(::LitJson::FsmContext* ctx);
    // static private System.Boolean State2(LitJson.FsmContext ctx)
    // Offset: 0x1BE4D04
    static bool State2(::LitJson::FsmContext* ctx);
    // static private System.Boolean State3(LitJson.FsmContext ctx)
    // Offset: 0x1BE4DB0
    static bool State3(::LitJson::FsmContext* ctx);
    // static private System.Boolean State4(LitJson.FsmContext ctx)
    // Offset: 0x1BE4EF0
    static bool State4(::LitJson::FsmContext* ctx);
    // static private System.Boolean State5(LitJson.FsmContext ctx)
    // Offset: 0x1BE4FF0
    static bool State5(::LitJson::FsmContext* ctx);
    // static private System.Boolean State6(LitJson.FsmContext ctx)
    // Offset: 0x1BE5074
    static bool State6(::LitJson::FsmContext* ctx);
    // static private System.Boolean State7(LitJson.FsmContext ctx)
    // Offset: 0x1BE5170
    static bool State7(::LitJson::FsmContext* ctx);
    // static private System.Boolean State8(LitJson.FsmContext ctx)
    // Offset: 0x1BE5208
    static bool State8(::LitJson::FsmContext* ctx);
    // static private System.Boolean State9(LitJson.FsmContext ctx)
    // Offset: 0x1BE52C8
    static bool State9(::LitJson::FsmContext* ctx);
    // static private System.Boolean State10(LitJson.FsmContext ctx)
    // Offset: 0x1BE5338
    static bool State10(::LitJson::FsmContext* ctx);
    // static private System.Boolean State11(LitJson.FsmContext ctx)
    // Offset: 0x1BE53A8
    static bool State11(::LitJson::FsmContext* ctx);
    // static private System.Boolean State12(LitJson.FsmContext ctx)
    // Offset: 0x1BE5418
    static bool State12(::LitJson::FsmContext* ctx);
    // static private System.Boolean State13(LitJson.FsmContext ctx)
    // Offset: 0x1BE5488
    static bool State13(::LitJson::FsmContext* ctx);
    // static private System.Boolean State14(LitJson.FsmContext ctx)
    // Offset: 0x1BE54F8
    static bool State14(::LitJson::FsmContext* ctx);
    // static private System.Boolean State15(LitJson.FsmContext ctx)
    // Offset: 0x1BE5568
    static bool State15(::LitJson::FsmContext* ctx);
    // static private System.Boolean State16(LitJson.FsmContext ctx)
    // Offset: 0x1BE55D8
    static bool State16(::LitJson::FsmContext* ctx);
    // static private System.Boolean State17(LitJson.FsmContext ctx)
    // Offset: 0x1BE5648
    static bool State17(::LitJson::FsmContext* ctx);
    // static private System.Boolean State18(LitJson.FsmContext ctx)
    // Offset: 0x1BE56B8
    static bool State18(::LitJson::FsmContext* ctx);
    // static private System.Boolean State19(LitJson.FsmContext ctx)
    // Offset: 0x1BE5728
    static bool State19(::LitJson::FsmContext* ctx);
    // static private System.Boolean State20(LitJson.FsmContext ctx)
    // Offset: 0x1BE57D4
    static bool State20(::LitJson::FsmContext* ctx);
    // static private System.Boolean State21(LitJson.FsmContext ctx)
    // Offset: 0x1BE5844
    static bool State21(::LitJson::FsmContext* ctx);
    // static private System.Boolean State22(LitJson.FsmContext ctx)
    // Offset: 0x1BE5990
    static bool State22(::LitJson::FsmContext* ctx);
    // static private System.Boolean State23(LitJson.FsmContext ctx)
    // Offset: 0x1BE5B14
    static bool State23(::LitJson::FsmContext* ctx);
    // static private System.Boolean State24(LitJson.FsmContext ctx)
    // Offset: 0x1BE5BC0
    static bool State24(::LitJson::FsmContext* ctx);
    // static private System.Boolean State25(LitJson.FsmContext ctx)
    // Offset: 0x1BE5C38
    static bool State25(::LitJson::FsmContext* ctx);
    // static private System.Boolean State26(LitJson.FsmContext ctx)
    // Offset: 0x1BE5CB8
    static bool State26(::LitJson::FsmContext* ctx);
    // static private System.Boolean State27(LitJson.FsmContext ctx)
    // Offset: 0x1BE5D24
    static bool State27(::LitJson::FsmContext* ctx);
    // static private System.Boolean State28(LitJson.FsmContext ctx)
    // Offset: 0x1BE5D90
    static bool State28(::LitJson::FsmContext* ctx);
    // private System.Boolean GetChar()
    // Offset: 0x1BE4CCC
    bool GetChar();
    // private System.Int32 NextChar()
    // Offset: 0x1BE5E0C
    int NextChar();
    // public System.Boolean NextToken()
    // Offset: 0x1BE34FC
    bool NextToken();
    // private System.Void UngetChar()
    // Offset: 0x1BE4EE4
    void UngetChar();
  }; // LitJson.Lexer
  #pragma pack(pop)
  static check_size<sizeof(Lexer), 76 + sizeof(int)> __LitJson_LexerSizeCheck;
  static_assert(sizeof(Lexer) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LitJson::Lexer::get_AllowComments
// Il2CppName: get_AllowComments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LitJson::Lexer::*)()>(&LitJson::Lexer::get_AllowComments)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "get_AllowComments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::set_AllowComments
// Il2CppName: set_AllowComments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::Lexer::*)(bool)>(&LitJson::Lexer::set_AllowComments)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "set_AllowComments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::get_AllowSingleQuotedStrings
// Il2CppName: get_AllowSingleQuotedStrings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LitJson::Lexer::*)()>(&LitJson::Lexer::get_AllowSingleQuotedStrings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "get_AllowSingleQuotedStrings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::set_AllowSingleQuotedStrings
// Il2CppName: set_AllowSingleQuotedStrings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::Lexer::*)(bool)>(&LitJson::Lexer::set_AllowSingleQuotedStrings)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "set_AllowSingleQuotedStrings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::get_EndOfInput
// Il2CppName: get_EndOfInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LitJson::Lexer::*)()>(&LitJson::Lexer::get_EndOfInput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "get_EndOfInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::get_Token
// Il2CppName: get_Token
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (LitJson::Lexer::*)()>(&LitJson::Lexer::get_Token)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "get_Token", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::get_StringValue
// Il2CppName: get_StringValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (LitJson::Lexer::*)()>(&LitJson::Lexer::get_StringValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "get_StringValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&LitJson::Lexer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LitJson::Lexer::HexValue
// Il2CppName: HexValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&LitJson::Lexer::HexValue)> {
  static const MethodInfo* get() {
    static auto* digit = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "HexValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{digit});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::PopulateFsmTables
// Il2CppName: PopulateFsmTables
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&LitJson::Lexer::PopulateFsmTables)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "PopulateFsmTables", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::ProcessEscChar
// Il2CppName: ProcessEscChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (*)(int)>(&LitJson::Lexer::ProcessEscChar)> {
  static const MethodInfo* get() {
    static auto* esc_char = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "ProcessEscChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{esc_char});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::State1
// Il2CppName: State1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::LitJson::FsmContext*)>(&LitJson::Lexer::State1)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("LitJson", "FsmContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "State1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::State2
// Il2CppName: State2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::LitJson::FsmContext*)>(&LitJson::Lexer::State2)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("LitJson", "FsmContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "State2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::State3
// Il2CppName: State3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::LitJson::FsmContext*)>(&LitJson::Lexer::State3)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("LitJson", "FsmContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "State3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::State4
// Il2CppName: State4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::LitJson::FsmContext*)>(&LitJson::Lexer::State4)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("LitJson", "FsmContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "State4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::State5
// Il2CppName: State5
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::LitJson::FsmContext*)>(&LitJson::Lexer::State5)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("LitJson", "FsmContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "State5", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::State6
// Il2CppName: State6
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::LitJson::FsmContext*)>(&LitJson::Lexer::State6)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("LitJson", "FsmContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "State6", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::State7
// Il2CppName: State7
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::LitJson::FsmContext*)>(&LitJson::Lexer::State7)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("LitJson", "FsmContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "State7", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::State8
// Il2CppName: State8
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::LitJson::FsmContext*)>(&LitJson::Lexer::State8)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("LitJson", "FsmContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "State8", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::State9
// Il2CppName: State9
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::LitJson::FsmContext*)>(&LitJson::Lexer::State9)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("LitJson", "FsmContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "State9", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::State10
// Il2CppName: State10
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::LitJson::FsmContext*)>(&LitJson::Lexer::State10)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("LitJson", "FsmContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "State10", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::State11
// Il2CppName: State11
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::LitJson::FsmContext*)>(&LitJson::Lexer::State11)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("LitJson", "FsmContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "State11", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::State12
// Il2CppName: State12
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::LitJson::FsmContext*)>(&LitJson::Lexer::State12)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("LitJson", "FsmContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "State12", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::State13
// Il2CppName: State13
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::LitJson::FsmContext*)>(&LitJson::Lexer::State13)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("LitJson", "FsmContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "State13", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::State14
// Il2CppName: State14
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::LitJson::FsmContext*)>(&LitJson::Lexer::State14)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("LitJson", "FsmContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "State14", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::State15
// Il2CppName: State15
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::LitJson::FsmContext*)>(&LitJson::Lexer::State15)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("LitJson", "FsmContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "State15", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::State16
// Il2CppName: State16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::LitJson::FsmContext*)>(&LitJson::Lexer::State16)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("LitJson", "FsmContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "State16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::State17
// Il2CppName: State17
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::LitJson::FsmContext*)>(&LitJson::Lexer::State17)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("LitJson", "FsmContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "State17", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::State18
// Il2CppName: State18
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::LitJson::FsmContext*)>(&LitJson::Lexer::State18)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("LitJson", "FsmContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "State18", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::State19
// Il2CppName: State19
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::LitJson::FsmContext*)>(&LitJson::Lexer::State19)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("LitJson", "FsmContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "State19", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::State20
// Il2CppName: State20
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::LitJson::FsmContext*)>(&LitJson::Lexer::State20)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("LitJson", "FsmContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "State20", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::State21
// Il2CppName: State21
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::LitJson::FsmContext*)>(&LitJson::Lexer::State21)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("LitJson", "FsmContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "State21", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::State22
// Il2CppName: State22
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::LitJson::FsmContext*)>(&LitJson::Lexer::State22)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("LitJson", "FsmContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "State22", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::State23
// Il2CppName: State23
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::LitJson::FsmContext*)>(&LitJson::Lexer::State23)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("LitJson", "FsmContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "State23", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::State24
// Il2CppName: State24
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::LitJson::FsmContext*)>(&LitJson::Lexer::State24)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("LitJson", "FsmContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "State24", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::State25
// Il2CppName: State25
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::LitJson::FsmContext*)>(&LitJson::Lexer::State25)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("LitJson", "FsmContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "State25", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::State26
// Il2CppName: State26
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::LitJson::FsmContext*)>(&LitJson::Lexer::State26)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("LitJson", "FsmContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "State26", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::State27
// Il2CppName: State27
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::LitJson::FsmContext*)>(&LitJson::Lexer::State27)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("LitJson", "FsmContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "State27", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::State28
// Il2CppName: State28
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::LitJson::FsmContext*)>(&LitJson::Lexer::State28)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("LitJson", "FsmContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "State28", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::GetChar
// Il2CppName: GetChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LitJson::Lexer::*)()>(&LitJson::Lexer::GetChar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "GetChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::NextChar
// Il2CppName: NextChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (LitJson::Lexer::*)()>(&LitJson::Lexer::NextChar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "NextChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::NextToken
// Il2CppName: NextToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LitJson::Lexer::*)()>(&LitJson::Lexer::NextToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "NextToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::Lexer::UngetChar
// Il2CppName: UngetChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::Lexer::*)()>(&LitJson::Lexer::UngetChar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::Lexer*), "UngetChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
