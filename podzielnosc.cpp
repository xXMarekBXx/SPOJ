#include <iostream>

using namespace std;



int t; // liczba testów
int n; // liczba do zbadania
int x; // podzielne
int y; // niepodzielne

int main()
{	
	cin >> t;
	for(int j=0; j<t; j++)
	{ 

		cin >> n >> x >> y;
		for (int i = 0; i < n; i++)
		{
			if ((i%x == 0) && (i%y != 0))
			{
				cout << i << " ";
			}
		}

		cout << endl;
	}


}
