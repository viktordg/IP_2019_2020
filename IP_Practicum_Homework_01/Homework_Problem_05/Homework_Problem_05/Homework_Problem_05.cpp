#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int firstNumber, secondNumber;
	cin >> firstNumber >> secondNumber;
	
	int primeCounters = 0;

	for (int i = firstNumber; i <= secondNumber; i++)
	{
		bool isPrime = true;
		int sum = 0;

		for (int j = 1; j <= i / 2; j++)
		{
			if (i % j == 0)
			{
				sum += j;
			}
		}

		for (int y = 2; y <= sum / 2; y++)
		{
			if (sum % y == 0)
			{
				isPrime = false;
			}
		}

		if (isPrime)
		{
			primeCounters++;
		}
	}
	cout << primeCounters;
    return 0;
}

