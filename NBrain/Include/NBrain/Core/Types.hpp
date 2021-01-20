// Copyright 2021 Niiode. All Rights Reserved.

#pragma once

#ifndef NBRAIN_CORE_TYPES_GUARD
#define NBRAIN_CORE_TYPES_GUARD

namespace NB
{
	/**
	*	\file Core/Types.hpp
	*
	*	\brief \b Definition of NBrain's \b types.
	*
	*	\ingroup Core
	*	\{
	*/


	/**
	*	\brief Fixed \b 8-bits width char type.
	*/
	using char8 = char;
	
	/**
	*	\brief Fixed \b 16-bits width char type.
	*/
	using char16 = char16_t;

	/**
	*	\brief Fixed \b 32-bits width char type.
	*/
	using char32 = char32_t;

	/**
	*	\brief \b Wide char type.
	*/
	using wchar = wchar_t;


	/**
	*	\brief Fixed \b 8-bits width int type.
	*/
	using int8 = char;

	/**
	*	\brief Fixed \b 8-bits width uint type.
	*/
	using uint8 = unsigned char;

	/**
	*	\brief Fixed \b 16-bits width int type.
	*/
	using int16 = short int;

	/**
	*	\brief Fixed \b 16-bits width uint type.
	*/
	using uint16 = unsigned short int;

	/**
	*	\brief Fixed \b 32-bits width int type.
	*/
	using int32 = int;

	/**
	*	\brief Fixed \b 32-bits width uint type.
	*/
	using uint32 = unsigned int;

	/**
	*	\brief Fixed \b 64-bits width int type.
	*/
	using int64 = long long int;

	/**
	*	\brief Fixed \b 64-bits width uint type.
	*/
	using uint64 = unsigned long long int;

	/**	\} */
}

#endif // GUARD
