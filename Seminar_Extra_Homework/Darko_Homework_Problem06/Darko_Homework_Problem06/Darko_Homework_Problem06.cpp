#include "stdafx.h"
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char inputArray[1001];

	cin.getline(inputArray, 1001);

	char secondArray[1001];
	int index = 0;

	int secondArrayLenght = 0;
	for (int i = 0; i < strlen(inputArray); i++)
	{
		int j;
		for ( j = 0; j<i; j++)
			if (inputArray[i] == inputArray[j])
			{
				break;
			}
		if (i == j)
		{
			secondArray[secondArrayLenght++] = inputArray[i];
		}
	}
	
	secondArray[++secondArrayLenght] = '\0';



	for (int i = 0; i < strlen(secondArray)-1; i++)
	{
		int counter = 0;
		for (int j = 0; j < strlen(inputArray); j++)
		{
			if (inputArray[j] == secondArray[i])
			{
				counter++;
			}
		}
		cout << secondArray[i] << ": " << counter << endl;
	}
    return 0;
}

