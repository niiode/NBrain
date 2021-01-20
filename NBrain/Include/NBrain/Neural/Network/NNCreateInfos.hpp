// Copyright 2021 Niiode. All Rights Reserved.

#pragma once

#ifndef NBRAIN_NEURAL_NN_CREATE_INFOS_GUARD
#define NBRAIN_NEURAL_NN_CREATE_INFOS_GUARD

#include <Core/Types.hpp>

namespace NB
{
	struct NNCreateInfos
	{
		/// Number of input provided.
		uint32 inputNum = 1u;

		/// Number of output expected.
		uint32 outputNum = 1u;

		///// Defined layer number (default no limits).
		//uint32 layerNum = ~uint32();

		///// Defined maximum neuron number per layer (default no limits).
		//uint32 maxNeuronPerLayer = ~uint32();

		/// Defined minimum neuron number.
		uint32 minNeuron = 1u;

		/// Defined maximum neuron number.
		uint32 maxNeuron = 100u;
	};
}

#endif // GUARD
