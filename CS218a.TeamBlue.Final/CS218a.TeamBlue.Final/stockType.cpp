#include "StdAfx.h"


using namespace std;


void stockType::ProcessData(string option)
{

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

