#include "logic.h"

bool is_mirror(int array[DEFAULT_SIZE], int size) {
	bool isMirror = true;
	for (int i = 0; i < size / 2; i++) {
		if (array[i] != array[size - 1 - i]) {
			isMirror = false;
			break;
		}
	}
	return isMirror;
}