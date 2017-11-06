#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int input;
	int m1, i, j;
	int h, w;
	int x;
	printf("1) 正方形\n");
	printf("2) 長方形\n");
	printf("3) 等腰直角三角形\n");
	printf("4) 結束\n");
	printf("請選擇功能:");
	scanf_s("%d", &input);
	while (input != 4)
	{
		switch (input)
		{
		case 1:
			printf("正方形邊長:");
			scanf_s("%d", &m1);
			printf("\n");
			for (j = 1; j <= m1;j++)
			{ 
				for (i = 1; i <= m1; i++)
				{
					printf("*");
				}
				printf("\n");
			}
			break;
		case 2:
			printf("長方形高和寬:");
			scanf_s("%d %d", &h, &w);
			printf("\n");
			for (j = 1; j <= h; j++)
			{
				for (i = 1; i <= w; i++)
				{
					printf("*");
				}
				printf("\n");
			}
			break;
		case 3:
			printf("等腰直角形邊長:");
			scanf_s("%d", &x);
			printf("\n");
			for (j = 1; j <= x; j++)
			{
				for (i = 1; i <= j; i++)
				{
					printf("*");
				}
				printf("\n");
			}
			break;
		default:
			break;
		}
		printf("1) 正方形\n");
		printf("2) 長方形\n");
		printf("3) 等腰直角三角形\n");
		printf("4) 結束\n");
		printf("請選擇功能:");
		scanf_s("%d", &input);
	}
	printf("結束!\n");
	system("pause");
	return 0;
}