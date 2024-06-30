#include <iostream>
#include "MakeArray.h"

using namespace std;

int SelectColnum(int num);
int SelectRownum(int num);
int SelectFlrnum(int num);


int SelectColnum(int num)
{
	if (num < 1) { return 0; }
	int column_num;

	cout << endl;
	cout << "select column number" << endl;
	cin >> column_num;

	return column_num;
}


int SelectRownum(int num)
{
	if (num < 2) { return 0; }
	
	int row_num;

	cout << endl;
	cout << "select row number" << endl;
	cin >> row_num;

	return row_num;
}


int SelectFlrnum(int num)
{
	if (num < 3) { return 0; }

	int floor_num;

	cout << endl;
	cout << "select floor number" << endl;
	cin >> floor_num;

	return floor_num;
}

void main()
{	
	int num;

	//try
	//{
	//	cout << "select array dimension" << endl;
	//	cin >> num;

	//	if (num > 3) { throw num; }
	//}
	//catch (const int exception)
	//{
	//	cout << exception << "차원은 안됩니다" << endl;
	//	cout << "다시 선택해주세요" << endl;

	//	cout << endl;
	//	cout << "select array dimension" << endl;
	//	cin >> num;
	//}
	
	cout << "select array dimension" << endl;
	cin >> num;

	MakeArray Ma(SelectColnum(num), SelectRownum(num), SelectFlrnum(num));
	
	switch (num)
	{
	case 1:
		Ma.Make1dimArray();
		break;
	case 2:
		Ma.Make2dimArray();
		break;
	case 3:
		Ma.Make3dimArray();
		break;
	default:
		break;
	}
	
}