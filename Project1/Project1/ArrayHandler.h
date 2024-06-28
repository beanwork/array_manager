#pragma once

#ifndef __ARRAY_HANDLER__
#define __ARRAY_HANDLER__

#include "MakeArray.h"

class ArrayHandler:public MakeArray
{
private:
	int* array;
public:
	ArrayHandler(int row, int col, int flr, int* ar) : MakeArray(row, col, flr), 
	{ }

	void InputRandNumber(int* array, int num);
};
#endif // !__ARRAY_HANDLER__
