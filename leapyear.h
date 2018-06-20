#pragma once
#include <iostream>

using namespace std;

void leapyear()
{
	int x;
	cout << "Rok: ";
	cin >> x;
	if (x % 4 == 0)
	{
		if (x % 100 != 0)
			cout << "Przestepny" << endl;
		else if (x % 100 == 0)
		{
			if (x % 400 != 0)
				cout << "Nie jest przestepny" << endl;
			else if (x % 400 == 0)
				cout << "Przestepny" << endl;
		}
	}
	else
		cout << "Nie jest przestepny" << endl;
}

