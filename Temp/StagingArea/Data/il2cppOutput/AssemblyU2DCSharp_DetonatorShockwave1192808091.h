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
// DetonatorBurstEmitter
struct DetonatorBurstEmitter_t3712326808;
// UnityEngine.Material
struct Material_t193706927;

#include "AssemblyU2DCSharp_DetonatorComponent521491937.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_ParticleRenderMode325781475.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DetonatorShockwave
struct  DetonatorShockwave_t1192808091  : public DetonatorComponent_t521491937
{
public:
	// System.Single DetonatorShockwave::_baseSize
	float ____baseSize_22;
	// System.Single DetonatorShockwave::_baseDuration
	float ____baseDuration_23;
	// UnityEngine.Vector3 DetonatorShockwave::_baseVelocity
	Vector3_t2243707580  ____baseVelocity_24;
	// UnityEngine.Color DetonatorShockwave::_baseColor
	Color_t2020392075  ____baseColor_25;
	// UnityEngine.GameObject DetonatorShockwave::_shockwave
	GameObject_t1756533147 * ____shockwave_26;
	// DetonatorBurstEmitter DetonatorShockwave::_shockwaveEmitter
	DetonatorBurstEmitter_t3712326808 * ____shockwaveEmitter_27;
	// UnityEngine.Material DetonatorShockwave::shockwaveMaterial
	Material_t193706927 * ___shockwaveMaterial_28;
	// UnityEngine.ParticleRenderMode DetonatorShockwave::renderMode
	int32_t ___renderMode_29;

public:
	inline static int32_t get_offset_of__baseSize_22() { return static_cast<int32_t>(offsetof(DetonatorShockwave_t1192808091, ____baseSize_22)); }
	inline float get__baseSize_22() const { return ____baseSize_22; }
	inline float* get_address_of__baseSize_22() { return &____baseSize_22; }
	inline void set__baseSize_22(float value)
	{
		____baseSize_22 = value;
	}

	inline static int32_t get_offset_of__baseDuration_23() { return static_cast<int32_t>(offsetof(DetonatorShockwave_t1192808091, ____baseDuration_23)); }
	inline float get__baseDuration_23() const { return ____baseDuration_23; }
	inline float* get_address_of__baseDuration_23() { return &____baseDuration_23; }
	inline void set__baseDuration_23(float value)
	{
		____baseDuration_23 = value;
	}

	inline static int32_t get_offset_of__baseVelocity_24() { return static_cast<int32_t>(offsetof(DetonatorShockwave_t1192808091, ____baseVelocity_24)); }
	inline Vector3_t2243707580  get__baseVelocity_24() const { return ____baseVelocity_24; }
	inline Vector3_t2243707580 * get_address_of__baseVelocity_24() { return &____baseVelocity_24; }
	inline void set__baseVelocity_24(Vector3_t2243707580  value)
	{
		____baseVelocity_24 = value;
	}

	inline static int32_t get_offset_of__baseColor_25() { return static_cast<int32_t>(offsetof(DetonatorShockwave_t1192808091, ____baseColor_25)); }
	inline Color_t2020392075  get__baseColor_25() const { return ____baseColor_25; }
	inline Color_t2020392075 * get_address_of__baseColor_25() { return &____baseColor_25; }
	inline void set__baseColor_25(Color_t2020392075  value)
	{
		____baseColor_25 = value;
	}

	inline static int32_t get_offset_of__shockwave_26() { return static_cast<int32_t>(offsetof(DetonatorShockwave_t1192808091, ____shockwave_26)); }
	inline GameObject_t1756533147 * get__shockwave_26() const { return ____shockwave_26; }
	inline GameObject_t1756533147 ** get_address_of__shockwave_26() { return &____shockwave_26; }
	inline void set__shockwave_26(GameObject_t1756533147 * value)
	{
		____shockwave_26 = value;
		Il2CppCodeGenWriteBarrier(&____shockwave_26, value);
	}

	inline static int32_t get_offset_of__shockwaveEmitter_27() { return static_cast<int32_t>(offsetof(DetonatorShockwave_t1192808091, ____shockwaveEmitter_27)); }
	inline DetonatorBurstEmitter_t3712326808 * get__shockwaveEmitter_27() const { return ____shockwaveEmitter_27; }
	inline DetonatorBurstEmitter_t3712326808 ** get_address_of__shockwaveEmitter_27() { return &____shockwaveEmitter_27; }
	inline void set__shockwaveEmitter_27(DetonatorBurstEmitter_t3712326808 * value)
	{
		____shockwaveEmitter_27 = value;
		Il2CppCodeGenWriteBarrier(&____shockwaveEmitter_27, value);
	}

	inline static int32_t get_offset_of_shockwaveMaterial_28() { return static_cast<int32_t>(offsetof(DetonatorShockwave_t1192808091, ___shockwaveMaterial_28)); }
	inline Material_t193706927 * get_shockwaveMaterial_28() const { return ___shockwaveMaterial_28; }
	inline Material_t193706927 ** get_address_of_shockwaveMaterial_28() { return &___shockwaveMaterial_28; }
	inline void set_shockwaveMaterial_28(Material_t193706927 * value)
	{
		___shockwaveMaterial_28 = value;
		Il2CppCodeGenWriteBarrier(&___shockwaveMaterial_28, value);
	}

	inline static int32_t get_offset_of_renderMode_29() { return static_cast<int32_t>(offsetof(DetonatorShockwave_t1192808091, ___renderMode_29)); }
	inline int32_t get_renderMode_29() const { return ___renderMode_29; }
	inline int32_t* get_address_of_renderMode_29() { return &___renderMode_29; }
	inline void set_renderMode_29(int32_t value)
	{
		___renderMode_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
