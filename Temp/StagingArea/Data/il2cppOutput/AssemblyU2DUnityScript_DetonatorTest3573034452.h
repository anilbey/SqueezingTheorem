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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// System.Object
struct Il2CppObject;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DetonatorTest
struct  DetonatorTest_t3573034452  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject DetonatorTest::currentDetonator
	GameObject_t1756533147 * ___currentDetonator_2;
	// System.Int32 DetonatorTest::_currentExpIdx
	int32_t ____currentExpIdx_3;
	// System.Boolean DetonatorTest::buttonClicked
	bool ___buttonClicked_4;
	// UnityEngine.GameObject[] DetonatorTest::detonatorPrefabs
	GameObjectU5BU5D_t3057952154* ___detonatorPrefabs_5;
	// System.Single DetonatorTest::explosionLife
	float ___explosionLife_6;
	// System.Single DetonatorTest::timeScale
	float ___timeScale_7;
	// System.Single DetonatorTest::detailLevel
	float ___detailLevel_8;
	// UnityEngine.GameObject DetonatorTest::wall
	GameObject_t1756533147 * ___wall_9;
	// UnityEngine.GameObject DetonatorTest::_currentWall
	GameObject_t1756533147 * ____currentWall_10;
	// System.Int32 DetonatorTest::_spawnWallTime
	int32_t ____spawnWallTime_11;
	// System.Object DetonatorTest::_guiRect
	Il2CppObject * ____guiRect_12;
	// System.Boolean DetonatorTest::toggleBool
	bool ___toggleBool_13;
	// UnityEngine.Rect DetonatorTest::checkRect
	Rect_t3681755626  ___checkRect_14;

