// Copyright 2021 Niiode. All Rights Reserved.

#include <Core/Random.hpp>

#include <Neural/Neuron/Perceptron.hpp>

namespace NB
{
	float Perceptron::Sigmoid(float _input) const noexcept
	{
		if (mThreshold == 0.0f)
			return _input < 0 ? 0 : 1;

		// Sigmoid function.
		return 1.0f / (1 + exp(-_input / mThreshold));
	}

	void Perceptron::Generate(uint32 _inputNum)
	{
		mBias = Random::Rand(0.0f, 1.0f);

		// TODO: use?
		//mThreshold = Random::Rand(0.0f, 1.0f);

		std::vector<float> inputs(_inputNum);

		for (uint32 i = 0u; i < _inputNum; ++i)
			inputs[i] = Random::Rand(0.0f, 1.0f);

		mWeights.Set(inputs);
	}

	float Perceptron::Compute(const NeuronData& _inputs) const
	{
		return Sigmoid(mBias + mWeights.Compute(_inputs));
	}
}
