#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int array[100];
	int inputSize;
	cin >> inputSize;
	for (int i = 0; i < inputSize; i++)
	{
		cin >> array[i];
	}

	bool isMirror = true;
	for (int index = 0; index < inputSize; index++)
	{
		if (array[index] != array[inputSize-index-1])
		{
			isMirror = false;
		}
	}

	cout << isMirror << endl;
    return 0;
}

