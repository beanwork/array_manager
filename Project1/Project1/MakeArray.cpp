#include "MakeArray.h"
#include "ArrayHandler.h"

ArrayHandler* Ah;

void MakeArray::Make1dimArray() const
{
	 
	int *array_1 = new int[MakeArray::column_num];
	Ah->InputRandNumber(array_1, MakeArray::column_num);

	delete[] array_1;
}


void MakeArray::Make2dimArray() const
{
	int *array_1 = new int[MakeArray::column_num];
	int **array_2 = new int*[MakeArray::row_num];

	for (int i = 0; i < MakeArray::row_num; i++)
	{
		array_2[i] = array_1;
		Ah->InputRandNumber(array_2[i], MakeArray::column_num);
	}
	delete[] array_2;
	delete[] array_1;
}


void MakeArray::Make3dimArray() const
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
			Ah->InputRandNumber(array_2[i], MakeArray::column_num);
		}
		cout << endl;
	}
	delete[] array_3;
	delete[] array_2;
	delete[] array_1;
}

