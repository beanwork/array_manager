#include <iostream>
#include <random>

using namespace std;

void main()
{
	int num;

	cout << "select array number" << endl;

	cin >> num;

	random_device rd;

	mt19937 gen(rd());

	uniform_int_distribution<int> dis(0, 99);

	int *array = new int[num]; // 1 dimension array dynamic allocation ¤·

	cout << "[ ";
	for (int i = 0; i < num; i++)
	{
		array[i] = dis(gen);
		cout << array[i] << " ";
	}
	cout << "]" << endl;

	delete[] array; 

}