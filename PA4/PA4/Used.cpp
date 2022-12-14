//-----------------------------------------------------------------------------
// Copyright 2022, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------- 

#include "Free.h"
#include "Used.h"

// Add code here
Used::Used(const uint32_t blockSize)
	: mAllocSize((uint16_t)blockSize),
	mType(Type::USED_Type),
	bAboveFree(false),
	pNext(nullptr),
	pPrev(nullptr)
{
}

// ---  End of File ---

