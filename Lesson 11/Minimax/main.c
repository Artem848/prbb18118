#include "main.h"

int main() {
	fillArray();
	printArray();
	printMinAndMax();

	getch();
	return 0;
}

void fillArray() {
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++) array[i] = MIN + rand() % (MAX - MIN + 1);
}

void printArray() {
	for (int i = 0; i < SIZE; i++) {
		(i EQUALS 0) ? printf("In %d, ", array[i]) :
		(i EQUALS SIZE - 1) ? printf("%d.\n", array[i]) :
		printf("%d, ", array[i]);
	}
}

void printMinAndMax() {
	int min = MAX, max = MIN;
	for (int i = 0; i < SIZE; i++) {
		if (array[i] < min) min = array[i];
		if (array[i] > max) max = array[i];
	}
	printf("Minimum is %d, maximum is %d.\n", min, max);
}