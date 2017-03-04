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
// UnityEngine.Material
struct Material_t193706927;

#include "AssemblyU2DCSharp_DetonatorComponent521491937.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DetonatorHeatwave
struct  DetonatorHeatwave_t2241509887  : public DetonatorComponent_t521491937
{
public:
	// UnityEngine.GameObject DetonatorHeatwave::_heatwave
	GameObject_t1756533147 * ____heatwave_22;
	// System.Single DetonatorHeatwave::s
	float ___s_23;
	// System.Single DetonatorHeatwave::_startSize
	float ____startSize_24;
	// System.Single DetonatorHeatwave::_maxSize
	float ____maxSize_25;
	// System.Single DetonatorHeatwave::_baseDuration
	float ____baseDuration_26;
	// System.Boolean DetonatorHeatwave::_delayedExplosionStarted
	bool ____delayedExplosionStarted_27;
	// System.Single DetonatorHeatwave::_explodeDelay
	float ____explodeDelay_28;
	// System.Single DetonatorHeatwave::zOffset
	float ___zOffset_29;
	// System.Single DetonatorHeatwave::distortion
	float ___distortion_30;
	// System.Single DetonatorHeatwave::_elapsedTime
	float ____elapsedTime_31;
	// System.Single DetonatorHeatwave::_normalizedTime
	float ____normalizedTime_32;
	// UnityEngine.Material DetonatorHeatwave::heatwaveMaterial
	Material_t193706927 * ___heatwaveMaterial_33;
	// UnityEngine.Material DetonatorHeatwave::_material
	Material_t193706927 * ____material_34;

public:
	inline static int32_t get_offset_of__heatwave_22() { return static_cast<int32_t>(offsetof(DetonatorHeatwave_t2241509887, ____heatwave_22)); }
	inline GameObject_t1756533147 * get__heatwave_22() const { return ____heatwave_22; }
	inline GameObject_t1756533147 ** get_address_of__heatwave_22() { return &____heatwave_22; }
	inline void set__heatwave_22(GameObject_t1756533147 * value)
	{
		____heatwave_22 = value;
		Il2CppCodeGenWriteBarrier(&____heatwave_22, value);
	}

	inline static int32_t get_offset_of_s_23() { return static_cast<int32_t>(offsetof(DetonatorHeatwave_t2241509887, ___s_23)); }
	inline float get_s_23() const { return ___s_23; }
	inline float* get_address_of_s_23() { return &___s_23; }
	inline void set_s_23(float value)
	{
		___s_23 = value;
	}

	inline static int32_t get_offset_of__startSize_24() { return static_cast<int32_t>(offsetof(DetonatorHeatwave_t2241509887, ____startSize_24)); }
	inline float get__startSize_24() const { return ____startSize_24; }
	inline float* get_address_of__startSize_24() { return &____startSize_24; }
	inline void set__startSize_24(float value)
	{
		____startSize_24 = value;
	}

	inline static int32_t get_offset_of__maxSize_25() { return static_cast<int32_t>(offsetof(DetonatorHeatwave_t2241509887, ____maxSize_25)); }
	inline float get__maxSize_25() const { return ____maxSize_25; }
	inline float* get_address_of__maxSize_25() { return &____maxSize_25; }
	inline void set__maxSize_25(float value)
	{
		____maxSize_25 = value;
	}

	inline static int32_t get_offset_of__baseDuration_26() { return static_cast<int32_t>(offsetof(DetonatorHeatwave_t2241509887, ____baseDuration_26)); }
	inline float get__baseDuration_26() const { return ____baseDuration_26; }
	inline float* get_address_of__baseDuration_26() { return &____baseDuration_26; }
	inline void set__baseDuration_26(float value)
	{
		____baseDuration_26 = value;
	}

	inline static int32_t get_offset_of__delayedExplosionStarted_27() { return static_cast<int32_t>(offsetof(DetonatorHeatwave_t2241509887, ____delayedExplosionStarted_27)); }
	inline bool get__delayedExplosionStarted_27() const { return ____delayedExplosionStarted_27; }
	inline bool* get_address_of__delayedExplosionStarted_27() { return &____delayedExplosionStarted_27; }
	inline void set__delayedExplosionStarted_27(bool value)
	{
		____delayedExplosionStarted_27 = value;
	}

	inline static int32_t get_offset_of__explodeDelay_28() { return static_cast<int32_t>(offsetof(DetonatorHeatwave_t2241509887, ____explodeDelay_28)); }
	inline float get__explodeDelay_28() const { return ____explodeDelay_28; }
	inline float* get_address_of__explodeDelay_28() { return &____explodeDelay_28; }
	inline void set__explodeDelay_28(float value)
	{
		____explodeDelay_28 = value;
	}

	inline static int32_t get_offset_of_zOffset_29() { return static_cast<int32_t>(offsetof(DetonatorHeatwave_t2241509887, ___zOffset_29)); }
	inline float get_zOffset_29() const { return ___zOffset_29; }
	inline float* get_address_of_zOffset_29() { return &___zOffset_29; }
	inline void set_zOffset_29(float value)
	{
		___zOffset_29 = value;
	}

	inline static int32_t get_offset_of_distortion_30() { return static_cast<int32_t>(offsetof(DetonatorHeatwave_t2241509887, ___distortion_30)); }
	inline float get_distortion_30() const { return ___distortion_30; }
	inline float* get_address_of_distortion_30() { return &___distortion_30; }
	inline void set_distortion_30(float value)
	{
		___distortion_30 = value;
	}

	inline static int32_t get_offset_of__elapsedTime_31() { return static_cast<int32_t>(offsetof(DetonatorHeatwave_t2241509887, ____elapsedTime_31)); }
	inline float get__elapsedTime_31() const { return ____elapsedTime_31; }
	inline float* get_address_of__elapsedTime_31() { return &____elapsedTime_31; }
	inline void set__elapsedTime_31(float value)
	{
		____elapsedTime_31 = value;
	}

	inline static int32_t get_offset_of__normalizedTime_32() { return static_cast<int32_t>(offsetof(DetonatorHeatwave_t2241509887, ____normalizedTime_32)); }
	inline float get__normalizedTime_32() const { return ____normalizedTime_32; }
	inline float* get_address_of__normalizedTime_32() { return &____normalizedTime_32; }
	inline void set__normalizedTime_32(float value)
	{
		____normalizedTime_32 = value;
	}

	inline static int32_t get_offset_of_heatwaveMaterial_33() { return static_cast<int32_t>(offsetof(DetonatorHeatwave_t2241509887, ___heatwaveMaterial_33)); }
	inline Material_t193706927 * get_heatwaveMaterial_33() const { return ___heatwaveMaterial_33; }
	inline Material_t193706927 ** get_address_of_heatwaveMaterial_33() { return &___heatwaveMaterial_33; }
	inline void set_heatwaveMaterial_33(Material_t193706927 * value)
	{
		___heatwaveMaterial_33 = value;
		Il2CppCodeGenWriteBarrier(&___heatwaveMaterial_33, value);
	}

	inline static int32_t get_offset_of__material_34() { return static_cast<int32_t>(offsetof(DetonatorHeatwave_t2241509887, ____material_34)); }
	inline Material_t193706927 * get__material_34() const { return ____material_34; }
	inline Material_t193706927 ** get_address_of__material_34() { return &____material_34; }
	inline void set__material_34(Material_t193706927 * value)
	{
		____material_34 = value;
		Il2CppCodeGenWriteBarrier(&____material_34, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
