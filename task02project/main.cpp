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

	cout << (is_order(array, size) ? "Numbers are in order." : "Numbers aren't in order.");
	return 0;
}