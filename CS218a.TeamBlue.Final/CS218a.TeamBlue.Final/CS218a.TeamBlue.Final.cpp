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
//
// Revision Log
// Revised: 6/13/2013
// By: Aaron K. HEnderson
// Summary: 
// Added PrintSetStock() function to the menus class.
//		Linked PrintSetStock() to Option 1 of PrintMain() function.
// Moved Initialize (shortcuts me;) in the menus class from inside the PrintMain(); function to outside, making it global for that entire class.
// Added Class stockType, currently empty.
//
// Revision Log
// Revised: 6/14/2013
// By: Aaron
// Summary:
// Removed shortcuts class. This class added unnecessary confusion to the program. Stick to system("pause"); and system("cls"):
// Added myStock struct for holding stock information
//		string stockSymbol;
//		double stockOpen;
//		double stockClose;
//		double stockHigh;
//		double stockLow;
//		double previousClose;
//		double percentGain;
//		int stockVolume;
// Initalized myStock myStockObj[10] in stockType class This limits our program to holding only 10 stock options at a time. This should be fine for this assignment.
// Initalized stockType stockTypeObj; in menus class.
//		Can call functions via <stockTypeObj.function name>();
//		Can call/set struct members from menus class via stockTypeObj.myStockObj[X].<member name> where X is 0-9
//		Can call/set struct memebers from stockType class via myStockObj[X].<member name> where X is 0-9
// Added ProcessData(string option) to stockType class.
//		String option can be open, close, high, low, previous, or volume. This coresponds to what you are setting with that call function
//			EX ProcessData("open");
//		ProcessData(string option) will then prompt user for Stock Symbol.
//			If Stock Symbol is found it will prompt the user for the value that wish to set
//			Exception handeling will need to be added yet.
// Added a temp function TempFillStruct(); to class stockType.
//		This is only temp as there is no function to read input.txt
//		TempFillStruct() is called in the ProcessData() function of class StockType
// BUG! When setting new values to the stock option via PrintSetStock() menu the values do not update!
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



