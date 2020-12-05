#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	int i;
	int j;
	int n = 5; 
	int** p = new int* [n];
	for (int i = 0; i < n; i++)
	{
		p[i] = new int[n];
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
		 p[i][j] = 5;
			if (i == j) {
				p[i][j]= 1;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << p[i][j];
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++) 
	{
		delete[] p[i];  
	}
	delete p;
	return 0;
}
