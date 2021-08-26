#include <iostream>

using namespace std;

bool czy_pierwsza(int n)
{
	if (n < 2)
		return false; //gdy liczba jest mniejsza niż 2 to nie jest pierwszą

	for (int i = 2; i*i <= n; i++)
		if (n%i == 0)
			return false; //gdy znajdziemy dzielnik, to dana liczba nie jest pierwsza
	return true;
}


int main()
{
	int ilTest = 1;
	int liczba;

	cin >> ilTest;


	for (int i = 0; i < ilTest; i++)
	{
		cin >> liczba;

		if (czy_pierwsza(liczba))
			cout << "TAK" << endl;
		else
			cout << "NIE" << endl;
		
	}
	   
}