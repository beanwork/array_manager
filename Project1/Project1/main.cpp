#include <iostream>
#include <random>

using namespace std;

void Make1dimArray();
void Make2dimArray();
void Make3dArray();
void InputRandNumber(int* array, int num);


void Make1dimArray()
{
	int column_num;

	cout << endl;
	cout << "select column number" << endl;
	cin >> column_num;

	int *array_1 = new int[column_num]; // 1 dimension array dynamic allocation 
	InputRandNumber(array_1, column_num);

	delete[] array_1;
}


void Make2dimArray()
{
	int row_num;
	int column_num;
	
	cout << endl;
	cout << "select column number" << endl;
	cin >> column_num;

	cout << "select row number" << endl;
	cin >> row_num;

	int *array_1 = new int[column_num];
	int **array_2 = new int*[row_num];

	for (int i = 0; i < row_num; i++)
	{
		array_2[i] = array_1;
		InputRandNumber(array_2[i], column_num);
	}
	delete[] array_2;
	delete[] array_1;
}


void Make3dArray()
{
	int row_num;
	int column_num;
	int floor_num;

	cout << endl;
	cout << "select floor number" << endl;
	cin >> floor_num;
	
	cout << "select column number" << endl;
	cin >> column_num;

	cout << "select row number" << endl;
	cin >> row_num;

	int *array_1 = new int[column_num];
	int **array_2 = new int*[row_num];
	int ***array_3 = new int**[floor_num];

	for (int i = 0; i < floor_num; i++)
	{
		array_3[i] = array_2;
		for (int j = 0; j < row_num; j++)
		{
			array_2[i] = array_1;
			InputRandNumber(array_2[i], column_num);
		}
		cout << endl;
	}
}


void InputRandNumber(int* array, int num)
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


void main()
{
	int num;

	cout << "select array dimension" << endl;
	cin >> num;

	switch (num)
	{
		if (num > 3) 
		{ 
			cout << "유효하지 않은 접근입니다" << endl; 
			break;
		}
	case 1:
		Make1dimArray();
		break;
	case 2:
		Make2dimArray();
		break;
	case 3:
		Make3dArray();
	default:
		break;
	}
	

}