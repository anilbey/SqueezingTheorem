#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Component[]
struct ComponentU5BU5D_t4136971630;
// DetonatorFireball
struct DetonatorFireball_t2551408461;
// DetonatorSparks
struct DetonatorSparks_t3713922286;
// DetonatorShockwave
struct DetonatorShockwave_t1192808091;
// DetonatorSmoke
struct DetonatorSmoke_t3034138013;
// DetonatorGlow
struct DetonatorGlow_t2430179645;
// DetonatorLight
struct DetonatorLight_t1587463740;
// DetonatorForce
struct DetonatorForce_t2238798923;
// DetonatorHeatwave
struct DetonatorHeatwave_t2241509887;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Detonator
struct  Detonator_t532351596  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Detonator::size
	float ___size_5;
	// UnityEngine.Color Detonator::color
	Color_t2020392075  ___color_6;
	// System.Boolean Detonator::explodeOnStart
	bool ___explodeOnStart_7;
	// System.Single Detonator::duration
	float ___duration_8;
	// System.Single Detonator::detail
	float ___detail_9;
	// System.Single Detonator::upwardsBias
	float ___upwardsBias_10;
	// System.Single Detonator::destroyTime
	float ___destroyTime_11;
	// System.Boolean Detonator::useWorldSpace
	bool ___useWorldSpace_12;
	// UnityEngine.Vector3 Detonator::direction
	Vector3_t2243707580  ___direction_13;
	// UnityEngine.Material Detonator::fireballAMaterial
	Material_t193706927 * ___fireballAMaterial_14;
	// UnityEngine.Material Detonator::fireballBMaterial
	Material_t193706927 * ___fireballBMaterial_15;
	// UnityEngine.Material Detonator::smokeAMaterial
	Material_t193706927 * ___smokeAMaterial_16;
	// UnityEngine.Material Detonator::smokeBMaterial
	Material_t193706927 * ___smokeBMaterial_17;
	// UnityEngine.Material Detonator::shockwaveMaterial
	Material_t193706927 * ___shockwaveMaterial_18;
	// UnityEngine.Material Detonator::sparksMaterial
	Material_t193706927 * ___sparksMaterial_19;
	// UnityEngine.Material Detonator::glowMaterial
	Material_t193706927 * ___glowMaterial_20;
	// UnityEngine.Material Detonator::heatwaveMaterial
	Material_t193706927 * ___heatwaveMaterial_21;
	// UnityEngine.Component[] Detonator::components
	ComponentU5BU5D_t4136971630* ___components_22;
	// DetonatorFireball Detonator::_fireball
	DetonatorFireball_t2551408461 * ____fireball_23;
	// DetonatorSparks Detonator::_sparks
	DetonatorSparks_t3713922286 * ____sparks_24;
	// DetonatorShockwave Detonator::_shockwave
	DetonatorShockwave_t1192808091 * ____shockwave_25;
	// DetonatorSmoke Detonator::_smoke
	DetonatorSmoke_t3034138013 * ____smoke_26;
	// DetonatorGlow Detonator::_glow
	DetonatorGlow_t2430179645 * ____glow_27;
	// DetonatorLight Detonator::_light
	DetonatorLight_t1587463740 * ____light_28;
	// DetonatorForce Detonator::_force
	DetonatorForce_t2238798923 * ____force_29;
	// DetonatorHeatwave Detonator::_heatwave
	DetonatorHeatwave_t2241509887 * ____heatwave_30;
	// System.Boolean Detonator::autoCreateFireball
	bool ___autoCreateFireball_31;
	// System.Boolean Detonator::autoCreateSparks
	bool ___autoCreateSparks_32;
	// System.Boolean Detonator::autoCreateShockwave
	bool ___autoCreateShockwave_33;
	// System.Boolean Detonator::autoCreateSmoke
	bool ___autoCreateSmoke_34;
	// System.Boolean Detonator::autoCreateGlow
	bool ___autoCreateGlow_35;
	// System.Boolean Detonator::autoCreateLight
	bool ___autoCreateLight_36;
	// System.Boolean Detonator::autoCreateForce
	bool ___autoCreateForce_37;
	// System.Boolean Detonator::autoCreateHeatwave
	bool ___autoCreateHeatwave_38;
	// System.Single Detonator::_lastExplosionTime
	float ____lastExplosionTime_39;
	// System.Boolean Detonator::_firstComponentUpdate
	bool ____firstComponentUpdate_40;
	// UnityEngine.Component[] Detonator::_subDetonators
	ComponentU5BU5D_t4136971630* ____subDetonators_41;

