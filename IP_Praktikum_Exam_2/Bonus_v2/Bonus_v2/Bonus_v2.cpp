#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int matrix[10][10];

	int size;
	cin >> size;

	for (int row = 0; row < size; row++)
	{
		for (int col = 0; col < size; col++)
		{
			cin >> matrix[row][col];
		}
	}

	int evenSumArray[128];
	int evenSumArrayCount = 0;

	for (int row = 0; row < size; row++)
	{
		int currentEvenSum = 0;
		for (int col = 0; col < size; col++)
		{
			if (row % 2 == 0)
			{
				currentEvenSum += matrix[row][col];
			}
		}
		if (currentEvenSum == 0)
		{
			continue;
		}
		else
		{
			evenSumArray[evenSumArrayCount] = currentEvenSum;
			evenSumArrayCount++;
		}
	}

	for (int i = 0; i < evenSumArrayCount; i++)
	{
		cout << evenSumArray[i] << endl;
	}
	return 0;
}

