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
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoveAround
struct  MoveAround_t88708292  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject MoveAround::Karakter
	GameObject_t1756533147 * ___Karakter_2;
	// UnityEngine.Quaternion MoveAround::rotation
	Quaternion_t4030073918  ___rotation_3;
	// UnityEngine.Transform MoveAround::CubePrefab
	Transform_t3275118058 * ___CubePrefab_4;
	// UnityEngine.Transform MoveAround::FirePrefab
	Transform_t3275118058 * ___FirePrefab_5;
	// UnityEngine.Transform MoveAround::DetonatorPrefab
	Transform_t3275118058 * ___DetonatorPrefab_6;
	// UnityEngine.Transform MoveAround::EnemyPrefab
	Transform_t3275118058 * ___EnemyPrefab_7;
	// System.Single MoveAround::speed
	float ___speed_8;
	// System.Single MoveAround::lastCubeX
	float ___lastCubeX_9;
	// System.Single MoveAround::lastCubeZ
	float ___lastCubeZ_10;
	// System.Int32 MoveAround::tagA
	int32_t ___tagA_11;
	// System.Int32 MoveAround::tagW
	int32_t ___tagW_12;
	// System.Int32 MoveAround::tagS
	int32_t ___tagS_13;
	// System.Int32 MoveAround::tagD
	int32_t ___tagD_14;
	// System.Int32 MoveAround::amount
	int32_t ___amount_15;
	// System.Single MoveAround::startPositionZ
	float ___startPositionZ_19;
	// System.Single MoveAround::startPositionX
	float ___startPositionX_20;
	// System.Single MoveAround::previousX
	float ___previousX_21;
	// System.Single MoveAround::previousZ
	float ___previousZ_22;

