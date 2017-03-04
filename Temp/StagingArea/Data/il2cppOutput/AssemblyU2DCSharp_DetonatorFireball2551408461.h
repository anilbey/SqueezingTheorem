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
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DetonatorFireball
struct  DetonatorFireball_t2551408461  : public DetonatorComponent_t521491937
{
public:
	// System.Single DetonatorFireball::_baseSize
	float ____baseSize_22;
	// System.Single DetonatorFireball::_baseDuration
	float ____baseDuration_23;
	// UnityEngine.Color DetonatorFireball::_baseColor
	Color_t2020392075  ____baseColor_24;
	// System.Single DetonatorFireball::_scaledDuration
	float ____scaledDuration_25;
	// UnityEngine.GameObject DetonatorFireball::_fireballA
	GameObject_t1756533147 * ____fireballA_26;
	// DetonatorBurstEmitter DetonatorFireball::_fireballAEmitter
	DetonatorBurstEmitter_t3712326808 * ____fireballAEmitter_27;
	// UnityEngine.Material DetonatorFireball::fireballAMaterial
	Material_t193706927 * ___fireballAMaterial_28;
	// UnityEngine.GameObject DetonatorFireball::_fireballB
	GameObject_t1756533147 * ____fireballB_29;
	// DetonatorBurstEmitter DetonatorFireball::_fireballBEmitter
	DetonatorBurstEmitter_t3712326808 * ____fireballBEmitter_30;
	// UnityEngine.Material DetonatorFireball::fireballBMaterial
	Material_t193706927 * ___fireballBMaterial_31;
	// UnityEngine.GameObject DetonatorFireball::_fireShadow
	GameObject_t1756533147 * ____fireShadow_32;
	// DetonatorBurstEmitter DetonatorFireball::_fireShadowEmitter
	DetonatorBurstEmitter_t3712326808 * ____fireShadowEmitter_33;
	// UnityEngine.Material DetonatorFireball::fireShadowMaterial
	Material_t193706927 * ___fireShadowMaterial_34;
	// System.Boolean DetonatorFireball::drawFireballA
	bool ___drawFireballA_35;
	// System.Boolean DetonatorFireball::drawFireballB
	bool ___drawFireballB_36;
	// System.Boolean DetonatorFireball::drawFireShadow
	bool ___drawFireShadow_37;
	// UnityEngine.Color DetonatorFireball::_detailAdjustedColor
	Color_t2020392075  ____detailAdjustedColor_38;

public:
	inline static int32_t get_offset_of__baseSize_22() { return static_cast<int32_t>(offsetof(DetonatorFireball_t2551408461, ____baseSize_22)); }
	inline float get__baseSize_22() const { return ____baseSize_22; }
	inline float* get_address_of__baseSize_22() { return &____baseSize_22; }
	inline void set__baseSize_22(float value)
	{
		____baseSize_22 = value;
	}

	inline static int32_t get_offset_of__baseDuration_23() { return static_cast<int32_t>(offsetof(DetonatorFireball_t2551408461, ____baseDuration_23)); }
	inline float get__baseDuration_23() const { return ____baseDuration_23; }
	inline float* get_address_of__baseDuration_23() { return &____baseDuration_23; }
	inline void set__baseDuration_23(float value)
	{
		____baseDuration_23 = value;
	}

	inline static int32_t get_offset_of__baseColor_24() { return static_cast<int32_t>(offsetof(DetonatorFireball_t2551408461, ____baseColor_24)); }
	inline Color_t2020392075  get__baseColor_24() const { return ____baseColor_24; }
	inline Color_t2020392075 * get_address_of__baseColor_24() { return &____baseColor_24; }
	inline void set__baseColor_24(Color_t2020392075  value)
	{
		____baseColor_24 = value;
	}

	inline static int32_t get_offset_of__scaledDuration_25() { return static_cast<int32_t>(offsetof(DetonatorFireball_t2551408461, ____scaledDuration_25)); }
	inline float get__scaledDuration_25() const { return ____scaledDuration_25; }
	inline float* get_address_of__scaledDuration_25() { return &____scaledDuration_25; }
	inline void set__scaledDuration_25(float value)
	{
		____scaledDuration_25 = value;
	}

