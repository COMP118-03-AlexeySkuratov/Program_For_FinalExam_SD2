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
	int choice = 0;
	//Menu implementation
	do 
	{

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
	} while(choice != 4);
}


void FillMatrix(const int SIZE1,const int SIZE2)
{
	bool isInputCorrect;
	for (int i = 0; i < SIZE1; i++)

	{
		for (int j = 0; j < SIZE2; j++)
		{
			isInputCorrect = false;
			while (!isInputCorrect)
			{
				cout << "Enter a value for [" << i << "] [" << j << "] item" << endl;
				cin >> matrix[i][j];
				if (matrix[i][j] > -3.5 && matrix[i][j] < 1.5)
					isInputCorrect = true;
			}

		}
	}

}
void ShowMatrix(const int SIZE1, const int SIZE2)
{
	for (int i = 0; i < SIZE1; i++)
	{

		for (int j = 0; j < SIZE2; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
void SumNegative(const int SIZE1, const int SIZE2)
{
	double sum = 0.0;
	for (int i = 0; i < SIZE1; i++)
	{

		for (int j = 0; j < SIZE2; j++)
		{
			if (matrix[i][j] < 0)
				sum += matrix[i][j];
		}
	}
	cout << "Sum of negatives is " << sum << endl;
}