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
// Initalized myStock sTo.myStockObj[10] in stockType class This limits our program to holding only 10 stock options at a time. This should be fine for this assignment.
// Initalized stockType myStock; in menus class.
//		Can call functions via <myStock.function name>();
//		Can call/set struct members from menus class via myStock.sTo.myStockObj[X].<member name> where X is 0-9
//		Can call/set struct memebers from stockType class via sTo.myStockObj[X].<member name> where X is 0-9
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
//
// Revision Log
// Revised: 6/15/2013
// By: Aaron K. Henderson
// Summary:
// Major re-work of code due to previously mentioned PrintSetStock() ProcessDate() bug
//		Removed menus class
//			PrintMenu() now located on main()
//			PrintSetStock() now located on main()
//		Created global class object myStock on main()
//		Removed TempFillStruct();
//		Added LoadData() on main()
//			Code from TempFillStruct() copied to LoadData()
//				Code in LoadData() will need to be replaced with code to load input.txt
//		Moved myStock struct in class stockType to outside of Public:
//		Moved declare of myStock myStockObj to inside class stockType Public
//		Added constructor that initilizes all of the variables in the myStockObj struct
//		General clean up of code to reflect the removal of the menus class
// Renamed PrintSetStock() to SetStock to prevent confusion later on when function needs to be added to Print Stock information
// Added Save Stock Info option to PrintMain() function
#include "stdafx.h"

using namespace std;

// Forwared declare of functions
void LoadData(stockType &sTo);
void PrintMain();
void SetStock();

// Global myStock object
stockType myStock;

int _tmain(int argc, _TCHAR* argv[])
{
	// Loads data into myStock
	// Needs to be replaced with code that loads data from input.txt
	LoadData(myStock);

	// Call PrintMenu()
	PrintMain();

	return 0;
}

void LoadData(stockType &sTo)
{
	// The following needs to be replaced with code that reads input.txt
	sTo.myStockObj[0].stockSymbol = "ABC";
	sTo.myStockObj[0].stockOpen = 106.89;
	sTo.myStockObj[0].stockClose = 109.42;
	sTo.myStockObj[0].stockHigh = 200.01;
	sTo.myStockObj[0].stockLow = 73.46;
	sTo.myStockObj[0].previousClose = 110.56;
	sTo.myStockObj[0].percentGain = -5;
	sTo.myStockObj[0].stockVolume = 10000;

	sTo.myStockObj[1].stockSymbol = "BCD";
	sTo.myStockObj[1].stockOpen = 176.89;
	sTo.myStockObj[1].stockClose = 103.42;
	sTo.myStockObj[1].stockHigh = 230.01;
	sTo.myStockObj[1].stockLow = 79.46;
	sTo.myStockObj[1].previousClose = 190.56;
	sTo.myStockObj[1].percentGain = 5;
	sTo.myStockObj[1].stockVolume = 100000;

	sTo.myStockObj[2].stockSymbol = "CDE";
	sTo.myStockObj[2].stockOpen = 106.89;
	sTo.myStockObj[2].stockClose = 109.42;
	sTo.myStockObj[2].stockHigh = 200.01;
	sTo.myStockObj[2].stockLow = 73.46;
	sTo.myStockObj[2].previousClose = 110.56;
	sTo.myStockObj[2].percentGain = -5;
	sTo.myStockObj[2].stockVolume = 10000;

	sTo.myStockObj[3].stockSymbol = "DEF";
	sTo.myStockObj[3].stockOpen = 106.89;
	sTo.myStockObj[3].stockClose = 109.42;
	sTo.myStockObj[3].stockHigh = 200.01;
	sTo.myStockObj[3].stockLow = 73.46;
	sTo.myStockObj[3].previousClose = 110.56;
	sTo.myStockObj[3].percentGain = -5;
	sTo.myStockObj[3].stockVolume = 10000;

	sTo.myStockObj[4].stockSymbol = "EFG";
	sTo.myStockObj[4].stockOpen = 106.89;
	sTo.myStockObj[4].stockClose = 109.42;
	sTo.myStockObj[4].stockHigh = 200.01;
	sTo.myStockObj[4].stockLow = 73.46;
	sTo.myStockObj[4].previousClose = 110.56;
	sTo.myStockObj[4].percentGain = -5;
	sTo.myStockObj[4].stockVolume = 10000;

	sTo.myStockObj[5].stockSymbol = "FGH";
	sTo.myStockObj[5].stockOpen = 106.89;
	sTo.myStockObj[5].stockClose = 109.42;
	sTo.myStockObj[5].stockHigh = 200.01;
	sTo.myStockObj[5].stockLow = 73.46;
	sTo.myStockObj[5].previousClose = 110.56;
	sTo.myStockObj[5].percentGain = -5;
	sTo.myStockObj[5].stockVolume = 10000;

	sTo.myStockObj[6].stockSymbol = "GHI";
	sTo.myStockObj[6].stockOpen = 106.89;
	sTo.myStockObj[6].stockClose = 109.42;
	sTo.myStockObj[6].stockHigh = 200.01;
	sTo.myStockObj[6].stockLow = 73.46;
	sTo.myStockObj[6].previousClose = 110.56;
	sTo.myStockObj[6].percentGain = -5;
	sTo.myStockObj[6].stockVolume = 10000;

	sTo.myStockObj[7].stockSymbol = "HIJ";
	sTo.myStockObj[7].stockOpen = 106.89;
	sTo.myStockObj[7].stockClose = 109.42;
	sTo.myStockObj[7].stockHigh = 200.01;
	sTo.myStockObj[7].stockLow = 73.46;
	sTo.myStockObj[7].previousClose = 110.56;
	sTo.myStockObj[7].percentGain = -5;
	sTo.myStockObj[7].stockVolume = 10000;

	sTo.myStockObj[8].stockSymbol = "IJK";
	sTo.myStockObj[8].stockOpen = 106.89;
	sTo.myStockObj[8].stockClose = 109.42;
	sTo.myStockObj[8].stockHigh = 200.01;
	sTo.myStockObj[8].stockLow = 73.46;
	sTo.myStockObj[8].previousClose = 110.56;
	sTo.myStockObj[8].percentGain = -5;
	sTo.myStockObj[8].stockVolume = 10000;
	
	sTo.myStockObj[9].stockSymbol = "JKL";
	sTo.myStockObj[9].stockOpen = 106.89;
	sTo.myStockObj[9].stockClose = 109.42;
	sTo.myStockObj[9].stockHigh = 200.01;
	sTo.myStockObj[9].stockLow = 73.46;
	sTo.myStockObj[9].previousClose = 110.56;
	sTo.myStockObj[9].percentGain = -5;
	sTo.myStockObj[9].stockVolume = 10000;

	cout << "Temp Stock Symbols:" << endl;
	for (int i=0; i<10; i++)
	{
		cout << sTo.myStockObj[i].stockSymbol << endl;
	}
	cout << endl;


	system("pause");
}

