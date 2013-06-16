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
//		float stockOpen;
//		float stockClose;
//		float stockHigh;
//		float stockLow;
//		float previousClose;
//		float percentGain;
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
//
// Revision Log
// Revised: 6/15/2013
// By: Aaron K. Henderson
// Summary:
// Added InformationCentral class to satisfy the header and cpp requirement for the assignement
//		Class contains struct that is identical to stockType myStock struct
//		Constructor that initilizes the mSo struct
//		friend PopulateData()
//		Added OutputPrices()
//			Takes the data that was copied in from PopulateData() asks for Stock Symbol, if found relays all the info in the mSo struct on that Stock Option
//		Added CalcGainLoss()
//			No function yet
//		Added OutputShare()
//			Takes the data that was copied in from PopulateData() ask for Stock Symbol, if found relats stockVolume in the mSo struct on that Stock Option
//		Added StockOverview()
//			Takes all the data that was copied in from PopulateData() and displays it
// Added PopulateData() on main()
//		Copies the date from myStock object to info object
// Changed the TEMP code in the LoadDate() function to give random information
//		This reduces the length of the code
//		makes looking at the same info less boring
//		because I needed a break from everything else
//		I'm running out of coffee
//		I should stop adding random stuff to this
// Added system("cls") to if(found) {} else {system("cls")] in both InformationCentral class and stockType class makes it look cleaner when it doesnt find stock symbol
// Added call to PrintMain() at end of PrintMain()
//		Once a switch case has been completed it reloads the PrintMain()
// Removed call to PrintMain() from switch default in PrintMain()
//		The above added call takes care of this, don't need to be redundant.
// Moved cout << "9) Save Stock Info" << endl; from SetStock() to PrintMain()
//		It was in the wrong menu.
// Reduced myStock sTo.myStockObj[10] to 5 to match the example in the book
// Changed the TEMP code in the LoadData() function to give the data listed in the book example
//		Makes this even easier to do the math in the other functions. Can compare book results to program results
// Removed stockPrice from all structs, this isnt listed in the book.
// Updated ProcessData()
//		When updating stockClose it auto updates percentGain
//		When updating previousClose it auto updates percentGain


#include "stdafx.h"

using namespace std;

// Forwared declare of functions
void LoadData(stockType &sTo);
void PopulateData(stockType &sTo);
void PrintMain();
void SetStock();

// Global myStock object
stockType myStock;
InformationCentral info;

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
	sTo.myStockObj[0].stockOpen = 123.45;
	sTo.myStockObj[0].stockClose = 130.95;
	sTo.myStockObj[0].stockHigh = 132.00;
	sTo.myStockObj[0].stockLow = 125.00;
	sTo.myStockObj[0].previousClose = 120.50;
	sTo.myStockObj[0].percentGain = 8.67;
	sTo.myStockObj[0].stockVolume = 10000;

	sTo.myStockObj[1].stockSymbol = "AOLK";
	sTo.myStockObj[1].stockOpen = 80.00;
	sTo.myStockObj[1].stockClose = 75.00;
	sTo.myStockObj[1].stockHigh = 82.00;
	sTo.myStockObj[1].stockLow = 74.00;
	sTo.myStockObj[1].previousClose = 83.00;
	sTo.myStockObj[1].percentGain = -9.64;
	sTo.myStockObj[1].stockVolume = 5000;

	sTo.myStockObj[2].stockSymbol = "CSCO";
	sTo.myStockObj[2].stockOpen = 100.00;
	sTo.myStockObj[2].stockClose = 102.00;
	sTo.myStockObj[2].stockHigh = 105.00;
	sTo.myStockObj[2].stockLow = 98.00;
	sTo.myStockObj[2].previousClose = 101.00;
	sTo.myStockObj[2].percentGain = 0.99;
	sTo.myStockObj[2].stockVolume = 25000;

	sTo.myStockObj[3].stockSymbol = "IBD";
	sTo.myStockObj[3].stockOpen = 68;
	sTo.myStockObj[3].stockClose = 71;
	sTo.myStockObj[3].stockHigh = 72;
	sTo.myStockObj[3].stockLow = 67;
	sTo.myStockObj[3].previousClose = 75;
	sTo.myStockObj[3].percentGain = -5.33;
	sTo.myStockObj[3].stockVolume = 15000;

	sTo.myStockObj[4].stockSymbol = "MSET";
	sTo.myStockObj[4].stockOpen = 120.00;
	sTo.myStockObj[4].stockClose = 140.00;
	sTo.myStockObj[4].stockHigh = 145.00;
	sTo.myStockObj[4].stockLow = 140.00;
	sTo.myStockObj[4].previousClose = 115.00;
	sTo.myStockObj[4].percentGain = 21.74;
	sTo.myStockObj[4].stockVolume = 30920;

		
	cout << "Temp Stock Symbols:" << endl;
	for (int i=0; i<5; i++)
	{
		cout << sTo.myStockObj[i].stockSymbol << endl;
	}
	cout << endl;


	system("pause");
}
// Main Menu
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
	cout << "9) Save Stock Info" << endl;
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
		// Call StockOverview()
		PopulateData(myStock, info);
		info.StockOverview();

		break;
	case '3':
		// Call OutputPrice()
		PopulateData(myStock, info);
		info.OutputPrice();

		break;
	case '4':
		// Call CalcGainLoss()
		PopulateData(myStock, info);
		info.CalcGainLoss();

		break;
	case '5':
		// Call OutputShare()
		PopulateData(myStock, info);
		info.OutputShare();

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
		break;
	}
	PrintMain();
}


// Set Stock Menu
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


void PopulateData(stockType &sTo, InformationCentral &mSo)
{
	for (int i=0; i<5; i++)
	{
		mSo.mSo[i].stockSymbol = sTo.myStockObj[i].stockSymbol;
		mSo.mSo[i].stockOpen = sTo.myStockObj[i].stockOpen;
		mSo.mSo[i].stockClose = sTo.myStockObj[i].stockClose;
		mSo.mSo[i].stockHigh = sTo.myStockObj[i].stockHigh;
		mSo.mSo[i].stockLow = sTo.myStockObj[i].stockLow;
		mSo.mSo[i].previousClose = sTo.myStockObj[i].previousClose;
		mSo.mSo[i].percentGain = sTo.myStockObj[i].percentGain;
		mSo.mSo[i].stockVolume = sTo.myStockObj[i].stockVolume;
	}
}