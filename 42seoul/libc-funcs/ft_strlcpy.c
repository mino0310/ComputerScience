unsigned int ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	char *dst;
	const char *sc;
	unsigned int len;

	len = 0;
	dst = dest, sc = src;

	while (size-- && *sc)
	{
		*dst++ = *sc++;
		len++;
	}
	while (*dst++)
		*dst = '\0';

	return len;
}

#include <stdio.h>

int main(void)
{
	char str[] = "i'm good";
	char str1[20];
	ft_strlcpy(str1, str, 10);
	printf("%s", str1);
	return 0;
}
