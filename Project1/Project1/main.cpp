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
	cout << "1. 배열 만들기" << endl;
	cout << "2. 배열 요소 확인" << endl;
	cout << "3. 배열 요소 변경" << endl;
	cout << "4. 배열 요소 삭제" << endl;
	cout << "5. 프로그램 종료" << endl;

	cout << "선택 : ";
}


void makeArray()
{
	int num;

	cout << "배열 차원 정하기" << endl;
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
	cout << "변경할 요소의 위치를 입력하세요" << endl;
	cout << "flr, row, col : ";

	cin >> flr >> row >> col;
	cout << endl;

	cout << "변경할 값을 입력하세요 " << endl;
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
	cout << "프로그램 종료" << endl;

}


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
