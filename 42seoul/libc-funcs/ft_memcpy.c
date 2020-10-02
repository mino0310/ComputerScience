void *ft_memcpy(void *dest, const void *src, unsigned int n)
{
	char *start;
	const char *copy;

	start = dest;
	copy = src;
	

	while (n-- > 0)
	{
		*start++ = *copy++;
	}
	return start;
}

#include <string.h>
#include <stdio.h>
int main(void)
{
	char str[] = "hi my name is minhkim";
	char str2[40];
	ft_memcpy(str2, str, 30);
	printf("%s", str2);

	return 0;
}
