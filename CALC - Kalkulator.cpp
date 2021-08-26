#include <iostream>

using namespace std;


int liczbaTestow;
char wybor;
int a;
int b;


int main()
{


	cin >> liczbaTestow;
	

	for (int i = 0; i < liczbaTestow; i++)
	{
		cin >> wybor >> a >> b;

		switch(wybor)
		{ 
			case '+':				
				cout << a + b << endl;
				break;		
			case '-':
				cout << a - b << endl;
				break;
			case '*':
				cout << a * b << endl;
				break;
			case '/':
				cout << a / b << endl;
				break;
			case '%':
				cout << a % b << endl;
				break;
		}
	}



	cout << endl << endl << endl;


}