#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	char alphabeArray[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o',
		'p','q','r','s','t','u','v','w','x','y','z' };

	char array[1001];

	cin.getline(array, 1001);
	
	for (int index = 0; index < strlen(array); index++)
	{
		for (int alphabetIndex = 0; alphabetIndex < 26; alphabetIndex++)
		{
			if (array[index] == alphabeArray[alphabetIndex])
			{
				cout << alphabetIndex << endl;
			}
		}
	}

    return 0;
}

