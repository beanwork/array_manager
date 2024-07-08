#pragma once

#ifndef __ARRAY_HANDLER__
#define __ARRAY_HANDLER__

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
	ArrayHandler()
	{
		row_num=0;
		column_num=0;
		floor_num=0;
	}

	void Make1dimArray();
	void Make2dimArray();
	void Make3dimArray();
	void InputRandNumber(int* array, int num);
	void showElement();
	void changeElement(int val, int col, int row, int flr);
	void deleteElement(bool row_or_col);
	void SelectColnum(int num);
	void SelectRownum(int num);
	void SelectFlrnum(int num);


	~ArrayHandler()
	{
		if (array_1 != nullptr)
		{
			delete[] array_1;
		}

		if (array_2 != nullptr)
		{
			for (int i = 0; i < row_num; i++) { delete[] array_1; }
			delete[] array_2;
		}

		if (array_3 != nullptr)  
		{ 
			for (int i = 0; i < row_num; i++) { delete[] array_1; }
			for (int j = 0; j < floor_num; j++) { delete[] array_2; }
			delete[] array_3;
		}
	}
};
#endif // !__ARRAY_HANDLER__
