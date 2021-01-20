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
	std::vector<float> NeuronLayer<T>::Compute(const std::vector<float>& _inputs) const
	{
		std::vector<float> res(mNeurons.size());

		for (uint32 i = 0; i < mNeurons.size(); ++i)
			res[i] = mNeurons[i].Compute(_inputs);

		return std::move(res);
	}

#if NB_DEBUG

	template <typename T>
	uint32 NeuronLayer<T>::GetNeuronNum() const
	{
		return mNeurons.size();
	}

	template <typename T>
	std::string NeuronLayer<T>::DebugPrint() const
	{
		std::string res = "Neurons: " + std::to_string(mNeurons.size()) + '\n';

		for (uint32 i = 0; i < mNeurons.size(); ++i)
			res += mNeurons[i].DebugPrint() + '\n';

		return res;
	}

#endif
}
