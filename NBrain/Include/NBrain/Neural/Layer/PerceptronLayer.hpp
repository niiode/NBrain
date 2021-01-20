// Copyright 2021 Niiode. All Rights Reserved.

#ifndef NBRAIN_NEURAL_PERCEPTRON_LAYER_GUARD
#define NBRAIN_NEURAL_PERCEPTRON_LAYER_GUARD

#include <Neural/Layer/NeuronLayer.hpp>
#include <Neural/Neuron/Perceptron.hpp>

namespace NB
{
	class PerceptronLayer : public NeuronLayer<Perceptron>
	{
	};
}

#endif // GUARD
