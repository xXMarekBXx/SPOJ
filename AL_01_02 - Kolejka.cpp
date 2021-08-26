#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int dane[10000];

int main()
{
	int liczbaTestow = 1;
	//cin >> liczbaTestow;

	char najwiekszyWyraz;
	
	string napis;	
	
	for (int t = 0; t < liczbaTestow; t++)
	{
		getline(cin, napis);

		cout << napis << endl << endl;

		int dlugosc = napis.length();		

		for (int i = 0; i < dlugosc; i++)
		{						

			if (napis[i + 1] > napis[i])
			{
				najwiekszyWyraz = napis[i + 1];
			}
		}

		cout << najwiekszyWyraz << endl;
	}
	cout << endl << endl << endl;


}