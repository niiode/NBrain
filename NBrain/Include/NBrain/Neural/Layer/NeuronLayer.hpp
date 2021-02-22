// Copyright 2021 Niiode. All Rights Reserved.

#ifndef NBRAIN_NEURAL_NEURON_LAYER_GUARD
#define NBRAIN_NEURAL_NEURON_LAYER_GUARD

#include <vector>

#include <Core/Debug/Debug.hpp>
#include <Neural/Neuron/NeuronData.hpp>

namespace NB
{
	template <typename T>
	class NeuronLayer
	{
		std::vector<T> mNeurons;

	public:
		using NeuronT = T;

		void Generate(uint32 _neuronNum, uint32 _inputNum);
		NeuronData Compute(const NeuronData& _inputs) const;
	};
}

#include <Neural/Layer/NeuronLayer.inl>

#endif // GUARD
