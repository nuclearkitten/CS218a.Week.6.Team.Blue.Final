#pragma once
#include <string>

using namespace std;

class stockType
{

public:
	void ProcessData(string option);
	void TempFillStruct(); // TEMP FUNCTION TO POPULATE STRUCT!

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
	myStock myStockObj[10]; // We can have 10 Stock Options in our program.
};

