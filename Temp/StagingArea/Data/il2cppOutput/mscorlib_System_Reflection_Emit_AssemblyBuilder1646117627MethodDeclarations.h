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

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1646117627;
// System.Reflection.AssemblyName
struct AssemblyName_t894705941;
// System.String
struct String_t;
// System.Security.PermissionSet
struct PermissionSet_t1941658161;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t4156028127;
// System.Reflection.Module[]
struct ModuleU5BU5D_t3593287923;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Reflection.Module
struct Module_t4282841206;
// System.Exception
struct Exception_t1927440687;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_AssemblyName894705941.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Reflection_Emit_AssemblyBuilderAcc1210911821.h"
#include "mscorlib_System_Reflection_Emit_AssemblyBuilder1646117627.h"
#include "mscorlib_System_Security_PermissionSet1941658161.h"

// System.Void System.Reflection.Emit.AssemblyBuilder::.ctor(System.Reflection.AssemblyName,System.String,System.Reflection.Emit.AssemblyBuilderAccess,System.Boolean)
extern "C"  void AssemblyBuilder__ctor_m1611900080 (AssemblyBuilder_t1646117627 * __this, AssemblyName_t894705941 * ___n0, String_t* ___directory1, int32_t ___access2, bool ___corlib_internal3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.AssemblyBuilder::basic_init(System.Reflection.Emit.AssemblyBuilder)
extern "C"  void AssemblyBuilder_basic_init_m3398634471 (Il2CppObject * __this /* static, unused */, AssemblyBuilder_t1646117627 * ___ab0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C"  String_t* AssemblyBuilder_get_Location_m554656855 (AssemblyBuilder_t1646117627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.AssemblyBuilder::AddPermissionRequests(System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet)
extern "C"  void AssemblyBuilder_AddPermissionRequests_m1188328356 (AssemblyBuilder_t1646117627 * __this, PermissionSet_t1941658161 * ___required0, PermissionSet_t1941658161 * ___optional1, PermissionSet_t1941658161 * ___refused2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.AssemblyBuilder::DefineDynamicModule(System.String)
extern "C"  ModuleBuilder_t4156028127 * AssemblyBuilder_DefineDynamicModule_m3694658763 (AssemblyBuilder_t1646117627 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.AssemblyBuilder::DefineDynamicModule(System.String,System.String,System.Boolean,System.Boolean)
extern "C"  ModuleBuilder_t4156028127 * AssemblyBuilder_DefineDynamicModule_m2213376157 (AssemblyBuilder_t1646117627 * __this, String_t* ___name0, String_t* ___fileName1, bool ___emitSymbolInfo2, bool ___transient3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C"  ModuleU5BU5D_t3593287923* AssemblyBuilder_GetModulesInternal_m3379844831 (AssemblyBuilder_t1646117627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.AssemblyBuilder::GetTypes(System.Boolean)
extern "C"  TypeU5BU5D_t1664964607* AssemblyBuilder_GetTypes_m2527954992 (AssemblyBuilder_t1646117627 * __this, bool ___exportedOnly0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C"  bool AssemblyBuilder_get_IsCompilerContext_m2864230005 (AssemblyBuilder_t1646117627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsSave()
extern "C"  bool AssemblyBuilder_get_IsSave_m3100330618 (AssemblyBuilder_t1646117627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsRun()
extern "C"  bool AssemblyBuilder_get_IsRun_m1608974594 (AssemblyBuilder_t1646117627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.AssemblyBuilder::get_AssemblyDir()
extern "C"  String_t* AssemblyBuilder_get_AssemblyDir_m3907616403 (AssemblyBuilder_t1646117627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.AssemblyBuilder::GetManifestModule()
extern "C"  Module_t4282841206 * AssemblyBuilder_GetManifestModule_m1908848220 (AssemblyBuilder_t1646117627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C"  Exception_t1927440687 * AssemblyBuilder_not_supported_m383946865 (AssemblyBuilder_t1646117627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.AssemblyBuilder::check_name_and_filename(System.String,System.String,System.Boolean)
extern "C"  void AssemblyBuilder_check_name_and_filename_m1357620065 (AssemblyBuilder_t1646117627 * __this, String_t* ___name0, String_t* ___fileName1, bool ___fileNeedsToExists2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C"  AssemblyName_t894705941 * AssemblyBuilder_UnprotectedGetName_m2328641134 (AssemblyBuilder_t1646117627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
