#include <stdio.h>

int factorial(int in)
{
	int out = in;
	for (;in > 1; in--)
		out *= in;

	return out;
}

int main1()
{
	int numbers[10];
	int i;
	for (i = 0; i < 10; i++)
		numbers[i] = i + i;

	printf("%d", factorial(i));
	
	getch();
	return 0;
}