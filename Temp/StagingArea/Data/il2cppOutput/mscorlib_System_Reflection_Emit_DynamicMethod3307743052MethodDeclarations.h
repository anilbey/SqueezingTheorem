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

// System.Reflection.Emit.DynamicMethod
struct DynamicMethod_t3307743052;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Reflection.Module
struct Module_t4282841206;
// System.Delegate
struct Delegate_t3022476291;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t99948092;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t2275869610;
// System.Object
struct Il2CppObject;
// System.Reflection.Binder
struct Binder_t3404612058;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_MethodAttributes790385034.h"
#include "mscorlib_System_Reflection_CallingConventions1097349142.h"
#include "mscorlib_System_Reflection_Module4282841206.h"
#include "mscorlib_System_Reflection_Emit_DynamicMethod3307743052.h"
#include "mscorlib_System_Reflection_MethodImplAttributes1541361196.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_BindingFlags1082350898.h"
#include "mscorlib_System_Reflection_Binder3404612058.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_System_RuntimeMethodHandle894824333.h"

// System.Void System.Reflection.Emit.DynamicMethod::.ctor(System.String,System.Type,System.Type[],System.Type)
extern "C"  void DynamicMethod__ctor_m3263985266 (DynamicMethod_t3307743052 * __this, String_t* ___name0, Type_t * ___returnType1, TypeU5BU5D_t1664964607* ___parameterTypes2, Type_t * ___owner3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::.ctor(System.String,System.Type,System.Type[],System.Type,System.Boolean)
extern "C"  void DynamicMethod__ctor_m3626300851 (DynamicMethod_t3307743052 * __this, String_t* ___name0, Type_t * ___returnType1, TypeU5BU5D_t1664964607* ___parameterTypes2, Type_t * ___owner3, bool ___skipVisibility4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::.ctor(System.String,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type,System.Type[],System.Type,System.Boolean)
extern "C"  void DynamicMethod__ctor_m3657059753 (DynamicMethod_t3307743052 * __this, String_t* ___name0, int32_t ___attributes1, int32_t ___callingConvention2, Type_t * ___returnType3, TypeU5BU5D_t1664964607* ___parameterTypes4, Type_t * ___owner5, bool ___skipVisibility6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::.ctor(System.String,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type,System.Type[],System.Type,System.Reflection.Module,System.Boolean,System.Boolean)
extern "C"  void DynamicMethod__ctor_m470596408 (DynamicMethod_t3307743052 * __this, String_t* ___name0, int32_t ___attributes1, int32_t ___callingConvention2, Type_t * ___returnType3, TypeU5BU5D_t1664964607* ___parameterTypes4, Type_t * ___owner5, Module_t4282841206 * ___m6, bool ___skipVisibility7, bool ___anonHosted8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::create_dynamic_method(System.Reflection.Emit.DynamicMethod)
extern "C"  void DynamicMethod_create_dynamic_method_m2387626914 (DynamicMethod_t3307743052 * __this, DynamicMethod_t3307743052 * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::destroy_dynamic_method(System.Reflection.Emit.DynamicMethod)
extern "C"  void DynamicMethod_destroy_dynamic_method_m3223029124 (DynamicMethod_t3307743052 * __this, DynamicMethod_t3307743052 * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::CreateDynMethod()
extern "C"  void DynamicMethod_CreateDynMethod_m3215158047 (DynamicMethod_t3307743052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::Finalize()
extern "C"  void DynamicMethod_Finalize_m2130118053 (DynamicMethod_t3307743052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Reflection.Emit.DynamicMethod::CreateDelegate(System.Type)
extern "C"  Delegate_t3022476291 * DynamicMethod_CreateDelegate_m2157976338 (DynamicMethod_t3307743052 * __this, Type_t * ___delegateType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.DynamicMethod::GetBaseDefinition()
extern "C"  MethodInfo_t * DynamicMethod_GetBaseDefinition_m3498189417 (DynamicMethod_t3307743052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.DynamicMethod::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t3614634134* DynamicMethod_GetCustomAttributes_m848915965 (DynamicMethod_t3307743052 * __this, bool ___inherit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.DynamicMethod::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t3614634134* DynamicMethod_GetCustomAttributes_m655554578 (DynamicMethod_t3307743052 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.DynamicMethod::GetILGenerator()
extern "C"  ILGenerator_t99948092 * DynamicMethod_GetILGenerator_m1346756923 (DynamicMethod_t3307743052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.DynamicMethod::GetILGenerator(System.Int32)
extern "C"  ILGenerator_t99948092 * DynamicMethod_GetILGenerator_m4277474076 (DynamicMethod_t3307743052 * __this, int32_t ___streamSize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodImplAttributes System.Reflection.Emit.DynamicMethod::GetMethodImplementationFlags()
extern "C"  int32_t DynamicMethod_GetMethodImplementationFlags_m1395170958 (DynamicMethod_t3307743052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.DynamicMethod::GetParameters()
extern "C"  ParameterInfoU5BU5D_t2275869610* DynamicMethod_GetParameters_m3873709535 (DynamicMethod_t3307743052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.DynamicMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Il2CppObject * DynamicMethod_Invoke_m119596296 (DynamicMethod_t3307743052 * __this, Il2CppObject * ___obj0, int32_t ___invokeAttr1, Binder_t3404612058 * ___binder2, ObjectU5BU5D_t3614634134* ___parameters3, CultureInfo_t3500843524 * ___culture4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DynamicMethod::IsDefined(System.Type,System.Boolean)
extern "C"  bool DynamicMethod_IsDefined_m41044580 (DynamicMethod_t3307743052 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DynamicMethod::ToString()
extern "C"  String_t* DynamicMethod_ToString_m3640450024 (DynamicMethod_t3307743052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.DynamicMethod::get_Attributes()
extern "C"  int32_t DynamicMethod_get_Attributes_m2445841258 (DynamicMethod_t3307743052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.Emit.DynamicMethod::get_CallingConvention()
extern "C"  int32_t DynamicMethod_get_CallingConvention_m2012357400 (DynamicMethod_t3307743052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DynamicMethod::get_DeclaringType()
extern "C"  Type_t * DynamicMethod_get_DeclaringType_m2302942075 (DynamicMethod_t3307743052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.DynamicMethod::get_MethodHandle()
extern "C"  RuntimeMethodHandle_t894824333  DynamicMethod_get_MethodHandle_m429849422 (DynamicMethod_t3307743052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.DynamicMethod::get_Module()
extern "C"  Module_t4282841206 * DynamicMethod_get_Module_m136180051 (DynamicMethod_t3307743052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DynamicMethod::get_Name()
extern "C"  String_t* DynamicMethod_get_Name_m3411533354 (DynamicMethod_t3307743052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DynamicMethod::get_ReflectedType()
extern "C"  Type_t * DynamicMethod_get_ReflectedType_m2452081416 (DynamicMethod_t3307743052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DynamicMethod::get_ReturnType()
extern "C"  Type_t * DynamicMethod_get_ReturnType_m2822622452 (DynamicMethod_t3307743052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.DynamicMethod::AddRef(System.Object)
extern "C"  int32_t DynamicMethod_AddRef_m1495651475 (DynamicMethod_t3307743052 * __this, Il2CppObject * ___reference0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