public:
	inline static int32_t get_offset_of_currentDetonator_2() { return static_cast<int32_t>(offsetof(DetonatorTest_t3573034452, ___currentDetonator_2)); }
	inline GameObject_t1756533147 * get_currentDetonator_2() const { return ___currentDetonator_2; }
	inline GameObject_t1756533147 ** get_address_of_currentDetonator_2() { return &___currentDetonator_2; }
	inline void set_currentDetonator_2(GameObject_t1756533147 * value)
	{
		___currentDetonator_2 = value;
		Il2CppCodeGenWriteBarrier(&___currentDetonator_2, value);
	}

	inline static int32_t get_offset_of__currentExpIdx_3() { return static_cast<int32_t>(offsetof(DetonatorTest_t3573034452, ____currentExpIdx_3)); }
	inline int32_t get__currentExpIdx_3() const { return ____currentExpIdx_3; }
	inline int32_t* get_address_of__currentExpIdx_3() { return &____currentExpIdx_3; }
	inline void set__currentExpIdx_3(int32_t value)
	{
		____currentExpIdx_3 = value;
	}

	inline static int32_t get_offset_of_buttonClicked_4() { return static_cast<int32_t>(offsetof(DetonatorTest_t3573034452, ___buttonClicked_4)); }
	inline bool get_buttonClicked_4() const { return ___buttonClicked_4; }
	inline bool* get_address_of_buttonClicked_4() { return &___buttonClicked_4; }
	inline void set_buttonClicked_4(bool value)
	{
		___buttonClicked_4 = value;
	}

	inline static int32_t get_offset_of_detonatorPrefabs_5() { return static_cast<int32_t>(offsetof(DetonatorTest_t3573034452, ___detonatorPrefabs_5)); }
	inline GameObjectU5BU5D_t3057952154* get_detonatorPrefabs_5() const { return ___detonatorPrefabs_5; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_detonatorPrefabs_5() { return &___detonatorPrefabs_5; }
	inline void set_detonatorPrefabs_5(GameObjectU5BU5D_t3057952154* value)
	{
		___detonatorPrefabs_5 = value;
		Il2CppCodeGenWriteBarrier(&___detonatorPrefabs_5, value);
	}

	inline static int32_t get_offset_of_explosionLife_6() { return static_cast<int32_t>(offsetof(DetonatorTest_t3573034452, ___explosionLife_6)); }
	inline float get_explosionLife_6() const { return ___explosionLife_6; }
	inline float* get_address_of_explosionLife_6() { return &___explosionLife_6; }
	inline void set_explosionLife_6(float value)
	{
		___explosionLife_6 = value;
	}

	inline static int32_t get_offset_of_timeScale_7() { return static_cast<int32_t>(offsetof(DetonatorTest_t3573034452, ___timeScale_7)); }
	inline float get_timeScale_7() const { return ___timeScale_7; }
	inline float* get_address_of_timeScale_7() { return &___timeScale_7; }
	inline void set_timeScale_7(float value)
	{
		___timeScale_7 = value;
	}

	inline static int32_t get_offset_of_detailLevel_8() { return static_cast<int32_t>(offsetof(DetonatorTest_t3573034452, ___detailLevel_8)); }
	inline float get_detailLevel_8() const { return ___detailLevel_8; }
	inline float* get_address_of_detailLevel_8() { return &___detailLevel_8; }
	inline void set_detailLevel_8(float value)
	{
		___detailLevel_8 = value;
	}

	inline static int32_t get_offset_of_wall_9() { return static_cast<int32_t>(offsetof(DetonatorTest_t3573034452, ___wall_9)); }
	inline GameObject_t1756533147 * get_wall_9() const { return ___wall_9; }
	inline GameObject_t1756533147 ** get_address_of_wall_9() { return &___wall_9; }
	inline void set_wall_9(GameObject_t1756533147 * value)
	{
		___wall_9 = value;
		Il2CppCodeGenWriteBarrier(&___wall_9, value);
	}

	inline static int32_t get_offset_of__currentWall_10() { return static_cast<int32_t>(offsetof(DetonatorTest_t3573034452, ____currentWall_10)); }
	inline GameObject_t1756533147 * get__currentWall_10() const { return ____currentWall_10; }
	inline GameObject_t1756533147 ** get_address_of__currentWall_10() { return &____currentWall_10; }
	inline void set__currentWall_10(GameObject_t1756533147 * value)
	{
		____currentWall_10 = value;
		Il2CppCodeGenWriteBarrier(&____currentWall_10, value);
	}

	inline static int32_t get_offset_of__spawnWallTime_11() { return static_cast<int32_t>(offsetof(DetonatorTest_t3573034452, ____spawnWallTime_11)); }
	inline int32_t get__spawnWallTime_11() const { return ____spawnWallTime_11; }
	inline int32_t* get_address_of__spawnWallTime_11() { return &____spawnWallTime_11; }
	inline void set__spawnWallTime_11(int32_t value)
	{
		____spawnWallTime_11 = value;
	}

	inline static int32_t get_offset_of__guiRect_12() { return static_cast<int32_t>(offsetof(DetonatorTest_t3573034452, ____guiRect_12)); }
	inline Il2CppObject * get__guiRect_12() const { return ____guiRect_12; }
	inline Il2CppObject ** get_address_of__guiRect_12() { return &____guiRect_12; }
	inline void set__guiRect_12(Il2CppObject * value)
	{
		____guiRect_12 = value;
		Il2CppCodeGenWriteBarrier(&____guiRect_12, value);
	}

	inline static int32_t get_offset_of_toggleBool_13() { return static_cast<int32_t>(offsetof(DetonatorTest_t3573034452, ___toggleBool_13)); }
	inline bool get_toggleBool_13() const { return ___toggleBool_13; }
	inline bool* get_address_of_toggleBool_13() { return &___toggleBool_13; }
	inline void set_toggleBool_13(bool value)
	{
		___toggleBool_13 = value;
	}

	inline static int32_t get_offset_of_checkRect_14() { return static_cast<int32_t>(offsetof(DetonatorTest_t3573034452, ___checkRect_14)); }
	inline Rect_t3681755626  get_checkRect_14() const { return ___checkRect_14; }
	inline Rect_t3681755626 * get_address_of_checkRect_14() { return &___checkRect_14; }
	inline void set_checkRect_14(Rect_t3681755626  value)
	{
		___checkRect_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
