#include <stdio.h>

extern int input;
extern int player;
extern int winner;

void getInput() {
	if (winner) {
		printf("\nEnter 1 to play again or anything else to exit: ");
		scanf_s("%d", &input);
	}
	else {
		printf("\nPlayer %d choose your field: ", player);
		scanf_s("%d", &input);
	}
}