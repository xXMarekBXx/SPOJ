#include <iostream>
#include <string>
#include <map>

using namespace std;

string hexToBin(string hexDigit)
{
	string binDigit = "";

	map<char, string>hexToBin;

	hexToBin['0'] = "0000";
	hexToBin['1'] = "0001";
	hexToBin['2'] = "0010";
	hexToBin['3'] = "0011";
	hexToBin['4'] = "0100";
	hexToBin['5'] = "0101";
	hexToBin['6'] = "0110";
	hexToBin['7'] = "0111";
	hexToBin['8'] = "1000";
	hexToBin['9'] = "1001";
	hexToBin['A'] = "1010";
	hexToBin['B'] = "1011";
	hexToBin['C'] = "1100";
	hexToBin['D'] = "1101";
	hexToBin['E'] = "1110";
	hexToBin['F'] = "1111";
	
	for (int i = 0; i < hexDigit.length(); i++)
	{
		binDigit += hexToBin[hexDigit[i]];
	}

	return binDigit;
}

int main()
{
	string line ="";

	while (getline(cin, line))
	{	
		cout << hexToBin(line) << endl;
	}
}