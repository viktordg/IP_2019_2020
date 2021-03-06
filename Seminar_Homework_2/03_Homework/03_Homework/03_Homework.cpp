#include "stdafx.h"
#include<iostream>
using namespace std;

char* getLongestWord(char* string) 
{
	int indexes[128];
	indexes[0] = 0;
	int counter = 1;

	for (int i = 1; string[i] != '\0'; i++) 
	{
		if (string[i] == ' ')
		{
			indexes[counter] = i;
			counter++;
		}
	}

	int index = 0;
	int max = 0;

	for (int i = 0; i  < counter - 1; i++) 
	{
		if ((indexes[i + 1] - indexes[i]) > max) 
		{
			max = (indexes[i + 1] - indexes[i]);
			index = indexes[i];
		}
	}

	if (string[index] == ' ') 
	{
		return &string[index + 1];
	}
	return &string[index];
}

int main() 
{
	char array[128];
	cin.getline(array, 128);

	char * string = getLongestWord(array);

	cout << "Address: " << &string << endl;

	return 0;
}

