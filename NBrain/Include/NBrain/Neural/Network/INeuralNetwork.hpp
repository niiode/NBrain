// Copyright 2021 Niiode. All Rights Reserved.

#ifndef NBRAIN_INEURAL_NEURAL_NETWORK_GUARD
#define NBRAIN_INEURAL_NEURAL_NETWORK_GUARD

#include <Core/Debug/Debug.hpp>
#include <Neural/Layer/NeuronLayer.hpp>
#include <Neural/Network/NNCreateInfos.hpp>

namespace NB
{
	template <typename T>
	class INeuralNetwork
	{
	protected:
		std::vector<T> mLayers;

	public:
		using NeuronLayerT = T;
		using NeuronT = typename NeuronLayerT::NeuronT;

		virtual void Generate(const NNCreateInfos& _infos) = 0;
		virtual NeuronData Compute(const NeuronData& _inputs) const = 0;
	};
}

#endif // GUARD
