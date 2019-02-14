#include <stdio.h>
#include <stdlib.h>

extern int field[];
extern int wrongInput;
extern int player;

void printField() {
	system("cls");
	if (wrongInput) {
		printf("Player %d you chose wrong field\n", player);
		wrongInput = 0;
	}
	int k = 0;
	for (int i = 0; i < 5; ++i) {
		if (i % 2 == 1) printf("-----");
		else {
			for (int j = 0; j < 5; ++j) {
				if (j % 2 == 1) printf("|");
				else {
					if (field[k] < 10) printf("%d", field[k]);
					else printf("%c", field[k]);
					k++;
				}
			}
		}
		printf("\n");
	}
}