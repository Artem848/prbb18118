#include <stdio.h>

int main2()
{
	int odds[20];

	for (int i = 0; i < 20; i++)
	{
		if (i == 0) odds[i] = 1;
		else odds[i] = odds[i - 1] + 2;
		if (i == 19) printf("%d", odds[i]);
		else printf("%d, ", odds[i]);
	}

	getch();
	return 0;
}