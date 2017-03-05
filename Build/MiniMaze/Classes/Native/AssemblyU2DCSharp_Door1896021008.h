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
// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Door
struct  Door_t1896021008  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Door::doorObject
	GameObject_t1756533147 * ___doorObject_2;
	// UnityEngine.AudioClip Door::doorOpened
	AudioClip_t1932558630 * ___doorOpened_3;
	// System.Single Door::speed
	float ___speed_4;
	// System.Boolean Door::locked
	bool ___locked_5;
	// System.Boolean Door::open
	bool ___open_6;
	// UnityEngine.Vector3 Door::doorStartPosition
	Vector3_t2243707580  ___doorStartPosition_7;
	// UnityEngine.Vector3 Door::doorEndPosition
	Vector3_t2243707580  ___doorEndPosition_8;
	// UnityEngine.Quaternion Door::doorStartRotation
	Quaternion_t4030073918  ___doorStartRotation_9;
	// UnityEngine.Quaternion Door::doorEndRotation
	Quaternion_t4030073918  ___doorEndRotation_10;
	// System.Single Door::startTime
	float ___startTime_11;
	// System.Single Door::journeyLength
	float ___journeyLength_12;

public:
	inline static int32_t get_offset_of_doorObject_2() { return static_cast<int32_t>(offsetof(Door_t1896021008, ___doorObject_2)); }
	inline GameObject_t1756533147 * get_doorObject_2() const { return ___doorObject_2; }
	inline GameObject_t1756533147 ** get_address_of_doorObject_2() { return &___doorObject_2; }
	inline void set_doorObject_2(GameObject_t1756533147 * value)
	{
		___doorObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___doorObject_2, value);
	}

	inline static int32_t get_offset_of_doorOpened_3() { return static_cast<int32_t>(offsetof(Door_t1896021008, ___doorOpened_3)); }
	inline AudioClip_t1932558630 * get_doorOpened_3() const { return ___doorOpened_3; }
	inline AudioClip_t1932558630 ** get_address_of_doorOpened_3() { return &___doorOpened_3; }
	inline void set_doorOpened_3(AudioClip_t1932558630 * value)
	{
		___doorOpened_3 = value;
		Il2CppCodeGenWriteBarrier(&___doorOpened_3, value);
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(Door_t1896021008, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_locked_5() { return static_cast<int32_t>(offsetof(Door_t1896021008, ___locked_5)); }
	inline bool get_locked_5() const { return ___locked_5; }
	inline bool* get_address_of_locked_5() { return &___locked_5; }
	inline void set_locked_5(bool value)
	{
		___locked_5 = value;
	}

	inline static int32_t get_offset_of_open_6() { return static_cast<int32_t>(offsetof(Door_t1896021008, ___open_6)); }
	inline bool get_open_6() const { return ___open_6; }
	inline bool* get_address_of_open_6() { return &___open_6; }
	inline void set_open_6(bool value)
	{
		___open_6 = value;
	}

	inline static int32_t get_offset_of_doorStartPosition_7() { return static_cast<int32_t>(offsetof(Door_t1896021008, ___doorStartPosition_7)); }
	inline Vector3_t2243707580  get_doorStartPosition_7() const { return ___doorStartPosition_7; }
	inline Vector3_t2243707580 * get_address_of_doorStartPosition_7() { return &___doorStartPosition_7; }
	inline void set_doorStartPosition_7(Vector3_t2243707580  value)
	{
		___doorStartPosition_7 = value;
	}

	inline static int32_t get_offset_of_doorEndPosition_8() { return static_cast<int32_t>(offsetof(Door_t1896021008, ___doorEndPosition_8)); }
	inline Vector3_t2243707580  get_doorEndPosition_8() const { return ___doorEndPosition_8; }
	inline Vector3_t2243707580 * get_address_of_doorEndPosition_8() { return &___doorEndPosition_8; }
	inline void set_doorEndPosition_8(Vector3_t2243707580  value)
	{
		___doorEndPosition_8 = value;
	}

	inline static int32_t get_offset_of_doorStartRotation_9() { return static_cast<int32_t>(offsetof(Door_t1896021008, ___doorStartRotation_9)); }
	inline Quaternion_t4030073918  get_doorStartRotation_9() const { return ___doorStartRotation_9; }
	inline Quaternion_t4030073918 * get_address_of_doorStartRotation_9() { return &___doorStartRotation_9; }
	inline void set_doorStartRotation_9(Quaternion_t4030073918  value)
	{
		___doorStartRotation_9 = value;
	}

	inline static int32_t get_offset_of_doorEndRotation_10() { return static_cast<int32_t>(offsetof(Door_t1896021008, ___doorEndRotation_10)); }
	inline Quaternion_t4030073918  get_doorEndRotation_10() const { return ___doorEndRotation_10; }
	inline Quaternion_t4030073918 * get_address_of_doorEndRotation_10() { return &___doorEndRotation_10; }
	inline void set_doorEndRotation_10(Quaternion_t4030073918  value)
	{
		___doorEndRotation_10 = value;
	}

	inline static int32_t get_offset_of_startTime_11() { return static_cast<int32_t>(offsetof(Door_t1896021008, ___startTime_11)); }
	inline float get_startTime_11() const { return ___startTime_11; }
	inline float* get_address_of_startTime_11() { return &___startTime_11; }
	inline void set_startTime_11(float value)
	{
		___startTime_11 = value;
	}

	inline static int32_t get_offset_of_journeyLength_12() { return static_cast<int32_t>(offsetof(Door_t1896021008, ___journeyLength_12)); }
	inline float get_journeyLength_12() const { return ___journeyLength_12; }
	inline float* get_address_of_journeyLength_12() { return &___journeyLength_12; }
	inline void set_journeyLength_12(float value)
	{
		___journeyLength_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
