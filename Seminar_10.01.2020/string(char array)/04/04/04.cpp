#include "stdafx.h"
#include<iostream>
using namespace std;

void printArray(char* string, int index)
{
	if (string[index] != '\0')
	{
		cout << string[index];

		return printArray(string, ++index);
	}
}
void concatStrings(char* firstString, char* secondString)
{
	int lenght = 0;
	int i = 0;
	while (firstString[i]!='\0')
	{
		lenght++;

		i++;
	}

	int j = 0;
	while (secondString[j] != '\0')
	{
		firstString[lenght+j] = secondString[j];

		j++;
	}
	firstString[lenght + j ] = '\0';
}

int main()
{
	char firstString[1001];
	cin.getline(firstString, 101);
	char secondString[101];
	cin.getline(secondString, 101);
	 

	concatStrings(firstString, secondString);

	int index = 0;
	printArray(firstString, index);
    return 0;
}

