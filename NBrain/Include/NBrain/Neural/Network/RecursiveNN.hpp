// Copyright 2021 Niiode. All Rights Reserved.

#ifndef NBRAIN_RECUSIVE_NEURAL_NETWORK_GUARD
#define NBRAIN_RECUSIVE_NEURAL_NETWORK_GUARD

#include <Neural/Network/INeuralNetwork.hpp>

namespace NB
{
	/**
	*	Sources:
	*	https://en.wikipedia.org/wiki/Recursive_neural_network
	*/

	template <typename T>
	class RecursiveNN : public INeuralNetwork<T>
	{
	public:
		std::vector<float> Compute(const std::vector<float>& _inputs) const override final;
	};
}

#include <Neural/Network/RecursiveNN.inl>

#endif // GUARD
