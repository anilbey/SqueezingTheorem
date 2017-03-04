#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "AssemblyU2DCSharp_DetonatorComponent521491937.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DetonatorSpray
struct  DetonatorSpray_t123427955  : public DetonatorComponent_t521491937
{
public:
	// UnityEngine.GameObject DetonatorSpray::sprayObject
	GameObject_t1756533147 * ___sprayObject_22;
	// System.Int32 DetonatorSpray::count
	int32_t ___count_23;
	// System.Single DetonatorSpray::startingRadius
	float ___startingRadius_24;
	// System.Single DetonatorSpray::minScale
	float ___minScale_25;
	// System.Single DetonatorSpray::maxScale
	float ___maxScale_26;
	// System.Boolean DetonatorSpray::_delayedExplosionStarted
	bool ____delayedExplosionStarted_27;
	// System.Single DetonatorSpray::_explodeDelay
	float ____explodeDelay_28;
	// UnityEngine.Vector3 DetonatorSpray::_explosionPosition
	Vector3_t2243707580  ____explosionPosition_29;
	// System.Single DetonatorSpray::_tmpScale
	float ____tmpScale_30;

public:
	inline static int32_t get_offset_of_sprayObject_22() { return static_cast<int32_t>(offsetof(DetonatorSpray_t123427955, ___sprayObject_22)); }
	inline GameObject_t1756533147 * get_sprayObject_22() const { return ___sprayObject_22; }
	inline GameObject_t1756533147 ** get_address_of_sprayObject_22() { return &___sprayObject_22; }
	inline void set_sprayObject_22(GameObject_t1756533147 * value)
	{
		___sprayObject_22 = value;
		Il2CppCodeGenWriteBarrier(&___sprayObject_22, value);
	}

	inline static int32_t get_offset_of_count_23() { return static_cast<int32_t>(offsetof(DetonatorSpray_t123427955, ___count_23)); }
	inline int32_t get_count_23() const { return ___count_23; }
	inline int32_t* get_address_of_count_23() { return &___count_23; }
	inline void set_count_23(int32_t value)
	{
		___count_23 = value;
	}

	inline static int32_t get_offset_of_startingRadius_24() { return static_cast<int32_t>(offsetof(DetonatorSpray_t123427955, ___startingRadius_24)); }
	inline float get_startingRadius_24() const { return ___startingRadius_24; }
	inline float* get_address_of_startingRadius_24() { return &___startingRadius_24; }
	inline void set_startingRadius_24(float value)
	{
		___startingRadius_24 = value;
	}

	inline static int32_t get_offset_of_minScale_25() { return static_cast<int32_t>(offsetof(DetonatorSpray_t123427955, ___minScale_25)); }
	inline float get_minScale_25() const { return ___minScale_25; }
	inline float* get_address_of_minScale_25() { return &___minScale_25; }
	inline void set_minScale_25(float value)
	{
		___minScale_25 = value;
	}

	inline static int32_t get_offset_of_maxScale_26() { return static_cast<int32_t>(offsetof(DetonatorSpray_t123427955, ___maxScale_26)); }
	inline float get_maxScale_26() const { return ___maxScale_26; }
	inline float* get_address_of_maxScale_26() { return &___maxScale_26; }
	inline void set_maxScale_26(float value)
	{
		___maxScale_26 = value;
	}

	inline static int32_t get_offset_of__delayedExplosionStarted_27() { return static_cast<int32_t>(offsetof(DetonatorSpray_t123427955, ____delayedExplosionStarted_27)); }
	inline bool get__delayedExplosionStarted_27() const { return ____delayedExplosionStarted_27; }
	inline bool* get_address_of__delayedExplosionStarted_27() { return &____delayedExplosionStarted_27; }
	inline void set__delayedExplosionStarted_27(bool value)
	{
		____delayedExplosionStarted_27 = value;
	}

	inline static int32_t get_offset_of__explodeDelay_28() { return static_cast<int32_t>(offsetof(DetonatorSpray_t123427955, ____explodeDelay_28)); }
	inline float get__explodeDelay_28() const { return ____explodeDelay_28; }
	inline float* get_address_of__explodeDelay_28() { return &____explodeDelay_28; }
	inline void set__explodeDelay_28(float value)
	{
		____explodeDelay_28 = value;
	}

	inline static int32_t get_offset_of__explosionPosition_29() { return static_cast<int32_t>(offsetof(DetonatorSpray_t123427955, ____explosionPosition_29)); }
	inline Vector3_t2243707580  get__explosionPosition_29() const { return ____explosionPosition_29; }
	inline Vector3_t2243707580 * get_address_of__explosionPosition_29() { return &____explosionPosition_29; }
	inline void set__explosionPosition_29(Vector3_t2243707580  value)
	{
		____explosionPosition_29 = value;
	}

	inline static int32_t get_offset_of__tmpScale_30() { return static_cast<int32_t>(offsetof(DetonatorSpray_t123427955, ____tmpScale_30)); }
	inline float get__tmpScale_30() const { return ____tmpScale_30; }
	inline float* get_address_of__tmpScale_30() { return &____tmpScale_30; }
	inline void set__tmpScale_30(float value)
	{
		____tmpScale_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
