#include "stdafx.h"
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	double inputX, inputY;
	cin >> inputX >> inputY;

	//first circle
	int const x1 = -2;
	int const y1 = 0;
	int const radius1 = 2;

	//second circle
	int const x2 = 1;
	int const y2 = 1;
	double const radius2 = sqrt(5);

	bool isInside = false;
	if ((pow(inputX - x1, 2) + pow(inputY - y1, 2)) <= pow(radius1, 2)
		|| (pow(inputX - x2, 2) + pow(inputY - y2, 2)) <= pow(radius2, 2))
	{
		isInside = true;
	}
	cout << isInside << endl;
    return 0;
}

