#pragma once
#include <string>

using namespace std;

class stockType
{
// Struct to hold all the stock information
struct myStock{
	string stockSymbol;
	double stockOpen;
	double stockClose;
	double stockHigh;
	double stockLow;
	double previousClose;
	double percentGain;
	int stockVolume;

};
public:
	void ProcessData(string option);

	myStock myStockObj[5]; // We can have 6 Stock Options in our program.
	
	
	stockType()  // Constructor that initilizes the myStockOjb variables.
	{
		for (int i=0; i<5; i++)
		{
			myStockObj[i].stockSymbol = "NULL" + i;
			myStockObj[i].stockOpen = 0;
			myStockObj[i].stockClose = 0;
			myStockObj[i].stockHigh = 0;
			myStockObj[i].stockLow = 0;
			myStockObj[i].previousClose = 0;
			myStockObj[i].percentGain = 0;
			myStockObj[i].stockVolume = 0;

		}
	}
	friend void LoadData(stockType &sTo);
};

