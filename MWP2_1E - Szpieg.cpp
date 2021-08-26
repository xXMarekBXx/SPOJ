#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void lexicographicSort(vector<string> &notSortedVector)
{
	sort(notSortedVector.begin(), notSortedVector.end());
}

void displaySortedVector(vector<string> &sortedVector)
{
	for (int i = 0; i < sortedVector.size(); i++)
	{
		cout << sortedVector[i] << endl;
	}
}

int main()
{
	string line = "";
	vector<string>	mixedWords;

	do
	{
		getline(cin, line);		
		mixedWords.push_back(line);
		
	} while (!line.empty());
	
	lexicographicSort(mixedWords);
	displaySortedVector(mixedWords);
}