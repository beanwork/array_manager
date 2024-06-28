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
	MakeArray(int row, int col, int flr) : row_num(row), column_num(col), floor_num(flr)
	{ }

	void Make1dimArray();
	void Make2dimArray();
	void Make3dimArray();
	void SelectColnum();
	void SelectRownum();
	void SelectFlrnum();

};
#endif // !__MAKE_ARRAY__
