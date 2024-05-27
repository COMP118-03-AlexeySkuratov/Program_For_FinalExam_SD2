/** \file Program_For_FinalExam_SD2.cpp
*	\brief	
*	\details	
*	\author
*	\version
*	\date
*	\copyright
* 
*/

#include <iostream>
#include <cassert>
#include <iomanip>

using namespace std;

void FillMatrix(const int, const int);
void ShowMatrix(const int, const int);
void SumNegative(const int, const int);

const int SIZE_ROW = 3;
const int SIZE_COL = 5;
double matrix[SIZE_ROW][SIZE_COL] = {0};


/**
 * <code>main</code> is the main function of this program.
 * <BR>
 * @return Returns 0 if success, any other value otherwise.
 */
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
			FillMatrix(SIZE_ROW, SIZE_COL);
			break;
		case 2:
			ShowMatrix(SIZE_ROW, SIZE_COL);
			break;
		case 3:
			SumNegative(SIZE_ROW, SIZE_COL);
			break;
		case 4:
			cout << "Have a nice day!" << endl;
			break;
		default:
			break;

	}
	} while(choice != 4);
}

/**
 * <code>FillMatrix</code> Fills a matrix with entered values
 * <BR>
 * @param SIZE1 Constant size of rows in matrix
 * @param SIZE2 Constant size of columns in matrix
 */
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

/**
 * <code>ShowMatrix</code> Shows a current matrix
 * <BR>
 * @param SIZE1 Constant size of rows in matrix
 * @param SIZE2 Constant size of columns in matrix
 */
void ShowMatrix(const int SIZE1, const int SIZE2)
{
	for (int i = 0; i < SIZE1; i++)
	{

		for (int j = 0; j < SIZE2; j++)
		{
			cout << setw(2) << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

/**
 * <code>SumNegative</code> Calculates a sum of all negatives numbers in matrix
 * <BR>
 * @param SIZE1 Constant size of rows in matrix
 * @param SIZE2 Constant size of columns in matrix
 */
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