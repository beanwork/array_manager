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

enum Dimension
{
	ONE_DIM = 1,
	TWO_DIM,
	THREE_DIM
};


void showMenu();
void makeArray();
void changeElement();
void deleteElement();


void showMenu()
{
	cout << endl;
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
	if (num > 3) { num = 3; }

	switch (num)
	{
	case ONE_DIM:
		Ah.Make1dimArray();
		break;

	case TWO_DIM:
		Ah.SelectRownum(num);
		Ah.Make2dimArray();
		break;
	
	case THREE_DIM:
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


void deleteElement()
{
	int choice;

	cout << endl;
	cout << "1. �� ����" << endl;
	cout << "2. �� ����" << endl;
	cout << "�� �� : " << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		Ah.deleteElement(true);
		break;
	case 2:
		Ah.deleteElement(false);
		break;

	default:
		break;
	}
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

		case DELETE_ELEMENT:
			deleteElement();
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
