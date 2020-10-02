#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *s)
{
	int len; 

	len = 0;

	while (*s++)
	{
		len++;
	}

	return len;
}

int intlen(int n)
{
	int len;

	len = 0;

	while (n)
	{
		n /= 10;
		len++;
	}
}

char *ft_itoa(int n)
{
	char sign, *res, *start, *dup;

	int len = intlen(n);
	res = (char *)malloc(sizeof(char) * intlen(n) + 1);
	start = res;

	while (n)
	{
		*res++ = n % 10 + '0';
		n /= 10;
	}
	dup = (char *)malloc(sizeof(char) * ft_strlen(res) + 1);
	start = dup;
	
	while (*(--res))
	{
		*dup++ = *(res);
	}

	return start;	
}

int main(void)
{
	printf("%s", ft_itoa(1234));
	
	return 0;
}
