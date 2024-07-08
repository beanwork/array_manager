#include "ArrayHandler.h"

#include <random>
#include <iostream>

using namespace std;


void ArrayHandler::SelectColnum(int num)
{
	if (num < 1) { ArrayHandler::column_num = 0; }
	int col;

	cout << endl;
	cout << "select column number" << endl;
	cin >> col;
	
	ArrayHandler::column_num = col;

}


void ArrayHandler::SelectRownum(int num)
{
	if (num < 2) { ArrayHandler::row_num =0; }

	int row_num;

	cout << endl;
	cout << "select row number" << endl;
	cin >> row_num;

	ArrayHandler::row_num = row_num;
}


void ArrayHandler::SelectFlrnum(int num)
{
	if (num < 3) { ArrayHandler::floor_num =0; }

	int floor_num;

	cout << endl;
	cout << "select floor number" << endl;
	cin >> floor_num;

	ArrayHandler::floor_num = floor_num;
}


void ArrayHandler::Make1dimArray()
{
	array_1= new int[column_num];
	InputRandNumber(array_1, column_num);
}


void ArrayHandler::Make2dimArray()
{
	array_2 = new int*[row_num];

	for (int i = 0; i < row_num; i++)
	{
		array_1 = new int[column_num];
		array_2[i] = array_1;
		
		InputRandNumber(array_2[i], column_num);
	}
}


void ArrayHandler::Make3dimArray()
{
	array_3 = new int**[floor_num];
	
	for (int i = 0; i < floor_num; i++)
	{
		array_2 = new int*[row_num];
		array_3[i] = array_2;
		
		for (int j = 0; j < ArrayHandler::row_num; j++)
		{
			array_1 = new int[column_num];
			array_2[j] = array_1;
			InputRandNumber(array_2[j], column_num);
		}
		cout << endl;
	}
}


void ArrayHandler::InputRandNumber(int* array, int num)
{
	random_device rd;

	mt19937 gen(rd());

	uniform_int_distribution<int> dis(0, 99);

	cout << "[ ";
	for (int i = 0; i < num; i++)
	{
		array[i] = dis(gen);
		cout << array[i] << " ";
	}
	cout << "]" << endl;
}


void ArrayHandler::showElement()
{	
	if (array_3 == nullptr &&  array_2 == nullptr && array_1 == nullptr)
	{
		cout << "만들어진 배열이 없습니다" << endl;
	}
	
	
	else if (array_3 == nullptr && array_2 == nullptr && array_1 != nullptr)
	{
		cout << "[ ";
		for (int i = 0; i < column_num; i++)
		{
			cout << array_1[i] << " ";
		}
		cout << "]" << endl;
	}

	else if (array_3 == nullptr && array_2 != nullptr && array_1 != nullptr)
	{
		
		for (int i = 0; i < row_num; i++)
		{	
			cout << "[ ";
			for (int j = 0; j < column_num; j++)
			{
				cout << array_2[i][j] << " ";
			}
			cout << "]" << endl;
		}
	}

	else if (array_3 != nullptr && array_2 != nullptr && array_1 != nullptr)
	{
		for (int i = 0; i < floor_num; i++)
		{
			for (int j = 0; j < row_num; j++)
			{
				cout << "[ ";
				for (int k = 0; k < column_num; k++)
				{
					cout << array_3[i][j][k] << " ";
				}
				cout << "]" << endl;
			}
			cout << endl;
		}
	}
}


void ArrayHandler::changeElement(int val, int col=0, int row=0, int flr=0)
{
	if (array_3 == nullptr &&  array_2 == nullptr && array_1 == nullptr)
	{
		cout << "만들어진 배열이 없습니다" << endl;
	}

	else if (array_3 == nullptr &&  array_2 == nullptr && array_1 != nullptr)
	{
		array_1[col] = val;
	}

	else if (array_3 == nullptr &&  array_2 != nullptr && array_1 != nullptr)
	{
		array_2[row][col] = val;
	}

	else if (array_3 != nullptr &&  array_2 != nullptr && array_1 != nullptr)
	{
		array_3[flr][row][col] = val;
	}
}


void ArrayHandler::deleteElement(bool row_or_col)
{
	if (array_3 == nullptr &&  array_2 == nullptr && array_1 == nullptr)
	{
		cout << "만들어진 배열이 없습니다" << endl;
	}

	else if (array_3 == nullptr &&  array_2 == nullptr && array_1 != nullptr)
	{
		if (row_or_col)
		{
			delete[] array_1;
			//array_1 = nullptr;
		}
		else
		{
			int col;
			cout << "몇 번째 열을 지울까요 : ";
			cin >> col;
			delete array_1;
		}
	}

	else if (array_3 == nullptr &&  array_2 != nullptr && array_1 != nullptr)
	{
		if (row_or_col)
		{
			int row;
			cout << "몇 번째 행을 지울까요 : ";
			cin >> row;
			delete[] array_2[row-1];
		}
	}

	else if (array_3 != nullptr &&  array_2 != nullptr && array_1 != nullptr)
	{
		if (row_or_col)
		{
			int flr, row;
			cout << "몇 번째 행렬을 지울까요 : ";
			cin >> flr;

			cout << "몇 번째 행을 지울까요 : ";
			cin >> row;
			delete[] array_3[flr-1][row-1];
		}
	}
}


