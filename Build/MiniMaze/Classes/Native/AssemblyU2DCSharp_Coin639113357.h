﻿#pragma once

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

// Coin
struct  Coin_t639113357  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Coin::poofPrefab
	GameObject_t1756533147 * ___poofPrefab_2;
	// UnityEngine.GameObject Coin::coinObject
	GameObject_t1756533147 * ___coinObject_3;

public:
	inline static int32_t get_offset_of_poofPrefab_2() { return static_cast<int32_t>(offsetof(Coin_t639113357, ___poofPrefab_2)); }
	inline GameObject_t1756533147 * get_poofPrefab_2() const { return ___poofPrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_poofPrefab_2() { return &___poofPrefab_2; }
	inline void set_poofPrefab_2(GameObject_t1756533147 * value)
	{
		___poofPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___poofPrefab_2, value);
	}

	inline static int32_t get_offset_of_coinObject_3() { return static_cast<int32_t>(offsetof(Coin_t639113357, ___coinObject_3)); }
	inline GameObject_t1756533147 * get_coinObject_3() const { return ___coinObject_3; }
	inline GameObject_t1756533147 ** get_address_of_coinObject_3() { return &___coinObject_3; }
	inline void set_coinObject_3(GameObject_t1756533147 * value)
	{
		___coinObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___coinObject_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif