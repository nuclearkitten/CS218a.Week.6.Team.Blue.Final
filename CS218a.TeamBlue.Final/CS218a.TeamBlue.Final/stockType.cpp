#include "StdAfx.h"


using namespace std;


void stockType::ProcessData(string option)
{
	// TEMP ONLY!
	// Populate myStockOBJ
	TempFillStruct();

	// Declare Variables
	string mySymbol;
	bool found = false;
	int index = 0;

	system("cls");
	cout << "*********  First Investor's Heaven  *********" << endl;
	cout << "*********   Set Stock Information   *********" << endl;
	cout << "Enter Stock Symbol: ";
	cin >> mySymbol;

	for (int i=0;i<10;i++) {
		if (myStockObj[i].stockSymbol == mySymbol) {
			found = true;
			index = i;
		}
	}

	if (found) {

		if (option == "open") {
			system("cls");

			double myAns;

			cout << "*********  First Investor's Heaven  *********" << endl;
			cout << "*********   Set Stock Information   *********" << endl;
			cout << "Current open price: " << myStockObj[index].stockOpen << endl;
			cout << "Enter new open price: ";
			cin >> myAns;
			
			system("cls");

			cout << "Previous open price: " << myStockObj[index].stockOpen << endl;
			cout << "New open price: " << myAns;
			myStockObj[index].stockOpen = myAns;

		}
		else if (option == "close") {
			system("cls");

			double myAns;

			cout << "*********  First Investor's Heaven  *********" << endl;
			cout << "*********   Set Stock Information   *********" << endl;
			cout << "Current close price: " << myStockObj[index].stockClose << endl;
			cout << "Enter new close price: ";
			cin >> myAns;
			
			system("cls");

			cout << "Previous close price: " << myStockObj[index].stockClose << endl;
			cout << "New close price: " << myAns;
			myStockObj[index].stockClose = myAns;
		}
		else if (option == "high") {
			system("cls");

			double myAns;

			cout << "*********  First Investor's Heaven  *********" << endl;
			cout << "*********   Set Stock Information   *********" << endl;
			cout << "Current high price: " << myStockObj[index].stockHigh << endl;
			cout << "Enter new high price: ";
			cin >> myAns;
			
			system("cls");

			cout << "Previous high price: " << myStockObj[index].stockHigh << endl;
			cout << "New high price: " << myAns;
			myStockObj[index].stockHigh = myAns;
		}
		else if (option == "low") {
			system("cls");

			double myAns;

			cout << "*********  First Investor's Heaven  *********" << endl;
			cout << "*********   Set Stock Information   *********" << endl;
			cout << "Current low price: " << myStockObj[index].stockLow << endl;
			cout << "Enter new low price: ";
			cin >> myAns;
			
			system("cls");

			cout << "Previous low price: " << myStockObj[index].stockLow << endl;
			cout << "New low price: " << myAns;
			myStockObj[index].stockLow = myAns;
		}
		else if (option == "previous") {
			system("cls");

			double myAns;

			cout << "*********  First Investor's Heaven  *********" << endl;
			cout << "*********   Set Stock Information   *********" << endl;
			cout << "Current previous close price: " << myStockObj[index].previousClose << endl;
			cout << "Enter new previous close price: ";
			cin >> myAns;
			
			system("cls");

			cout << "Previous previous close price: " << myStockObj[index].previousClose << endl;
			cout << "New previous close price: " << myAns;
			myStockObj[index].previousClose = myAns;
		}
		else if (option == "volume") {
			system("cls");

			int myAns;

			cout << "*********  First Investor's Heaven  *********" << endl;
			cout << "*********   Set Stock Information   *********" << endl;
			cout << "Current stock volume: " << myStockObj[index].stockVolume << endl;
			cout << "Enter new stock volume: ";
			cin >> myAns;
			
			system("cls");

			cout << "Previous stock volume: " << myStockObj[index].stockVolume << endl;
			cout << "New stock volume: " << myAns;
			myStockObj[index].stockVolume = myAns;
		}
		else {
			cout << "Invalid Selector in stockType::ProcessData!" << endl;
		}
	}
	else {
		cout << "Stock Symbol not found!" << endl;
	}
	cout << endl;
	system("pause");

}

// THE FOLLOWING IS ONLY TEMP!
void stockType::TempFillStruct()
{
	myStockObj[0].stockSymbol = "ABC";
	myStockObj[0].stockOpen = 106.89;
	myStockObj[0].stockClose = 109.42;
	myStockObj[0].stockHigh = 200.01;
	myStockObj[0].stockLow = 73.46;
	myStockObj[0].previousClose = 110.56;
	myStockObj[0].percentGain = -5;
	myStockObj[0].stockVolume = 10000;

	myStockObj[1].stockSymbol = "BCD";
	myStockObj[1].stockOpen = 176.89;
	myStockObj[1].stockClose = 103.42;
	myStockObj[1].stockHigh = 230.01;
	myStockObj[1].stockLow = 79.46;
	myStockObj[1].previousClose = 190.56;
	myStockObj[1].percentGain = 5;
	myStockObj[1].stockVolume = 100000;

	myStockObj[2].stockSymbol = "CDE";
	myStockObj[2].stockOpen = 106.89;
	myStockObj[2].stockClose = 109.42;
	myStockObj[2].stockHigh = 200.01;
	myStockObj[2].stockLow = 73.46;
	myStockObj[2].previousClose = 110.56;
	myStockObj[2].percentGain = -5;
	myStockObj[2].stockVolume = 10000;

	myStockObj[3].stockSymbol = "DEF";
	myStockObj[3].stockOpen = 106.89;
	myStockObj[3].stockClose = 109.42;
	myStockObj[3].stockHigh = 200.01;
	myStockObj[3].stockLow = 73.46;
	myStockObj[3].previousClose = 110.56;
	myStockObj[3].percentGain = -5;
	myStockObj[3].stockVolume = 10000;

	myStockObj[4].stockSymbol = "EFG";
	myStockObj[4].stockOpen = 106.89;
	myStockObj[4].stockClose = 109.42;
	myStockObj[4].stockHigh = 200.01;
	myStockObj[4].stockLow = 73.46;
	myStockObj[4].previousClose = 110.56;
	myStockObj[4].percentGain = -5;
	myStockObj[4].stockVolume = 10000;

	myStockObj[5].stockSymbol = "FGH";
	myStockObj[5].stockOpen = 106.89;
	myStockObj[5].stockClose = 109.42;
	myStockObj[5].stockHigh = 200.01;
	myStockObj[5].stockLow = 73.46;
	myStockObj[5].previousClose = 110.56;
	myStockObj[5].percentGain = -5;
	myStockObj[5].stockVolume = 10000;

	myStockObj[6].stockSymbol = "GHI";
	myStockObj[6].stockOpen = 106.89;
	myStockObj[6].stockClose = 109.42;
	myStockObj[6].stockHigh = 200.01;
	myStockObj[6].stockLow = 73.46;
	myStockObj[6].previousClose = 110.56;
	myStockObj[6].percentGain = -5;
	myStockObj[6].stockVolume = 10000;

	myStockObj[7].stockSymbol = "HIJ";
	myStockObj[7].stockOpen = 106.89;
	myStockObj[7].stockClose = 109.42;
	myStockObj[7].stockHigh = 200.01;
	myStockObj[7].stockLow = 73.46;
	myStockObj[7].previousClose = 110.56;
	myStockObj[7].percentGain = -5;
	myStockObj[7].stockVolume = 10000;

	myStockObj[8].stockSymbol = "IJK";
	myStockObj[8].stockOpen = 106.89;
	myStockObj[8].stockClose = 109.42;
	myStockObj[8].stockHigh = 200.01;
	myStockObj[8].stockLow = 73.46;
	myStockObj[8].previousClose = 110.56;
	myStockObj[8].percentGain = -5;
	myStockObj[8].stockVolume = 10000;
	
	myStockObj[9].stockSymbol = "JKL";
	myStockObj[9].stockOpen = 106.89;
	myStockObj[9].stockClose = 109.42;
	myStockObj[9].stockHigh = 200.01;
	myStockObj[9].stockLow = 73.46;
	myStockObj[9].previousClose = 110.56;
	myStockObj[9].percentGain = -5;
	myStockObj[9].stockVolume = 10000;

	cout << "Temp Stock Symbols:" << endl;
	for (int i=0; i<10; i++)
	{
		cout << myStockObj[i].stockSymbol << endl;
	}
	cout << endl;


	system("pause");
}