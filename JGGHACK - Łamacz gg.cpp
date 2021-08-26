#include <iostream>
#include <string>
using namespace std;

int wartoscPierwszej(char x)
{
	if (x == 'A')
		return 0;
	else if (x == 'B')
		return 1;
	else if (x == 'C')
		return 2;
	else if (x == 'D')
		return 3;
	else if (x == 'E')
		return 4;
	else if (x == 'F')
		return 5;
	else if (x == 'G')
		return 6;
	else if (x == 'H')
		return 7;
	else if (x == 'I')
		return 8;
	else if (x == 'J')
		return 9;
	else if (x == 'K')
		return 10;
	else if (x == 'L')
		return 11;
	else if (x == 'M')
		return 12;
	else if (x == 'N')
		return 13;
	else if (x == 'O')
		return 14;
	else if (x == 'P')
		return 15;
}

int wartoscDrugiej(char x)
{
	if (x == 'A')
		return 0;
	else if (x == 'B')
		return 16;
	else if (x == 'C')
		return 32;
	else if (x == 'D')
		return 48;
	else if (x == 'E')
		return 64;
	else if (x == 'F')
		return 80;
	else if (x == 'G')
		return 96;
	else if (x == 'H')
		return 112;
	else if (x == 'I')
		return 8;
	else if (x == 'J')
		return 128;
	else if (x == 'K')
		return 160;
	else if (x == 'L')
		return 176;
	else if (x == 'M')
		return 192;
	else if (x == 'N')
		return 208;
	else if (x == 'O')
		return 224;
	else if (x == 'P')
		return 240;
}

void deszyfracja(string haslo, int dlugoscHasla)
{
	for (int i = 0; i < dlugoscHasla; i++)
	{
		if (i % 2 == 0)
		{			
			cout << (char)(wartoscPierwszej(haslo[i]) + wartoscDrugiej(haslo[i + 1]));
		}	
	}
	cout << endl;
}

int main()
{
	string haslo = "BGCGDGEGFGGGHGIGJGKG";

	while (cin >> haslo)
	{		
		deszyfracja(haslo, 20);
	}
}

