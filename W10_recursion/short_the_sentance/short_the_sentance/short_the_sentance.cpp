#include "stdafx.h"
#include<iostream>
using namespace std;


void print(char* string, int currentIndex)
{
	cout << string[currentIndex];
}
void truncate(char* string, int endLenght, int currentIndex)
{
	if (currentIndex <= endLenght)
	{
		print(string, currentIndex);
		return truncate(string, endLenght, ++currentIndex);
	}
}
int main()
{
	char string[101];
	cin.getline(string, 101);

	int endLenght;
	cin >> endLenght;

	int currentIndex = 0;

	truncate(string, endLenght, currentIndex);
    return 0;
}

