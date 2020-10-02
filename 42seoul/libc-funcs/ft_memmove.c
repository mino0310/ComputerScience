void *ft_memmove(void *dest, const void *src, unsigned int n)
{
	char *dst;
	const char *sc;

	dst = dest;
	sc = src;

	if (dest <= src)
	{
		while (n--)
			*dst++ = *sc++;
	}
	else
	{
		dst += n;
		sc += n;
		while (n--)
		{
			*--dst = *--sc;
		}
	}
	return dest;
}

#include <stdio.h>
int main(void)
{
	char str[] = "testtt";
	ft_memmove(str, str+1, 4);
	printf("%s", str);
	return 0;
}