public:
	inline static int32_t get_offset_of_size_5() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ___size_5)); }
	inline float get_size_5() const { return ___size_5; }
	inline float* get_address_of_size_5() { return &___size_5; }
	inline void set_size_5(float value)
	{
		___size_5 = value;
	}

	inline static int32_t get_offset_of_color_6() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ___color_6)); }
	inline Color_t2020392075  get_color_6() const { return ___color_6; }
	inline Color_t2020392075 * get_address_of_color_6() { return &___color_6; }
	inline void set_color_6(Color_t2020392075  value)
	{
		___color_6 = value;
	}

	inline static int32_t get_offset_of_explodeOnStart_7() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ___explodeOnStart_7)); }
	inline bool get_explodeOnStart_7() const { return ___explodeOnStart_7; }
	inline bool* get_address_of_explodeOnStart_7() { return &___explodeOnStart_7; }
	inline void set_explodeOnStart_7(bool value)
	{
		___explodeOnStart_7 = value;
	}

	inline static int32_t get_offset_of_duration_8() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ___duration_8)); }
	inline float get_duration_8() const { return ___duration_8; }
	inline float* get_address_of_duration_8() { return &___duration_8; }
	inline void set_duration_8(float value)
	{
		___duration_8 = value;
	}

	inline static int32_t get_offset_of_detail_9() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ___detail_9)); }
	inline float get_detail_9() const { return ___detail_9; }
	inline float* get_address_of_detail_9() { return &___detail_9; }
	inline void set_detail_9(float value)
	{
		___detail_9 = value;
	}

	inline static int32_t get_offset_of_upwardsBias_10() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ___upwardsBias_10)); }
	inline float get_upwardsBias_10() const { return ___upwardsBias_10; }
	inline float* get_address_of_upwardsBias_10() { return &___upwardsBias_10; }
	inline void set_upwardsBias_10(float value)
	{
		___upwardsBias_10 = value;
	}

	inline static int32_t get_offset_of_destroyTime_11() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ___destroyTime_11)); }
	inline float get_destroyTime_11() const { return ___destroyTime_11; }
	inline float* get_address_of_destroyTime_11() { return &___destroyTime_11; }
	inline void set_destroyTime_11(float value)
	{
		___destroyTime_11 = value;
	}

	inline static int32_t get_offset_of_useWorldSpace_12() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ___useWorldSpace_12)); }
	inline bool get_useWorldSpace_12() const { return ___useWorldSpace_12; }
	inline bool* get_address_of_useWorldSpace_12() { return &___useWorldSpace_12; }
	inline void set_useWorldSpace_12(bool value)
	{
		___useWorldSpace_12 = value;
	}

	inline static int32_t get_offset_of_direction_13() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ___direction_13)); }
	inline Vector3_t2243707580  get_direction_13() const { return ___direction_13; }
	inline Vector3_t2243707580 * get_address_of_direction_13() { return &___direction_13; }
	inline void set_direction_13(Vector3_t2243707580  value)
	{
		___direction_13 = value;
	}

	inline static int32_t get_offset_of_fireballAMaterial_14() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ___fireballAMaterial_14)); }
	inline Material_t193706927 * get_fireballAMaterial_14() const { return ___fireballAMaterial_14; }
	inline Material_t193706927 ** get_address_of_fireballAMaterial_14() { return &___fireballAMaterial_14; }
	inline void set_fireballAMaterial_14(Material_t193706927 * value)
	{
		___fireballAMaterial_14 = value;
		Il2CppCodeGenWriteBarrier(&___fireballAMaterial_14, value);
	}

	inline static int32_t get_offset_of_fireballBMaterial_15() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ___fireballBMaterial_15)); }
	inline Material_t193706927 * get_fireballBMaterial_15() const { return ___fireballBMaterial_15; }
	inline Material_t193706927 ** get_address_of_fireballBMaterial_15() { return &___fireballBMaterial_15; }
	inline void set_fireballBMaterial_15(Material_t193706927 * value)
	{
		___fireballBMaterial_15 = value;
		Il2CppCodeGenWriteBarrier(&___fireballBMaterial_15, value);
	}

	inline static int32_t get_offset_of_smokeAMaterial_16() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ___smokeAMaterial_16)); }
	inline Material_t193706927 * get_smokeAMaterial_16() const { return ___smokeAMaterial_16; }
	inline Material_t193706927 ** get_address_of_smokeAMaterial_16() { return &___smokeAMaterial_16; }
	inline void set_smokeAMaterial_16(Material_t193706927 * value)
	{
		___smokeAMaterial_16 = value;
		Il2CppCodeGenWriteBarrier(&___smokeAMaterial_16, value);
	}

	inline static int32_t get_offset_of_smokeBMaterial_17() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ___smokeBMaterial_17)); }
	inline Material_t193706927 * get_smokeBMaterial_17() const { return ___smokeBMaterial_17; }
	inline Material_t193706927 ** get_address_of_smokeBMaterial_17() { return &___smokeBMaterial_17; }
	inline void set_smokeBMaterial_17(Material_t193706927 * value)
	{
		___smokeBMaterial_17 = value;
		Il2CppCodeGenWriteBarrier(&___smokeBMaterial_17, value);
	}

	inline static int32_t get_offset_of_shockwaveMaterial_18() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ___shockwaveMaterial_18)); }
	inline Material_t193706927 * get_shockwaveMaterial_18() const { return ___shockwaveMaterial_18; }
	inline Material_t193706927 ** get_address_of_shockwaveMaterial_18() { return &___shockwaveMaterial_18; }
	inline void set_shockwaveMaterial_18(Material_t193706927 * value)
	{
		___shockwaveMaterial_18 = value;
		Il2CppCodeGenWriteBarrier(&___shockwaveMaterial_18, value);
	}

	inline static int32_t get_offset_of_sparksMaterial_19() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ___sparksMaterial_19)); }
	inline Material_t193706927 * get_sparksMaterial_19() const { return ___sparksMaterial_19; }
	inline Material_t193706927 ** get_address_of_sparksMaterial_19() { return &___sparksMaterial_19; }
	inline void set_sparksMaterial_19(Material_t193706927 * value)
	{
		___sparksMaterial_19 = value;
		Il2CppCodeGenWriteBarrier(&___sparksMaterial_19, value);
	}

	inline static int32_t get_offset_of_glowMaterial_20() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ___glowMaterial_20)); }
	inline Material_t193706927 * get_glowMaterial_20() const { return ___glowMaterial_20; }
	inline Material_t193706927 ** get_address_of_glowMaterial_20() { return &___glowMaterial_20; }
	inline void set_glowMaterial_20(Material_t193706927 * value)
	{
		___glowMaterial_20 = value;
		Il2CppCodeGenWriteBarrier(&___glowMaterial_20, value);
	}

	inline static int32_t get_offset_of_heatwaveMaterial_21() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ___heatwaveMaterial_21)); }
	inline Material_t193706927 * get_heatwaveMaterial_21() const { return ___heatwaveMaterial_21; }
	inline Material_t193706927 ** get_address_of_heatwaveMaterial_21() { return &___heatwaveMaterial_21; }
	inline void set_heatwaveMaterial_21(Material_t193706927 * value)
	{
		___heatwaveMaterial_21 = value;
		Il2CppCodeGenWriteBarrier(&___heatwaveMaterial_21, value);
	}

	inline static int32_t get_offset_of_components_22() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ___components_22)); }
	inline ComponentU5BU5D_t4136971630* get_components_22() const { return ___components_22; }
	inline ComponentU5BU5D_t4136971630** get_address_of_components_22() { return &___components_22; }
	inline void set_components_22(ComponentU5BU5D_t4136971630* value)
	{
		___components_22 = value;
		Il2CppCodeGenWriteBarrier(&___components_22, value);
	}

	inline static int32_t get_offset_of__fireball_23() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ____fireball_23)); }
	inline DetonatorFireball_t2551408461 * get__fireball_23() const { return ____fireball_23; }
	inline DetonatorFireball_t2551408461 ** get_address_of__fireball_23() { return &____fireball_23; }
	inline void set__fireball_23(DetonatorFireball_t2551408461 * value)
	{
		____fireball_23 = value;
		Il2CppCodeGenWriteBarrier(&____fireball_23, value);
	}

	inline static int32_t get_offset_of__sparks_24() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ____sparks_24)); }
	inline DetonatorSparks_t3713922286 * get__sparks_24() const { return ____sparks_24; }
	inline DetonatorSparks_t3713922286 ** get_address_of__sparks_24() { return &____sparks_24; }
	inline void set__sparks_24(DetonatorSparks_t3713922286 * value)
	{
		____sparks_24 = value;
		Il2CppCodeGenWriteBarrier(&____sparks_24, value);
	}

	inline static int32_t get_offset_of__shockwave_25() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ____shockwave_25)); }
	inline DetonatorShockwave_t1192808091 * get__shockwave_25() const { return ____shockwave_25; }
	inline DetonatorShockwave_t1192808091 ** get_address_of__shockwave_25() { return &____shockwave_25; }
	inline void set__shockwave_25(DetonatorShockwave_t1192808091 * value)
	{
		____shockwave_25 = value;
		Il2CppCodeGenWriteBarrier(&____shockwave_25, value);
	}

	inline static int32_t get_offset_of__smoke_26() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ____smoke_26)); }
	inline DetonatorSmoke_t3034138013 * get__smoke_26() const { return ____smoke_26; }
	inline DetonatorSmoke_t3034138013 ** get_address_of__smoke_26() { return &____smoke_26; }
	inline void set__smoke_26(DetonatorSmoke_t3034138013 * value)
	{
		____smoke_26 = value;
		Il2CppCodeGenWriteBarrier(&____smoke_26, value);
	}

	inline static int32_t get_offset_of__glow_27() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ____glow_27)); }
	inline DetonatorGlow_t2430179645 * get__glow_27() const { return ____glow_27; }
	inline DetonatorGlow_t2430179645 ** get_address_of__glow_27() { return &____glow_27; }
	inline void set__glow_27(DetonatorGlow_t2430179645 * value)
	{
		____glow_27 = value;
		Il2CppCodeGenWriteBarrier(&____glow_27, value);
	}

	inline static int32_t get_offset_of__light_28() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ____light_28)); }
	inline DetonatorLight_t1587463740 * get__light_28() const { return ____light_28; }
	inline DetonatorLight_t1587463740 ** get_address_of__light_28() { return &____light_28; }
	inline void set__light_28(DetonatorLight_t1587463740 * value)
	{
		____light_28 = value;
		Il2CppCodeGenWriteBarrier(&____light_28, value);
	}

	inline static int32_t get_offset_of__force_29() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ____force_29)); }
	inline DetonatorForce_t2238798923 * get__force_29() const { return ____force_29; }
	inline DetonatorForce_t2238798923 ** get_address_of__force_29() { return &____force_29; }
	inline void set__force_29(DetonatorForce_t2238798923 * value)
	{
		____force_29 = value;
		Il2CppCodeGenWriteBarrier(&____force_29, value);
	}

	inline static int32_t get_offset_of__heatwave_30() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ____heatwave_30)); }
	inline DetonatorHeatwave_t2241509887 * get__heatwave_30() const { return ____heatwave_30; }
	inline DetonatorHeatwave_t2241509887 ** get_address_of__heatwave_30() { return &____heatwave_30; }
	inline void set__heatwave_30(DetonatorHeatwave_t2241509887 * value)
	{
		____heatwave_30 = value;
		Il2CppCodeGenWriteBarrier(&____heatwave_30, value);
	}

	inline static int32_t get_offset_of_autoCreateFireball_31() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ___autoCreateFireball_31)); }
	inline bool get_autoCreateFireball_31() const { return ___autoCreateFireball_31; }
	inline bool* get_address_of_autoCreateFireball_31() { return &___autoCreateFireball_31; }
	inline void set_autoCreateFireball_31(bool value)
	{
		___autoCreateFireball_31 = value;
	}

	inline static int32_t get_offset_of_autoCreateSparks_32() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ___autoCreateSparks_32)); }
	inline bool get_autoCreateSparks_32() const { return ___autoCreateSparks_32; }
	inline bool* get_address_of_autoCreateSparks_32() { return &___autoCreateSparks_32; }
	inline void set_autoCreateSparks_32(bool value)
	{
		___autoCreateSparks_32 = value;
	}

	inline static int32_t get_offset_of_autoCreateShockwave_33() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ___autoCreateShockwave_33)); }
	inline bool get_autoCreateShockwave_33() const { return ___autoCreateShockwave_33; }
	inline bool* get_address_of_autoCreateShockwave_33() { return &___autoCreateShockwave_33; }
	inline void set_autoCreateShockwave_33(bool value)
	{
		___autoCreateShockwave_33 = value;
	}

	inline static int32_t get_offset_of_autoCreateSmoke_34() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ___autoCreateSmoke_34)); }
	inline bool get_autoCreateSmoke_34() const { return ___autoCreateSmoke_34; }
	inline bool* get_address_of_autoCreateSmoke_34() { return &___autoCreateSmoke_34; }
	inline void set_autoCreateSmoke_34(bool value)
	{
		___autoCreateSmoke_34 = value;
	}

	inline static int32_t get_offset_of_autoCreateGlow_35() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ___autoCreateGlow_35)); }
	inline bool get_autoCreateGlow_35() const { return ___autoCreateGlow_35; }
	inline bool* get_address_of_autoCreateGlow_35() { return &___autoCreateGlow_35; }
	inline void set_autoCreateGlow_35(bool value)
	{
		___autoCreateGlow_35 = value;
	}

	inline static int32_t get_offset_of_autoCreateLight_36() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ___autoCreateLight_36)); }
	inline bool get_autoCreateLight_36() const { return ___autoCreateLight_36; }
	inline bool* get_address_of_autoCreateLight_36() { return &___autoCreateLight_36; }
	inline void set_autoCreateLight_36(bool value)
	{
		___autoCreateLight_36 = value;
	}

	inline static int32_t get_offset_of_autoCreateForce_37() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ___autoCreateForce_37)); }
	inline bool get_autoCreateForce_37() const { return ___autoCreateForce_37; }
	inline bool* get_address_of_autoCreateForce_37() { return &___autoCreateForce_37; }
	inline void set_autoCreateForce_37(bool value)
	{
		___autoCreateForce_37 = value;
	}

	inline static int32_t get_offset_of_autoCreateHeatwave_38() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ___autoCreateHeatwave_38)); }
	inline bool get_autoCreateHeatwave_38() const { return ___autoCreateHeatwave_38; }
	inline bool* get_address_of_autoCreateHeatwave_38() { return &___autoCreateHeatwave_38; }
	inline void set_autoCreateHeatwave_38(bool value)
	{
		___autoCreateHeatwave_38 = value;
	}

	inline static int32_t get_offset_of__lastExplosionTime_39() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ____lastExplosionTime_39)); }
	inline float get__lastExplosionTime_39() const { return ____lastExplosionTime_39; }
	inline float* get_address_of__lastExplosionTime_39() { return &____lastExplosionTime_39; }
	inline void set__lastExplosionTime_39(float value)
	{
		____lastExplosionTime_39 = value;
	}

	inline static int32_t get_offset_of__firstComponentUpdate_40() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ____firstComponentUpdate_40)); }
	inline bool get__firstComponentUpdate_40() const { return ____firstComponentUpdate_40; }
	inline bool* get_address_of__firstComponentUpdate_40() { return &____firstComponentUpdate_40; }
	inline void set__firstComponentUpdate_40(bool value)
	{
		____firstComponentUpdate_40 = value;
	}

	inline static int32_t get_offset_of__subDetonators_41() { return static_cast<int32_t>(offsetof(Detonator_t532351596, ____subDetonators_41)); }
	inline ComponentU5BU5D_t4136971630* get__subDetonators_41() const { return ____subDetonators_41; }
	inline ComponentU5BU5D_t4136971630** get_address_of__subDetonators_41() { return &____subDetonators_41; }
	inline void set__subDetonators_41(ComponentU5BU5D_t4136971630* value)
	{
		____subDetonators_41 = value;
		Il2CppCodeGenWriteBarrier(&____subDetonators_41, value);
	}
};

