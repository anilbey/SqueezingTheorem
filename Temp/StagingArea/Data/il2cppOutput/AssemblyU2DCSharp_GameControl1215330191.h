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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameControl
struct  GameControl_t1215330191  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject GameControl::win
	GameObject_t1756533147 * ___win_2;
	// UnityEngine.GameObject GameControl::lose
	GameObject_t1756533147 * ___lose_3;
	// System.Boolean GameControl::entered
	bool ___entered_4;

public:
	inline static int32_t get_offset_of_win_2() { return static_cast<int32_t>(offsetof(GameControl_t1215330191, ___win_2)); }
	inline GameObject_t1756533147 * get_win_2() const { return ___win_2; }
	inline GameObject_t1756533147 ** get_address_of_win_2() { return &___win_2; }
	inline void set_win_2(GameObject_t1756533147 * value)
	{
		___win_2 = value;
		Il2CppCodeGenWriteBarrier(&___win_2, value);
	}

	inline static int32_t get_offset_of_lose_3() { return static_cast<int32_t>(offsetof(GameControl_t1215330191, ___lose_3)); }
	inline GameObject_t1756533147 * get_lose_3() const { return ___lose_3; }
	inline GameObject_t1756533147 ** get_address_of_lose_3() { return &___lose_3; }
	inline void set_lose_3(GameObject_t1756533147 * value)
	{
		___lose_3 = value;
		Il2CppCodeGenWriteBarrier(&___lose_3, value);
	}

	inline static int32_t get_offset_of_entered_4() { return static_cast<int32_t>(offsetof(GameControl_t1215330191, ___entered_4)); }
	inline bool get_entered_4() const { return ___entered_4; }
	inline bool* get_address_of_entered_4() { return &___entered_4; }
	inline void set_entered_4(bool value)
	{
		___entered_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
