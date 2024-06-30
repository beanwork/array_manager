#pragma once

#ifndef __ARRAY_HANDLER__
#define __ARRAY_HANDLER__

#include <iostream>

using namespace std;

class ArrayHandler
{
private:
	int* array;
public:
	ArrayHandler()
	{ }

	void DeleteElements();
};
#endif // !__ARRAY_HANDLER__