struct Detonator_t532351596_StaticFields
{
public:
	// System.Single Detonator::_baseSize
	float ____baseSize_2;
	// UnityEngine.Color Detonator::_baseColor
	Color_t2020392075  ____baseColor_3;
	// System.Single Detonator::_baseDuration
	float ____baseDuration_4;
	// UnityEngine.Material Detonator::defaultFireballAMaterial
	Material_t193706927 * ___defaultFireballAMaterial_42;
	// UnityEngine.Material Detonator::defaultFireballBMaterial
	Material_t193706927 * ___defaultFireballBMaterial_43;
	// UnityEngine.Material Detonator::defaultSmokeAMaterial
	Material_t193706927 * ___defaultSmokeAMaterial_44;
	// UnityEngine.Material Detonator::defaultSmokeBMaterial
	Material_t193706927 * ___defaultSmokeBMaterial_45;
	// UnityEngine.Material Detonator::defaultShockwaveMaterial
	Material_t193706927 * ___defaultShockwaveMaterial_46;
	// UnityEngine.Material Detonator::defaultSparksMaterial
	Material_t193706927 * ___defaultSparksMaterial_47;
	// UnityEngine.Material Detonator::defaultGlowMaterial
	Material_t193706927 * ___defaultGlowMaterial_48;
	// UnityEngine.Material Detonator::defaultHeatwaveMaterial
	Material_t193706927 * ___defaultHeatwaveMaterial_49;

public:
	inline static int32_t get_offset_of__baseSize_2() { return static_cast<int32_t>(offsetof(Detonator_t532351596_StaticFields, ____baseSize_2)); }
	inline float get__baseSize_2() const { return ____baseSize_2; }
	inline float* get_address_of__baseSize_2() { return &____baseSize_2; }
	inline void set__baseSize_2(float value)
	{
		____baseSize_2 = value;
	}

