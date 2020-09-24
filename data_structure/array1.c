#include <stdio.h>
#define size 6

void get_integer(int list[])
{
	printf("input ingeter of six: ");
	for (int i = 0; i < size; ++i)
	{
		scanf("%d", &list[i]);
	}
}

int cal_sum(int list[])
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += *(list + i);
	}
	return sum;
}

int main(void)
{
	int list[size];
	get_integer(list);
	printf("sum = %d \n", cal_sum(list));
	return 0;
}
