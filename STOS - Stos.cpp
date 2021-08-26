#include <iostream>
using namespace std;

int stos[11];
int rozmiarStosu;

void push()
{
	if (rozmiarStosu >= 10)
	{
		//cout << "Stos pelny!" << endl;
		cout << ":(" << endl;
	}
	else
	{
		//cout << endl << "PUSH (jaka liczbe polozyc na stosie): ";
		rozmiarStosu = rozmiarStosu + 1;
		cin >> stos[rozmiarStosu];
		cout << ":)" << endl;
	}
}

void pop()
{
	if (rozmiarStosu >= 1)
	{
		cout << stos[rozmiarStosu];
		rozmiarStosu = rozmiarStosu - 1;
		cout << endl;
	}
	else
	{
		//cout << "Stos pusty!" << endl;
		cout << ":(" << endl;		
	}
}

char znak;

int main()
{
	while(cin >> znak)
	{ 
		if (znak == '+')		
			push();		

		if (znak == '-')
			pop();		
	}
}
