// Copyright 2021 Niiode. All Rights Reserved.

namespace NB
{
	template <typename T>
	void NeuronLayer<T>::Generate(uint32 _neuronNum, uint32 _inputNum)
	{
		mNeurons.resize(_neuronNum);

		for (uint32 i = 0; i < _neuronNum; ++i)
			mNeurons[i].Generate(_inputNum);
	}

	template <typename T>
	NeuronData NeuronLayer<T>::Compute(const NeuronData& _inputs) const
	{
		std::vector<float> fres(mNeurons.size());

		for (uint32 i = 0; i < mNeurons.size(); ++i)
			fres[i] = mNeurons[i].Compute(_inputs);

		return NeuronData(fres);
	}
}
