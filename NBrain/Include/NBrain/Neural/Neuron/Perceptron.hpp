// Copyright 2021 Niiode. All Rights Reserved.

#ifndef NBRAIN_NEURAL_PERCEPTRON_GUARD
#define NBRAIN_NEURAL_PERCEPTRON_GUARD

#include <Neural/Neuron/INeuron.hpp>

#include <Core/Debug/Debug.hpp>

namespace NB
{
	/**
	*	Sources:
	*	https://en.wikipedia.org/wiki/Perceptron
	*/

	class Perceptron : public INeuron
	{
		float mBias = 1.0f;

		std::vector<float> mWeights;

		float mThreshold = 1.0f;

	public:
		NBRAIN_API void Generate(uint32 _inputNum);
		NBRAIN_API float Compute(const std::vector<float>& _inputs) const override final;

#if NB_DEBUG
		NBRAIN_API std::string DebugPrint() const override final;
#endif
	};
}

#endif // GUARD
