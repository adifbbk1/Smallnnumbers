// Smallnnumbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	cout << "Enter number of inputs:-";
	int n;
	cin >> n;
	cout << "Enter numbers separated by enter\n";
	long int a, b=0;
	cin >> a;
p:
	if (n == 1)
		cout << a << " is largest" << endl;
	else
	{
		if (a < b)//keeping a always large
			a = b;
		cin >> b;
		n--;//countdown till 1
		goto p;
	}
    return 0;
}

