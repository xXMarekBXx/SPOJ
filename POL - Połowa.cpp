#include <string>
#include <iostream>
using namespace std;

string slowo;
int ile;

int main()
{
	cin >> ile;

	for(int i =0; i<ile; i++)
	{ 
	cin >> slowo;
	int liczbaLiter = slowo.length();
	cout << slowo.erase(liczbaLiter / 2, slowo.length()) << endl;
	}
}
