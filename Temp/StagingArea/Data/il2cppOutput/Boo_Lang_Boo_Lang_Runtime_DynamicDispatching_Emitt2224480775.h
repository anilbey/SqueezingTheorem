#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Emit.DynamicMethod
struct DynamicMethod_t3307743052;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t99948092;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter
struct  DispatcherEmitter_t2224480775  : public Il2CppObject
{
public:
	// System.Reflection.Emit.DynamicMethod Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::_dynamicMethod
	DynamicMethod_t3307743052 * ____dynamicMethod_0;
	// System.Reflection.Emit.ILGenerator Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::_il
	ILGenerator_t99948092 * ____il_1;

public:
	inline static int32_t get_offset_of__dynamicMethod_0() { return static_cast<int32_t>(offsetof(DispatcherEmitter_t2224480775, ____dynamicMethod_0)); }
	inline DynamicMethod_t3307743052 * get__dynamicMethod_0() const { return ____dynamicMethod_0; }
	inline DynamicMethod_t3307743052 ** get_address_of__dynamicMethod_0() { return &____dynamicMethod_0; }
	inline void set__dynamicMethod_0(DynamicMethod_t3307743052 * value)
	{
		____dynamicMethod_0 = value;
		Il2CppCodeGenWriteBarrier(&____dynamicMethod_0, value);
	}

	inline static int32_t get_offset_of__il_1() { return static_cast<int32_t>(offsetof(DispatcherEmitter_t2224480775, ____il_1)); }
	inline ILGenerator_t99948092 * get__il_1() const { return ____il_1; }
	inline ILGenerator_t99948092 ** get_address_of__il_1() { return &____il_1; }
	inline void set__il_1(ILGenerator_t99948092 * value)
	{
		____il_1 = value;
		Il2CppCodeGenWriteBarrier(&____il_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
