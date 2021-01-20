// Copyright 2021 Niiode. All Rights Reserved.

#include <Core/Random.hpp>

namespace NB
{
	template <typename T>
	void FeedForwardNN<T>::Generate(const NNCreateInfos& _infos)
	{
		uint32 neuronNum = Random::Rand(_infos.minNeuron, _infos.maxNeuron);

		// Last layer must match output number.
		if(neuronNum >= _infos.outputNum)
			neuronNum -= _infos.outputNum;
		else
		{
			neuronNum = 0u;
			NB_LOG("Network output number > neuron number!", LogLevel::Warning);
		}


		// Generate layer numbers.
		std::vector<uint32> neuronPerLayers;

		while (neuronNum != 0u)
		{
			uint32 num = Random::Rand(1u, neuronNum + 1);
			neuronPerLayers.push_back(num);

			neuronNum -= num;
		}

		// Generate Layers.
		uint32 layerInputNum = _infos.inputNum;
		uint32 hiddenLayerNum = neuronPerLayers.size();
		mLayers.resize(hiddenLayerNum + 1);

		for (uint32 i = 0; i < hiddenLayerNum; ++i)
		{
			mLayers[i].Generate(neuronPerLayers[i], layerInputNum);
			layerInputNum = neuronPerLayers[i];
		}

		// Last layer must match output number.
		mLayers[hiddenLayerNum].Generate(_infos.outputNum, layerInputNum);
	}

	template <typename T>
	std::vector<float> FeedForwardNN<T>::Compute(const std::vector<float>& _inputs) const
	{
#if NB_DEBUG
		if (!mLayers.size())
		{
			NB_LOG("FeedForwardNN: Try compute empty network!", LogLevel::Error);
			return std::vector<float>();
		}
#endif

		std::vector<float> res = mLayers[0].Compute(_inputs);

		// Feed forward result to next layer.
		for (uint32 i = 1; i < res.size(); ++i)
			res = mLayers[i].Compute(res);

		return res;
	}
}
