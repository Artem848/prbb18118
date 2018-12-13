#include <stdio.h>

void main1()
{
	int odds[10];

	odds[0] = 1;
	odds[1] = 3;
	odds[2] = 5;
	odds[3] = 7;
	odds[4] = 9;
	odds[5] = 11;
	odds[6] = 13;
	odds[7] = 15;
	odds[8] = 17;
	odds[9] = 19;

	printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d",
		odds[0], odds[1], odds[2], odds[3], odds[4], odds[5], odds[6],
		odds[7], odds[8], odds[9]);
	
	getch();
}