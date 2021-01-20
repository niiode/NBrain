// Copyright 2021 Niiode. All Rights Reserved.

#ifndef NBRAIN_CORE_RANDOM_GUARD
#define NBRAIN_CORE_RANDOM_GUARD

#include <Config.hpp>
#include <Core/Types.hpp>

namespace NB
{
	class Random
	{
	public:
		NBRAIN_API static int32 Rand(int32 _min, int32 _max);
		NBRAIN_API static uint32 Rand(uint32 _min, uint32 _max);
		NBRAIN_API static float Rand(float _min = 0.0f, float _max = 1.0f);
	};
}

#endif // GUARD
