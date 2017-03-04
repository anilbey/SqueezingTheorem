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
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AI
struct  AI_t2476083018  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject AI::tracePrefab
	GameObject_t1756533147 * ___tracePrefab_2;
	// UnityEngine.GameObject AI::initialWall
	GameObject_t1756533147 * ___initialWall_3;
	// UnityEngine.GameObject AI::FirePrefab
	GameObject_t1756533147 * ___FirePrefab_4;
	// UnityEngine.GameObject AI::DetonatorPrefab
	GameObject_t1756533147 * ___DetonatorPrefab_5;
	// UnityEngine.GameObject AI::Blocks
	GameObject_t1756533147 * ___Blocks_6;
	// System.Single AI::dist
	float ___dist_7;
	// UnityEngine.Ray AI::rayRight
	Ray_t2469606224  ___rayRight_8;
	// UnityEngine.Ray AI::rayLeft
	Ray_t2469606224  ___rayLeft_9;
	// UnityEngine.Ray AI::rayFront
	Ray_t2469606224  ___rayFront_10;
	// UnityEngine.Ray AI::raySpawnPoint
	Ray_t2469606224  ___raySpawnPoint_11;
	// System.Single AI::x
	float ___x_12;
	// System.Single AI::z
	float ___z_13;
	// System.Boolean AI::tagA
	bool ___tagA_14;
	// System.Boolean AI::tagW
	bool ___tagW_15;
	// System.Boolean AI::tagS
	bool ___tagS_16;
	// System.Boolean AI::tagD
	bool ___tagD_17;
	// System.Int32 AI::crashCount
	int32_t ___crashCount_18;
	// UnityEngine.RaycastHit AI::hit
	RaycastHit_t87180320  ___hit_19;
	// System.Single AI::distanceLeft
	float ___distanceLeft_20;
	// System.Single AI::distanceRight
	float ___distanceRight_21;
	// System.Single AI::distanceForward
	float ___distanceForward_22;
	// System.Single AI::distanceBackward
	float ___distanceBackward_23;
	// System.Single AI::lastCubeX
	float ___lastCubeX_24;
	// System.Single AI::lastCubeZ
	float ___lastCubeZ_25;
	// System.String AI::direction
	String_t* ___direction_26;

