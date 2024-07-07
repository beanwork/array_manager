#include <iostream>
#include "ArrayHandler.h"

using namespace std;

void main()
{	
	int num(0);
	int choice(0);
	
	ArrayHandler Ah;

	while (choice != 5)
	{
		cout << "----Menu----" << endl;
		cout << "1. 배열 만들기" << endl;
		cout << "2. 배열 요소 확인" << endl;
		cout << "3. 배열 요소 삽입" << endl;
		cout << "4. 배열 요소 삭제" << endl;
		cout << "5. 프로그램 종료" << endl;
		
		cout << "선택 : ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case 1:
			cout << "select array dimension" << endl;
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
			break;
		case 2:
			Ah.showElement();

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
