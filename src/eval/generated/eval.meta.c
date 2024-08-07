// Copyright (c) 2024 Epic Games Tools
// Licensed under the MIT license (https://opensource.org/license/mit/)

//- GENERATED CODE

C_LINKAGE_BEGIN
U8 eval_expr_kind_child_counts[40] =
{
0,
2,
2,
1,
1,
2,
1,
1,
1,
1,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
3,
0,
0,
0,
0,
0,
0,
1,
2,
1,
2,
0,
};

String8 eval_expr_kind_strings[40] =
{
str8_lit_comp("Nil"),
str8_lit_comp("ArrayIndex"),
str8_lit_comp("MemberAccess"),
str8_lit_comp("Deref"),
str8_lit_comp("Address"),
str8_lit_comp("Cast"),
str8_lit_comp("Sizeof"),
str8_lit_comp("Neg"),
str8_lit_comp("LogNot"),
str8_lit_comp("BitNot"),
str8_lit_comp("Mul"),
str8_lit_comp("Div"),
str8_lit_comp("Mod"),
str8_lit_comp("Add"),
str8_lit_comp("Sub"),
str8_lit_comp("LShift"),
str8_lit_comp("RShift"),
str8_lit_comp("Less"),
str8_lit_comp("LsEq"),
str8_lit_comp("Grtr"),
str8_lit_comp("GrEq"),
str8_lit_comp("EqEq"),
str8_lit_comp("NtEq"),
str8_lit_comp("BitAnd"),
str8_lit_comp("BitXor"),
str8_lit_comp("BitOr"),
str8_lit_comp("LogAnd"),
str8_lit_comp("LogOr"),
str8_lit_comp("Ternary"),
str8_lit_comp("LeafBytecode"),
str8_lit_comp("LeafMember"),
str8_lit_comp("LeafU64"),
str8_lit_comp("LeafF64"),
str8_lit_comp("LeafF32"),
str8_lit_comp("TypeIdent"),
str8_lit_comp("Ptr"),
str8_lit_comp("Array"),
str8_lit_comp("Func"),
str8_lit_comp("Define"),
str8_lit_comp("LeafIdent"),
};

String8 eval_result_code_display_strings[11] =
{
str8_lit_comp(""),
str8_lit_comp("Cannot divide by zero."),
str8_lit_comp("Invalid operation."),
str8_lit_comp("Invalid operation types."),
str8_lit_comp("Failed memory read."),
str8_lit_comp("Failed register read."),
str8_lit_comp("Invalid frame base address."),
str8_lit_comp("Invalid module base address."),
str8_lit_comp("Invalid thread-local storage base address."),
str8_lit_comp("Insufficient evaluation machine stack space."),
str8_lit_comp("Malformed bytecode."),
};

String8 eval_expr_op_strings[40] =
{
str8_lit_comp(""),
str8_lit_comp("[]"),
str8_lit_comp("."),
str8_lit_comp("*"),
str8_lit_comp("&"),
str8_lit_comp("cast"),
str8_lit_comp("sizeof"),
str8_lit_comp("-"),
str8_lit_comp("!"),
str8_lit_comp("~"),
str8_lit_comp("*"),
str8_lit_comp("/"),
str8_lit_comp("%"),
str8_lit_comp("+"),
str8_lit_comp("-"),
str8_lit_comp("<<"),
str8_lit_comp(">>"),
str8_lit_comp("<"),
str8_lit_comp("<="),
str8_lit_comp(">"),
str8_lit_comp(">="),
str8_lit_comp("=="),
str8_lit_comp("!="),
str8_lit_comp("&"),
str8_lit_comp("^"),
str8_lit_comp("|"),
str8_lit_comp("&&"),
str8_lit_comp("||"),
str8_lit_comp("? "),
str8_lit_comp("bytecode"),
str8_lit_comp("member"),
str8_lit_comp("U64"),
str8_lit_comp("F64"),
str8_lit_comp("F32"),
str8_lit_comp("type_ident"),
str8_lit_comp("ptr"),
str8_lit_comp("array"),
str8_lit_comp("function"),
str8_lit_comp("="),
str8_lit_comp("leaf_ident"),
};

C_LINKAGE_END

