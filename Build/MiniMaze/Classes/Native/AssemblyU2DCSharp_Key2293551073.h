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
// Door
struct Door_t1896021008;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Key
struct  Key_t2293551073  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Key::poofPrefab
	GameObject_t1756533147 * ___poofPrefab_2;
	// UnityEngine.GameObject Key::keyObject
	GameObject_t1756533147 * ___keyObject_3;
	// Door Key::door
	Door_t1896021008 * ___door_4;

public:
	inline static int32_t get_offset_of_poofPrefab_2() { return static_cast<int32_t>(offsetof(Key_t2293551073, ___poofPrefab_2)); }
	inline GameObject_t1756533147 * get_poofPrefab_2() const { return ___poofPrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_poofPrefab_2() { return &___poofPrefab_2; }
	inline void set_poofPrefab_2(GameObject_t1756533147 * value)
	{
		___poofPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___poofPrefab_2, value);
	}

	inline static int32_t get_offset_of_keyObject_3() { return static_cast<int32_t>(offsetof(Key_t2293551073, ___keyObject_3)); }
	inline GameObject_t1756533147 * get_keyObject_3() const { return ___keyObject_3; }
	inline GameObject_t1756533147 ** get_address_of_keyObject_3() { return &___keyObject_3; }
	inline void set_keyObject_3(GameObject_t1756533147 * value)
	{
		___keyObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___keyObject_3, value);
	}

	inline static int32_t get_offset_of_door_4() { return static_cast<int32_t>(offsetof(Key_t2293551073, ___door_4)); }
	inline Door_t1896021008 * get_door_4() const { return ___door_4; }
	inline Door_t1896021008 ** get_address_of_door_4() { return &___door_4; }
	inline void set_door_4(Door_t1896021008 * value)
	{
		___door_4 = value;
		Il2CppCodeGenWriteBarrier(&___door_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
