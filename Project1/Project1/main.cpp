#include <iostream>
#include "ArrayHandler.h"

using namespace std;

ArrayHandler Ah;

enum Menu
{
	MAKE_ARRAY = 1, 
	SHOW_ELEMENT,
	CHANGE_ELEMENT,
	DELETE_ELEMENT,
	EXIT_PROGRAM
};


void showMenu();
void makeArray();
void changeElement();


void showMenu()
{
	cout << "----Menu----" << endl;
	cout << "1. �迭 �����" << endl;
	cout << "2. �迭 ��� Ȯ��" << endl;
	cout << "3. �迭 ��� ����" << endl;
	cout << "4. �迭 ��� ����" << endl;
	cout << "5. ���α׷� ����" << endl;

	cout << "���� : ";
}


void makeArray()
{
	int num;

	cout << "�迭 ���� ���ϱ�" << endl;
	cin >> num;

	Ah.SelectColnum(num);

	switch (num)
	{
	case 1:
		Ah.Make1dimArray();
		break;
	case 2:
		Ah.SelectRownum(num);
		Ah.Make2dimArray();
		break;
	case 3:
		Ah.SelectRownum(num);
		Ah.SelectFlrnum(num);
		Ah.Make3dimArray();
		break;
	default:
		break;
	}
}


void changeElement()
{
	int col, row, flr, val;
	cout << "������ ����� ��ġ�� �Է��ϼ���" << endl;
	cout << "flr, row, col : ";

	cin >> flr >> row >> col;
	cout << endl;

	cout << "������ ���� �Է��ϼ��� " << endl;
	cin >> val;
	cout << endl;

	Ah.changeElement(val, col - 1, row - 1, flr - 1);
}


void main()
{	
	int choice(0);
	
	while (choice != EXIT_PROGRAM)
	{
		showMenu();
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case MAKE_ARRAY:
			makeArray();
			break;

		case SHOW_ELEMENT:
			Ah.showElement();
			break;
		
		case CHANGE_ELEMENT:
			changeElement();
			break;
		
		default:
			break;
		}
	}

	cout << endl;
	cout << "���α׷� ����" << endl;

}


//try
//{
//	cout << "select array dimension" << endl;
//	cin >> num;

//	if (num > 3) { throw num; }
//}
//catch (const int exception)
//{
//	cout << exception << "������ �ȵ˴ϴ�" << endl;
//	cout << "�ٽ� �������ּ���" << endl;

//	cout << endl;
//	cout << "select array dimension" << endl;
//	cin >> num;
//}
