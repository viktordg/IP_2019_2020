#include "stdafx.h"
#include<iostream>
using namespace std;

bool areEqual(char* firstString, char* secondString, int index, bool check)
{
	if (firstString[index] == '\0' && secondString[index] != '\0')
	{
		check = false;
		return check;
	}
	else if (secondString[index] == '\0' && firstString[index] != '\0')
	{
		check = false;
		return check;
	}
	if (firstString[index] == '\0' && secondString[index] == '\0' && check == true)
	{
		return check;
	}
	else
	{
		if (firstString[index] == secondString[index])
		{
			bool check = true;
			return areEqual(firstString, secondString, ++index, check);
		}
		else
		{
			check = false;
			return check;
		}
	}
}
int main()
{
	char firstString[101];
	char secondString[101];

	cin.getline(firstString, 101);
	cin.getline(secondString, 101);

	int index = 0;
	bool check = false;

	cout << areEqual(firstString, secondString, index, check);
    return 0;
}

