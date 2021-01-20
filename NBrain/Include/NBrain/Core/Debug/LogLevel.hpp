// Copyright 2021 Niiode. All Rights Reserved.

#pragma once

#ifndef NBRAIN_CORE_LOG_LEVEL_GUARD
#define NBRAIN_CORE_LOG_LEVEL_GUARD

#include <Config.hpp>

#include <Core/Types.hpp>

namespace NB
{
	/**
	*	\file Core/Debug/LogLevel.hpp
	*
	*	\brief Log level enum used by NBrain's Debug class.
	*
	*	\ingroup Debug
	*	\{
	*/

	/**
	*	\brief All levels of logging.
	*/
	enum class LogLevel
	{
		/// Normal level
		Normal,

		/// Info level
		Infos,

		/// Warning level
		Warning,

		/// Error level
		Error,
	};

	/**	\} */
}

#endif // GUARD
