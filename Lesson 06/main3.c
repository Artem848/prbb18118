#include <stdio.h>

int powerOfTwo(int in) {
	int out = 1;
	while (in > 0)
	{
		out *= 2;
		in--;
	}
	return out;
}

void main() {
	int i;
	for (i = 0; i < 5; i++)
	{
		if (i == 4) printf("%d", powerOfTwo(i));
		else printf("%d, ", powerOfTwo(i));
	}
	getch();
}