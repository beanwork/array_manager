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
		cout << "1. �迭 �����" << endl;
		cout << "2. �迭 ��� Ȯ��" << endl;
		cout << "3. �迭 ��� ����" << endl;
		cout << "4. �迭 ��� ����" << endl;
		cout << "5. ���α׷� ����" << endl;
		
		cout << "���� : ";
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
