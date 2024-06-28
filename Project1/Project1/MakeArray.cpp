#include "MakeArray.h"
#include <iostream>

using namespace std;

void MakeArray::Make1dimArray()
{
	int *array_1 = new int[MakeArray::column_num];
	//InputRandNumber(array_1, MakeArray::column_num);

	delete[] array_1;
}


void MakeArray::Make2dimArray()
{
	int *array_1 = new int[MakeArray::column_num];
	int **array_2 = new int*[MakeArray::row_num];

	for (int i = 0; i < row_num; i++)
	{
		array_2[i] = array_1;
		//InputRandNumber(array_2[i], MakeArray::column_num);
	}
	delete[] array_2;
	delete[] array_1;
}


void MakeArray::Make3dimArray()
{
	int *array_1 = new int[MakeArray::column_num];
	int **array_2 = new int*[row_num];
	int ***array_3 = new int**[floor_num];

	for (int i = 0; i < floor_num; i++)
	{
		array_3[i] = array_2;
		for (int j = 0; j < row_num; j++)
		{
			array_2[i] = array_1;
			//InputRandNumber(array_2[i], MakeArray::column_num);
		}
		cout << endl;
	}
}

void MakeArray::SelectColnum()
{
	int column_num;

	cout << endl;
	cout << "select column number" << endl;
	cin >> column_num;

	MakeArray::column_num = column_num;
}


void MakeArray::SelectRownum()
{
	int row_num;

	cout << endl;
	cout << "select row number" << endl;
	cin >> row_num;

	MakeArray::row_num = row_num;
}


void MakeArray::SelectFlrnum()
{
	int floor_num;

	cout << endl;
	cout << "select floor number" << endl;
	cin >> floor_num;

	MakeArray::floor_num = floor_num;
}