	inline static int32_t get_offset_of__baseColor_3() { return static_cast<int32_t>(offsetof(Detonator_t532351596_StaticFields, ____baseColor_3)); }
	inline Color_t2020392075  get__baseColor_3() const { return ____baseColor_3; }
	inline Color_t2020392075 * get_address_of__baseColor_3() { return &____baseColor_3; }
	inline void set__baseColor_3(Color_t2020392075  value)
	{
		____baseColor_3 = value;
	}

	inline static int32_t get_offset_of__baseDuration_4() { return static_cast<int32_t>(offsetof(Detonator_t532351596_StaticFields, ____baseDuration_4)); }
	inline float get__baseDuration_4() const { return ____baseDuration_4; }
	inline float* get_address_of__baseDuration_4() { return &____baseDuration_4; }
	inline void set__baseDuration_4(float value)
	{
		____baseDuration_4 = value;
	}

	inline static int32_t get_offset_of_defaultFireballAMaterial_42() { return static_cast<int32_t>(offsetof(Detonator_t532351596_StaticFields, ___defaultFireballAMaterial_42)); }
	inline Material_t193706927 * get_defaultFireballAMaterial_42() const { return ___defaultFireballAMaterial_42; }
	inline Material_t193706927 ** get_address_of_defaultFireballAMaterial_42() { return &___defaultFireballAMaterial_42; }
	inline void set_defaultFireballAMaterial_42(Material_t193706927 * value)
	{
		___defaultFireballAMaterial_42 = value;
		Il2CppCodeGenWriteBarrier(&___defaultFireballAMaterial_42, value);
	}

