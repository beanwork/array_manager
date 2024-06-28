#include <iostream>
#include <random>

using namespace std;

void Make2dimArray(int** array_2, int num);
void InputRandNumber(int* array, int num);


void Make2dimArray(int** array_2, int num)
{
	*array_2 = new int[num];
	for (int i = 0; i < num; i++)
	{
		InputRandNumber(*array_2, num);
		*array_2++;
	}
	delete[] array_2;
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

	int *array_1 = new int[num]; // 1 dimension array dynamic allocation 

	switch (num)
	{
	case 1:
		break;
	case 2:
		Make2dimArray(&array_1, num);
		break;
	case 3:
		Make2dimArray(&array_1, num);
		break;
	default:
		if (num > 3) cout << "유효하지 않은 접근입니다" << endl;
		break;
	}
	InputRandNumber(array_1, num);
	delete[] array_1; 

}