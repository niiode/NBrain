// Copyright 2021 Niiode. All Rights Reserved.

#include <iostream>

#include <Windows.h>

#include <Core/Debug/Debug.hpp>

namespace NB
{
#if NB_DEBUG
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


	void ApplyLevel(LogLevel _lvl)
	{
		switch (_lvl)
		{
			case NB::LogLevel::Normal:
				std::cout << "[Normal]\t";
				break;
			case NB::LogLevel::Infos:
				SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
				std::cout << "[Infos]\t\t";
				break;
			case NB::LogLevel::Warning:
				SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_RED);
				std::cout << "[Warning]\t";
				break;
			case NB::LogLevel::Error:
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
				std::cout << "[Error]\t\t";
				break;
			default:
				std::cout << "[Unknown]\t";
				break;
		}
	}

	void ResetLevel()
	{
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	}

	void Debug::Log(const std::string& _str, LogLevel _lvl)
	{
		ApplyLevel(_lvl);

		std::cout << _str << std::endl;

		ResetLevel();
	}

	void Debug::EndLine()
	{
		std::cout << std::endl;
	}

#endif
}
