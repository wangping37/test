#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, step;
	int x, y;
	double w,p;
	printf("�п�J�d��,\n");
	printf("�q:");
	scanf_s("%d", &i);
	printf("��:");
	scanf_s("%d", &j);
	printf("�϶�:");
	scanf_s("%d", &step);
	x = i;
	y = j;
	while (i <= j)
	{
		w = (double)i * 0.454;
		printf("%d�S -> %.2f����\n", i, w);
		i += step;
	}
	do
	{
		p = (double)x / 0.454;
		printf("%d���� -> %.2f�S\n", x, p);
		x += step;
	} while (x<=y);
	system("pause");
	return 0;
}