#include "main.h"

int main() {
	fillArray();
	printMinMax();

	getch();
	return 0;
}

void fillArray() {
	srand(time(NULL));

	for (int i = 0; i < SIZE; i++) array[i] = rand();
}

void printMinMax() {
	int max = 0;
	int min = INT_MAX;
	for (int i = 0; i < SIZE; i++) {
		if (array[i] > max) max = array[i];
		if (array[i] < min) min = array[i];
	}
	printf("min is %d, max is %d", min, max);
}