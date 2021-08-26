#include <iostream>
#include <string>

using namespace std;


bool czyPalindrom(string wyraz)
{
	int dlugosc = wyraz.length();

	for (int i = 0; i < dlugosc / 2; i++)
	{
		if (wyraz[i] != wyraz[dlugosc - 1 - i])
		{
			return false;
		}

	}

	return true;
}



int main()
{

	int iloscTestow = 1;
	string slowo;
	string odwroconeSlowo;


	cin >> iloscTestow;

	for (int i = 0; i < iloscTestow; i++)
	{
		cin >> slowo;

		if (czyPalindrom(slowo))
			cout << "tak" << endl;
		else
			cout << "nie" << endl;

	}

	cout << endl << endl << endl;


}

