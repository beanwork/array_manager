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
			cout << "유효하지 않은 접근입니다" << endl; 
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