#include "main.h"

void main() {
	int input = readInput();
	calculateAndPrintFactorial(input);
	getch();
}

int readInput() {
	printf("Enter any integer greater than one: ");
	int number;
	scanf_s("%d", &number);
	return number;
}

void calculateAndPrintFactorial(int number) {
	int  factorial = 1;
	for (int i = 2; i <= number; i++) {
		printf("%d, ", factorial);
		factorial *= i;
	}
	printf("%d", factorial);
}