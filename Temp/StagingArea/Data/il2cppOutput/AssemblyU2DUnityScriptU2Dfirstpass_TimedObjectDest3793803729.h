#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TimedObjectDestructor
struct  TimedObjectDestructor_t3793803729  : public MonoBehaviour_t1158329972
{
public:
	// System.Single TimedObjectDestructor::timeOut
	float ___timeOut_2;
	// System.Boolean TimedObjectDestructor::detachChildren
	bool ___detachChildren_3;

public:
	inline static int32_t get_offset_of_timeOut_2() { return static_cast<int32_t>(offsetof(TimedObjectDestructor_t3793803729, ___timeOut_2)); }
	inline float get_timeOut_2() const { return ___timeOut_2; }
	inline float* get_address_of_timeOut_2() { return &___timeOut_2; }
	inline void set_timeOut_2(float value)
	{
		___timeOut_2 = value;
	}

	inline static int32_t get_offset_of_detachChildren_3() { return static_cast<int32_t>(offsetof(TimedObjectDestructor_t3793803729, ___detachChildren_3)); }
	inline bool get_detachChildren_3() const { return ___detachChildren_3; }
	inline bool* get_address_of_detachChildren_3() { return &___detachChildren_3; }
	inline void set_detachChildren_3(bool value)
	{
		___detachChildren_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