void ::PrintMain()
{

	// Initalize Variables
	char myChoice;

	system("cls");

	cout << "*********  First Investor's Heaven  *********" << endl;
	cout << "*********         Main Menu         *********" << endl;
	cout << "1) Set Stock Information" << endl;			// Calls seperate menu that allows user to choose what Stock information to edit.
	cout << "2) Print Stock Information" << endl;		// Calls a function that prints the stock information, like it shows in the book on page 949.
	cout << "3) Show Prices" << endl;					// Calls a function that allows you to specify the Stock Symbol and shows the prices pertaining to that option.
	cout << "4) Calculate and Print Gain/Loss" << endl;	// Calls a function that calculats and prints the gain and loss for each styock option.
	cout << "5) Show the Number of Shares" << endl;		// Calls a function that shows the number of shares for each option.
	cout << endl;
	cout << "0) Quit" << endl;
	cout << endl;
	cout << "Selection: ";
	cin >> myChoice;

	switch(myChoice)
	{
	case '1':
		// Call SetStock()
		SetStock();
		
		break;
	case '2':
		// call funtion

		break;
	case '3':
		// call function

		break;
	case '4':
		// call function

		break;
	case '5':
		// call function

		break;
	case '9':
		// call function

		break;
	case '0':
		system("cls");
		cout << "Have a nice day!" << endl;
		system("pause");
		exit(1);
		break;
	default:
		cout << "ERROR! You have made an invalid selection." << endl;
		system("pause");
		PrintMain();
		break;
	}
}


// Main Menu
void SetStock()
{
	// Initalize Variables
	char myChoice;

	system("cls");

	cout << "*********  First Investor's Heaven  *********" << endl;
	cout << "*********   Set Stock Information   *********" << endl;
	cout << "1) Set Open Price" << endl;			// Calls function to ask Stock Symbol and then ask new Open Price
	cout << "2) Set Close Price" << endl;			// Calls function to ask Stock Symbol and then ask new Close Price
	cout << "3) Set High Price" << endl;			// Calls function to ask Stock Symbol and then ask new High Price
	cout << "4) Set Low Price" << endl;				// Calls function to ask Stock Symbol and then ask new Low Price
	cout << "5) Set Previous Close" << endl;		// Calls function to ask Stock Symbol and then ask new Previous Close Price
	cout << "6) Set Share Volume" << endl;			// Calls function to ask Stock Symbol and then ask new Share Volume
	cout << endl;
	cout << "9) Save Stock Info" << endl;
	cout << "0) Main Menu" << endl;
	cout << endl;
	cout << "Selection: ";
	cin >> myChoice;

		switch(myChoice)
	{
	case '1':
		// call function
		myStock.ProcessData("open");
		break;
	case '2':
		// call funtion
		myStock.ProcessData("close");
		break;
	case '3':
		// call function
		myStock.ProcessData("high");
		break;
	case '4':
		// call function
		myStock.ProcessData("low");
		break;
	case '5':
		// call function
		myStock.ProcessData("previous");
		break;
	case '6':
		// call function
		myStock.ProcessData("volume");
		break;
	case '0':
		PrintMain();
		break;
	default:
		cout << "ERROR! You have made an invalid selection." << endl;
		system("pause");
		SetStock();
		break;
	}
	PrintMain();
}
