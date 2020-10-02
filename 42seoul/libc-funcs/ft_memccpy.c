void *ft_memccpy(void *dest, const void *src, char c, unsigned int n)
{
	char *dst;
	const char *sc;

	dst = dest, sc = src;

	while (n-- > 0 && *sc != c)
	{
		*dst++ = *sc++;
	}
	return dst;
}

#include <stdio.h>

int main(void)
{
	char str[] = "this is very delicious";
	char str2[40] = {0, };
	ft_memccpy(str2, str, 'i', 30);
	printf("%s", str2);
	return 0;
}
