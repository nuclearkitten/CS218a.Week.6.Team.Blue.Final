#include "StdAfx.h"

using namespace std;

// Initalize me with type shortcuts
shortcuts me;

// Main Menu
void menus::PrintMain()
{
	// Initalize Variables
	char myChoice;

	me.c(); // Clear Screen

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
		// call function
		PrintSetStock();
		
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
	case '0':
		me.c();
		cout << "Have a nice day!" << endl;
		me.p();
		exit(1);
		break;
	default:
		cout << "ERROR! You have made an invalid selection." << endl;
		me.p();
		PrintMain();
		break;
	}
}


// Main Menu
void menus::PrintSetStock()
{
	// Initalize Variables
	char myChoice;

	me.c(); // Clear Screen

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
	case '6':
		// call function

		break;
	case '0':
		PrintMain();
		break;
	default:
		cout << "ERROR! You have made an invalid selection." << endl;
		me.p();
		PrintSetStock();
		break;
	}
}