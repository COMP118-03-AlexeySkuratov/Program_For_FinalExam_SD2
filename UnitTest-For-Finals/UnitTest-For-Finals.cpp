#include "pch.h"
#include "CppUnitTest.h"
#include "../Program_For_FinalExam_SD2/Program_For_FinalExam_SD2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestForFinals
{
	TEST_CLASS(UnitTestForFinals)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//Arrange
			double matrix[SIZE_ROW][SIZE_COL] = 
			{ 
				{1, 1, 1, 1, -3},
				{0, 1, -1, 1, 1},
				{1, -1, 1, -2, 1}
			};
			double sum = 0.0;
			//Act
			ShowMatrix(SIZE_ROW, SIZE_COL);
			double show = SumNegative(SIZE_ROW, SIZE_COL, sum);
			//Assert
			Assert::AreEqual(-7.0, sum);

		}
	};
}
