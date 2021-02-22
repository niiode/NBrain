// Copyright 2021 Niiode. All Rights Reserved.

#ifndef NBRAIN_NEURON_DATA_GUARD
#define NBRAIN_NEURON_DATA_GUARD

#include <vector>
#include <xmmintrin.h>

#include <Config.hpp>

namespace NB
{
	/**
	*	\brief Data used as neuron's weight or input values.
	*/
	class NeuronData
	{
		/**
		*	\brief Neuron data stored as __m128 for optimization.
		*/
		std::vector<__m128> mData;

	public:
		NeuronData() = default;
		NBRAIN_API NeuronData(const std::vector<float>& _inputs);

		/**
		*	\brief Set all values from input.
		*
		*	Convert float to __m128 packs.
		*/
		void Set(const std::vector<float>& _inputs);

		/**
		*	\brief Multiply each components and add them.
		*/
		float Compute(const NeuronData& _other) const;
		float operator*(const NeuronData& _rhs) const;
	};
}

#endif // GUARD