#include  "logic.h"

int main() {
	int array[DEFAULT_SIZE];
	int size;
	cout << "Input a size of array: ";
	cin >> size;
	cout << "Input an elements of array: ";
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}

	cout << (is_mirror(array, size) ? "Numbers are mirrored." : "Numbers aren't mirrored.");
	return 0;
}