// Copyright 2021 Niiode. All Rights Reserved.

#ifndef NBRAIN_NEURAL_PERCEPTRON_GUARD
#define NBRAIN_NEURAL_PERCEPTRON_GUARD

#include <Neural/Neuron/INeuron.hpp>

namespace NB
{
	/**
	*	Sources:
	*	https://en.wikipedia.org/wiki/Perceptron
	*/

	class Perceptron : public INeuron
	{
		NeuronData mWeights;

		float mBias = 1.0f;
		float mThreshold = 1.0f;

		/**
		*	\brief Apply Sigmoid function using mThreshold. 
		*/
		float Sigmoid(float _input) const noexcept;

	public:
		NBRAIN_API void Generate(uint32 _inputNum);
		NBRAIN_API float Compute(const NeuronData& _inputs) const override final;
	};
}

#endif // GUARD
