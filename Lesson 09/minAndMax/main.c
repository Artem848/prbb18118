#include "main.h"

void main() {
	int numbers[100];
	srand(time(0));
	for (int i = 0; i < 100; i++) {
		numbers[i] = rand();
		if (i == 99) printf("%d", numbers[i]);
		else printf("%d, ", numbers[i]);
	}
	getch();
}