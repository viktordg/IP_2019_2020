#include "stdafx.h"
#include<iostream>
using namespace std;

int getLenght(char* string)
{
	int count = 0;

	for (int i = 0; string[i] != '\0'; i++)
	{
		count++;
	}

	return count;
}
int countMatches(char* firstString, char* secondString)
{
	int firstStringLenght = getLenght(firstString);
	int secondStringLenght = getLenght(secondString);

	int count = 0;
	for (int i = 0; i < firstStringLenght; i++)
	{
		bool matches = false;
		if (firstString[i] == secondString[0])
		{
			for (int j = 0; j < secondStringLenght; j++)
			{
				if (firstString[i+j] == secondString[j] && (i + j)<firstStringLenght)
				{
					matches = true;
				}
				else
				{
					matches = false;
					break;
				}
			}
			if (matches = true)
			{
				count++;
			}
		}
	}

	return count;
}
int main()
{
	char firstString[128];
	cin.getline(firstString, 128);

	char secondString[128];
	cin.getline(secondString, 128);

	cout << countMatches(firstString, secondString) << endl;
    return 0;
}

