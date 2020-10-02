void *ft_memset(void *p, int c, unsigned int n)
{
	int i;
	char *start;

	start = p;

	while (n-- > 0)
		*start++ = c;
	return p;
}


#include <stdio.h>
int main(void)
{
	char str[] = "almost every programmer should know memset!";
	ft_memset(str, '-', 6);
	printf("%s", str);
	return 0;
}
