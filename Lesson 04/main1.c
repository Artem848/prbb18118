#include <stdio.h>

int numberOne;
int numberTwo;

void sum(int first, int second)
{
	printf("%d + %d = %d", first, second, first + second);
}

void getInput(int* first, int* second)
{
	printf("Enter numbers\n");
	scanf_s("%d %d", first, second);
}

int main1()
{
	getInput(&numberOne, &numberTwo);
	sum(numberOne, numberTwo);

	getch();
	return 0;
}