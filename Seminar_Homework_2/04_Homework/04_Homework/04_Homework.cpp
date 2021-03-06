#include "stdafx.h"
#include<iostream>
using namespace std;

void rotateOutsideCorners(int matrix[][10], int size)
{
	int upperLeft = matrix[0][0];
	int upperRight = matrix[0][size - 1];
	int lowerLeft = matrix[size - 1][0];
	int lowerRight = matrix[size - 1][size - 1];

	matrix[0][0] = lowerLeft;
	matrix[0][size - 1] = upperLeft;
	matrix[size - 1][0] = lowerRight;
	matrix[size - 1][size - 1] = upperRight;
}
void rotateInsideCorners(int matrix[][10], int size)
{
	int upperLeft = matrix[1][1];
	int upperRight = matrix[1][size - 2];
	int lowerLeft = matrix[size - 2][1];
	int lowerRight = matrix[size - 2][size - 2];

	matrix[1][1] = lowerLeft;
	matrix[1][size - 2] = upperLeft;
	matrix[size - 2][1] = lowerRight;
	matrix[size - 2][size - 2] = upperRight;
}

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
	cout << endl;

	cout << "Rotaions: ";
	int rotationCount;
	cin >> rotationCount;

	for (int i = 0; i < rotationCount; i++)
	{
		rotateOutsideCorners(matrix,size);
		rotateInsideCorners(matrix,size);
	}

	for (int row = 0; row < size; row++)
	{
		for (int col = 0; col < size; col++)
		{
			cout << matrix[row][col]<<" ";
		}
		cout << endl;
	}
    return 0;
}

