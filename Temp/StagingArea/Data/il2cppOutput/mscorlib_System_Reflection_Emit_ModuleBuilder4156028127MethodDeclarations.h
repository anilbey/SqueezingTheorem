#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t4156028127;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1646117627;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.Emit.TokenGenerator
struct TokenGenerator_t4150817334;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_AssemblyBuilder1646117627.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Reflection_Emit_ModuleBuilder4156028127.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"

// System.Void System.Reflection.Emit.ModuleBuilder::.ctor(System.Reflection.Emit.AssemblyBuilder,System.String,System.String,System.Boolean,System.Boolean)
extern "C"  void ModuleBuilder__ctor_m1395205506 (ModuleBuilder_t4156028127 * __this, AssemblyBuilder_t1646117627 * ___assb0, String_t* ___name1, String_t* ___fullyqname2, bool ___emitSymbolInfo3, bool ___transient4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::.cctor()
extern "C"  void ModuleBuilder__cctor_m2985766025 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::basic_init(System.Reflection.Emit.ModuleBuilder)
extern "C"  void ModuleBuilder_basic_init_m3993543327 (Il2CppObject * __this /* static, unused */, ModuleBuilder_t4156028127 * ___ab0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::set_wrappers_type(System.Reflection.Emit.ModuleBuilder,System.Type)
extern "C"  void ModuleBuilder_set_wrappers_type_m104357409 (Il2CppObject * __this /* static, unused */, ModuleBuilder_t4156028127 * ___mb0, Type_t * ___ab1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ModuleBuilder::IsTransient()
extern "C"  bool ModuleBuilder_IsTransient_m3442266478 (ModuleBuilder_t4156028127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C"  int32_t ModuleBuilder_get_next_table_index_m1552645388 (ModuleBuilder_t4156028127 * __this, Il2CppObject * ___obj0, int32_t ___table1, bool ___inc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.ModuleBuilder::GetTypes()
extern "C"  TypeU5BU5D_t1664964607* ModuleBuilder_GetTypes_m93550753 (ModuleBuilder_t4156028127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::getToken(System.Reflection.Emit.ModuleBuilder,System.Object)
extern "C"  int32_t ModuleBuilder_getToken_m972612049 (Il2CppObject * __this /* static, unused */, ModuleBuilder_t4156028127 * ___mb0, Il2CppObject * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::GetToken(System.Reflection.MemberInfo)
extern "C"  int32_t ModuleBuilder_GetToken_m4190668737 (ModuleBuilder_t4156028127 * __this, MemberInfo_t * ___member0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::RegisterToken(System.Object,System.Int32)
extern "C"  void ModuleBuilder_RegisterToken_m1388342515 (ModuleBuilder_t4156028127 * __this, Il2CppObject * ___obj0, int32_t ___token1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TokenGenerator System.Reflection.Emit.ModuleBuilder::GetTokenGenerator()
extern "C"  Il2CppObject * ModuleBuilder_GetTokenGenerator_m4006065550 (ModuleBuilder_t4156028127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ModuleBuilder::get_FileName()
extern "C"  String_t* ModuleBuilder_get_FileName_m1646923051 (ModuleBuilder_t4156028127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::CreateGlobalType()
extern "C"  void ModuleBuilder_CreateGlobalType_m2419987093 (ModuleBuilder_t4156028127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
