// Copyright 2021 Niiode. All Rights Reserved.

#include <random>
#include <limits>

#include <Core/Random.hpp>

namespace NB
{
	std::random_device randDevice;

	int32 Random::Rand(int32 _min, int32 _max)
	{
		std::uniform_int_distribution<int32> distribution(_min, _max - 1); // Exclude max.
		
		return distribution(randDevice);
	}

	uint32 Random::Rand(uint32 _min, uint32 _max)
	{
		std::uniform_int_distribution<uint32> distribution(_min, _max - 1u); // Exclude max.

		return distribution(randDevice);
	}

	float Random::Rand(float _min, float _max)
	{
		std::uniform_real_distribution<float> distribution(_min, _max - std::numeric_limits<float>::epsilon()); // Exclude max.

		return distribution(randDevice);
	}
}
