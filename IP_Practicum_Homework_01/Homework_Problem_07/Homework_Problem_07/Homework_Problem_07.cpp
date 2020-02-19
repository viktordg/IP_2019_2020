#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int input;
	cin >> input;

	if (input < 10 || input>30000)
	{
		cout << "Error!" << endl;
		cin >> input;
	}

	int tempNum = input;
	int sum = 0;
	while (tempNum > 0)
	{
		int diggit = tempNum % 10;
		sum = sum * 10 + diggit;
		tempNum = tempNum / 10;
	}

	if (input == sum)
	{
		cout << "The number is a palindrome!" << endl;
	}
	else
	{
		cout << "The number is not a palindrome!" << endl;
	}
    return 0;
}

