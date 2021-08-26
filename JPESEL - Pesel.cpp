#include <string>
#include <iostream>
using namespace std;

long int PESEL;
long int szyfr = 13791379131;
long int koniec;

int main()
{

	cin >> PESEL;

	long int wynik;
	

	for (int i = 0; i <= 10; i++)
	{
		wynik = PESEL[i] * szyfr[i];

		koniec += wynik;

	}

	cout << wynik;

}
