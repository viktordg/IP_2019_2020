#include "stdafx.h"
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int inputNumber;

	int randomNumber = rand() % 1000 + 101;

	int counter = 0;
	do
	{
		cin >> inputNumber;
		counter++;
		if (inputNumber == randomNumber)
		{
			cout << "You did it!" << "It took you " << counter << " attempts";
		}
		else if (inputNumber > randomNumber)
		{
			cout << "Try with a smaller number.";
		}
		else
		{
			cout << "Try with a bigger number.";
		}
	} while (inputNumber != randomNumber);
	{
		cin >> inputNumber;
		counter++;
		if (inputNumber == randomNumber)
		{
			cout << "You did it!" << "It took you " << counter << " attempts";
		}
		else if (inputNumber > randomNumber)
		{
			cout << "Try with a smaller number.";
		}
		else
		{
			cout << "Try with a bigger number.";
		}
	}
    return 0;
}

