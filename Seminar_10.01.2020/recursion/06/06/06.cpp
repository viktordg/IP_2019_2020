#include "stdafx.h"
#include<iostream>
using namespace std;

double getSum(double* inputArray, int size)
{
	if (size == 1)
	{
		return 0;
	}

	if (size == 2)
	{
		if (inputArray[0] > inputArray[1] && inputArray[0] > 0)
		{
			return inputArray[0];
		}
		return 0;
	}

	if (inputArray[0] > inputArray[1] && inputArray[0] >0)
	{
		return inputArray[0] + getSum(inputArray+1, size - 1);
	}
	return  getSum(inputArray+1, size - 1);
}
int main()
{
	double inputArray[] = { 2, -1.9, 1.1, 3.5, 1, 0, 8.3 };

	cout << getSum(inputArray, 7) << endl;
    return 0;
}

