#include "stdafx.h"
#include "math.h"
#include "iostream"
using namespace std;
double sum()
{
	float e = 1e-4;
	float result = 0;
	float row = 0;
	int n = 0;
	int sign = 1;
	do
	{
		n++;
		row = 1. / (10*n * n * n*n);
		result += sign*row;
		sign *= -1;
	} while (row >= e);
	double a = round(result * 10000) / 10000;
	return a;
}
int main()
{
	cout << sum() << endl;
	system("pause");
}

