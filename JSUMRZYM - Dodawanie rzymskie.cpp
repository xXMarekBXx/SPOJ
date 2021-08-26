#include <iostream>
#include <string>
#include <vector>

using namespace std;


const vector < pair < int, string >> romanToArabic
{
	{ 1000, "M" },
	{ 900, "CM" },
	{ 500, "D" },
	{ 400, "CD" },
	{ 100, "C" },
	{ 90, "XC" },
	{ 50, "L" },
	{ 40, "XL" },
	{ 10, "X" },
	{ 9, "IX" }, 
	{ 5, "V" },
	{ 4, "IV" },
	{ 1, "I" }
};

int convertRomanToArabic(string roman)
{	
	int arabic = 0;
	int i = 0;
	auto iter = romanToArabic.begin();

	while (i < roman.size()) 
	{
		if ((roman[i] == iter->second[0]) && (iter->second.size() == 1))
		{
			arabic += iter->first;
			i++;
		}	
		else if (i < roman.size() - 1 && roman.substr(i, 2) == (++iter)->second) 
		{
			arabic += iter->first;
			i += 2;
			iter++;
		}
		else if (iter != romanToArabic.end())
		{
			iter++;
		}
	}
	return arabic;
}

string convertArabicToRoman(int arabic) 
{
	string roman = "";
	auto iter = romanToArabic.begin();

	while (arabic > 0) 
	{
		if (arabic >= iter->first)
		{
			arabic -= iter->first;
			roman += iter->second;
		}
		else if (arabic >= iter->first) 
		{
			arabic -= iter->first;
			roman += iter->first;
		}
		else if (iter != romanToArabic.end())
		{
			iter++;
		}
	}
	return roman;
}

int main()
{
	string firstRomanNumber;
	string secondRomanNumber;

	while (cin >> firstRomanNumber >> secondRomanNumber)
	{
		cout << convertArabicToRoman(convertRomanToArabic(firstRomanNumber) + convertRomanToArabic(secondRomanNumber)) << endl;
	}
}

