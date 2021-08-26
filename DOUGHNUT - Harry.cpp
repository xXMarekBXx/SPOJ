#include <iostream>

using namespace std;


int t;

int main()
{

	int c; //liczba kotów
	int k; //udzwig Harego
	int w; //waga paczka

	cin >> t;

	for(int i =0; i<t; i++)
	{
	cin >> c >> k >> w;

	if (k >= c * w)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	}
    
}
