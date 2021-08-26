#include <iostream>
#include <string>
#include <map>

using namespace std;

map <int, string> numberToChangeToWord =
{
	{ 0, "" },
	{ 1, "jeden " },
	{ 2, "dwa " },
	{ 3, "trzy " },
	{ 4, "cztery " },
	{ 5, "piec " },
	{ 6, "szesc " },
	{ 7, "siedem " },
	{ 8, "osiem " },
	{ 9, "dziewiec " },
	{ 10, "dziesiec " },
	{ 11, "jedenascie " },
	{ 12, "dwanascie " },
	{ 13, "trzynascie " },
	{ 14, "czternascie " },
	{ 15, "pietnascie " },
	{ 16, "szesnascie " },
	{ 17, "siedemnascie " },
	{ 18, "osiemnascie " },
	{ 19, "dziewietnascie " },
	{ 20, "dwadziescia " }, 
	{ 30, "trzydziesci " }, 
	{ 40, "czterdziesci " }, 
	{ 50, "piecdziesiat " },
	{ 60, "szescdziesiat " },
	{ 70, "siedemdziesiat " }, 
	{ 80, "osiemdziesiat " }, 
	{ 90, "dziewiecdziesiat " },
	{ 100, "sto " },
	{ 200, "dwiescie " }, 
	{ 300, "trzysta " }, 
	{ 400, "czterysta " },
	{ 500, "piecset " },
	{ 600, "szescset " }, 
	{ 700, "siedemset " },
	{ 800, "osiemset " },
	{ 900, "dziewiecset " }
};

string changeNumerToWord(unsigned long long int &numberToChange)
{
	string orderOfMagnitude[5] = { "", "tys. ", "mln. ", "mld. ", "bln. " };
	
	string	numberToChangeAsWord = "";
	int range = 0;
	int tmp = 0;
	int	lastDigit;

	while (numberToChange > 0)
	{
		lastDigit = numberToChange % 10;
		numberToChange /= 10;
		if ((tmp == 0) && (numberToChange % 100 != 0 || lastDigit != 0))
			numberToChangeAsWord.insert(0, orderOfMagnitude[range]);

		if ((tmp == 0) && (numberToChange % 10 != 1))
			numberToChangeAsWord.insert(0, numberToChangeToWord.find(lastDigit)->second);

		if ((tmp == 0) && (numberToChange % 10 == 1))
		{
			numberToChangeAsWord.insert(0, numberToChangeToWord.find(lastDigit + 10)->second);
			numberToChange /= 10;
			tmp += 2;
			continue;
		}
		if (tmp == 1)
			numberToChangeAsWord.insert(0, numberToChangeToWord.find(lastDigit * 10)->second);

		if (tmp == 2)
		{
			numberToChangeAsWord.insert(0, numberToChangeToWord.find(lastDigit * 100)->second);
			tmp = -1;
			if (range < 5)
				range++;
		}
		tmp++;
	}
	return numberToChangeAsWord;
}

int main()
{
	int	numberToChangeOfTests = 1;	

	cin >> numberToChangeOfTests;
	
	for (int i = 0; i < numberToChangeOfTests; i++)
	{
		unsigned long long int number;	
		cin >> number;			
		cout << changeNumerToWord(number) << endl;
	}	
}
