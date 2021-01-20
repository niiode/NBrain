// Copyright 2021 Niiode. All Rights Reserved.

#pragma once

#ifndef NBRAIN_CORE_DEBUG_GUARD
#define NBRAIN_CORE_DEBUG_GUARD

#include <string>

#include <Core/Debug/LogLevel.hpp>

namespace NB
{
#if NB_DEBUG

	class Debug
	{
	public:
		NBRAIN_API static void Log(const std::string& _str, LogLevel _lvl = LogLevel::Normal);
		NBRAIN_API static void EndLine();
	};

#define NB_LOG(_str, ...) Debug::Log(_str, ##__VA_ARGS__);
#define NB_ENDLINE() Debug::EndLine();

#else

#define NB_LOG(...) {};
#define NB_ENDLINE() {};


#endif
}

#endif // GUARD
