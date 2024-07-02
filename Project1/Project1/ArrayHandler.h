#pragma once

#ifndef __MAKE_ARRAY__
#define __MAKE_ARRAY__

class ArrayHandler
{
private:
	int row_num;
	int column_num;
	int floor_num;
	int* array_1 = nullptr;
	int** array_2 = nullptr;
	int*** array_3 = nullptr;

public:
	ArrayHandler(int col, int row, int flr) : column_num(col), row_num(row), floor_num(flr)
	{ }

	void Make1dimArray();
	void Make2dimArray();
	void Make3dimArray();
	void InputRandNumber(int* array, int num);
	void showElement();
	int  changeElement(int val, int col=0, int row=0, int flr=0);
	void insertElement();
	void deleteElement();

	~ArrayHandler()
	{
		if (array_1 != nullptr) { delete[] array_1; }
		if (array_2 != nullptr) { delete[] array_2; }
		if (array_3 != nullptr) { delete[] array_3; }
	}
};
#endif // !__MAKE_ARRAY__
