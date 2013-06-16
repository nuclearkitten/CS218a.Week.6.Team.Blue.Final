// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

// Other includes
#include <iostream>		// Standard IO stream operations
#include <iomanip>		// Used for formatting cout e.g setw, left, right
#include <string>		// To handle strings (not sure if we need it yet, we do if we add exception handeling)
#include <sstream>		// To read the input.txt

// Class includes
#include "InformationCentral.h"		// Pass information to this class and it prints it.
#include "stockType.h"	// This is the class that the book wants us to use to process the stock object

// Random Number (for making fake stock information)
#include <stdlib.h> // srand, rand

// TODO: reference additional headers your program requires here
