#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	char *res, *start, *tmp1, *tmp2;
	int len1 = 0, len2 = 0;

	tmp1 = (char *)s1, tmp2 = (char *)s2;
	while(*tmp1++)
		len1++;
	while(*tmp2++)
		len2++;

	res = (char *)malloc(sizeof(char) * (len1 + len2 + 1) );
	if (res == 0)
		return 0;
	start = res;
	while (len1--)
		*res++ = *s1++;
	while (len2--)
		*res++ = *s2++;
	res = '\0';
	return start;
}

#include <stdio.h>

int main(void)
{
	char str1[] = "mino";
	char str2[] = "good";
	printf("%s", ft_strjoin(str1,str2));
	return 0;
}
