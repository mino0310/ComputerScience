#include <stdio.h>

void ft_bzero(void *p, unsigned int n)
{
	char *str;

	str = p;

	if(!n)
		return ;

	while (n-- > 0)
		*str++ = 0;
}	

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "almost every programmer should know memset";
	bzero(str, 6);
	printf("%s", str);
	return 0;
}
