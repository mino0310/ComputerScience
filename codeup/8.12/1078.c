#include <stdio.h>
int main(void)
{
	int sum = 0, n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
			sum += i;
	}
	printf("%d", sum);
	return 0;
}
