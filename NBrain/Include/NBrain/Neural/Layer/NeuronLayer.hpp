// Copyright 2021 Niiode. All Rights Reserved.

#ifndef NBRAIN_NEURAL_NEURON_LAYER_GUARD
#define NBRAIN_NEURAL_NEURON_LAYER_GUARD

#include <vector>

#include <Core/Debug/Debug.hpp>

namespace NB
{
	template <typename T>
	class NeuronLayer
	{
		std::vector<T> mNeurons;

	public:
		using NeuronT = T;

		void Generate(uint32 _neuronNum, uint32 _inputNum);
		std::vector<float> Compute(const std::vector<float>& _inputs) const;

#if NB_DEBUG
		uint32 GetNeuronNum() const;

		virtual std::string DebugPrint() const;
#endif
	};
}

#include <Neural/Layer/NeuronLayer.inl>

#endif // GUARD
