#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// TimedObjectDestructor
struct TimedObjectDestructor_t3793803729;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DUnityScriptU2Dfirstpass_U3CModuleU3E3783534214.h"
#include "AssemblyU2DUnityScriptU2Dfirstpass_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DUnityScriptU2Dfirstpass_TimedObjectDest3793803729.h"
#include "AssemblyU2DUnityScriptU2Dfirstpass_TimedObjectDest3793803729MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "mscorlib_System_Single2076509932.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Component3819376471MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform3275118058MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object1021602117MethodDeclarations.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TimedObjectDestructor::.ctor()
extern "C"  void TimedObjectDestructor__ctor_m3565781755 (TimedObjectDestructor_t3793803729 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		__this->set_timeOut_2((1.0f));
		return;
	}
}
// System.Void TimedObjectDestructor::Awake()
extern Il2CppCodeGenString* _stringLiteral3022628064;
extern const uint32_t TimedObjectDestructor_Awake_m1156677120_MetadataUsageId;
extern "C"  void TimedObjectDestructor_Awake_m1156677120 (TimedObjectDestructor_t3793803729 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimedObjectDestructor_Awake_m1156677120_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_timeOut_2();
		MonoBehaviour_Invoke_m666563676(__this, _stringLiteral3022628064, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimedObjectDestructor::DestroyNow()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const uint32_t TimedObjectDestructor_DestroyNow_m3287508643_MetadataUsageId;
extern "C"  void TimedObjectDestructor_DestroyNow_m3287508643 (TimedObjectDestructor_t3793803729 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimedObjectDestructor_DestroyNow_m3287508643_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_detachChildren_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Transform_t3275118058 * L_1 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Transform_DetachChildren_m2873894053(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		GameObject_t1756533147 * L_2 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_DestroyObject_m2343493981(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimedObjectDestructor::Main()
extern "C"  void TimedObjectDestructor_Main_m1971143622 (TimedObjectDestructor_t3793803729 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