public:
	inline static int32_t get_offset_of_tracePrefab_2() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___tracePrefab_2)); }
	inline GameObject_t1756533147 * get_tracePrefab_2() const { return ___tracePrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_tracePrefab_2() { return &___tracePrefab_2; }
	inline void set_tracePrefab_2(GameObject_t1756533147 * value)
	{
		___tracePrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___tracePrefab_2, value);
	}

	inline static int32_t get_offset_of_initialWall_3() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___initialWall_3)); }
	inline GameObject_t1756533147 * get_initialWall_3() const { return ___initialWall_3; }
	inline GameObject_t1756533147 ** get_address_of_initialWall_3() { return &___initialWall_3; }
	inline void set_initialWall_3(GameObject_t1756533147 * value)
	{
		___initialWall_3 = value;
		Il2CppCodeGenWriteBarrier(&___initialWall_3, value);
	}

	inline static int32_t get_offset_of_FirePrefab_4() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___FirePrefab_4)); }
	inline GameObject_t1756533147 * get_FirePrefab_4() const { return ___FirePrefab_4; }
	inline GameObject_t1756533147 ** get_address_of_FirePrefab_4() { return &___FirePrefab_4; }
	inline void set_FirePrefab_4(GameObject_t1756533147 * value)
	{
		___FirePrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___FirePrefab_4, value);
	}

	inline static int32_t get_offset_of_DetonatorPrefab_5() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___DetonatorPrefab_5)); }
	inline GameObject_t1756533147 * get_DetonatorPrefab_5() const { return ___DetonatorPrefab_5; }
	inline GameObject_t1756533147 ** get_address_of_DetonatorPrefab_5() { return &___DetonatorPrefab_5; }
	inline void set_DetonatorPrefab_5(GameObject_t1756533147 * value)
	{
		___DetonatorPrefab_5 = value;
		Il2CppCodeGenWriteBarrier(&___DetonatorPrefab_5, value);
	}

	inline static int32_t get_offset_of_Blocks_6() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___Blocks_6)); }
	inline GameObject_t1756533147 * get_Blocks_6() const { return ___Blocks_6; }
	inline GameObject_t1756533147 ** get_address_of_Blocks_6() { return &___Blocks_6; }
	inline void set_Blocks_6(GameObject_t1756533147 * value)
	{
		___Blocks_6 = value;
		Il2CppCodeGenWriteBarrier(&___Blocks_6, value);
	}

	inline static int32_t get_offset_of_dist_7() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___dist_7)); }
	inline float get_dist_7() const { return ___dist_7; }
	inline float* get_address_of_dist_7() { return &___dist_7; }
	inline void set_dist_7(float value)
	{
		___dist_7 = value;
	}

	inline static int32_t get_offset_of_rayRight_8() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___rayRight_8)); }
	inline Ray_t2469606224  get_rayRight_8() const { return ___rayRight_8; }
	inline Ray_t2469606224 * get_address_of_rayRight_8() { return &___rayRight_8; }
	inline void set_rayRight_8(Ray_t2469606224  value)
	{
		___rayRight_8 = value;
	}

	inline static int32_t get_offset_of_rayLeft_9() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___rayLeft_9)); }
	inline Ray_t2469606224  get_rayLeft_9() const { return ___rayLeft_9; }
	inline Ray_t2469606224 * get_address_of_rayLeft_9() { return &___rayLeft_9; }
	inline void set_rayLeft_9(Ray_t2469606224  value)
	{
		___rayLeft_9 = value;
	}

	inline static int32_t get_offset_of_rayFront_10() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___rayFront_10)); }
	inline Ray_t2469606224  get_rayFront_10() const { return ___rayFront_10; }
	inline Ray_t2469606224 * get_address_of_rayFront_10() { return &___rayFront_10; }
	inline void set_rayFront_10(Ray_t2469606224  value)
	{
		___rayFront_10 = value;
	}

	inline static int32_t get_offset_of_raySpawnPoint_11() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___raySpawnPoint_11)); }
	inline Ray_t2469606224  get_raySpawnPoint_11() const { return ___raySpawnPoint_11; }
	inline Ray_t2469606224 * get_address_of_raySpawnPoint_11() { return &___raySpawnPoint_11; }
	inline void set_raySpawnPoint_11(Ray_t2469606224  value)
	{
		___raySpawnPoint_11 = value;
	}

	inline static int32_t get_offset_of_x_12() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___x_12)); }
	inline float get_x_12() const { return ___x_12; }
	inline float* get_address_of_x_12() { return &___x_12; }
	inline void set_x_12(float value)
	{
		___x_12 = value;
	}

	inline static int32_t get_offset_of_z_13() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___z_13)); }
	inline float get_z_13() const { return ___z_13; }
	inline float* get_address_of_z_13() { return &___z_13; }
	inline void set_z_13(float value)
	{
		___z_13 = value;
	}

	inline static int32_t get_offset_of_tagA_14() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___tagA_14)); }
	inline bool get_tagA_14() const { return ___tagA_14; }
	inline bool* get_address_of_tagA_14() { return &___tagA_14; }
	inline void set_tagA_14(bool value)
	{
		___tagA_14 = value;
	}

	inline static int32_t get_offset_of_tagW_15() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___tagW_15)); }
	inline bool get_tagW_15() const { return ___tagW_15; }
	inline bool* get_address_of_tagW_15() { return &___tagW_15; }
	inline void set_tagW_15(bool value)
	{
		___tagW_15 = value;
	}

	inline static int32_t get_offset_of_tagS_16() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___tagS_16)); }
	inline bool get_tagS_16() const { return ___tagS_16; }
	inline bool* get_address_of_tagS_16() { return &___tagS_16; }
	inline void set_tagS_16(bool value)
	{
		___tagS_16 = value;
	}

	inline static int32_t get_offset_of_tagD_17() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___tagD_17)); }
	inline bool get_tagD_17() const { return ___tagD_17; }
	inline bool* get_address_of_tagD_17() { return &___tagD_17; }
	inline void set_tagD_17(bool value)
	{
		___tagD_17 = value;
	}

	inline static int32_t get_offset_of_crashCount_18() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___crashCount_18)); }
	inline int32_t get_crashCount_18() const { return ___crashCount_18; }
	inline int32_t* get_address_of_crashCount_18() { return &___crashCount_18; }
	inline void set_crashCount_18(int32_t value)
	{
		___crashCount_18 = value;
	}

	inline static int32_t get_offset_of_hit_19() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___hit_19)); }
	inline RaycastHit_t87180320  get_hit_19() const { return ___hit_19; }
	inline RaycastHit_t87180320 * get_address_of_hit_19() { return &___hit_19; }
	inline void set_hit_19(RaycastHit_t87180320  value)
	{
		___hit_19 = value;
	}

	inline static int32_t get_offset_of_distanceLeft_20() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___distanceLeft_20)); }
	inline float get_distanceLeft_20() const { return ___distanceLeft_20; }
	inline float* get_address_of_distanceLeft_20() { return &___distanceLeft_20; }
	inline void set_distanceLeft_20(float value)
	{
		___distanceLeft_20 = value;
	}

	inline static int32_t get_offset_of_distanceRight_21() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___distanceRight_21)); }
	inline float get_distanceRight_21() const { return ___distanceRight_21; }
	inline float* get_address_of_distanceRight_21() { return &___distanceRight_21; }
	inline void set_distanceRight_21(float value)
	{
		___distanceRight_21 = value;
	}

	inline static int32_t get_offset_of_distanceForward_22() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___distanceForward_22)); }
	inline float get_distanceForward_22() const { return ___distanceForward_22; }
	inline float* get_address_of_distanceForward_22() { return &___distanceForward_22; }
	inline void set_distanceForward_22(float value)
	{
		___distanceForward_22 = value;
	}

	inline static int32_t get_offset_of_distanceBackward_23() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___distanceBackward_23)); }
	inline float get_distanceBackward_23() const { return ___distanceBackward_23; }
	inline float* get_address_of_distanceBackward_23() { return &___distanceBackward_23; }
	inline void set_distanceBackward_23(float value)
	{
		___distanceBackward_23 = value;
	}

	inline static int32_t get_offset_of_lastCubeX_24() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___lastCubeX_24)); }
	inline float get_lastCubeX_24() const { return ___lastCubeX_24; }
	inline float* get_address_of_lastCubeX_24() { return &___lastCubeX_24; }
	inline void set_lastCubeX_24(float value)
	{
		___lastCubeX_24 = value;
	}

	inline static int32_t get_offset_of_lastCubeZ_25() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___lastCubeZ_25)); }
	inline float get_lastCubeZ_25() const { return ___lastCubeZ_25; }
	inline float* get_address_of_lastCubeZ_25() { return &___lastCubeZ_25; }
	inline void set_lastCubeZ_25(float value)
	{
		___lastCubeZ_25 = value;
	}

	inline static int32_t get_offset_of_direction_26() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___direction_26)); }
	inline String_t* get_direction_26() const { return ___direction_26; }
	inline String_t** get_address_of_direction_26() { return &___direction_26; }
	inline void set_direction_26(String_t* value)
	{
		___direction_26 = value;
		Il2CppCodeGenWriteBarrier(&___direction_26, value);
	}
};

struct AI_t2476083018_StaticFields
{
public:
	// System.Boolean AI::isDead
	bool ___isDead_27;

public:
	inline static int32_t get_offset_of_isDead_27() { return static_cast<int32_t>(offsetof(AI_t2476083018_StaticFields, ___isDead_27)); }
	inline bool get_isDead_27() const { return ___isDead_27; }
	inline bool* get_address_of_isDead_27() { return &___isDead_27; }
	inline void set_isDead_27(bool value)
	{
		___isDead_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
