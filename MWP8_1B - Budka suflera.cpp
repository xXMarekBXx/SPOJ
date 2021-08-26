#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream> 

using namespace std;

void loadTextSplitIntoSeparateWordsAndLoadIntoVector(vector <string> &someVector)
{
	stringstream ss;
	string line;	
	getline(cin, line);
	ss.str(line);
	string word = "";
	while (ss >> word)
	someVector.push_back(word);	
}

int sizeDifferenceBetweenTwoVectors(vector <string> &first, vector <string> &second)
{
	int sizeDifference  = first.size() - second.size();

	return sizeDifference;
} 

void loadDifferencesBetweenTwoVectorsIntoAnotherVector(vector <string> &first, vector <string> &second, vector <string> &newVector)
{
	for (int i = 0; i < first.size(); i++)
	{
		if (second.size() > 0)
		{
			if (second.front() == first[i])
			{
				second.erase(second.begin());
			}
			else
			{
				newVector.push_back(first[i]);
			}
		}
		else {
			newVector.push_back(first[i]);
		}
	}
}

void lexicographicSort(vector <string> &vectorToLexicographicSort)
{
	sort(vectorToLexicographicSort.begin(), vectorToLexicographicSort.end());
}

void displaySortedVector(vector<string> &vectorToDisplay)
{
	for (int i = 0; i < vectorToDisplay.size(); i++)
	{
		cout << vectorToDisplay[i] << endl;
	}
}

int main()
{		
	vector <string> originalText;
	loadTextSplitIntoSeparateWordsAndLoadIntoVector(originalText);
	
	vector <string> missingText;
	loadTextSplitIntoSeparateWordsAndLoadIntoVector(missingText);	

	cout << sizeDifferenceBetweenTwoVectors(originalText, missingText) << endl;
		
	vector <string> differenceBetweenVectors;
	loadDifferencesBetweenTwoVectorsIntoAnotherVector(originalText, missingText, differenceBetweenVectors);
	
	lexicographicSort(differenceBetweenVectors);

	displaySortedVector(differenceBetweenVectors);
}
