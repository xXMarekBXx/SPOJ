#include <iostream>

using namespace std;

int ile;

int *tablica = new int[ile];

int main()
{
	int t;
	cin >> t;

	for (int i =0; i <t; i++)
	{ 		
		cin >> ile;

		int *tablica = new int[ile];
				
		for (int i = 0; i < ile; i++)
		{
			cin >> tablica[i];				
		}
					
		for (int i = 1; i % 2 || i < ile; i += 2)
		{
			if (i >= ile) i = 0;
			cout << tablica[i] <<" ";
		}
		cout << endl;
	
	}

	cout << endl << endl << endl;

	delete[] tablica;
}