#pragma once
#include <iostream>
using namespace std;

void position()
{
	int tab[100];                                      //tablica 100 elementowa posortowana
	for (int i = 0; i < 100; i++)
	{
		tab[i] = i;
	}

	int s;
	cout << endl << "Ktora liczbe chcesz wyszukac: ";
	cin >> s;
	for (int i = 0; i < 100; i++)
	{
		if (tab[i] == s)
		{
			cout << "Twoja liczba jest na " << i + 1 << " miejscu." << endl;
			break;
		}
		else
		{
			system("cls");
			cout << "Tej liczby nie ma w tablicy." << endl;
			system("cls");
		}
	}
}