#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	int b = 6;
	int c = 7;

	int* p1 = &a;
	int* p2 = &b;
	int* p3 = &c;

	int* pa[] = { p1,p2,p3 };

	cout << pa << endl;
	cout << pa + 1 << endl;
	cout << pa + 2 << endl;
    return 0;
}

