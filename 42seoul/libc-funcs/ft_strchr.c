char *ft_strchr(const char *s, int c)
{
	while (*s++)
	{
		if (*s == (char)c)
			return (char *)s;
	}
	return 0;
}

#include <stdio.h>

int main(void)
{
	char str1[] = "good mino";
	printf("%s", ft_strchr(str1, 'i'));
	return 0;
}
