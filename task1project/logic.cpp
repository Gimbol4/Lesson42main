#include "logic.h"

int count_pos(int array[DEFAULT_SIZE], int size) {
	int pos = 0;
	for (int i = 0;  i < size;  i++)
	{
		if (array[i] > 0) {
			pos++;
		}
	}
	return pos;
}
int count_zero(int array[DEFAULT_SIZE], int size) {
	int zero = 0;
	for (int i = 0; i < size; i++)
	{
		if (array[i] == 0) {
			zero++;
		}
	}
	return zero;
}
int count_neg(int array[DEFAULT_SIZE], int size) {
	int neg = 0;
	for (int i = 0; i < size; i++)
	{
		if (array[i] < 0) {
			neg++;
		}
	}
	return neg;
}
