#include "stdafx.h"
#include<iostream>
using namespace std;

	//Problm01
	//With BubbleSort

int main()
{
	double inputArray[100];

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> inputArray[i];
	}

	for (int j = 0; j < n; j++)
	{
		for (int t = 0; t < n - 1; t++)
		{
			if (inputArray[t] > inputArray[t+1])
			{
				swap(inputArray[t], inputArray[t + 1]);
			}
		}
	}

	cout << "Smallest: " << inputArray[0] << endl;
	cout << "Second smallest: " << inputArray[1] << endl;
	cout << "Biggerst: " << inputArray[n-1] << endl;
	cout << "Second biggest: " << inputArray[n-2] << endl;


    return 0;
}

