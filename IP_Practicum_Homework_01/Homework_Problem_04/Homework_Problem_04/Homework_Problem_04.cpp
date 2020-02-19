#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{

	int maxCounter = 0;
	for (int i = 1; i <= 1000000; i++)
	{
		int firstNumber = i;
		int counter = 1;
		while (firstNumber > 1)
		{
			if (firstNumber % 2 == 0)
			{
				firstNumber /= 2;
				counter++;
			}
			else
			{
				firstNumber = (firstNumber * 3) + 1;
				counter++;
			}
		}

		if (maxCounter <= counter )
		{
			maxCounter = counter;
		}
	}

	for (int i = 1; i <= 1000000; i++)
	{
		int firstNumber = i;
		int counter = 1;
		while (firstNumber > 1)
		{
			if (firstNumber % 2 == 0)
			{
				firstNumber /= 2;
				counter++;
			}
			else
			{
				firstNumber = (firstNumber * 3) + 1;
				counter++;
			}
		}

		if (counter == maxCounter)
		{
			cout << i << endl;
		}
	}
	cout << maxCounter << endl;
    return 0;
}

