// Copyright 2021 Niiode. All Rights Reserved.

#ifndef NBRAIN_FEED_FORWARD_NEURAL_NETWORK_GUARD
#define NBRAIN_FEED_FORWARD_NEURAL_NETWORK_GUARD

#include <Neural/Network/INeuralNetwork.hpp>

namespace NB
{
	/**
	*	Sources:
	*	https://en.wikipedia.org/wiki/Feedforward_neural_network
	*/

	template <typename T>
	class FeedForwardNN : public INeuralNetwork<T>
	{
		using INeuralNetwork<T>::mLayers;

	public:
		void Generate(const NNCreateInfos& _infos) override final;
		std::vector<float> Compute(const std::vector<float>& _inputs) const override final;
	};
}

#include <Neural/Network/FeedForwardNN.inl>

#endif // GUARD
