#include <iostream>

using namespace std;

void reverse_array(int *tab1, int rozmiar)
{

	int temp;
	for (int i = 0; i < rozmiar / 2; i++)
	{
		temp = tab1[rozmiar - i - 1];
		tab1[rozmiar - i - 1] = tab1[i];
		tab1[i] = temp;
	}
}


int main()
{
	int ilTestow;

	int tablica[100];
	
	int iloscElementow;

	cin >> ilTestow;

	for(int i = 0; i < ilTestow; i++)
	{ 

		cin >> iloscElementow;

		for (int i = 0; i < iloscElementow; i++)
		{
			cin >> tablica[i];
					
		}

		reverse_array(tablica, iloscElementow);
	
		for (int i = 0; i < iloscElementow; i++)
		{		
			cout << tablica[i];
		}

		cout << endl;

	}
		

}