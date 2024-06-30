#include <iostream>
#include "MakeArray.h"

using namespace std;

int SelectColnum();
int SelectRownum();
int SelectFlrnum();

int SelectColnum()
{
	int column_num;

	cout << endl;
	cout << "select column number" << endl;
	cin >> column_num;

	return column_num;
}


int SelectRownum()
{
	int row_num;

	cout << endl;
	cout << "select row number" << endl;
	cin >> row_num;

	return row_num;
}


int SelectFlrnum()
{
	int floor_num;

	cout << endl;
	cout << "select floor number" << endl;
	cin >> floor_num;

	return floor_num;
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
		MakeArray *Ma = new MakeArray(SelectColnum());
		Ma->Make1dimArray();
		delete  Ma;
		break;
	case 2:
		MakeArray *Ma = new MakeArray(SelectColnum(), SelectRownum());
		Ma->Make2dimArray();
		delete  Ma;
		break;
	case 3:
		MakeArray *Ma = new MakeArray(SelectColnum(), SelectRownum(), SelectFlrnum());
		Ma->Make3dimArray();
		delete  Ma;
		break;
	default:
		break;
	}
	
	

}