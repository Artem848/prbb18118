#include "main.h"

void main() {
	for (int i = 0; i < SIZE; i++)
		if (i == 0) evens[i] = 2;
		else evens[i] = evens[i - 1] + 2;
		printArray(evens);
	getch();
}

void printArray(int arr[])
{
	for (int i = 0; i < SIZE; i++)
		if (i == SIZE - 1) printf("%d\n", evens[i]);
		else printf("%d, ", evens[i]);
}