#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

vector <string> underweight;
vector <string> normalweight;
vector <string> overweight;

void checkBMI(string name, float massKg, float heightCm)
{
	float heightM = heightCm / 100;

	float bmi = massKg / (pow(heightM, 2));
	
	if (bmi < 18.5)
	{
		underweight.push_back(name);
		return;
	}
	if (bmi >= 18.5 && bmi < 25)
	{
		normalweight.push_back(name);
		return;
	}
	if (bmi >= 25)
	{
		overweight.push_back(name);
		return;
	}
}

void displayUnderweightVector(vector <string> &underweight)
{
	cout << "niedowaga" << endl;

	for (int i = 0; i < underweight.size(); i++)
	{
		cout << underweight[i] << endl;
	}
	cout << endl;
}

void displayNormalVector(vector <string> &normalweight)
{
	cout << "wartosc prawidlowa" << endl;

	for (int i = 0; i < normalweight.size(); i++)
	{
		cout << normalweight[i] << endl;
	}
	cout << endl;
}

void displayOverweightVector(vector <string> &overweight)
{
	cout << "nadwaga" << endl;

	for (int i = 0; i < overweight.size(); i++)
	{
		cout << overweight[i] << endl;
	}
	cout << endl;
}

int main()
{
	int numberOfTests = 1;

	cin >> numberOfTests;
	
	for (int i = 0; i < numberOfTests; i++)
	{
		string name;
		float massKg=0;
		float heightCm=0;

		//cout << "Podaj imie osoby: ";
		cin >> name;
		//cout << "Podaj mase osoby[kg]: ";
		cin >> massKg;
		//cout << "Podaj wzrost osoby[cm]: ";
		cin >> heightCm;	

		checkBMI(name, massKg, heightCm);

	}
	cout << endl;
	displayUnderweightVector(underweight);		
	displayNormalVector(normalweight);		
	displayOverweightVector(overweight);		
}