#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int firstFib = 0, secondFib = 1, nextFib = 0, fibAafterNext = 0, input;

	cin >> input;

	while (true)
	{
		nextFib = firstFib + secondFib;
		firstFib = secondFib;
		secondFib = nextFib;

		int tempNextFib = nextFib;

		fibAafterNext = secondFib + nextFib;
		secondFib = nextFib;
		nextFib = fibAafterNext;

		if (abs(input - tempNextFib) < abs(input - fibAafterNext))
		{
			cout << tempNextFib;
			break;
		}
		else
		{
			continue;
		}
	}
    return 0;
}

