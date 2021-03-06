#include "stdafx.h"
#include<iostream>
using namespace std;

double getMult(double* arr, int size)
{
	if (size == 1) {
		return 1;
	}
	if (size == 2) {
		if (arr[0]>arr[1] && arr[1] > 0) {
			return arr[1];
		}
		return 1;
	}


	if (arr[0]> arr[1] && arr[1] > 0) {
		return arr[1] * getMult(arr + 1, size - 1);
	}
	return getMult(arr + 1, size - 1);

}

int main()
{
	int n;
	cin >> n;

	double arr[100];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << getMult(arr, n);
    return 0;
}

