#pragma once

#ifndef __MAKE_ARRAY__
#define __MAKE_ARRAY__

#include <iostream>

using namespace std;

class MakeArray 
{
private:
	int row_num;
	int column_num;
	int floor_num;

public:
	MakeArray(int col=0, int row=0, int flr=0) : column_num(col), row_num(row), floor_num(flr)
	{ }

	void Make1dimArray();
	void Make2dimArray();
	void Make3dimArray();


};
#endif // !__MAKE_ARRAY__
