#include "main.h"

void main()
{
	getNumber();
	printFib();
	getch();
}

void getNumber()
{
	printf("Enter your number: ");
	scanf_s("%d", &number);
}

int calcFib(int count)
{
	if (count < 2) return 1;
	else return calcFib(count - 1) + calcFib(count - 2);
}

void printFib()
{
	printf("%d Fibonacci number is %d", number, calcFib(number));
}