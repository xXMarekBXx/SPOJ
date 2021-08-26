#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

string changeWordToUpper(string word)
{
	string upperWord = word;
	transform(upperWord.begin(), upperWord.end(), upperWord.begin(), ::toupper);
	return upperWord;
}

string changeTextToMorse(string text)
{
	string upperWord = changeWordToUpper(text);
	string morseCode = "";

	map<char, string> morse;

	morse['A'] = ".-/";
	morse['B'] = "-.../";
	morse['C'] = "-.-./";
	morse['D'] = "-../";
	morse['E'] = "./";
	morse['F'] = ".-../";
	morse['G'] = "--./";
	morse['H'] = "..../";
	morse['I'] = "../";
	morse['J'] = ".---/";
	morse['K'] = "-.-/";
	morse['L'] = "..-./";
	morse['M'] = "--/";
	morse['N'] = "-./";
	morse['O'] = "---/";
	morse['P'] = ".--./";
	morse['Q'] = "--.-/";
	morse['R'] = ".-./";
	morse['S'] = ".../";
	morse['T'] = "-/";
	morse['U'] = "..-/";
	morse['V'] = "...-/";
	morse['W'] = ".--/";
	morse['X'] = "-..-/";
	morse['Y'] = "-.--/";
	morse['Z'] = "--../";
	morse[' '] = "/";

	int	lineLength = text.length();

	for (int i = 0; i < lineLength; i++)
	{
		morseCode += morse[upperWord[i]];
	}

	return morseCode;
}

int main()
{
	string line ="";

	while (getline(cin, line))
	{
		cout << changeTextToMorse(line) << endl;
	}
}