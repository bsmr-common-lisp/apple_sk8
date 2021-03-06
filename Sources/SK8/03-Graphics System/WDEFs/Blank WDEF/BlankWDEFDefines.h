// *****************************************************************************
//
//	WindoidDefines.h
//
// ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ
//	Copyright © 1991-94 Infinity Systems.  All rights reserved.
// ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ
//		This file contains only the #defineΥs used to determine how to compile
//		the Infinity Windoid WDEF. By modifying only this file, you can choose
//		what capabilities will be included when the WDEF is compiled.
// *****************************************************************************
#ifndef Infinity_WINDOIDDEFINES
#define Infinity_WINDOIDDEFINES


// ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ
//
//	System version define
//
// ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ
#if __powerc		// Since PowerPCs donΥt run System 6...
	#undef  SystemSevenOrLater
	#define SystemSevenOrLater 1
#endif

#if !SystemSevenOrLater
	#define SystemSixOrLater 1
		// This is used so that we can cut down on the code size in MPW. If 
		// support for earlier systems is important, get rid of this. 
		// Note: for this define to work, precompiled headers cannot be used.
#endif


// ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ
#endif