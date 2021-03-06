#include "stdafx.h"
#include<iostream>
using namespace std;

bool check(char* firstArray, char* secondArray)
{
	if (firstArray[0] == '\0')
	{
		return 1;
	}
	if (firstArray[0] != '\0')
	{
		for (int i = 0; secondArray[i] != '\0'; i++)
		{
			if (secondArray[i] == firstArray[0])
			{
				return check(firstArray + 1, secondArray);
			}
		}
		return 0;
	}
}
int main()
{
	char firstArray[128];
	char secondArray[128];

	cin.getline(firstArray, 128);
	cin.getline(secondArray, 128);

	bool checked = check(firstArray, secondArray);

	if (checked)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

    return 0;
}

