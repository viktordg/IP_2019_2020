#include "stdafx.h"
#include<iostream>
using namespace std;

void printNumber(char* string, int index)
{
	if (string[index] != '\0')
	{
		cout<<string[index] - '0';

		return printNumber(string, ++index);
	}
}
void checkIfIsNumber(char* string, bool isNumber ,int index)
{
	if (string[index] != '\0' && string[index] >= 48 && string[index] <= 57)
	{
		isNumber = true;
		checkIfIsNumber(string, isNumber, ++index);
	}
	else
	{
		isNumber = false;
		cout << "-1";
		return;
	}

	if (string[index] == '\0' && isNumber == true)
	{
		index = 0;
		return printNumber(string, index);
	}
}
int main()
{
	char string[101];
	cin.getline(string, 101);

	int index = 0;
	bool isNumber = false;

	checkIfIsNumber(string, isNumber,index);
    return 0;
}

