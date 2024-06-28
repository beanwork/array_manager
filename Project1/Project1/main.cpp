#include <iostream>
#include <random>

using namespace std;

void Make1dimArray();
void Make2dimArray(int** array_2, int num);
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


void Make2dimArray(int** array_2, int num)
{

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
	case 1:
		Make1dimArray();
	default:
		break;
	}
	


}