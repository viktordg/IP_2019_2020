#include "stdafx.h"
#include<iostream>;
using namespace std;

int getLenght(char* string)
{
	int stringCount = 0;

	for (int i = 0; string[i] != '\0'; i++)
	{
		string++;
	}
	return stringCount;
}
void removeSpaces(char* string, int lenght)
{
	int count = 0;
	for (int i = 0; i < lenght; i++)
	{
		if (string[i] == ' ')
		{
			count++;
			for (int j = i; j < lenght-1; j++)
			{
				string[j] = string[j + 1];
			}
		}
	}
	lenght -= count;
}
bool checkIfAnagrams(char* firstString, char* secondString)
{
	int firstStringCount = getLenght(firstString);
	int secondStringCount = getLenght(secondString);

	removeSpaces(firstString, firstStringCount);
	removeSpaces(secondString, secondStringCount);

	if (firstStringCount != secondStringCount)
	{
		return 1;
	}


}
int main()
{
	char firstString[100];
	char secondString[100];

	cin.getline(firstString, 100);
	cin.getline(secondString, 100);

	cout << checkIfAnagrams(firstString, secondString) << endl;

    return 0;
}

