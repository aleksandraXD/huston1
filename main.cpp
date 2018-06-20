#include <iostream>
#include <cstdlib>
#include <time.h>
#include "prime.h"
#include "leapyear.h"
#include "sort.h"
#include "fibbonaci.h"
#include "Number.h"
using namespace std;

int main()
{
	cout << "LICZBA PIERWSZA--------------------------" << endl << endl;
	prime();
	cout << endl << endl << "ROK PRZESTEPNY---------------------------" << endl << endl;
	leapyear();
	cout << endl << endl << "POZYCJA LICZBY S-------------------------" << endl << endl;
	position();
	cout << endl << endl;
	Number dec(8);
	cout << endl << endl;
	Number bin("1000");
	cout << endl << endl << "FIBBONACI--------------------------------" << endl << endl;
	cout<<fibbonaci();
	cout << endl << endl << "-----------------------------------------" << endl << endl;
	system("pause");
	return 0;
}