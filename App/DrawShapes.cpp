#include <iostream>
using namespace std;

int main()
{
	float row;
	float column;
	int innerSpace = 0;
	float row2 = 0;
	float column2 = 0;

	cout << "Row....: ";
	cin >> row;
	cout << endl;

	while (row < 5 || row > 15)						// Checks that the row is in the correct range.
	{
		cout << "The row number is incorrect.... Try again..... " << endl << endl;
		cout << "Row....: ";
		cin >> row;
		cout << endl;
	}

	cout << "Column....: ";
	cin >> column;
	cout << endl;

	while (column < 5 || column > 40)				// Checks that the column is in the correct range.
	{
		cout << "The column number is incorrect.... Try again....." << endl << endl;
		cout << "Column....: ";
		cin >> column;
		cout << endl;
	}

	while (column / row != 2)						// Checks that the column is twice the row.
	{
		cout << "The number of columns must be twice the number of rows.... Try again..... " << endl << endl;
		cout << "Row...: ";
		cin >> row2;
		cout << endl;

		while (row2 < 5 || row2 > 15)				// Checks that the row is in the correct range.
		{
			cout << "The row number is incorrect.... Try again..... " << endl << endl;
			cout << "Row....: ";
			cin >> row2;
			cout << endl;
		}
		cout << "Column....: ";
		cin >> column2;
		cout << endl;

		while (column2 < 5 || column2 > 40)			// Checks that the column is in the correct range.
		{
			cout << "The column number is incorrect.... Try again....." << endl << endl;
			cout << "Column....: ";
			cin >> column2;
			cout << endl;
		}
		row = row2;
		column = column2;
	}

	for (int i = 0; i < column; ++i)				// Number of top columns.
	{
		cout << "*";
	}
	cout << endl;

	for (int i = row - 2; i > 0; --i)				// Loop start to draw triangle and square.
	{
		cout << "*";

		for (int j = 0; j < i - 1; ++j)				// Outer space of the triangle.
		{
			cout << " ";
		}
		cout << "*";

		for (int k = 0; k < innerSpace + 2; ++k)	// Inner space of the triangle.
		{
			cout << " ";
		}
		cout << "*";
		innerSpace += 2;

		for (int j = 0; j < i - 1; ++j)				// Outer space of the triangle.
		{
			cout << " ";
		}
		cout << "*" << endl;
	}

	for (int i = 0; i < column; ++i)				// Number of sub-columns.
	{
		cout << "*";
	}
	cout << endl;

	int innerSpace2 = column - 4;

	for (int a = 0; a < column; ++a)				// Number of top columns.
	{
		cout << "*";
	}
	cout << endl;

	for (int a = 0; a < row - 2; ++a)				// Loop start to draw triangle and square.
	{
		cout << "*";

		for (int b = 0; b < a; ++b)					// Outer space of the triangle.
		{
			cout << " ";
		}
		cout << "*";

		for (int d = 0; d < innerSpace2; d++)		// Inner space of the triangle.
		{
			cout << " ";
		}
		cout << "*";
		innerSpace2 -= 2;

		for (int b = 0; b < a; ++b)					// Outer space of the triangle.
		{
			cout << " ";
		}
		cout << "*" << endl;
	}

	for (int a = 0; a < column; ++a)				// Number of sub-columns.
	{
		cout << "*";
	}
}