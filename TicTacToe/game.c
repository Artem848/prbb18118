#include <stdio.h>

extern int notGameOver;

void printField();
void getInput();
void checkInput();

void gameLoop() {
	while (notGameOver) {
		printField();
		getInput();
		checkInput();
	}
}