/**
*
*
*
*
*
*/

#include <iostream>

using namespace std;

void FillMatrix(const int, const int);
void ShowMatrix(const int, const int);
void SumNegative(const int, const int);

const int SIZE_ROW = 5;
const int SIZE_COL = 3;
double matrix[SIZE_COL][SIZE_ROW] = {0};

int main()
{


	//Menu implementation
	int choice = 0;

	cout << "---- M E N U ----" << endl;
	cout << "1. Enter Data in matrix (range -3.5 to 1.5)" << endl;
	cout << "2. Show Data in matrix" << endl;
	cout << "3. Sum of all negatives numbers" << endl;
	cout << "4. Exit" << endl;
	cout << "Please, enter your choice: ___" << endl;

	cin >> choice;
	switch (choice)
	{
	case 1:
		FillMatrix(SIZE_COL, SIZE_ROW);
		break;
	case 2:
		ShowMatrix(SIZE_COL, SIZE_ROW);
		break;
	case 3:
		SumNegative(SIZE_COL, SIZE_ROW);
		break;
	case 4:
		cout << "Have a nice day!" << endl;
		break;
	default:
		break;
	}
}


void FillMatrix(const int SIZE1, const int SIZE2)
{
	for (int i = 0; i < SIZE1; i++)
	{
		for (int j = 0; j < SIZE2; j++)
		{
			cout << "Enter a value for [" << i << "] [" << j << "] item" << endl;
			cin >> matrix[i][j];
		}
	}

}
//void ShowMatrix(double[], const int, const int)
//{
//
//}
//void SumNegative(double[], const int, const int)
//{
//
//}