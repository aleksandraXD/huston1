#pragma once
#include <iostream>

using namespace std;

int fibbonaci()
{
	int a = 1, b = 1, sum = 0;
	while (b < 800000)
	{
		b = a + b;
		a = b - a;
		if (b % 2 == 0)
			sum += b;
	}
	return sum;
}
