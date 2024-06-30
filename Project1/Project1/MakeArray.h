#pragma once

#ifndef __MAKE_ARRAY__
#define __MAKE_ARRAY__

class MakeArray 
{
private:
	int row_num;
	int column_num;
	int floor_num;

public:
	MakeArray(int col, int row, int flr) : column_num(col), row_num(row), floor_num(flr)
	{ }

	void Make1dimArray();
	void Make2dimArray();
	void Make3dimArray();
	void InputRandNumber(int* array, int num);

};
#endif // !__MAKE_ARRAY__
