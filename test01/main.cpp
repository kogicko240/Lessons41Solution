#include <iostream>
#define DEFAULT_SIZE 10

using namespace std;

int main() {
	const int SIZE = 10;
	int array[SIZE];

	int index = 0;

	for (int index = 0; index < SIZE; index++)
	{
		array[index] = 0;
	}

	for (int index = 0; index < SIZE; index++)
	{
		cout << "[" << index + 1 << "] - " << array[index] << endl;
	}
	
	return 0;
}