#include <stdio.h>

extern int input;

void getInput() {
	printf("Chose field: ");
	scanf_s("%d", &input);
}