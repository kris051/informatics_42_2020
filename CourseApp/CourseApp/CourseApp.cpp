#include <iostream>
#include <cmath>
#include "header.h"
using namespace std;

int main()
{

	double a = 2.0;
	taskA(2, 1.2, 4.2, 0.6);
	double arr[] = { 1.16, 1.32, 1.47, 1.65, 1.93 };
	cout << endl;
	taskB(a, arr, sizeof(arr) / sizeof(arr[0]));

	return 0;
}



int main()
{
	double* y; //  i'm array

	double a = 2.0;
	int count = taskA(2, 1.2, 4.2, 0.6, y);
	for (int i = 0; i < count; i++)
	{
		cout << y[i] << endl;
	}
	delete[] y;

	double arr[] = { 1.16, 1.32, 1.47, 1.65, 1.93 };
	cout << "------------------" << endl;
	double* y1;
	count = taskB(a, arr, sizeof(arr) / sizeof(arr[0]), y1);
	for (int i = 0; i < count; i++)
	{
		cout << arr[i] << "\t" << y[i] << endl;
	}
	delete[] y1;
}


