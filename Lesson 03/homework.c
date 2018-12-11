#include <stdio.h>

int main()
{
	int first;
	int second;

	printf("Enter numbers!\n");
	scanf_s("%d %d", &first, &second);

	printf("%d + %d = %d\n", first, second, first + second);
	printf("%d - %d = %d\n", first, second, first - second);
	printf("%d * %d = %d\n", first, second, first * second);
	printf("%d / %d = %d\n", first, second, first / second);

	getch();
	return 0;
}