	inline static int32_t get_offset_of_defaultFireballBMaterial_43() { return static_cast<int32_t>(offsetof(Detonator_t532351596_StaticFields, ___defaultFireballBMaterial_43)); }
	inline Material_t193706927 * get_defaultFireballBMaterial_43() const { return ___defaultFireballBMaterial_43; }
	inline Material_t193706927 ** get_address_of_defaultFireballBMaterial_43() { return &___defaultFireballBMaterial_43; }
	inline void set_defaultFireballBMaterial_43(Material_t193706927 * value)
	{
		___defaultFireballBMaterial_43 = value;
		Il2CppCodeGenWriteBarrier(&___defaultFireballBMaterial_43, value);
	}

	inline static int32_t get_offset_of_defaultSmokeAMaterial_44() { return static_cast<int32_t>(offsetof(Detonator_t532351596_StaticFields, ___defaultSmokeAMaterial_44)); }
	inline Material_t193706927 * get_defaultSmokeAMaterial_44() const { return ___defaultSmokeAMaterial_44; }
	inline Material_t193706927 ** get_address_of_defaultSmokeAMaterial_44() { return &___defaultSmokeAMaterial_44; }
	inline void set_defaultSmokeAMaterial_44(Material_t193706927 * value)
	{
		___defaultSmokeAMaterial_44 = value;
		Il2CppCodeGenWriteBarrier(&___defaultSmokeAMaterial_44, value);
	}

