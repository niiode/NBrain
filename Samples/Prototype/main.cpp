// Copyright 2021 Niiode. All Rights Reserved.

#include <NBrain/Neural/Network/FeedForwardNN.hpp>
#include <NBrain/Neural/Layer/PerceptronLayer.hpp>
using namespace NB;


int main()
{
	NB_LOG("=== Start ===\n");


	FeedForwardNN<PerceptronLayer> ffNet;

	{
		NNCreateInfos createInfos;
		createInfos.inputNum = 4u;
		createInfos.outputNum = 2u;

		ffNet.Generate(createInfos);
	}

	NB_LOG(ffNet.DebugPrint());


	NB_ENDLINE();
	NB_LOG("=== End ===");


	system("pause");

	return 0;
}
