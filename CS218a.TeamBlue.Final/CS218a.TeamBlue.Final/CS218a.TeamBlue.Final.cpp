// Final Project CS218a
// Team Blue
// Cockrell, Henderson, Padilla, Webb
// Purpose:
// Write a program to help a local stock trading company automate its systems.
//
//=============================================================================
// Revision Log
// Revised: <date>
// By: <name>
// Summary: <details>
//
// Revision Log
// Revised: 6/11/2013
// By: Aaron K. Henderson
// Summary:
// Added includes to the stdafc header file.
//		#include <iostream> - Standard IO stream operations
//		#include <iomanip>  - Used for formatting cout e.g setw, left, right
//		#include <string>	- To handle strings (not sure if we need it yet, we do if we add exception handeling)
//		#include <sstream>  - To read the input.txt
// Created shortcuts class for adding coding shortcuts to the code EG me.p() for system("pause"); and so on
// Created base for PrintMenu() function. Will need to have function calls added to it as more functions are added to the program.
// Moved PrintMenu into separate class. Can add other menus to this class. Satisfies one of the 4 file (2 .h 2.cpp) requirements

#include "stdafx.h"

using namespace std;

// Forward Delcaration for PrintMenu();
void PrintMenu();

int _tmain(int argc, _TCHAR* argv[])
{
	// A function should be wrote to load the input.txt and then called here.

	// Call PrintMenu()
	menus menu;
	menu.PrintMain();

	return 0;
}



