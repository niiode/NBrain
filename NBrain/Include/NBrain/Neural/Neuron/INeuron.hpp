// Copyright 2021 Niiode. All Rights Reserved.

#ifndef NBRAIN_NEURAL_INEURON_GUARD
#define NBRAIN_NEURAL_INEURON_GUARD

#include <vector>

#include <Core/Debug/Debug.hpp>

namespace NB
{
	class INeuron
	{
	public:
		virtual ~INeuron() = default;

		virtual float Compute(const std::vector<float>& _inputs) const = 0;

#if NB_DEBUG
		virtual std::string DebugPrint() const = 0;
#endif
	};
}

#endif // GUARD
