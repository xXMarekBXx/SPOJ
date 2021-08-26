#include <iostream>
#include <string>

using namespace std;


int main()
{
	string napis;

	getline(cin, napis);

	int dlugosc = napis.length();
	
	for (int i = 0; i < dlugosc;  i++)
	{

		if (napis[i] == ' ')
			continue;
			   
		if (napis[i] > 'Z')
			napis[i] -= 26;

		napis[i] += 3;
		
			
	}
	
	cout << napis << endl;

}