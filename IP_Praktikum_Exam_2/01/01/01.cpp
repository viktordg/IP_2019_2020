#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int sizeArray;
	cin >> sizeArray;

	int allNumbers[128];
	for (int i = 0; i < sizeArray; i++)
	{
		cin >> allNumbers[i];
	}

	int primeNumbers[128];
	int countPrimeNumbers = 0;

	for (int i = 0; i < sizeArray; i++)
	{
		bool check = true;
		if (allNumbers[i] < 4)
		{
			primeNumbers[countPrimeNumbers] = allNumbers[i];
			countPrimeNumbers++;
		}
		else
		{
			for (int j = 2; j < allNumbers[i]; j++)
			{
				if (allNumbers[i] % j == 0)
				{
					check = false;
					break;
				}
			}
			if (check)
			{
				primeNumbers[countPrimeNumbers] = allNumbers[i];
				countPrimeNumbers++;
			}
		}		
	}

	for (int i = 0; i < countPrimeNumbers; i++)
	{
		cout << primeNumbers[i] << endl;
	}
    return 0;
}

