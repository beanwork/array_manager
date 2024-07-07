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


int ArrayHandler::SelectElement()
{
	int col, row, flr;
	cout << "select elements" << endl;
	cin >> flr;
	cin >> row;
	cin >> col;

	return flr, row, col;
}


void ArrayHandler::Make1dimArray()
{
	ArrayHandler::array_1= new int[ArrayHandler::column_num];
	ArrayHandler::InputRandNumber(ArrayHandler::array_1, ArrayHandler::column_num);
}


void ArrayHandler::Make2dimArray()
{
	ArrayHandler::array_2 = new int*[ArrayHandler::row_num];

	for (int i = 0; i < ArrayHandler::row_num; i++)
	{
		ArrayHandler::array_1 = new int[ArrayHandler::column_num];
		ArrayHandler::array_2[i] = ArrayHandler::array_1;
		
		ArrayHandler::InputRandNumber(ArrayHandler::array_2[i], ArrayHandler::column_num);
	}
}


void ArrayHandler::Make3dimArray()
{
	ArrayHandler::array_3 = new int**[ArrayHandler::floor_num];
	
	for (int i = 0; i < ArrayHandler::floor_num; i++)
	{
		ArrayHandler::array_2 = new int*[ArrayHandler::row_num];
		ArrayHandler::array_3[i] = ArrayHandler::array_2;
		
		for (int j = 0; j < ArrayHandler::row_num; j++)
		{
			ArrayHandler::array_1 = new int[ArrayHandler::column_num];
			ArrayHandler::array_2[j] = ArrayHandler::array_1;
			ArrayHandler::InputRandNumber(ArrayHandler::array_2[j], ArrayHandler::column_num);
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
	
	if (ArrayHandler::array_3 == nullptr && ArrayHandler::array_2 == nullptr && ArrayHandler::array_1 != nullptr)
	{
		cout << "[ ";
		for (int i = 0; i < ArrayHandler::column_num; i++)
		{
			cout << array_1[i] << " ";
		}
		cout << "]" << endl;
	}

	else if (ArrayHandler::array_3 == nullptr && ArrayHandler::array_2 != nullptr && ArrayHandler::array_1 != nullptr)
	{
		
		for (int i = 0; i < ArrayHandler::row_num; i++)
		{	
			cout << "[ ";
			for (int j = 0; j < ArrayHandler::column_num; j++)
			{
				cout << array_2[i][j] << " ";
			}
			cout << "]" << endl;
		}
	}

	else if (ArrayHandler::array_3 != nullptr && ArrayHandler::array_2 != nullptr && ArrayHandler::array_1 != nullptr)
	{
		for (int i = 0; i < ArrayHandler::floor_num; i++)
		{
			for (int j = 0; j < ArrayHandler::row_num; j++)
			{
				cout << "[ ";
				for (int k = 0; k < ArrayHandler::column_num; k++)
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
	if (ArrayHandler::array_3 == nullptr &&  ArrayHandler::array_2 == nullptr && ArrayHandler::array_1 == nullptr)
	{
		cout << "만들어진 배열이 없습니다" << endl;
		
	}

	else if (ArrayHandler::array_3 == nullptr && ArrayHandler::array_2 == nullptr && ArrayHandler::array_1 != nullptr)
	{
		ArrayHandler::array_1[col] = val;
	}

	else if (ArrayHandler::array_3 == nullptr && ArrayHandler::array_2 != nullptr && ArrayHandler::array_1 != nullptr)
	{
		ArrayHandler::array_2[row][col] = val;
	}

	else 
	{
		ArrayHandler::array_3[flr][row][col] = val;
	}
}


