#include <iostream>
#include <string>

using namespace std;


void dec_to_bin(int liczba)
{
	int i = 0, tab[31];

	while (liczba)
	{
		tab[i++] = liczba % 2;
		liczba /= 2;
	}

	for (int j = i - 1; j >= 0; j--)
		cout << tab[j];
}



void reverse_dec_to_bin(int liczba)
{
	int i = 0, tab[31];

	while (liczba)
	{
		tab[i++] = liczba % 2;
		liczba /= 2;
	}

	for (int j =0; j < i; j++)
		cout << tab[j];
}

unsigned long long int potega(int podstawa, int wykladnik)
{
	unsigned long long wynik = 1;

	if (wykladnik == 0)
	{
		return wynik;
	}
	else
	{
		for (int i = 1; i <= wykladnik; i++)
		{
			wynik *= podstawa;
		}
		return wynik;
	}

}

void reverse_bin_to_dec(int liczba)
{
	unsigned long long int liczbaPomocnicza = liczba;
	int n = 0;

	unsigned long long int suma = 0;

	do
	{
		liczbaPomocnicza = liczbaPomocnicza / 2;
		n++;
	} while (liczbaPomocnicza != 0);


	int *tablica;
	tablica = new int[n];
	int i = 0;

	while (liczba)
	{		
		tablica[i] = liczba % 2;
		liczba = liczba / 2;
		i++;				
	}

	for (int j = 0; j < n; j++)
	{ 		
		suma += tablica[i - 1] * potega(2, j);
		i--;
	}

	cout << suma;

	delete[] tablica;

}


int liczba;

int main()
{
	
	while (cin >> liczba)
	{
		reverse_bin_to_dec(liczba);
		cout << endl;
		
	}
		

}
