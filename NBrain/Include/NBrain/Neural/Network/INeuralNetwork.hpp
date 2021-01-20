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
		virtual std::vector<float> Compute(const std::vector<float>& _inputs) const = 0;

#if NB_DEBUG
		virtual std::string DebugPrint() const;
#endif
	};
}

#include <Neural/Network/INeuralNetwork.inl>

#endif // GUARD
