#include <stdio.h>

void swap(int *px, int *py)
{
	int tmp;
	tmp = *px;
	*px = *py;
	*py = tmp;
}

int main(void)
{
	int a = 1, b = 2;
	printf("before calling swap: a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("after calling swap: a = %d, b = %d\n", a, b);
	return 0;
}
