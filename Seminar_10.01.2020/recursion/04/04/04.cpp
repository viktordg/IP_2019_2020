#include "stdafx.h"
#include<iostream>
#include "04.h"
using namespace std;

int longestCol(int* longest, int size)
{
	int largest = 0;
	for (int i = 0; i < 5; i++)
	{
		if (largest < longest[i])
		{
			largest = longest[i];
		}
	}

	for (int i = 0; i < 5; i++)
	{
		if (largest == longest[i])
		{
			return i;
		}
	}
}
int searchHelper(int matrix[][5], int numbersToSearch[], int rowCount)
{
	int count = 0;
	int longest[100];
	for (int col = 0; col < 5; col++)
	{
		for (int row = 0; row < rowCount; row++)
		{
			if (matrix[row][col] == numbersToSearch[row])
			{
				count++;
			}
		}
		longest[col] = count;
		count = 0;
	}
	return longestCol(longest, 5);
}
int search(int matrix[][5], int numbersToSearch[], int rowCount)
{
	return searchHelper(matrix, numbersToSearch, rowCount);
}

int main()
{
	int matrix[100][5];

	int numbersToSearch[100];

	int rowCount;
	cin >> rowCount;

	for (int i = 0; i < rowCount; i++)
	{
		cin >> numbersToSearch[i];
	}

	for (int row = 0; row < rowCount; row++)
	{
		for (int col = 0; col < 5; col++)
		{
			cin >> matrix[row][col];
		}
	}

	cout << search(matrix, numbersToSearch, rowCount) << endl;

    return 0;
}

