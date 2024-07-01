#include "ArrayHandler.h"

#include <random>
#include <iostream>

using namespace std;


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
	
	for (int i = 0; i < ArrayHandler::floor_num; i++)
	{
		ArrayHandler::array_3 = new int**[ArrayHandler::floor_num];

		
		for (int j = 0; j < ArrayHandler::row_num; j++)
		{
			ArrayHandler::array_2 = new int*[ArrayHandler::row_num];
			ArrayHandler::array_3[i] = ArrayHandler::array_2;
			
			for (int k = 0; k < ArrayHandler::column_num; k++)
			{
				ArrayHandler::array_1 = new int[ArrayHandler::column_num];
				ArrayHandler::array_2[i] = ArrayHandler::array_1;
				ArrayHandler::InputRandNumber(ArrayHandler::array_2[i], ArrayHandler::column_num);
			}		
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
	cout << "[ ";
	if (ArrayHandler::array_3 == nullptr && ArrayHandler::array_2 == nullptr && ArrayHandler::array_1 != nullptr)
	{
		for (int i = 0; i < ArrayHandler::column_num; i++)
		{
			cout << array_1[i] << " ";
		}
	}

	else if (ArrayHandler::array_3 == nullptr && ArrayHandler::array_2 != nullptr && ArrayHandler::array_1 != nullptr)
	{
		for (int i = 0; i < ArrayHandler::row_num; i++)
		{	
			for (int j = 0; j < ArrayHandler::column_num; j++)
			{
				cout << array_2[i][j] << " ";
			}
			cout << endl;	
		}
	}

	else if (ArrayHandler::array_3 != nullptr && ArrayHandler::array_2 != nullptr && ArrayHandler::array_1 != nullptr)
	{
		for (int i = 0; i < ArrayHandler::floor_num; i++)
		{
			for (int j = 0; j < ArrayHandler::row_num; j++)
			{
				for (int k = 0; k < ArrayHandler::column_num; k++)
				{
					cout << array_3[i][j][k] << " ";
				}
				cout << endl;
			}
		}
	}

	cout << "]" << endl;
}
