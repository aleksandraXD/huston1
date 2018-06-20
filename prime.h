#pragma once
#include <iostream>
using namespace std;

bool method(int n)
{
	if (n < 2)
		return false;                     //0 i 1 nie sa pierwsze

	for (int i = 2; i*i <= n; i++)
		if (n % i == 0)
			return false;                 //jest dzielnik = nie jest pierwsza
	return true;                          //w innym wypadku jest pierwsza
}

void prime()
{
	int n;
	cout << "Liczba: ";
	cin >> n;
	if (method(n))
		cout << "JEST PIERWSZA" << endl;
	else
		cout << "NIE JEST PIERWSZA" << endl;
}