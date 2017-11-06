#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, d, e;
	int max, min;
	double average;
	int mid;
	printf("請輸入5個整數:");
	scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);
	max = a;
	if (max < b)
	{
		max = b;
	}
	if(max < c)
	{
		max = c;
	}
	if (max < d)
	{
		max = d;
	}
	if (max < e)
	{
		max = e;
	}
	printf("最大值:%d\n", max);
	////////////////////////////////////////////////////////////
	min = a;
	if (min > b)
	{
		min = b;
	}
	if (min > c)
	{
		min = c;
	}
	if (min > d)
	{
		min = d;
	}
	if (min > e)
	{
		min = e;
	}
	printf("最小值:%d\n", min);
	/////////////////////////////////////////////////////////////////////////////
	average = (a + b + c + d + e) / 5;
	printf("平均值:%.2f\n", average);
	///////////////////////////////////////////////////////////////////////////////
	system("pause");
	return 0;
}