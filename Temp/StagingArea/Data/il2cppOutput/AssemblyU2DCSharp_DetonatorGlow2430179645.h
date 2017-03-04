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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DetonatorGlow
struct  DetonatorGlow_t2430179645  : public DetonatorComponent_t521491937
{
public:
	// System.Single DetonatorGlow::_baseSize
	float ____baseSize_22;
	// System.Single DetonatorGlow::_baseDuration
	float ____baseDuration_23;
	// UnityEngine.Vector3 DetonatorGlow::_baseVelocity
	Vector3_t2243707580  ____baseVelocity_24;
	// UnityEngine.Color DetonatorGlow::_baseColor
	Color_t2020392075  ____baseColor_25;
	// System.Single DetonatorGlow::_scaledDuration
	float ____scaledDuration_26;
	// UnityEngine.GameObject DetonatorGlow::_glow
	GameObject_t1756533147 * ____glow_27;
	// DetonatorBurstEmitter DetonatorGlow::_glowEmitter
	DetonatorBurstEmitter_t3712326808 * ____glowEmitter_28;
	// UnityEngine.Material DetonatorGlow::glowMaterial
	Material_t193706927 * ___glowMaterial_29;

public:
	inline static int32_t get_offset_of__baseSize_22() { return static_cast<int32_t>(offsetof(DetonatorGlow_t2430179645, ____baseSize_22)); }
	inline float get__baseSize_22() const { return ____baseSize_22; }
	inline float* get_address_of__baseSize_22() { return &____baseSize_22; }
	inline void set__baseSize_22(float value)
	{
		____baseSize_22 = value;
	}

	inline static int32_t get_offset_of__baseDuration_23() { return static_cast<int32_t>(offsetof(DetonatorGlow_t2430179645, ____baseDuration_23)); }
	inline float get__baseDuration_23() const { return ____baseDuration_23; }
	inline float* get_address_of__baseDuration_23() { return &____baseDuration_23; }
	inline void set__baseDuration_23(float value)
	{
		____baseDuration_23 = value;
	}

	inline static int32_t get_offset_of__baseVelocity_24() { return static_cast<int32_t>(offsetof(DetonatorGlow_t2430179645, ____baseVelocity_24)); }
	inline Vector3_t2243707580  get__baseVelocity_24() const { return ____baseVelocity_24; }
	inline Vector3_t2243707580 * get_address_of__baseVelocity_24() { return &____baseVelocity_24; }
	inline void set__baseVelocity_24(Vector3_t2243707580  value)
	{
		____baseVelocity_24 = value;
	}

	inline static int32_t get_offset_of__baseColor_25() { return static_cast<int32_t>(offsetof(DetonatorGlow_t2430179645, ____baseColor_25)); }
	inline Color_t2020392075  get__baseColor_25() const { return ____baseColor_25; }
	inline Color_t2020392075 * get_address_of__baseColor_25() { return &____baseColor_25; }
	inline void set__baseColor_25(Color_t2020392075  value)
	{
		____baseColor_25 = value;
	}

	inline static int32_t get_offset_of__scaledDuration_26() { return static_cast<int32_t>(offsetof(DetonatorGlow_t2430179645, ____scaledDuration_26)); }
	inline float get__scaledDuration_26() const { return ____scaledDuration_26; }
	inline float* get_address_of__scaledDuration_26() { return &____scaledDuration_26; }
	inline void set__scaledDuration_26(float value)
	{
		____scaledDuration_26 = value;
	}

	inline static int32_t get_offset_of__glow_27() { return static_cast<int32_t>(offsetof(DetonatorGlow_t2430179645, ____glow_27)); }
	inline GameObject_t1756533147 * get__glow_27() const { return ____glow_27; }
	inline GameObject_t1756533147 ** get_address_of__glow_27() { return &____glow_27; }
	inline void set__glow_27(GameObject_t1756533147 * value)
	{
		____glow_27 = value;
		Il2CppCodeGenWriteBarrier(&____glow_27, value);
	}

	inline static int32_t get_offset_of__glowEmitter_28() { return static_cast<int32_t>(offsetof(DetonatorGlow_t2430179645, ____glowEmitter_28)); }
	inline DetonatorBurstEmitter_t3712326808 * get__glowEmitter_28() const { return ____glowEmitter_28; }
	inline DetonatorBurstEmitter_t3712326808 ** get_address_of__glowEmitter_28() { return &____glowEmitter_28; }
	inline void set__glowEmitter_28(DetonatorBurstEmitter_t3712326808 * value)
	{
		____glowEmitter_28 = value;
		Il2CppCodeGenWriteBarrier(&____glowEmitter_28, value);
	}

	inline static int32_t get_offset_of_glowMaterial_29() { return static_cast<int32_t>(offsetof(DetonatorGlow_t2430179645, ___glowMaterial_29)); }
	inline Material_t193706927 * get_glowMaterial_29() const { return ___glowMaterial_29; }
	inline Material_t193706927 ** get_address_of_glowMaterial_29() { return &___glowMaterial_29; }
	inline void set_glowMaterial_29(Material_t193706927 * value)
	{
		___glowMaterial_29 = value;
		Il2CppCodeGenWriteBarrier(&___glowMaterial_29, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
