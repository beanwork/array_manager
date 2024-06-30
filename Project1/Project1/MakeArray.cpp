#include "MakeArray.h"
#include "ArrayHandler.h"
#include <random>


void MakeArray::Make1dimArray() 
{
	int *array_1 = new int[MakeArray::column_num];
	MakeArray::InputRandNumber(array_1, MakeArray::column_num);

	delete[] array_1;
}


void MakeArray::Make2dimArray() 
{
	int *array_1 = new int[MakeArray::column_num];
	int **array_2 = new int*[MakeArray::row_num];

	for (int i = 0; i < MakeArray::row_num; i++)
	{
		array_2[i] = array_1;
		MakeArray::InputRandNumber(array_2[i], MakeArray::column_num);
	}
	delete[] array_2;
	delete[] array_1;
}


void MakeArray::Make3dimArray() 
{
	int *array_1 = new int[MakeArray::column_num];
	int **array_2 = new int*[MakeArray::row_num];
	int ***array_3 = new int**[MakeArray::floor_num];

	for (int i = 0; i < MakeArray::floor_num; i++)
	{
		array_3[i] = array_2;
		for (int j = 0; j < MakeArray::row_num; j++)
		{
			array_2[i] = array_1;
			MakeArray::InputRandNumber(array_2[i], MakeArray::column_num);
		}
		cout << endl;
	}
	delete[] array_3;
	delete[] array_2;
	delete[] array_1;
}

void MakeArray::InputRandNumber(int* array, int num)
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