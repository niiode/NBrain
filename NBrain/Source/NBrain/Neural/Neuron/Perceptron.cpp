// Copyright 2021 Niiode. All Rights Reserved.

#include <cmath>

#include <Core/Random.hpp>

#include <Neural/Neuron/Perceptron.hpp>

namespace NB
{
	void Perceptron::Generate(uint32 _inputNum)
	{
		mBias = Random::Rand(0.0f, 1.0f);

		// TODO: use?
		//mThreshold = Random::Rand(0.0f, 1.0f);

		mWeights.resize(_inputNum);

		for (uint32 i = 0u; i < _inputNum; ++i)
			mWeights[i] = Random::Rand(0.0f, 1.0f);
	}

	float Perceptron::Compute(const std::vector<float>& _inputs) const
	{
		float res = mBias;

#if NB_DEBUG
		if (_inputs.size() != mWeights.size())
		{
			NB_LOG("Perceptron: Input number doesn't match weights!", LogLevel::Error);
			return -1;
		}
#endif

		for (uint32 i = 0; i < _inputs.size(); ++i)
			res += _inputs[i] * mWeights[i];

		if (mThreshold == 0.0f)
			return res < 0 ? 0 : 1;

		// Sigmoid function.
		return 1.0f / (1 + exp(-res / mThreshold));
	}

#if NB_DEBUG

	std::string Perceptron::DebugPrint() const
	{
		// Bias.
		std::string res = '(' + std::to_string(mBias) + " [";


		// Print Weights.
		for(uint32 i = 0; i < mWeights.size() - 1; ++i)
			res += std::to_string(mWeights[i]) + ", ";

		res += std::to_string(mWeights[mWeights.size() - 1]) + "] ";


		// Threshold.
		res += std::to_string(mThreshold) + ')';

		return res;
	}

#endif
}
