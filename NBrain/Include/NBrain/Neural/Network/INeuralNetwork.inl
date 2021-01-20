// Copyright 2021 Niiode. All Rights Reserved.

namespace NB
{
#if NB_DEBUG

	template <typename T>
	std::string INeuralNetwork<T>::DebugPrint() const
	{
		std::string res;

		uint32 neuronNum = 0u;

		for (uint32 i = 0u; i < mLayers.size(); ++i)
		{
			res += "Layer: " + std::to_string(i) + '\t';
			res += mLayers[i].DebugPrint() + '\n';

			neuronNum += mLayers[i].GetNeuronNum();
		}

		// Erase last end of line.
		res.erase(res.end() - 1);

		std::string title = "Layers: " + std::to_string(mLayers.size()) + "| Neurons: " + std::to_string(neuronNum) + "\n";

		return title + res;
	}

#endif
}