#include <stdio.h>

int fib[6];

void main()
{
	fib[0] = 0;
	fib[1] = 1;
	fib[2] = fib[0] + fib[1];
	fib[3] = fib[1] + fib[2];
	fib[4] = fib[2] + fib[3];
	fib[5] = fib[3] + fib[4];

	printf("%d", fib[5]);

	getch();
}