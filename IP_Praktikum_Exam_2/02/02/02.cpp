#include "stdafx.h"
#include<iostream>
using namespace std;

int check(int number, int targer, int count)
{
	if (number == 0)
	{
		return count;
	}
	else
	{
		if (number % 10 == targer)
		{
			count++;
			return check(number/10, targer, count);
		}
		return check(number / 10, targer, count);
	}
}

int main()
{

	int number;
	cin >> number;

	int target;
	cin >> target;

	cout << check(number, target, 0) << endl;
    return 0;
}

