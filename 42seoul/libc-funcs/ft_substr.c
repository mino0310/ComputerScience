#include <stdlib.h>
#include <stdio.h>
char *ft_substr(char const *s, unsigned int start, unsigned int len)
{
	char *sub;
	char *spot;

	sub = (char *)malloc(sizeof(char) * len);
	spot = sub;
	s += start;

	while (len--)
	{
		*sub++= *s++;
	}

	return spot;
}


int main(void)
{
	char str1[] = "mino good";
	char str2[15];

	printf("%s", ft_substr(str1, 5, 5));
	return 0;
}
