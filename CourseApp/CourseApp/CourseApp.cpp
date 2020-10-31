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
