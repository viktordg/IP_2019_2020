#include "stdafx.h"
#include<iostream>
using namespace std;

void draw(int n, int index)
{
	if (index == n)
	{
		cout << n << endl;
	}
	else
	{
		draw(n, index + 1);
		for (int i = n; i >= index; i--)
		{
			cout << i << " ";
		}
		cout << endl;
	}	
}
int main()
{
	 
	draw(10, 1);
    return 0;
}

