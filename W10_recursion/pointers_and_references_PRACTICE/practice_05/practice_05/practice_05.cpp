#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int arr[] = { 1,2,3 };

	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;

	cout << *arr << endl;
	cout << *arr + 1 << endl;
	cout << *arr + 2 << endl;


	cout << arr << endl;
	cout << arr + 1 << endl;
	cout << arr + 2 << endl;
    return 0;
}

