// Copyright 2021 Niiode. All Rights Reserved.

#ifndef NBRAIN_RECURRENT_NEURAL_NETWORK_GUARD
#define NBRAIN_RECURRENT_NEURAL_NETWORK_GUARD

#include <Neural/Network/INeuralNetwork.hpp>

namespace NB
{
	/**
	*	Sources:
	*	https://en.wikipedia.org/wiki/Recurrent_neural_network
	*/

	template <typename T>
	class RecurrentNN : public INeuralNetwork<T>
	{
	public:
		std::vector<float> Compute(const std::vector<float>& _inputs) const override final;
	};
}

#include <Neural/Network/RecurrentNN.inl>

#endif // GUARD
