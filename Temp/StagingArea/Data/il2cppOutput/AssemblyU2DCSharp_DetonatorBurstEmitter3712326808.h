#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ParticleEmitter
struct ParticleEmitter_t4099167268;
// UnityEngine.ParticleRenderer
struct ParticleRenderer_t1780124863;
// UnityEngine.ParticleAnimator
struct ParticleAnimator_t922362133;
// UnityEngine.Color[]
struct ColorU5BU5D_t672350442;
// UnityEngine.Material
struct Material_t193706927;

#include "AssemblyU2DCSharp_DetonatorComponent521491937.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_ParticleRenderMode325781475.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DetonatorBurstEmitter
struct  DetonatorBurstEmitter_t3712326808  : public DetonatorComponent_t521491937
{
public:
	// UnityEngine.ParticleEmitter DetonatorBurstEmitter::_particleEmitter
	ParticleEmitter_t4099167268 * ____particleEmitter_22;
	// UnityEngine.ParticleRenderer DetonatorBurstEmitter::_particleRenderer
	ParticleRenderer_t1780124863 * ____particleRenderer_23;
	// UnityEngine.ParticleAnimator DetonatorBurstEmitter::_particleAnimator
	ParticleAnimator_t922362133 * ____particleAnimator_24;
	// System.Single DetonatorBurstEmitter::_baseDamping
	float ____baseDamping_25;
	// System.Single DetonatorBurstEmitter::_baseSize
	float ____baseSize_26;
	// UnityEngine.Color DetonatorBurstEmitter::_baseColor
	Color_t2020392075  ____baseColor_27;
	// System.Single DetonatorBurstEmitter::damping
	float ___damping_28;
	// System.Single DetonatorBurstEmitter::startRadius
	float ___startRadius_29;
	// System.Single DetonatorBurstEmitter::maxScreenSize
	float ___maxScreenSize_30;
	// System.Boolean DetonatorBurstEmitter::explodeOnAwake
	bool ___explodeOnAwake_31;
	// System.Boolean DetonatorBurstEmitter::oneShot
	bool ___oneShot_32;
	// System.Single DetonatorBurstEmitter::sizeVariation
	float ___sizeVariation_33;
	// System.Single DetonatorBurstEmitter::particleSize
	float ___particleSize_34;
	// System.Single DetonatorBurstEmitter::count
	float ___count_35;
	// System.Single DetonatorBurstEmitter::sizeGrow
	float ___sizeGrow_36;
	// System.Boolean DetonatorBurstEmitter::exponentialGrowth
	bool ___exponentialGrowth_37;
	// System.Single DetonatorBurstEmitter::durationVariation
	float ___durationVariation_38;
	// System.Boolean DetonatorBurstEmitter::useWorldSpace
	bool ___useWorldSpace_39;
	// System.Single DetonatorBurstEmitter::upwardsBias
	float ___upwardsBias_40;
	// System.Single DetonatorBurstEmitter::angularVelocity
	float ___angularVelocity_41;
	// System.Boolean DetonatorBurstEmitter::randomRotation
	bool ___randomRotation_42;
	// UnityEngine.ParticleRenderMode DetonatorBurstEmitter::renderMode
	int32_t ___renderMode_43;
	// System.Boolean DetonatorBurstEmitter::useExplicitColorAnimation
	bool ___useExplicitColorAnimation_44;
	// UnityEngine.Color[] DetonatorBurstEmitter::colorAnimation
	ColorU5BU5D_t672350442* ___colorAnimation_45;
	// System.Boolean DetonatorBurstEmitter::_delayedExplosionStarted
	bool ____delayedExplosionStarted_46;
	// System.Single DetonatorBurstEmitter::_explodeDelay
	float ____explodeDelay_47;
	// UnityEngine.Material DetonatorBurstEmitter::material
	Material_t193706927 * ___material_48;
	// System.Single DetonatorBurstEmitter::_emitTime
	float ____emitTime_49;
	// System.Single DetonatorBurstEmitter::speed
	float ___speed_50;
	// System.Single DetonatorBurstEmitter::initFraction
	float ___initFraction_51;
	// System.Single DetonatorBurstEmitter::_tmpParticleSize
	float ____tmpParticleSize_53;
	// UnityEngine.Vector3 DetonatorBurstEmitter::_tmpPos
	Vector3_t2243707580  ____tmpPos_54;
	// UnityEngine.Vector3 DetonatorBurstEmitter::_tmpDir
	Vector3_t2243707580  ____tmpDir_55;
	// UnityEngine.Vector3 DetonatorBurstEmitter::_thisPos
	Vector3_t2243707580  ____thisPos_56;
	// System.Single DetonatorBurstEmitter::_tmpDuration
	float ____tmpDuration_57;
	// System.Single DetonatorBurstEmitter::_tmpCount
	float ____tmpCount_58;
	// System.Single DetonatorBurstEmitter::_scaledDuration
	float ____scaledDuration_59;
	// System.Single DetonatorBurstEmitter::_scaledDurationVariation
	float ____scaledDurationVariation_60;
	// System.Single DetonatorBurstEmitter::_scaledStartRadius
	float ____scaledStartRadius_61;
	// System.Single DetonatorBurstEmitter::_scaledColor
	float ____scaledColor_62;
	// System.Single DetonatorBurstEmitter::_randomizedRotation
	float ____randomizedRotation_63;
	// System.Single DetonatorBurstEmitter::_tmpAngularVelocity
	float ____tmpAngularVelocity_64;

public:
	inline static int32_t get_offset_of__particleEmitter_22() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ____particleEmitter_22)); }
	inline ParticleEmitter_t4099167268 * get__particleEmitter_22() const { return ____particleEmitter_22; }
	inline ParticleEmitter_t4099167268 ** get_address_of__particleEmitter_22() { return &____particleEmitter_22; }
	inline void set__particleEmitter_22(ParticleEmitter_t4099167268 * value)
	{
		____particleEmitter_22 = value;
		Il2CppCodeGenWriteBarrier(&____particleEmitter_22, value);
	}

	inline static int32_t get_offset_of__particleRenderer_23() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ____particleRenderer_23)); }
	inline ParticleRenderer_t1780124863 * get__particleRenderer_23() const { return ____particleRenderer_23; }
	inline ParticleRenderer_t1780124863 ** get_address_of__particleRenderer_23() { return &____particleRenderer_23; }
	inline void set__particleRenderer_23(ParticleRenderer_t1780124863 * value)
	{
		____particleRenderer_23 = value;
		Il2CppCodeGenWriteBarrier(&____particleRenderer_23, value);
	}

	inline static int32_t get_offset_of__particleAnimator_24() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ____particleAnimator_24)); }
	inline ParticleAnimator_t922362133 * get__particleAnimator_24() const { return ____particleAnimator_24; }
	inline ParticleAnimator_t922362133 ** get_address_of__particleAnimator_24() { return &____particleAnimator_24; }
	inline void set__particleAnimator_24(ParticleAnimator_t922362133 * value)
	{
		____particleAnimator_24 = value;
		Il2CppCodeGenWriteBarrier(&____particleAnimator_24, value);
	}

	inline static int32_t get_offset_of__baseDamping_25() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ____baseDamping_25)); }
	inline float get__baseDamping_25() const { return ____baseDamping_25; }
	inline float* get_address_of__baseDamping_25() { return &____baseDamping_25; }
	inline void set__baseDamping_25(float value)
	{
		____baseDamping_25 = value;
	}

	inline static int32_t get_offset_of__baseSize_26() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ____baseSize_26)); }
	inline float get__baseSize_26() const { return ____baseSize_26; }
	inline float* get_address_of__baseSize_26() { return &____baseSize_26; }
	inline void set__baseSize_26(float value)
	{
		____baseSize_26 = value;
	}

	inline static int32_t get_offset_of__baseColor_27() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ____baseColor_27)); }
	inline Color_t2020392075  get__baseColor_27() const { return ____baseColor_27; }
	inline Color_t2020392075 * get_address_of__baseColor_27() { return &____baseColor_27; }
	inline void set__baseColor_27(Color_t2020392075  value)
	{
		____baseColor_27 = value;
	}

	inline static int32_t get_offset_of_damping_28() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ___damping_28)); }
	inline float get_damping_28() const { return ___damping_28; }
	inline float* get_address_of_damping_28() { return &___damping_28; }
	inline void set_damping_28(float value)
	{
		___damping_28 = value;
	}

	inline static int32_t get_offset_of_startRadius_29() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ___startRadius_29)); }
	inline float get_startRadius_29() const { return ___startRadius_29; }
	inline float* get_address_of_startRadius_29() { return &___startRadius_29; }
	inline void set_startRadius_29(float value)
	{
		___startRadius_29 = value;
	}

	inline static int32_t get_offset_of_maxScreenSize_30() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ___maxScreenSize_30)); }
	inline float get_maxScreenSize_30() const { return ___maxScreenSize_30; }
	inline float* get_address_of_maxScreenSize_30() { return &___maxScreenSize_30; }
	inline void set_maxScreenSize_30(float value)
	{
		___maxScreenSize_30 = value;
	}

	inline static int32_t get_offset_of_explodeOnAwake_31() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ___explodeOnAwake_31)); }
	inline bool get_explodeOnAwake_31() const { return ___explodeOnAwake_31; }
	inline bool* get_address_of_explodeOnAwake_31() { return &___explodeOnAwake_31; }
	inline void set_explodeOnAwake_31(bool value)
	{
		___explodeOnAwake_31 = value;
	}

	inline static int32_t get_offset_of_oneShot_32() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ___oneShot_32)); }
	inline bool get_oneShot_32() const { return ___oneShot_32; }
	inline bool* get_address_of_oneShot_32() { return &___oneShot_32; }
	inline void set_oneShot_32(bool value)
	{
		___oneShot_32 = value;
	}

	inline static int32_t get_offset_of_sizeVariation_33() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ___sizeVariation_33)); }
	inline float get_sizeVariation_33() const { return ___sizeVariation_33; }
	inline float* get_address_of_sizeVariation_33() { return &___sizeVariation_33; }
	inline void set_sizeVariation_33(float value)
	{
		___sizeVariation_33 = value;
	}

	inline static int32_t get_offset_of_particleSize_34() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ___particleSize_34)); }
	inline float get_particleSize_34() const { return ___particleSize_34; }
	inline float* get_address_of_particleSize_34() { return &___particleSize_34; }
	inline void set_particleSize_34(float value)
	{
		___particleSize_34 = value;
	}

	inline static int32_t get_offset_of_count_35() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ___count_35)); }
	inline float get_count_35() const { return ___count_35; }
	inline float* get_address_of_count_35() { return &___count_35; }
	inline void set_count_35(float value)
	{
		___count_35 = value;
	}

	inline static int32_t get_offset_of_sizeGrow_36() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ___sizeGrow_36)); }
	inline float get_sizeGrow_36() const { return ___sizeGrow_36; }
	inline float* get_address_of_sizeGrow_36() { return &___sizeGrow_36; }
	inline void set_sizeGrow_36(float value)
	{
		___sizeGrow_36 = value;
	}

	inline static int32_t get_offset_of_exponentialGrowth_37() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ___exponentialGrowth_37)); }
	inline bool get_exponentialGrowth_37() const { return ___exponentialGrowth_37; }
	inline bool* get_address_of_exponentialGrowth_37() { return &___exponentialGrowth_37; }
	inline void set_exponentialGrowth_37(bool value)
	{
		___exponentialGrowth_37 = value;
	}

	inline static int32_t get_offset_of_durationVariation_38() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ___durationVariation_38)); }
	inline float get_durationVariation_38() const { return ___durationVariation_38; }
	inline float* get_address_of_durationVariation_38() { return &___durationVariation_38; }
	inline void set_durationVariation_38(float value)
	{
		___durationVariation_38 = value;
	}

	inline static int32_t get_offset_of_useWorldSpace_39() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ___useWorldSpace_39)); }
	inline bool get_useWorldSpace_39() const { return ___useWorldSpace_39; }
	inline bool* get_address_of_useWorldSpace_39() { return &___useWorldSpace_39; }
	inline void set_useWorldSpace_39(bool value)
	{
		___useWorldSpace_39 = value;
	}

	inline static int32_t get_offset_of_upwardsBias_40() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ___upwardsBias_40)); }
	inline float get_upwardsBias_40() const { return ___upwardsBias_40; }
	inline float* get_address_of_upwardsBias_40() { return &___upwardsBias_40; }
	inline void set_upwardsBias_40(float value)
	{
		___upwardsBias_40 = value;
	}

	inline static int32_t get_offset_of_angularVelocity_41() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ___angularVelocity_41)); }
	inline float get_angularVelocity_41() const { return ___angularVelocity_41; }
	inline float* get_address_of_angularVelocity_41() { return &___angularVelocity_41; }
	inline void set_angularVelocity_41(float value)
	{
		___angularVelocity_41 = value;
	}

	inline static int32_t get_offset_of_randomRotation_42() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ___randomRotation_42)); }
	inline bool get_randomRotation_42() const { return ___randomRotation_42; }
	inline bool* get_address_of_randomRotation_42() { return &___randomRotation_42; }
	inline void set_randomRotation_42(bool value)
	{
		___randomRotation_42 = value;
	}

	inline static int32_t get_offset_of_renderMode_43() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ___renderMode_43)); }
	inline int32_t get_renderMode_43() const { return ___renderMode_43; }
	inline int32_t* get_address_of_renderMode_43() { return &___renderMode_43; }
	inline void set_renderMode_43(int32_t value)
	{
		___renderMode_43 = value;
	}

	inline static int32_t get_offset_of_useExplicitColorAnimation_44() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ___useExplicitColorAnimation_44)); }
	inline bool get_useExplicitColorAnimation_44() const { return ___useExplicitColorAnimation_44; }
	inline bool* get_address_of_useExplicitColorAnimation_44() { return &___useExplicitColorAnimation_44; }
	inline void set_useExplicitColorAnimation_44(bool value)
	{
		___useExplicitColorAnimation_44 = value;
	}

	inline static int32_t get_offset_of_colorAnimation_45() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ___colorAnimation_45)); }
	inline ColorU5BU5D_t672350442* get_colorAnimation_45() const { return ___colorAnimation_45; }
	inline ColorU5BU5D_t672350442** get_address_of_colorAnimation_45() { return &___colorAnimation_45; }
	inline void set_colorAnimation_45(ColorU5BU5D_t672350442* value)
	{
		___colorAnimation_45 = value;
		Il2CppCodeGenWriteBarrier(&___colorAnimation_45, value);
	}

	inline static int32_t get_offset_of__delayedExplosionStarted_46() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ____delayedExplosionStarted_46)); }
	inline bool get__delayedExplosionStarted_46() const { return ____delayedExplosionStarted_46; }
	inline bool* get_address_of__delayedExplosionStarted_46() { return &____delayedExplosionStarted_46; }
	inline void set__delayedExplosionStarted_46(bool value)
	{
		____delayedExplosionStarted_46 = value;
	}

	inline static int32_t get_offset_of__explodeDelay_47() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ____explodeDelay_47)); }
	inline float get__explodeDelay_47() const { return ____explodeDelay_47; }
	inline float* get_address_of__explodeDelay_47() { return &____explodeDelay_47; }
	inline void set__explodeDelay_47(float value)
	{
		____explodeDelay_47 = value;
	}

	inline static int32_t get_offset_of_material_48() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ___material_48)); }
	inline Material_t193706927 * get_material_48() const { return ___material_48; }
	inline Material_t193706927 ** get_address_of_material_48() { return &___material_48; }
	inline void set_material_48(Material_t193706927 * value)
	{
		___material_48 = value;
		Il2CppCodeGenWriteBarrier(&___material_48, value);
	}

	inline static int32_t get_offset_of__emitTime_49() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ____emitTime_49)); }
	inline float get__emitTime_49() const { return ____emitTime_49; }
	inline float* get_address_of__emitTime_49() { return &____emitTime_49; }
	inline void set__emitTime_49(float value)
	{
		____emitTime_49 = value;
	}

	inline static int32_t get_offset_of_speed_50() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ___speed_50)); }
	inline float get_speed_50() const { return ___speed_50; }
	inline float* get_address_of_speed_50() { return &___speed_50; }
	inline void set_speed_50(float value)
	{
		___speed_50 = value;
	}

	inline static int32_t get_offset_of_initFraction_51() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ___initFraction_51)); }
	inline float get_initFraction_51() const { return ___initFraction_51; }
	inline float* get_address_of_initFraction_51() { return &___initFraction_51; }
	inline void set_initFraction_51(float value)
	{
		___initFraction_51 = value;
	}

	inline static int32_t get_offset_of__tmpParticleSize_53() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ____tmpParticleSize_53)); }
	inline float get__tmpParticleSize_53() const { return ____tmpParticleSize_53; }
	inline float* get_address_of__tmpParticleSize_53() { return &____tmpParticleSize_53; }
	inline void set__tmpParticleSize_53(float value)
	{
		____tmpParticleSize_53 = value;
	}

	inline static int32_t get_offset_of__tmpPos_54() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ____tmpPos_54)); }
	inline Vector3_t2243707580  get__tmpPos_54() const { return ____tmpPos_54; }
	inline Vector3_t2243707580 * get_address_of__tmpPos_54() { return &____tmpPos_54; }
	inline void set__tmpPos_54(Vector3_t2243707580  value)
	{
		____tmpPos_54 = value;
	}

	inline static int32_t get_offset_of__tmpDir_55() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ____tmpDir_55)); }
	inline Vector3_t2243707580  get__tmpDir_55() const { return ____tmpDir_55; }
	inline Vector3_t2243707580 * get_address_of__tmpDir_55() { return &____tmpDir_55; }
	inline void set__tmpDir_55(Vector3_t2243707580  value)
	{
		____tmpDir_55 = value;
	}

	inline static int32_t get_offset_of__thisPos_56() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ____thisPos_56)); }
	inline Vector3_t2243707580  get__thisPos_56() const { return ____thisPos_56; }
	inline Vector3_t2243707580 * get_address_of__thisPos_56() { return &____thisPos_56; }
	inline void set__thisPos_56(Vector3_t2243707580  value)
	{
		____thisPos_56 = value;
	}

	inline static int32_t get_offset_of__tmpDuration_57() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ____tmpDuration_57)); }
	inline float get__tmpDuration_57() const { return ____tmpDuration_57; }
	inline float* get_address_of__tmpDuration_57() { return &____tmpDuration_57; }
	inline void set__tmpDuration_57(float value)
	{
		____tmpDuration_57 = value;
	}

	inline static int32_t get_offset_of__tmpCount_58() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ____tmpCount_58)); }
	inline float get__tmpCount_58() const { return ____tmpCount_58; }
	inline float* get_address_of__tmpCount_58() { return &____tmpCount_58; }
	inline void set__tmpCount_58(float value)
	{
		____tmpCount_58 = value;
	}

	inline static int32_t get_offset_of__scaledDuration_59() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ____scaledDuration_59)); }
	inline float get__scaledDuration_59() const { return ____scaledDuration_59; }
	inline float* get_address_of__scaledDuration_59() { return &____scaledDuration_59; }
	inline void set__scaledDuration_59(float value)
	{
		____scaledDuration_59 = value;
	}

	inline static int32_t get_offset_of__scaledDurationVariation_60() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ____scaledDurationVariation_60)); }
	inline float get__scaledDurationVariation_60() const { return ____scaledDurationVariation_60; }
	inline float* get_address_of__scaledDurationVariation_60() { return &____scaledDurationVariation_60; }
	inline void set__scaledDurationVariation_60(float value)
	{
		____scaledDurationVariation_60 = value;
	}

	inline static int32_t get_offset_of__scaledStartRadius_61() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ____scaledStartRadius_61)); }
	inline float get__scaledStartRadius_61() const { return ____scaledStartRadius_61; }
	inline float* get_address_of__scaledStartRadius_61() { return &____scaledStartRadius_61; }
	inline void set__scaledStartRadius_61(float value)
	{
		____scaledStartRadius_61 = value;
	}

	inline static int32_t get_offset_of__scaledColor_62() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ____scaledColor_62)); }
	inline float get__scaledColor_62() const { return ____scaledColor_62; }
	inline float* get_address_of__scaledColor_62() { return &____scaledColor_62; }
	inline void set__scaledColor_62(float value)
	{
		____scaledColor_62 = value;
	}

	inline static int32_t get_offset_of__randomizedRotation_63() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ____randomizedRotation_63)); }
	inline float get__randomizedRotation_63() const { return ____randomizedRotation_63; }
	inline float* get_address_of__randomizedRotation_63() { return &____randomizedRotation_63; }
	inline void set__randomizedRotation_63(float value)
	{
		____randomizedRotation_63 = value;
	}

	inline static int32_t get_offset_of__tmpAngularVelocity_64() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808, ____tmpAngularVelocity_64)); }
	inline float get__tmpAngularVelocity_64() const { return ____tmpAngularVelocity_64; }
	inline float* get_address_of__tmpAngularVelocity_64() { return &____tmpAngularVelocity_64; }
	inline void set__tmpAngularVelocity_64(float value)
	{
		____tmpAngularVelocity_64 = value;
	}
};

struct DetonatorBurstEmitter_t3712326808_StaticFields
{
public:
	// System.Single DetonatorBurstEmitter::epsilon
	float ___epsilon_52;

public:
	inline static int32_t get_offset_of_epsilon_52() { return static_cast<int32_t>(offsetof(DetonatorBurstEmitter_t3712326808_StaticFields, ___epsilon_52)); }
	inline float get_epsilon_52() const { return ___epsilon_52; }
	inline float* get_address_of_epsilon_52() { return &___epsilon_52; }
	inline void set_epsilon_52(float value)
	{
		___epsilon_52 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
