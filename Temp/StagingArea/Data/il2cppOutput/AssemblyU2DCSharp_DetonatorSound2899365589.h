#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t2203355011;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "AssemblyU2DCSharp_DetonatorComponent521491937.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DetonatorSound
struct  DetonatorSound_t2899365589  : public DetonatorComponent_t521491937
{
public:
	// UnityEngine.AudioClip[] DetonatorSound::nearSounds
	AudioClipU5BU5D_t2203355011* ___nearSounds_22;
	// UnityEngine.AudioClip[] DetonatorSound::farSounds
	AudioClipU5BU5D_t2203355011* ___farSounds_23;
	// System.Single DetonatorSound::distanceThreshold
	float ___distanceThreshold_24;
	// System.Single DetonatorSound::minVolume
	float ___minVolume_25;
	// System.Single DetonatorSound::maxVolume
	float ___maxVolume_26;
	// System.Single DetonatorSound::rolloffFactor
	float ___rolloffFactor_27;
	// UnityEngine.AudioSource DetonatorSound::_soundComponent
	AudioSource_t1135106623 * ____soundComponent_28;
	// System.Boolean DetonatorSound::_delayedExplosionStarted
	bool ____delayedExplosionStarted_29;
	// System.Single DetonatorSound::_explodeDelay
	float ____explodeDelay_30;
	// System.Int32 DetonatorSound::_idx
	int32_t ____idx_31;

public:
	inline static int32_t get_offset_of_nearSounds_22() { return static_cast<int32_t>(offsetof(DetonatorSound_t2899365589, ___nearSounds_22)); }
	inline AudioClipU5BU5D_t2203355011* get_nearSounds_22() const { return ___nearSounds_22; }
	inline AudioClipU5BU5D_t2203355011** get_address_of_nearSounds_22() { return &___nearSounds_22; }
	inline void set_nearSounds_22(AudioClipU5BU5D_t2203355011* value)
	{
		___nearSounds_22 = value;
		Il2CppCodeGenWriteBarrier(&___nearSounds_22, value);
	}

	inline static int32_t get_offset_of_farSounds_23() { return static_cast<int32_t>(offsetof(DetonatorSound_t2899365589, ___farSounds_23)); }
	inline AudioClipU5BU5D_t2203355011* get_farSounds_23() const { return ___farSounds_23; }
	inline AudioClipU5BU5D_t2203355011** get_address_of_farSounds_23() { return &___farSounds_23; }
	inline void set_farSounds_23(AudioClipU5BU5D_t2203355011* value)
	{
		___farSounds_23 = value;
		Il2CppCodeGenWriteBarrier(&___farSounds_23, value);
	}

	inline static int32_t get_offset_of_distanceThreshold_24() { return static_cast<int32_t>(offsetof(DetonatorSound_t2899365589, ___distanceThreshold_24)); }
	inline float get_distanceThreshold_24() const { return ___distanceThreshold_24; }
	inline float* get_address_of_distanceThreshold_24() { return &___distanceThreshold_24; }
	inline void set_distanceThreshold_24(float value)
	{
		___distanceThreshold_24 = value;
	}

	inline static int32_t get_offset_of_minVolume_25() { return static_cast<int32_t>(offsetof(DetonatorSound_t2899365589, ___minVolume_25)); }
	inline float get_minVolume_25() const { return ___minVolume_25; }
	inline float* get_address_of_minVolume_25() { return &___minVolume_25; }
	inline void set_minVolume_25(float value)
	{
		___minVolume_25 = value;
	}

	inline static int32_t get_offset_of_maxVolume_26() { return static_cast<int32_t>(offsetof(DetonatorSound_t2899365589, ___maxVolume_26)); }
	inline float get_maxVolume_26() const { return ___maxVolume_26; }
	inline float* get_address_of_maxVolume_26() { return &___maxVolume_26; }
	inline void set_maxVolume_26(float value)
	{
		___maxVolume_26 = value;
	}

	inline static int32_t get_offset_of_rolloffFactor_27() { return static_cast<int32_t>(offsetof(DetonatorSound_t2899365589, ___rolloffFactor_27)); }
	inline float get_rolloffFactor_27() const { return ___rolloffFactor_27; }
	inline float* get_address_of_rolloffFactor_27() { return &___rolloffFactor_27; }
	inline void set_rolloffFactor_27(float value)
	{
		___rolloffFactor_27 = value;
	}

	inline static int32_t get_offset_of__soundComponent_28() { return static_cast<int32_t>(offsetof(DetonatorSound_t2899365589, ____soundComponent_28)); }
	inline AudioSource_t1135106623 * get__soundComponent_28() const { return ____soundComponent_28; }
	inline AudioSource_t1135106623 ** get_address_of__soundComponent_28() { return &____soundComponent_28; }
	inline void set__soundComponent_28(AudioSource_t1135106623 * value)
	{
		____soundComponent_28 = value;
		Il2CppCodeGenWriteBarrier(&____soundComponent_28, value);
	}

	inline static int32_t get_offset_of__delayedExplosionStarted_29() { return static_cast<int32_t>(offsetof(DetonatorSound_t2899365589, ____delayedExplosionStarted_29)); }
	inline bool get__delayedExplosionStarted_29() const { return ____delayedExplosionStarted_29; }
	inline bool* get_address_of__delayedExplosionStarted_29() { return &____delayedExplosionStarted_29; }
	inline void set__delayedExplosionStarted_29(bool value)
	{
		____delayedExplosionStarted_29 = value;
	}

	inline static int32_t get_offset_of__explodeDelay_30() { return static_cast<int32_t>(offsetof(DetonatorSound_t2899365589, ____explodeDelay_30)); }
	inline float get__explodeDelay_30() const { return ____explodeDelay_30; }
	inline float* get_address_of__explodeDelay_30() { return &____explodeDelay_30; }
	inline void set__explodeDelay_30(float value)
	{
		____explodeDelay_30 = value;
	}

	inline static int32_t get_offset_of__idx_31() { return static_cast<int32_t>(offsetof(DetonatorSound_t2899365589, ____idx_31)); }
	inline int32_t get__idx_31() const { return ____idx_31; }
	inline int32_t* get_address_of__idx_31() { return &____idx_31; }
	inline void set__idx_31(int32_t value)
	{
		____idx_31 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