	inline static int32_t get_offset_of_defaultSmokeBMaterial_45() { return static_cast<int32_t>(offsetof(Detonator_t532351596_StaticFields, ___defaultSmokeBMaterial_45)); }
	inline Material_t193706927 * get_defaultSmokeBMaterial_45() const { return ___defaultSmokeBMaterial_45; }
	inline Material_t193706927 ** get_address_of_defaultSmokeBMaterial_45() { return &___defaultSmokeBMaterial_45; }
	inline void set_defaultSmokeBMaterial_45(Material_t193706927 * value)
	{
		___defaultSmokeBMaterial_45 = value;
		Il2CppCodeGenWriteBarrier(&___defaultSmokeBMaterial_45, value);
	}

	inline static int32_t get_offset_of_defaultShockwaveMaterial_46() { return static_cast<int32_t>(offsetof(Detonator_t532351596_StaticFields, ___defaultShockwaveMaterial_46)); }
	inline Material_t193706927 * get_defaultShockwaveMaterial_46() const { return ___defaultShockwaveMaterial_46; }
	inline Material_t193706927 ** get_address_of_defaultShockwaveMaterial_46() { return &___defaultShockwaveMaterial_46; }
	inline void set_defaultShockwaveMaterial_46(Material_t193706927 * value)
	{
		___defaultShockwaveMaterial_46 = value;
		Il2CppCodeGenWriteBarrier(&___defaultShockwaveMaterial_46, value);
	}

