#include "main.h"

void main()
{
	fillArray();
	printArray();
	getch();
}

void fillArray()
{
	for (int i = 0; i < SIZE; i++)
	{
		if (i < 2) fib[i] = 1;
		else fib[i] = fib[i - 1] + fib[i - 2];
	}
}

void printArray()
{
	for (int i = 0; i < SIZE; i++)
	{
		if (i == SIZE - 1) printf("%d", fib[i]);
		else printf("%d, ", fib[i]);
	}
}