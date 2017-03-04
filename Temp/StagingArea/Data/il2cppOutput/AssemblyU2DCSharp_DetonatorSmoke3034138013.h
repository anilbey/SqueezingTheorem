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

// DetonatorSmoke
struct  DetonatorSmoke_t3034138013  : public DetonatorComponent_t521491937
{
public:
	// UnityEngine.Color DetonatorSmoke::_baseColor
	Color_t2020392075  ____baseColor_24;
	// System.Single DetonatorSmoke::_scaledDuration
	float ____scaledDuration_26;
	// UnityEngine.GameObject DetonatorSmoke::_smokeA
	GameObject_t1756533147 * ____smokeA_27;
	// DetonatorBurstEmitter DetonatorSmoke::_smokeAEmitter
	DetonatorBurstEmitter_t3712326808 * ____smokeAEmitter_28;
	// UnityEngine.Material DetonatorSmoke::smokeAMaterial
	Material_t193706927 * ___smokeAMaterial_29;
	// UnityEngine.GameObject DetonatorSmoke::_smokeB
	GameObject_t1756533147 * ____smokeB_30;
	// DetonatorBurstEmitter DetonatorSmoke::_smokeBEmitter
	DetonatorBurstEmitter_t3712326808 * ____smokeBEmitter_31;
	// UnityEngine.Material DetonatorSmoke::smokeBMaterial
	Material_t193706927 * ___smokeBMaterial_32;
	// System.Boolean DetonatorSmoke::drawSmokeA
	bool ___drawSmokeA_33;
	// System.Boolean DetonatorSmoke::drawSmokeB
	bool ___drawSmokeB_34;

public:
	inline static int32_t get_offset_of__baseColor_24() { return static_cast<int32_t>(offsetof(DetonatorSmoke_t3034138013, ____baseColor_24)); }
	inline Color_t2020392075  get__baseColor_24() const { return ____baseColor_24; }
	inline Color_t2020392075 * get_address_of__baseColor_24() { return &____baseColor_24; }
	inline void set__baseColor_24(Color_t2020392075  value)
	{
		____baseColor_24 = value;
	}

	inline static int32_t get_offset_of__scaledDuration_26() { return static_cast<int32_t>(offsetof(DetonatorSmoke_t3034138013, ____scaledDuration_26)); }
	inline float get__scaledDuration_26() const { return ____scaledDuration_26; }
	inline float* get_address_of__scaledDuration_26() { return &____scaledDuration_26; }
	inline void set__scaledDuration_26(float value)
	{
		____scaledDuration_26 = value;
	}

	inline static int32_t get_offset_of__smokeA_27() { return static_cast<int32_t>(offsetof(DetonatorSmoke_t3034138013, ____smokeA_27)); }
	inline GameObject_t1756533147 * get__smokeA_27() const { return ____smokeA_27; }
	inline GameObject_t1756533147 ** get_address_of__smokeA_27() { return &____smokeA_27; }
	inline void set__smokeA_27(GameObject_t1756533147 * value)
	{
		____smokeA_27 = value;
		Il2CppCodeGenWriteBarrier(&____smokeA_27, value);
	}

	inline static int32_t get_offset_of__smokeAEmitter_28() { return static_cast<int32_t>(offsetof(DetonatorSmoke_t3034138013, ____smokeAEmitter_28)); }
	inline DetonatorBurstEmitter_t3712326808 * get__smokeAEmitter_28() const { return ____smokeAEmitter_28; }
	inline DetonatorBurstEmitter_t3712326808 ** get_address_of__smokeAEmitter_28() { return &____smokeAEmitter_28; }
	inline void set__smokeAEmitter_28(DetonatorBurstEmitter_t3712326808 * value)
	{
		____smokeAEmitter_28 = value;
		Il2CppCodeGenWriteBarrier(&____smokeAEmitter_28, value);
	}

	inline static int32_t get_offset_of_smokeAMaterial_29() { return static_cast<int32_t>(offsetof(DetonatorSmoke_t3034138013, ___smokeAMaterial_29)); }
	inline Material_t193706927 * get_smokeAMaterial_29() const { return ___smokeAMaterial_29; }
	inline Material_t193706927 ** get_address_of_smokeAMaterial_29() { return &___smokeAMaterial_29; }
	inline void set_smokeAMaterial_29(Material_t193706927 * value)
	{
		___smokeAMaterial_29 = value;
		Il2CppCodeGenWriteBarrier(&___smokeAMaterial_29, value);
	}

	inline static int32_t get_offset_of__smokeB_30() { return static_cast<int32_t>(offsetof(DetonatorSmoke_t3034138013, ____smokeB_30)); }
	inline GameObject_t1756533147 * get__smokeB_30() const { return ____smokeB_30; }
	inline GameObject_t1756533147 ** get_address_of__smokeB_30() { return &____smokeB_30; }
	inline void set__smokeB_30(GameObject_t1756533147 * value)
	{
		____smokeB_30 = value;
		Il2CppCodeGenWriteBarrier(&____smokeB_30, value);
	}

	inline static int32_t get_offset_of__smokeBEmitter_31() { return static_cast<int32_t>(offsetof(DetonatorSmoke_t3034138013, ____smokeBEmitter_31)); }
	inline DetonatorBurstEmitter_t3712326808 * get__smokeBEmitter_31() const { return ____smokeBEmitter_31; }
	inline DetonatorBurstEmitter_t3712326808 ** get_address_of__smokeBEmitter_31() { return &____smokeBEmitter_31; }
	inline void set__smokeBEmitter_31(DetonatorBurstEmitter_t3712326808 * value)
	{
		____smokeBEmitter_31 = value;
		Il2CppCodeGenWriteBarrier(&____smokeBEmitter_31, value);
	}

	inline static int32_t get_offset_of_smokeBMaterial_32() { return static_cast<int32_t>(offsetof(DetonatorSmoke_t3034138013, ___smokeBMaterial_32)); }
	inline Material_t193706927 * get_smokeBMaterial_32() const { return ___smokeBMaterial_32; }
	inline Material_t193706927 ** get_address_of_smokeBMaterial_32() { return &___smokeBMaterial_32; }
	inline void set_smokeBMaterial_32(Material_t193706927 * value)
	{
		___smokeBMaterial_32 = value;
		Il2CppCodeGenWriteBarrier(&___smokeBMaterial_32, value);
	}

	inline static int32_t get_offset_of_drawSmokeA_33() { return static_cast<int32_t>(offsetof(DetonatorSmoke_t3034138013, ___drawSmokeA_33)); }
	inline bool get_drawSmokeA_33() const { return ___drawSmokeA_33; }
	inline bool* get_address_of_drawSmokeA_33() { return &___drawSmokeA_33; }
	inline void set_drawSmokeA_33(bool value)
	{
		___drawSmokeA_33 = value;
	}

	inline static int32_t get_offset_of_drawSmokeB_34() { return static_cast<int32_t>(offsetof(DetonatorSmoke_t3034138013, ___drawSmokeB_34)); }
	inline bool get_drawSmokeB_34() const { return ___drawSmokeB_34; }
	inline bool* get_address_of_drawSmokeB_34() { return &___drawSmokeB_34; }
	inline void set_drawSmokeB_34(bool value)
	{
		___drawSmokeB_34 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