	inline static int32_t get_offset_of__fireballA_26() { return static_cast<int32_t>(offsetof(DetonatorFireball_t2551408461, ____fireballA_26)); }
	inline GameObject_t1756533147 * get__fireballA_26() const { return ____fireballA_26; }
	inline GameObject_t1756533147 ** get_address_of__fireballA_26() { return &____fireballA_26; }
	inline void set__fireballA_26(GameObject_t1756533147 * value)
	{
		____fireballA_26 = value;
		Il2CppCodeGenWriteBarrier(&____fireballA_26, value);
	}

	inline static int32_t get_offset_of__fireballAEmitter_27() { return static_cast<int32_t>(offsetof(DetonatorFireball_t2551408461, ____fireballAEmitter_27)); }
	inline DetonatorBurstEmitter_t3712326808 * get__fireballAEmitter_27() const { return ____fireballAEmitter_27; }
	inline DetonatorBurstEmitter_t3712326808 ** get_address_of__fireballAEmitter_27() { return &____fireballAEmitter_27; }
	inline void set__fireballAEmitter_27(DetonatorBurstEmitter_t3712326808 * value)
	{
		____fireballAEmitter_27 = value;
		Il2CppCodeGenWriteBarrier(&____fireballAEmitter_27, value);
	}

	inline static int32_t get_offset_of_fireballAMaterial_28() { return static_cast<int32_t>(offsetof(DetonatorFireball_t2551408461, ___fireballAMaterial_28)); }
	inline Material_t193706927 * get_fireballAMaterial_28() const { return ___fireballAMaterial_28; }
	inline Material_t193706927 ** get_address_of_fireballAMaterial_28() { return &___fireballAMaterial_28; }
	inline void set_fireballAMaterial_28(Material_t193706927 * value)
	{
		___fireballAMaterial_28 = value;
		Il2CppCodeGenWriteBarrier(&___fireballAMaterial_28, value);
	}

	inline static int32_t get_offset_of__fireballB_29() { return static_cast<int32_t>(offsetof(DetonatorFireball_t2551408461, ____fireballB_29)); }
	inline GameObject_t1756533147 * get__fireballB_29() const { return ____fireballB_29; }
	inline GameObject_t1756533147 ** get_address_of__fireballB_29() { return &____fireballB_29; }
	inline void set__fireballB_29(GameObject_t1756533147 * value)
	{
		____fireballB_29 = value;
		Il2CppCodeGenWriteBarrier(&____fireballB_29, value);
	}

	inline static int32_t get_offset_of__fireballBEmitter_30() { return static_cast<int32_t>(offsetof(DetonatorFireball_t2551408461, ____fireballBEmitter_30)); }
	inline DetonatorBurstEmitter_t3712326808 * get__fireballBEmitter_30() const { return ____fireballBEmitter_30; }
	inline DetonatorBurstEmitter_t3712326808 ** get_address_of__fireballBEmitter_30() { return &____fireballBEmitter_30; }
	inline void set__fireballBEmitter_30(DetonatorBurstEmitter_t3712326808 * value)
	{
		____fireballBEmitter_30 = value;
		Il2CppCodeGenWriteBarrier(&____fireballBEmitter_30, value);
	}

	inline static int32_t get_offset_of_fireballBMaterial_31() { return static_cast<int32_t>(offsetof(DetonatorFireball_t2551408461, ___fireballBMaterial_31)); }
	inline Material_t193706927 * get_fireballBMaterial_31() const { return ___fireballBMaterial_31; }
	inline Material_t193706927 ** get_address_of_fireballBMaterial_31() { return &___fireballBMaterial_31; }
	inline void set_fireballBMaterial_31(Material_t193706927 * value)
	{
		___fireballBMaterial_31 = value;
		Il2CppCodeGenWriteBarrier(&___fireballBMaterial_31, value);
	}

