#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, step;
	int x, y;
	double w,p;
	printf("請輸入範圍,\n");
	printf("從:");
	scanf_s("%d", &i);
	printf("到:");
	scanf_s("%d", &j);
	printf("區間:");
	scanf_s("%d", &step);
	x = i;
	y = j;
	while (i <= j)
	{
		w = (double)i * 0.454;
		printf("%d磅 -> %.2f公斤\n", i, w);
		i += step;
	}
	do
	{
		p = (double)x / 0.454;
		printf("%d公斤 -> %.2f磅\n", x, p);
		x += step;
	} while (x<=y);
	system("pause");
	return 0;
}