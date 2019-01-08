#include "main.h"

int main() {
	int number = getNumber();
	printPrimes(number);
	getch();
	return 0;
}

int getNumber() {
	int input;
	printf("Enter number:");
	scanf_s("%d", &input);

	return input;
}

void printPrimes(int input) {
	int prime = 2;
	while (input > 1) {
		if (input == prime) {
			printf("%d", prime);
			input /= prime;
		}
		else if (input % prime == 0) {
			printf("%d, ", prime);
			input /= prime;
		}
		else {
			prime++;
		}
	}
}