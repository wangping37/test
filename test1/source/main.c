#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	int n;
	int x, y;
	int z;
	for (j = 1; j <= 5; j++)
	{
		for (i = 1; i <= (5-j) ; i++)
		{
			printf(" ");
		}
		if (j == 1)
		{
			printf("*\n");
		}
		else if (j > 1)
		{
			printf("*");
			for (n = 1; n <= (2 * j - 3); n++)
			{
				printf(" ");
			}
			printf("*\n");
		}
	}
/////////////////////////////////////////////////////////////////
	for (x = 4; x >= 1; x--)
	{
		for (y = 1; y <= (5 - x); y++)
		{
			printf(" ");
		}
		if (x > 1)
		{
			printf("*");
			for (z = 1; z <= (2 * x - 3); z++)
			{
				printf(" ");
			}
			printf("*\n");
		}
		else if (x == 1)
		{
			printf("*\n");
		}
	}
	system("pause");
	return 0;
}