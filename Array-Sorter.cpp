#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

void sort(int array[], int array_size) {
	for (int i = 1; i < array_size; i++) {
		int buffer = array[i];
		int starting_position = i - 1;
		while (starting_position >= 0 && buffer <= array[starting_position]) {
			array[starting_position + 1] = array[starting_position];
			starting_position = starting_position - 1;
		}
		array[starting_position + 1] = buffer;
	}
}

int main() {
	int list[MAX_SIZE], size;

	cout << "Enter the size of the array you would like to sort.\n";
	cin >> size;

	cout << "Fill in the array with " << size << " numbers.\n";
	for(int i = 0; i < size; i++)
		cin >> list[i];

	sort(list, size);

	cout << "The numbers going from lowest to highest are:\n";
	for (int i = 0; i < size; i++)
		cout << list[i] << " ";

	return 0;
}
