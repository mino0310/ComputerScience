#include <stdio.h>

int is_prime(int n)
{
	int i;

	for (i = 2; i <= n/2; i++)
	{
		if (!(n % i))
		{
			return 0;
		}
	}
	return 1;
}

int main(void)
{
	int i = 2;
	int prime[1000];
	int ok = 2;
	prime[0] = 2;
	prime[1] = 3;

	for (i = 2; ; i++)
	{
		if (is_prime(i))
		{
			prime[ok] = i;
			ok++;
		}

		if (ok > 1001)
			break ;
	}

	for (i = 0; i < ok; i++)
	{
		printf("%d\n", prime[i]);
	}

	return 0;
}
