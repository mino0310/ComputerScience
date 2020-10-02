char *ft_strrchr(const char *s, int c)
{
	unsigned int len;

	len = 0;
	while (*s)
	{
		s++;
		len++;
	}
	while (len--)
	{
		if (*s-- == c)
			return (char *)s;
	}
	return 0;
}

#include <stdio.h>
int main(void)
{
	char str1[] = "hi bye good";
	printf("%s", ft_strrchr(str1, 'g'));
	return 0;
}