public:
	inline static int32_t get_offset_of_Karakter_2() { return static_cast<int32_t>(offsetof(MoveAround_t88708292, ___Karakter_2)); }
	inline GameObject_t1756533147 * get_Karakter_2() const { return ___Karakter_2; }
	inline GameObject_t1756533147 ** get_address_of_Karakter_2() { return &___Karakter_2; }
	inline void set_Karakter_2(GameObject_t1756533147 * value)
	{
		___Karakter_2 = value;
		Il2CppCodeGenWriteBarrier(&___Karakter_2, value);
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(MoveAround_t88708292, ___rotation_3)); }
	inline Quaternion_t4030073918  get_rotation_3() const { return ___rotation_3; }
	inline Quaternion_t4030073918 * get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(Quaternion_t4030073918  value)
	{
		___rotation_3 = value;
	}

	inline static int32_t get_offset_of_CubePrefab_4() { return static_cast<int32_t>(offsetof(MoveAround_t88708292, ___CubePrefab_4)); }
	inline Transform_t3275118058 * get_CubePrefab_4() const { return ___CubePrefab_4; }
	inline Transform_t3275118058 ** get_address_of_CubePrefab_4() { return &___CubePrefab_4; }
	inline void set_CubePrefab_4(Transform_t3275118058 * value)
	{
		___CubePrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___CubePrefab_4, value);
	}

	inline static int32_t get_offset_of_FirePrefab_5() { return static_cast<int32_t>(offsetof(MoveAround_t88708292, ___FirePrefab_5)); }
	inline Transform_t3275118058 * get_FirePrefab_5() const { return ___FirePrefab_5; }
	inline Transform_t3275118058 ** get_address_of_FirePrefab_5() { return &___FirePrefab_5; }
	inline void set_FirePrefab_5(Transform_t3275118058 * value)
	{
		___FirePrefab_5 = value;
		Il2CppCodeGenWriteBarrier(&___FirePrefab_5, value);
	}

	inline static int32_t get_offset_of_DetonatorPrefab_6() { return static_cast<int32_t>(offsetof(MoveAround_t88708292, ___DetonatorPrefab_6)); }
	inline Transform_t3275118058 * get_DetonatorPrefab_6() const { return ___DetonatorPrefab_6; }
	inline Transform_t3275118058 ** get_address_of_DetonatorPrefab_6() { return &___DetonatorPrefab_6; }
	inline void set_DetonatorPrefab_6(Transform_t3275118058 * value)
	{
		___DetonatorPrefab_6 = value;
		Il2CppCodeGenWriteBarrier(&___DetonatorPrefab_6, value);
	}

	inline static int32_t get_offset_of_EnemyPrefab_7() { return static_cast<int32_t>(offsetof(MoveAround_t88708292, ___EnemyPrefab_7)); }
	inline Transform_t3275118058 * get_EnemyPrefab_7() const { return ___EnemyPrefab_7; }
	inline Transform_t3275118058 ** get_address_of_EnemyPrefab_7() { return &___EnemyPrefab_7; }
	inline void set_EnemyPrefab_7(Transform_t3275118058 * value)
	{
		___EnemyPrefab_7 = value;
		Il2CppCodeGenWriteBarrier(&___EnemyPrefab_7, value);
	}

	inline static int32_t get_offset_of_speed_8() { return static_cast<int32_t>(offsetof(MoveAround_t88708292, ___speed_8)); }
	inline float get_speed_8() const { return ___speed_8; }
	inline float* get_address_of_speed_8() { return &___speed_8; }
	inline void set_speed_8(float value)
	{
		___speed_8 = value;
	}

	inline static int32_t get_offset_of_lastCubeX_9() { return static_cast<int32_t>(offsetof(MoveAround_t88708292, ___lastCubeX_9)); }
	inline float get_lastCubeX_9() const { return ___lastCubeX_9; }
	inline float* get_address_of_lastCubeX_9() { return &___lastCubeX_9; }
	inline void set_lastCubeX_9(float value)
	{
		___lastCubeX_9 = value;
	}

	inline static int32_t get_offset_of_lastCubeZ_10() { return static_cast<int32_t>(offsetof(MoveAround_t88708292, ___lastCubeZ_10)); }
	inline float get_lastCubeZ_10() const { return ___lastCubeZ_10; }
	inline float* get_address_of_lastCubeZ_10() { return &___lastCubeZ_10; }
	inline void set_lastCubeZ_10(float value)
	{
		___lastCubeZ_10 = value;
	}

	inline static int32_t get_offset_of_tagA_11() { return static_cast<int32_t>(offsetof(MoveAround_t88708292, ___tagA_11)); }
	inline int32_t get_tagA_11() const { return ___tagA_11; }
	inline int32_t* get_address_of_tagA_11() { return &___tagA_11; }
	inline void set_tagA_11(int32_t value)
	{
		___tagA_11 = value;
	}

	inline static int32_t get_offset_of_tagW_12() { return static_cast<int32_t>(offsetof(MoveAround_t88708292, ___tagW_12)); }
	inline int32_t get_tagW_12() const { return ___tagW_12; }
	inline int32_t* get_address_of_tagW_12() { return &___tagW_12; }
	inline void set_tagW_12(int32_t value)
	{
		___tagW_12 = value;
	}

	inline static int32_t get_offset_of_tagS_13() { return static_cast<int32_t>(offsetof(MoveAround_t88708292, ___tagS_13)); }
	inline int32_t get_tagS_13() const { return ___tagS_13; }
	inline int32_t* get_address_of_tagS_13() { return &___tagS_13; }
	inline void set_tagS_13(int32_t value)
	{
		___tagS_13 = value;
	}

	inline static int32_t get_offset_of_tagD_14() { return static_cast<int32_t>(offsetof(MoveAround_t88708292, ___tagD_14)); }
	inline int32_t get_tagD_14() const { return ___tagD_14; }
	inline int32_t* get_address_of_tagD_14() { return &___tagD_14; }
	inline void set_tagD_14(int32_t value)
	{
		___tagD_14 = value;
	}

	inline static int32_t get_offset_of_amount_15() { return static_cast<int32_t>(offsetof(MoveAround_t88708292, ___amount_15)); }
	inline int32_t get_amount_15() const { return ___amount_15; }
	inline int32_t* get_address_of_amount_15() { return &___amount_15; }
	inline void set_amount_15(int32_t value)
	{
		___amount_15 = value;
	}

	inline static int32_t get_offset_of_startPositionZ_19() { return static_cast<int32_t>(offsetof(MoveAround_t88708292, ___startPositionZ_19)); }
	inline float get_startPositionZ_19() const { return ___startPositionZ_19; }
	inline float* get_address_of_startPositionZ_19() { return &___startPositionZ_19; }
	inline void set_startPositionZ_19(float value)
	{
		___startPositionZ_19 = value;
	}

	inline static int32_t get_offset_of_startPositionX_20() { return static_cast<int32_t>(offsetof(MoveAround_t88708292, ___startPositionX_20)); }
	inline float get_startPositionX_20() const { return ___startPositionX_20; }
	inline float* get_address_of_startPositionX_20() { return &___startPositionX_20; }
	inline void set_startPositionX_20(float value)
	{
		___startPositionX_20 = value;
	}

	inline static int32_t get_offset_of_previousX_21() { return static_cast<int32_t>(offsetof(MoveAround_t88708292, ___previousX_21)); }
	inline float get_previousX_21() const { return ___previousX_21; }
	inline float* get_address_of_previousX_21() { return &___previousX_21; }
	inline void set_previousX_21(float value)
	{
		___previousX_21 = value;
	}

	inline static int32_t get_offset_of_previousZ_22() { return static_cast<int32_t>(offsetof(MoveAround_t88708292, ___previousZ_22)); }
	inline float get_previousZ_22() const { return ___previousZ_22; }
	inline float* get_address_of_previousZ_22() { return &___previousZ_22; }
	inline void set_previousZ_22(float value)
	{
		___previousZ_22 = value;
	}
};

struct MoveAround_t88708292_StaticFields
{
public:
	// System.Single MoveAround::x
	float ___x_16;
	// System.Single MoveAround::z
	float ___z_17;
	// System.Boolean MoveAround::dead
	bool ___dead_18;

public:
	inline static int32_t get_offset_of_x_16() { return static_cast<int32_t>(offsetof(MoveAround_t88708292_StaticFields, ___x_16)); }
	inline float get_x_16() const { return ___x_16; }
	inline float* get_address_of_x_16() { return &___x_16; }
	inline void set_x_16(float value)
	{
		___x_16 = value;
	}

	inline static int32_t get_offset_of_z_17() { return static_cast<int32_t>(offsetof(MoveAround_t88708292_StaticFields, ___z_17)); }
	inline float get_z_17() const { return ___z_17; }
	inline float* get_address_of_z_17() { return &___z_17; }
	inline void set_z_17(float value)
	{
		___z_17 = value;
	}

	inline static int32_t get_offset_of_dead_18() { return static_cast<int32_t>(offsetof(MoveAround_t88708292_StaticFields, ___dead_18)); }
	inline bool get_dead_18() const { return ___dead_18; }
	inline bool* get_address_of_dead_18() { return &___dead_18; }
	inline void set_dead_18(bool value)
	{
		___dead_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
