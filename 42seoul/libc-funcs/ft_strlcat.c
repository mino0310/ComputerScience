unsigned int ft_strlcat(char *dst, const char *src, unsigned int n)
{
	char *dt;
	const char *sc;
	unsigned int len;

	len = 0;
	dt = dst, sc = src;

	while (*dt)
	{
		dt++;
		len++;
	}
	while (n-- > 0 && *sc != '\0')
	{
		*dt++ = *sc++;
		len++;
	}

	return len;
}

#include <stdio.h>
int main(void)
{
	char str1[20] = "mino is ";
	char str2[20] = "good";
	ft_strlcat(str1, str2, 5);
	printf("%s", str1);
	return 0;
}
