// testing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	TC Obj;
	for (int i=0; i<10; i++)
	{
		Obj.T[i].A = i*5;
		Obj.T[i].B = (i*3)*2;
	}

	for (int i=0; i<10; i++)
	{
		cout << "A: " << Obj.T[i].A << endl;
		cout << "B: " << Obj.T[i].B << endl << endl;
	}


	system("pause");
	Obj.TsC();
	system("pause");

	ABC Obj2;
	Obj2.tf();

	system("pause");

	return 0;
}

