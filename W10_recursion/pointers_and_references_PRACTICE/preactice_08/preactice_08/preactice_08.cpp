#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int arr[128];
	
	int lenght;
	cin >> lenght;

	for (int i = 0; i < lenght; i++)
	{
		cin >> arr[i];
	}

	for (int i = lenght-1; i > 0; i--)
	{
		cout << arr + i<< endl;
		cout << *(arr + i) << endl;
	}
    return 0;
}

