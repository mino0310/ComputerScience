#include <stdio.h>
int main(void)
{
	int n, sum = 0;
	scanf("%d", &n);
	for (int i = 1; sum < n; i++)
	{
		sum += i;
	}
	printf("%d", sum);
	return 0;
}
