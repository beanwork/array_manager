#pragma once

#ifndef __ARRAY_HANDLER__
#define __ARRAY_HANDLER__

class ArrayHandler
{
private:
	int* array;
public:
	ArrayHandler(int* ar)
	{ array = ar; }

	void InputRandNumber(int* array, int num);
};
#endif // !__ARRAY_HANDLER__
