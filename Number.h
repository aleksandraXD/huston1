#pragma once
#include <iostream>
#include <string>

using namespace std;
#ifndef BINARY
#define BINARY

class Number
{
public:
	int dec;
	string binar;
	Number(int);
	Number(string);
	void decValue(string);
	void binValue(int);
};



Number::Number(int n)
{
	dec = n;
	binValue(n);
}

Number::Number(string n)
{
	binar = n;
	decValue(n);
}

void Number::decValue(string n)
{
	int sum=0;
	for (int i = 0; i < n.size(); i++)
	{
		if (n[n.size()-i-1] == '0')
			sum += 0 * pow(2, i);
		else if(n[n.size()-i-1]=='1')
			sum += 1 * pow(2, i);
	}
	cout << "Twoja liczba w systemie dziesiatkowym to: " << sum << endl;
}

void Number::binValue(int n)
{
	int i = 0, bin[30];
	while (dec)                               //reszta z dzielenia
	{
		bin[i++] = dec % 2;
		dec /= 2;
	}
	cout << "Twoja liczba w systemie binarnym to: ";
	for (int j = i - 1; j >= 0; j--)         //wypisanie liczby od tylu = binarnej
		cout << bin[j];
}

#endif //!BINARY