#pragma once
#include "stockType.h"
class InformationCentral
{
// Struct to hold all the stock information passed to class
struct mSs{
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
	mSs mSo[5];
	void OutputPrice();
	void OutputShare();
	void CalcGainLoss();
	void StockOverview();
	InformationCentral() {
		for (int i=0; i<5; i++)
		{
			mSo[i].stockSymbol = "NULL" + i;
			mSo[i].stockOpen = 0;
			mSo[i].stockClose = 0;
			mSo[i].stockHigh = 0;
			mSo[i].stockLow = 0;
			mSo[i].previousClose = 0;
			mSo[i].percentGain = 0;
			mSo[i].stockVolume = 0;

		}
	}
	friend void PopulateData(stockType &sTo, InformationCentral &mSo);
};

