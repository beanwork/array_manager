#include <iostream>
#include <random>
#include "MakeArray.h"
#include "ArrayHandler.h"

using namespace std;

void main()
{	
	
	int num;

	cout << "select array dimension" << endl;
	cin >> num;

	switch (num)
	{
		if (num > 3) 
		{ 
			cout << "��ȿ���� ���� �����Դϴ�" << endl; 
			break;
		}
	case 1:
		Ah->SelectColnum();
		Ah->Make1dimArray();
		break;
	case 2:
		Ah->Make2dimArray();
		break;
	case 3:
		Ah->Make3dimArray();
	default:
		break;
	}
	

}