// Copyright 2021 Niiode. All Rights Reserved.

#include <NBrain/Core/Debug/Debug.hpp>
using namespace NB;


int main()
{
	NB_LOG("=== Start ===\n");


	NB_LOG("Normal Test", LogLevel::Normal);
	NB_LOG("Infos Test", LogLevel::Infos);
	NB_LOG("Warning Test", LogLevel::Warning);
	NB_LOG("Error Test", LogLevel::Error);
	NB_LOG("Unknown Test", (LogLevel)8);


	NB_ENDLINE();
	NB_LOG("=== End ===");


	system("pause");

	return 0;
}
