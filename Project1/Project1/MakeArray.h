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
	MakeArray(int col, int row, int flr) : column_num(col), row_num(row), floor_num(flr)
	{ }

	void Make1dimArray() const;
	void Make2dimArray() const;
	void Make3dimArray() const;


};
#endif // !__MAKE_ARRAY__
