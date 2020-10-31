#include <iostream>
#include <math.h>
#include "header.h"
using namespace std;

double calc(double a, double x)
{
	double numenator = pow(log(a + x), 2);
	double denominator = pow((a + x), 2);
	double y = numenator / denominator;
	return y;
}
double calc(double x)
{
	const double a = 2.0;
	return calc(a, x);
}

void taskA(double a, double xn, double xk, double dx)
{
	for (double x = xn; x <= xk; x += dx) {
		double y = calc(a, x);
		cout << x << "\t" << y << endl;
	}
	return;
}

void taskB(double a, double* x, int size)
{
	for (int i = 0; i < size; i++)
	{
		double y = calc(a, x[i]);
		cout << x[i] << "\t" << y << endl;

	}
}