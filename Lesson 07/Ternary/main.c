#include "main.h"

void main()
{
	readNumber();
	buildArrays();
	printOdds();
	printEvens();

	getch();
}

void readNumber()
{
	printf("Enter number:\n");
	scanf_s("%d", &number);
}

void buildArrays()
{
	int j = 0;
	int k = 0;
	for (int i = 1; i <= number; i++)
	{
		if (i % 2 == 0)
		{
			evens[k] = i;
			k++;
		}
		else
		{
			odds[j] = i;
			j++;
		}
	}
}

void printOdds()
{
	for (int i = 0; i < SIZE; i++)
	{
		if (odds[i] == 0) break;
		else if (i == 0) printf("\nOdds are: %d, ", odds[i]);
		else printf("%d, ", odds[i]);
	}
}

void printEvens()
{
	for (int i = 0; i < SIZE; i++)
	{
		if (evens[i] == 0) break;
		else if (i == 0) printf("\nEvens are: %d, ", evens[i]);
		else printf("%d, ", evens[i]);
	}
}