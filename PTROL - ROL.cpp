#include <iostream>

using namespace std;

int ile;

int *tablica = new int[ile];

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> ile;

		int *tablica = new int[ile];

		for(int i = 0; i<ile; i++)
		{ 
		cin >> tablica[i];
		}

		for (int i = 1; i < ile; i++)
		{			
			cout << tablica[i] << " ";
		}

		cout << tablica[0];
		cout << endl;
	}	
	
	delete[] tablica;
}