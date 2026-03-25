#include "logic.h"

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

	cout << "Quantity of zero elements: " << count_zero(array, size) << endl;
	cout << "Quantity of positive elements: " << count_pos(array, size) << endl;
	cout << "Quantity of negative elements: " << count_neg(array, size) << endl;

	return 0;
}