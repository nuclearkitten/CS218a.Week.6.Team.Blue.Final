#include "StdAfx.h"

using namespace std;

void InformationCentral::OutputPrice()
{
	system("cls");
	// Declare Variables
	string mySymbol;
	bool found = false;
	int index = 0;

	system("cls");
	cout << "*********  First Investor's Heaven  *********" << endl;
	cout << "*********        Stock Prices       *********" << endl;
	cout << "Enter Stock Symbol: ";
	cin >> mySymbol;

	for (int i=0;i<5;i++) {
		if (mSo[i].stockSymbol == mySymbol) {
			found = true;
			index = i;
		}
	}

	if (found) {
		system("cls");
		cout << "*********  First Investor's Heaven  *********" << endl;
		cout << "*********        Stock Prices       *********" << endl;
		cout << "Stock Symbol : " << setprecision (2) << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << mSo[index].stockSymbol << endl;
		cout << "Stock Open   : " << setprecision (2) << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << mSo[index].stockOpen << endl;
		cout << "Stock Close  : " << setprecision (2) << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << mSo[index].stockClose << endl;
		cout << "Stock High   : " << setprecision (2) << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << mSo[index].stockHigh << endl;
		cout << "Stock Low    : " << setprecision (2) << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << mSo[index].stockLow << endl;
		cout << "Prev Close   : " << setprecision (2) << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << mSo[index].previousClose << endl;   
	}
	else {
		system("cls");
		cout << "Stock Symbol not found!" << endl;
	}
	cout << endl;
	system("pause");
}

void InformationCentral::OutputShare()
{
	system("cls");
	// Declare Variables
	string mySymbol;
	bool found = false;
	int index = 0;

	system("cls");
	cout << "*********  First Investor's Heaven  *********" << endl;
	cout << "*********        Stock Share        *********" << endl;
	cout << "Enter Stock Symbol: ";
	cin >> mySymbol;

	for (int i=0;i<5;i++) {
		if (mSo[i].stockSymbol == mySymbol) {
			found = true;
			index = i;
		}
	}

	if (found) {
		system("cls");
		cout << "*********  First Investor's Heaven  *********" << endl;
		cout << "*********        Stock Prices       *********" << endl;
		cout << "Stock Symbol : " << setprecision (2) << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << mSo[index].stockSymbol << endl;
		cout << "Stock Volume : " << setprecision (2) << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << mSo[index].stockVolume << endl;
	}
	else {
		system("cls");
		cout << "Stock Symbol not found!" << endl;
	}
	cout << endl;
	system("pause");
}

void InformationCentral::CalcGainLoss()
{
	system("cls");
	// Declare Variables
	string mySymbol;
	double GainLoss = 0;
	bool found = false;
	int index = 0;

	system("cls");
	cout << "*********  First Investor's Heaven  *********" << endl;
	cout << "*********      Stock Gain/Loss      *********" << endl;
	cout << "Enter Stock Symbol: ";
	cin >> mySymbol;

	for (int i=0;i<5;i++) {
		if (mSo[i].stockSymbol == mySymbol) {
			found = true;
			index = i;
		}
	}

	if (found) {
		system("cls");
		
		GainLoss = ((mSo[index].stockClose / mSo[index].previousClose) - 1) * 100;
		
		cout << "*********  First Investor's Heaven  *********" << endl;
		cout << "*********      Stock Gain/Loss      *********" << endl;
		cout << "Note: Gain/Loss is calculated using current closing and previous closing prices." << endl;
		cout << "Stock Symbol : " << setprecision (2) << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << mSo[index].stockSymbol << endl;
		cout << "Stock Price  : " << setprecision (2) << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << mSo[index].stockClose << endl;
		cout << "Prev Close   : " << setprecision (2) << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << mSo[index].previousClose << endl;
		cout << "Gain/Loss    : " <<  setprecision (2) << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << GainLoss << "%" << endl;
		mSo[index].percentGain = GainLoss;


	}
	else {
		system("cls");
		cout << "Stock Symbol not found!" << endl;
	}
	cout << endl;
	system("pause");

}

void InformationCentral::StockOverview()
{
	system("cls");

	double ClosingAssets = 0;

	cout << "*********  First Investor's Heaven  *********" << endl;
	cout << "*********     Financial Report      *********" << endl;
	cout << "Stock             Today                 Previous  Percent" << endl;
	cout << "Symbol  Open    Close   High    Low     Close     Gain     Volume" << endl;
	cout << "------  -----   -----   -----   -----   --------  -------   ------" << endl;
	for (int i=0; i<5; i++)
	{
		cout << setprecision (2) << setiosflags(ios::fixed) << setiosflags(ios::showpoint) <<
			setw(6) << right << mSo[i].stockSymbol << "  " <<
			setw(6) << right << mSo[i].stockOpen << "  " <<
			setw(6) << right << mSo[i].stockClose << "  " <<
			setw(6) << right << mSo[i].stockHigh << "  " <<
			setw(6) << right << mSo[i].stockLow << "  " <<
			setw(6) << right << mSo[i].previousClose << "  " <<
			setw(6) << mSo[i].percentGain << "%     " <<
			setw(6) << mSo[i].stockVolume << endl;
		ClosingAssets = ClosingAssets + (mSo[i].stockClose * mSo[i].stockVolume);
	}
	cout << "Closing Assets: $" <<
		setprecision (2) << setiosflags(ios::fixed) << setiosflags(ios::showpoint) <<
		ClosingAssets << endl;
	cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*" << endl;

	system("pause");


}