	inline static int32_t get_offset_of_defaultSparksMaterial_47() { return static_cast<int32_t>(offsetof(Detonator_t532351596_StaticFields, ___defaultSparksMaterial_47)); }
	inline Material_t193706927 * get_defaultSparksMaterial_47() const { return ___defaultSparksMaterial_47; }
	inline Material_t193706927 ** get_address_of_defaultSparksMaterial_47() { return &___defaultSparksMaterial_47; }
	inline void set_defaultSparksMaterial_47(Material_t193706927 * value)
	{
		___defaultSparksMaterial_47 = value;
		Il2CppCodeGenWriteBarrier(&___defaultSparksMaterial_47, value);
	}

	inline static int32_t get_offset_of_defaultGlowMaterial_48() { return static_cast<int32_t>(offsetof(Detonator_t532351596_StaticFields, ___defaultGlowMaterial_48)); }
	inline Material_t193706927 * get_defaultGlowMaterial_48() const { return ___defaultGlowMaterial_48; }
	inline Material_t193706927 ** get_address_of_defaultGlowMaterial_48() { return &___defaultGlowMaterial_48; }
	inline void set_defaultGlowMaterial_48(Material_t193706927 * value)
	{
		___defaultGlowMaterial_48 = value;
		Il2CppCodeGenWriteBarrier(&___defaultGlowMaterial_48, value);
	}

	inline static int32_t get_offset_of_defaultHeatwaveMaterial_49() { return static_cast<int32_t>(offsetof(Detonator_t532351596_StaticFields, ___defaultHeatwaveMaterial_49)); }
	inline Material_t193706927 * get_defaultHeatwaveMaterial_49() const { return ___defaultHeatwaveMaterial_49; }
	inline Material_t193706927 ** get_address_of_defaultHeatwaveMaterial_49() { return &___defaultHeatwaveMaterial_49; }
	inline void set_defaultHeatwaveMaterial_49(Material_t193706927 * value)
	{
		___defaultHeatwaveMaterial_49 = value;
		Il2CppCodeGenWriteBarrier(&___defaultHeatwaveMaterial_49, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
