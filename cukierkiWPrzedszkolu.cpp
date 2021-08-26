#include <iostream>

using namespace std;


int NWD(int a, int b)
{
	int pom;

	while (b != 0)
	{
		pom = b;
		b = a % b;
		a = pom;
	}
	return a;
}

int ile;

int main()
{

	
	int a;
	int b;

	cin >> ile;

	for(int i = 0; i < ile; i++)
	{ 

	cin >> a >> b;
	
	cout << a / NWD(a, b) * b << endl;

	}
}
