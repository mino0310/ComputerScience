int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{

	const char *str1, *str2;

	str1 = s1, str2 = s2;

	if ((int)n == 0)
		return 0;

	while ((int)n-- && (*str1++ == *str2++))
	{
		;
	}

	if (n == 0)
		return 0;

	return *(--str1) - *(--str2);
	
}

#include <stdio.h>

int main(void)
{
	char str1[] = "good day";
	char str2[] = "good aay";

	printf("%d", ft_memcmp(str1, str2, 20));
	return 0;
}
