// Copyright 2021 Niiode. All Rights Reserved.

#ifndef NBRAIN_NEURAL_INEURON_GUARD
#define NBRAIN_NEURAL_INEURON_GUARD

#include <Neural/Neuron/NeuronData.hpp>

namespace NB
{
	class INeuron
	{
	public:
		virtual ~INeuron() = default;

		virtual float Compute(const NeuronData& _inputs) const = 0;
	};
}

#endif // GUARD
