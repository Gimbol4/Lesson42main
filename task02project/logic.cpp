#include "logic.h"

int is_order(int array[DEFAULT_SIZE], int size) {
	bool is_order = true;
	for (int i = 1; i < size; i++)
	{
		if (array[i - 1] > array[i]) {
			is_order = false;
		}
	}
	return is_order;
}
