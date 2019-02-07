#include <stdio.h>

extern int input;

void printMenu() {
	printf("888    d8b            888                        888\n");
	printf("888    Y8P            888                        888\n");
	printf("888                   888                        888\n");
	printf("888888 888  .d8888b   888888  8888b.   .d8888b   888888  .d88b.   .d88b.\n");
	printf("888    888 d88P\"      888        \"88b d88P\"      888    d88\"\"88b d8P  Y8b\n");
	printf("888    888 888        888    .d888888 888        888    888  888 88888888\n");
	printf("Y88b.  888 Y88b.      Y88b.  888  888 Y88b.      Y88b.  Y88..88P Y8b.\n");
	printf(" \"Y888 888  \"Y8888P    \"Y888 \"Y888888  \"Y8888P    \"Y888  \"Y88P\"   \"Y8888\n");
	printf("\nEnter 1 to begin or anything to exit! ");
	scanf_s("%d", &input);
}