	inline static int32_t get_offset_of__fireShadow_32() { return static_cast<int32_t>(offsetof(DetonatorFireball_t2551408461, ____fireShadow_32)); }
	inline GameObject_t1756533147 * get__fireShadow_32() const { return ____fireShadow_32; }
	inline GameObject_t1756533147 ** get_address_of__fireShadow_32() { return &____fireShadow_32; }
	inline void set__fireShadow_32(GameObject_t1756533147 * value)
	{
		____fireShadow_32 = value;
		Il2CppCodeGenWriteBarrier(&____fireShadow_32, value);
	}

	inline static int32_t get_offset_of__fireShadowEmitter_33() { return static_cast<int32_t>(offsetof(DetonatorFireball_t2551408461, ____fireShadowEmitter_33)); }
	inline DetonatorBurstEmitter_t3712326808 * get__fireShadowEmitter_33() const { return ____fireShadowEmitter_33; }
	inline DetonatorBurstEmitter_t3712326808 ** get_address_of__fireShadowEmitter_33() { return &____fireShadowEmitter_33; }
	inline void set__fireShadowEmitter_33(DetonatorBurstEmitter_t3712326808 * value)
	{
		____fireShadowEmitter_33 = value;
		Il2CppCodeGenWriteBarrier(&____fireShadowEmitter_33, value);
	}

	inline static int32_t get_offset_of_fireShadowMaterial_34() { return static_cast<int32_t>(offsetof(DetonatorFireball_t2551408461, ___fireShadowMaterial_34)); }
	inline Material_t193706927 * get_fireShadowMaterial_34() const { return ___fireShadowMaterial_34; }
	inline Material_t193706927 ** get_address_of_fireShadowMaterial_34() { return &___fireShadowMaterial_34; }
	inline void set_fireShadowMaterial_34(Material_t193706927 * value)
	{
		___fireShadowMaterial_34 = value;
		Il2CppCodeGenWriteBarrier(&___fireShadowMaterial_34, value);
	}

	inline static int32_t get_offset_of_drawFireballA_35() { return static_cast<int32_t>(offsetof(DetonatorFireball_t2551408461, ___drawFireballA_35)); }
	inline bool get_drawFireballA_35() const { return ___drawFireballA_35; }
	inline bool* get_address_of_drawFireballA_35() { return &___drawFireballA_35; }
	inline void set_drawFireballA_35(bool value)
	{
		___drawFireballA_35 = value;
	}

	inline static int32_t get_offset_of_drawFireballB_36() { return static_cast<int32_t>(offsetof(DetonatorFireball_t2551408461, ___drawFireballB_36)); }
	inline bool get_drawFireballB_36() const { return ___drawFireballB_36; }
	inline bool* get_address_of_drawFireballB_36() { return &___drawFireballB_36; }
	inline void set_drawFireballB_36(bool value)
	{
		___drawFireballB_36 = value;
	}

	inline static int32_t get_offset_of_drawFireShadow_37() { return static_cast<int32_t>(offsetof(DetonatorFireball_t2551408461, ___drawFireShadow_37)); }
	inline bool get_drawFireShadow_37() const { return ___drawFireShadow_37; }
	inline bool* get_address_of_drawFireShadow_37() { return &___drawFireShadow_37; }
	inline void set_drawFireShadow_37(bool value)
	{
		___drawFireShadow_37 = value;
	}

	inline static int32_t get_offset_of__detailAdjustedColor_38() { return static_cast<int32_t>(offsetof(DetonatorFireball_t2551408461, ____detailAdjustedColor_38)); }
	inline Color_t2020392075  get__detailAdjustedColor_38() const { return ____detailAdjustedColor_38; }
	inline Color_t2020392075 * get_address_of__detailAdjustedColor_38() { return &____detailAdjustedColor_38; }
	inline void set__detailAdjustedColor_38(Color_t2020392075  value)
	{
		____detailAdjustedColor_38 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
