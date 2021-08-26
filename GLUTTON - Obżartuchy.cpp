#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	int N; // - liczba obżartuchów
	int M; // - liczba ciastek w pudełku
	double czasJedzeniaJednegoCiastka;
	double dobra = 86400; // 24*60*60=86400 (sekund)
	double ileCiastekWCiaguDoby=0;
	double sumaCiastek=0;
	double liczbaPudelek;
	int t; // liczba testów

	cin >> t;

	for (int i = 0; i < t; i++)
	{	

	cin >> N >> M;

		for (int i = 0; i < N; i++)
		{
			cin >> czasJedzeniaJednegoCiastka;

			ileCiastekWCiaguDoby = dobra / czasJedzeniaJednegoCiastka;

			(int)(floor)(ileCiastekWCiaguDoby);
				
			//cout << (int)(floor)(ileCiastekWCiaguDoby) << endl;

			sumaCiastek += (int)(floor)(ileCiastekWCiaguDoby);

		}

		//cout <<"Suma ciastek: "<<sumaCiastek << endl;

		//cout << "Dzielimy na: " << M << endl;

		liczbaPudelek = sumaCiastek / M;

		//cout << liczbaPudelek << endl;

		(int)ceil(liczbaPudelek);

		cout << (int)ceil(liczbaPudelek) << endl;
	

		sumaCiastek = 0;
	}
	   	  
	cout << endl << endl << endl;
	
}