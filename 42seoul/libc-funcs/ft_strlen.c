unsigned int ft_strlen(const char *s)
{
	unsigned int len;

	len = 0;

	while (*s++)
		len++;
	
	return len;
}

#include <stdio.h>

int main(void)
{
	char str[] = "kim min ho good";
	printf("%d", ft_strlen(str));
	return 0;
}
