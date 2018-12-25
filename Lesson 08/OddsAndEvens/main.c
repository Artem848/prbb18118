#include <stdio.h>

int input = 0;

void getInput();
void printOdds();
void printEvens();

void main() {
	getInput();
	printOdds();
	printEvens();
	getch();
}

void getInput() {
	printf("Enter the number: ");
	scanf_s("%d", &input);
}

void printOdds() {
	for (int i = 1; i <= input; i += 2) {
		if (i == 1) printf("Odds: %d, ", i);
		else printf("%d, ", i);
	}
}

void printEvens() {
	for (int i = 2; i <= input; i += 2) {
		if (i == 2) printf("Evens: %d, ", i);
		else printf("%d, ", i);
	}
}