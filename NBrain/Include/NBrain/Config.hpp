// Copyright 2021 Niiode. All Rights Reserved.

#pragma once

#ifndef NBRAIN_CONFIG_GUARD
#define NBRAIN_CONFIG_GUARD


#if defined(_DEBUG) || !defined(NDEBUG)

	/// NBrain Debug preprocessor.
	#define NB_DEBUG 1

#else

	/// NBrain Debug preprocessor.
	#define NB_DEBUG 0

#endif


#if defined(NBrain_EXPORTS)

	/// Engine API export preprocessor.
	#define NBRAIN_API __declspec(dllexport)

#else

	/// Engine API import preprocessor.
	#define NBRAIN_API __declspec(dllimport)

#endif


#endif // GUARD
