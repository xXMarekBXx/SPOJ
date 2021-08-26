#include <iostream>
using namespace std;

int main()
{
	int iloscTestow=1;
	int sudoku[9][9];
	
	cin >> iloscTestow;

	for (int i = 0; i < iloscTestow; i++)
	{
		cin >> sudoku[0][0] >> sudoku[0][1] >> sudoku[0][2] >> sudoku[0][3] >> sudoku[0][4] >> sudoku[0][5] >> sudoku[0][6] >> sudoku[0][7] >> sudoku[0][8];
		cin >> sudoku[1][0] >> sudoku[1][1] >> sudoku[1][2] >> sudoku[1][3] >> sudoku[1][4] >> sudoku[1][5] >> sudoku[1][6] >> sudoku[1][7] >> sudoku[1][8];
		cin >> sudoku[2][0] >> sudoku[2][1] >> sudoku[2][2] >> sudoku[2][3] >> sudoku[2][4] >> sudoku[2][5] >> sudoku[2][6] >> sudoku[2][7] >> sudoku[2][8];
		cin >> sudoku[3][0] >> sudoku[3][1] >> sudoku[3][2] >> sudoku[3][3] >> sudoku[3][4] >> sudoku[3][5] >> sudoku[3][6] >> sudoku[3][7] >> sudoku[3][8];
		cin >> sudoku[4][0] >> sudoku[4][1] >> sudoku[4][2] >> sudoku[4][3] >> sudoku[4][4] >> sudoku[4][5] >> sudoku[4][6] >> sudoku[4][7] >> sudoku[4][8];
		cin >> sudoku[5][0] >> sudoku[5][1] >> sudoku[5][2] >> sudoku[5][3] >> sudoku[5][4] >> sudoku[5][5] >> sudoku[5][6] >> sudoku[5][7] >> sudoku[5][8];
		cin >> sudoku[6][0] >> sudoku[6][1] >> sudoku[6][2] >> sudoku[6][3] >> sudoku[6][4] >> sudoku[6][5] >> sudoku[6][6] >> sudoku[6][7] >> sudoku[6][8];
		cin >> sudoku[7][0] >> sudoku[7][1] >> sudoku[7][2] >> sudoku[7][3] >> sudoku[7][4] >> sudoku[7][5] >> sudoku[7][6] >> sudoku[7][7] >> sudoku[7][8];
		cin >> sudoku[8][0] >> sudoku[8][1] >> sudoku[8][2] >> sudoku[8][3] >> sudoku[8][4] >> sudoku[8][5] >> sudoku[8][6] >> sudoku[8][7] >> sudoku[8][8];
		//cout << endl;
		/*
		cout << sudoku[0][0] << sudoku[0][1] << sudoku[0][2] << sudoku[0][3] << sudoku[0][4] << sudoku[0][5] << sudoku[0][6] << sudoku[0][7] << sudoku[0][8] << endl;
		cout << sudoku[1][0] << sudoku[1][1] << sudoku[1][2] << sudoku[1][3] << sudoku[1][4] << sudoku[1][5] << sudoku[1][6] << sudoku[1][7] << sudoku[1][8] << endl;
		cout << sudoku[2][0] << sudoku[2][1] << sudoku[2][2] << sudoku[2][3] << sudoku[2][4] << sudoku[2][5] << sudoku[2][6] << sudoku[2][7] << sudoku[2][8] << endl;
		cout << sudoku[3][0] << sudoku[3][1] << sudoku[3][2] << sudoku[3][3] << sudoku[3][4] << sudoku[3][5] << sudoku[3][6] << sudoku[3][7] << sudoku[3][8] << endl;
		cout << sudoku[4][0] << sudoku[4][1] << sudoku[4][2] << sudoku[4][3] << sudoku[4][4] << sudoku[4][5] << sudoku[4][6] << sudoku[4][7] << sudoku[4][8] << endl;
		cout << sudoku[5][0] << sudoku[5][1] << sudoku[5][2] << sudoku[5][3] << sudoku[5][4] << sudoku[5][5] << sudoku[5][6] << sudoku[5][7] << sudoku[5][8] << endl;
		cout << sudoku[6][0] << sudoku[6][1] << sudoku[6][2] << sudoku[6][3] << sudoku[6][4] << sudoku[6][5] << sudoku[6][6] << sudoku[6][7] << sudoku[6][8] << endl;
		cout << sudoku[7][0] << sudoku[7][1] << sudoku[7][2] << sudoku[7][3] << sudoku[7][4] << sudoku[7][5] << sudoku[7][6] << sudoku[7][7] << sudoku[7][8] << endl;
		cout << sudoku[8][0] << sudoku[8][1] << sudoku[8][2] << sudoku[8][3] << sudoku[8][4] << sudoku[8][5] << sudoku[8][6] << sudoku[8][7] << sudoku[8][8] << endl;

		cout << endl;
		*/
		if (((sudoku[0][0] + sudoku[0][1] + sudoku[0][2] + sudoku[0][3] + sudoku[0][4] + sudoku[0][5] + sudoku[0][6] + sudoku[0][7] + sudoku[0][8]) == 45) &&
			((sudoku[1][0] + sudoku[1][1] + sudoku[1][2] + sudoku[1][3] + sudoku[1][4] + sudoku[1][5] + sudoku[1][6] + sudoku[1][7] + sudoku[1][8]) == 45) &&
			((sudoku[2][0] + sudoku[2][1] + sudoku[2][2] + sudoku[2][3] + sudoku[2][4] + sudoku[2][5] + sudoku[2][6] + sudoku[2][7] + sudoku[2][8]) == 45) &&
			((sudoku[3][0] + sudoku[3][1] + sudoku[3][2] + sudoku[3][3] + sudoku[3][4] + sudoku[3][5] + sudoku[3][6] + sudoku[3][7] + sudoku[3][8]) == 45) &&
			((sudoku[4][0] + sudoku[4][1] + sudoku[4][2] + sudoku[4][3] + sudoku[4][4] + sudoku[4][5] + sudoku[4][6] + sudoku[4][7] + sudoku[4][8]) == 45) &&
			((sudoku[5][0] + sudoku[5][1] + sudoku[5][2] + sudoku[5][3] + sudoku[5][4] + sudoku[5][5] + sudoku[5][6] + sudoku[5][7] + sudoku[5][8]) == 45) &&
			((sudoku[6][0] + sudoku[6][1] + sudoku[6][2] + sudoku[6][3] + sudoku[6][4] + sudoku[6][5] + sudoku[6][6] + sudoku[6][7] + sudoku[6][8]) == 45) &&
			((sudoku[7][0] + sudoku[7][1] + sudoku[7][2] + sudoku[7][3] + sudoku[7][4] + sudoku[7][5] + sudoku[7][6] + sudoku[7][7] + sudoku[7][8]) == 45) &&
			((sudoku[8][0] + sudoku[8][1] + sudoku[8][2] + sudoku[8][3] + sudoku[8][4] + sudoku[8][5] + sudoku[8][6] + sudoku[8][7] + sudoku[8][8]) == 45) &&
			//pion
			((sudoku[0][0] + sudoku[1][0] + sudoku[2][0] + sudoku[3][0] + sudoku[4][0] + sudoku[5][0] + sudoku[6][0] + sudoku[7][0] + sudoku[8][0]) == 45) &&
			((sudoku[0][1] + sudoku[1][1] + sudoku[2][1] + sudoku[3][1] + sudoku[4][1] + sudoku[5][1] + sudoku[6][1] + sudoku[7][1] + sudoku[8][1]) == 45) &&
			((sudoku[0][2] + sudoku[1][2] + sudoku[2][2] + sudoku[3][2] + sudoku[4][2] + sudoku[5][2] + sudoku[6][2] + sudoku[7][2] + sudoku[8][2]) == 45) &&
			((sudoku[0][3] + sudoku[1][3] + sudoku[2][3] + sudoku[3][3] + sudoku[4][3] + sudoku[5][3] + sudoku[6][3] + sudoku[7][3] + sudoku[8][3]) == 45) &&
			((sudoku[0][4] + sudoku[1][4] + sudoku[2][4] + sudoku[3][4] + sudoku[4][4] + sudoku[5][4] + sudoku[6][4] + sudoku[7][4] + sudoku[8][4]) == 45) &&
			((sudoku[0][5] + sudoku[1][5] + sudoku[2][5] + sudoku[3][5] + sudoku[4][5] + sudoku[5][5] + sudoku[6][5] + sudoku[7][5] + sudoku[8][5]) == 45) &&
			((sudoku[0][6] + sudoku[1][6] + sudoku[2][6] + sudoku[3][6] + sudoku[4][6] + sudoku[5][6] + sudoku[6][6] + sudoku[7][6] + sudoku[8][6]) == 45) &&
			((sudoku[0][7] + sudoku[1][7] + sudoku[2][7] + sudoku[3][7] + sudoku[4][7] + sudoku[5][7] + sudoku[6][7] + sudoku[7][7] + sudoku[8][7]) == 45) &&
			((sudoku[0][8] + sudoku[1][8] + sudoku[2][8] + sudoku[3][8] + sudoku[4][8] + sudoku[5][8] + sudoku[6][8] + sudoku[7][8] + sudoku[8][8]) == 45) &&
			//kwadraty
			//1
			((sudoku[0][0] + sudoku[0][1] + sudoku[0][2] + sudoku[1][0] + sudoku[1][1] + sudoku[1][2] + sudoku[2][0] + sudoku[2][1] + sudoku[2][2]) == 45) &&
			//2
			((sudoku[0][3] + sudoku[0][4] + sudoku[0][5] + sudoku[1][3] + sudoku[1][4] + sudoku[1][5] + sudoku[2][3] + sudoku[2][4] + sudoku[2][5]) == 45) &&
			//3
			((sudoku[0][6] + sudoku[0][7] + sudoku[0][8] + sudoku[1][6] + sudoku[1][7] + sudoku[1][8] + sudoku[2][6] + sudoku[2][7] + sudoku[2][8]) == 45) &&
			//4
			((sudoku[3][0] + sudoku[3][1] + sudoku[3][2] + sudoku[4][0] + sudoku[4][1] + sudoku[4][2] + sudoku[5][0] + sudoku[5][1] + sudoku[5][2]) == 45) &&
			//5
			((sudoku[3][3] + sudoku[3][4] + sudoku[3][5] + sudoku[4][3] + sudoku[4][4] + sudoku[4][5] + sudoku[5][3] + sudoku[5][4] + sudoku[5][5]) == 45) &&
			//6
			((sudoku[3][6] + sudoku[3][7] + sudoku[3][8] + sudoku[4][6] + sudoku[4][7] + sudoku[4][8] + sudoku[5][6] + sudoku[5][7] + sudoku[5][8]) == 45) &&
			//7
			((sudoku[6][0] + sudoku[6][1] + sudoku[6][2] + sudoku[7][0] + sudoku[7][1] + sudoku[7][2] + sudoku[8][0] + sudoku[8][1] + sudoku[8][2]) == 45) &&
			//8
			((sudoku[6][3] + sudoku[6][4] + sudoku[6][5] + sudoku[7][3] + sudoku[7][4] + sudoku[7][5] + sudoku[8][3] + sudoku[8][4] + sudoku[8][5]) == 45) &&
			//9
			((sudoku[6][6] + sudoku[6][7] + sudoku[6][8] + sudoku[7][6] + sudoku[7][7] + sudoku[7][8] + sudoku[8][6] + sudoku[8][7] + sudoku[8][8]) == 45))
			cout << "TAK" << endl;
		else 
			cout << "NIE" << endl;		
	}
}