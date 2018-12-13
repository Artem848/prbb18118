#include <stdio.h>

float degreesToFahr(float number)
{
	float out;

	out = number * 1.8f;

	return (out + 32);
}

float fahrToDegrees(float number)
{
	float out;

	out = number - 32;

	return (out / 1.8f);
}


void main()
{
	float input;

	printf("Input degrees:\n");
	scanf_s("%f", &input);
	printf("\n%f\n", degreesToFahr(input));

	printf("Input fahrenheits:\n");
	scanf_s("%f", &input);
	printf("\n%f\n", fahrToDegrees(input));

	getch();
}