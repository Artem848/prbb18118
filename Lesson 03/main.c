#include <stdio.h>

int main1()
{
	//char name[10] = "John Doe";
	//int age;

	//printf("Hello, %s!\n", name);

	//printf("How old are you?\n");
	//scanf_s("%d", &age);

	//printf("You look younger, I thought you are %d years old.\n", age - 3);

	int first;
	int second;

	printf("Enter first number!\n");
	scanf_s("%d", &first);

	printf("Enter second number!\n");
	scanf_s("%d", &second);

	printf("Sum of numbers is %d!\n", first + second);

	system("pause"); // C++ function
	return 0;
}