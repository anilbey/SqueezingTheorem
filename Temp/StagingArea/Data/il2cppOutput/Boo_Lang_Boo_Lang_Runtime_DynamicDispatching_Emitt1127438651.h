#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_Emitt2224480775.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.DynamicDispatching.Emitters.ImplicitConversionEmitter
struct  ImplicitConversionEmitter_t1127438651  : public DispatcherEmitter_t2224480775
{
public:
	// System.Reflection.MethodInfo Boo.Lang.Runtime.DynamicDispatching.Emitters.ImplicitConversionEmitter::_conversion
	MethodInfo_t * ____conversion_2;

public:
	inline static int32_t get_offset_of__conversion_2() { return static_cast<int32_t>(offsetof(ImplicitConversionEmitter_t1127438651, ____conversion_2)); }
	inline MethodInfo_t * get__conversion_2() const { return ____conversion_2; }
	inline MethodInfo_t ** get_address_of__conversion_2() { return &____conversion_2; }
	inline void set__conversion_2(MethodInfo_t * value)
	{
		____conversion_2 = value;
		Il2CppCodeGenWriteBarrier(&____conversion_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
