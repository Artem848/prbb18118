#include <stdio.h>

extern int input;
extern int player;

void getInput() {
	printf("Player %d choose your field: ", player);
	scanf_s("%d", &input);
}