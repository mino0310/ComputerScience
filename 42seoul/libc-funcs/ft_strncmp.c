int ft_strncmp(const char *s1, const char *s2, unsigned int len)
{
	int i;

	i = 0;
	while (len-- && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return s1[i] - s2[i];
		i++;
	}
	return s1[i] - s2[i];
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char s1[] = "mino good";
	char s2[] = "mino jjang";
	printf("%d", ft_strncmp(s1,s2,4));
	printf("%d", strncmp(s1, s2, 4));
	return 0;
}
