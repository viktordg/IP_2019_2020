#include "stdafx.h"
#include<iostream>
using namespace std;

//is k in number
bool check(int number, int k, bool isIn)
{
	if (number > 0)
	{
		if (number % 10 == k)
		{
			isIn = true;
			return isIn;
		}
		else
		{
			return check(number / 10, k, isIn);
		}
	}
	else
	{
		return isIn;
	}
}

int main()
{
	int number;
	cin >> number;
	
	int k;
	cin >> k;
	
	bool isIn = false;

	cout << check(number, k, isIn);
    return 0;
}

