#include "stdafx.h"
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int input;
	cin >> input;

	int counter = 0;
	int temp = input;
	while (temp != 0)
	{
		counter++;
		temp /= 10;
	}

	int temp2 = input;
	int sum = 0;
	while (temp2 != 0)
	{
		int digit = temp2 % 10;
		sum += pow(digit, counter);
		temp2 /= 10;
	}

	if (sum == input)
	{
		cout << "It is narcisisstic!";
	}
	else
	{
		cout << "It is not!";
	}
    return 0;
}

