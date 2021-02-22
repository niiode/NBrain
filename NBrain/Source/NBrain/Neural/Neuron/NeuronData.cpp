// Copyright 2021 Niiode. All Rights Reserved.

#include <Neural/Neuron/NeuronData.hpp>

#include <Core/Debug/Debug.hpp>

namespace NB
{
	NeuronData::NeuronData(const std::vector<float>& _inputs)
	{
		Set(_inputs);
	}

	void NeuronData::Set(const std::vector<float>& _inputs)
	{
		mData.clear();
		
		// Overload pack size.
		uint32 sizeOverload = _inputs.size() % 4;
		const uint32 size128 = _inputs.size() / 4;

		// Add additionnal pack on overload.
		mData.resize(sizeOverload == 0 ? size128 : size128 + 1);

		// Fill __m128 packs.
		for (uint32 i = 0; i < size128; ++i)
			mData[i] = _mm_set_ps(_inputs[i * 4 + 3], _inputs[i * 4 + 2], _inputs[i * 4 + 1], _inputs[i * 4]);

		// Input not multiple of 4: safe convertion to __m128.
		if (sizeOverload)
		{
			float values[3]{};
			std::memcpy(values, _inputs.data() + size128 * 4, sizeOverload);

			mData[size128] = _mm_set_ps(0.0f, values[2], values[1], values[0]);
		}
	}

	float NeuronData::Compute(const NeuronData& _other) const
	{
#if NB_DEBUG
		if (mData.size() != _other.mData.size())
		{
			NB_LOG("NeuronData: Compute data size doesn't match!", LogLevel::Error);
			return -1.0f;
		}
#endif

		__m128 res128 = _mm_setzero_ps();

		for (uint32 i = 0u; i < mData.size(); ++i)
		{
			// Mult 4 by 4 floats.
			__m128 multRes = _mm_mul_ps(mData[i], _other.mData[i]);
			
			// Add 4 by 4 floats.
			res128 = _mm_add_ps(res128, multRes);
		}

		// Add each float component of __m128 to get single final float.
		const float* fRes128 = reinterpret_cast<const float*>(&res128);
		
		return fRes128[0] + fRes128[1] + fRes128[2] + fRes128[3];
	}

	float NeuronData::operator*(const NeuronData& _rhs) const
	{
		return Compute(_rhs);
	}
}
