#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	char firstString[128];
	char secondString[128];

	cin.getline(firstString, 128);
	cin.getline(secondString, 128);

	for (int i = 0; firstString[i] != '\0'; i++)
	{
		bool check = false;
		for (int j = 0; secondString[j] != '\0'; j++)
		{
			if (secondString[j]==firstString[i])
			{
				firstString[i] = firstString[i] - 32;
			}
		}
	}

	cout << firstString << endl;
    return 0;
}

