#include <stdlib.h>
#include <string.h>
char *ft_strdup(char *str)
{
	int len = strlen(str);
	char *p = malloc(strlen(str) * sizeof(char));
	char *start = p;
	while (len--)
	{
		*p++ = *str++;
	}
	return (start);
}

#include <stdio.h>
int main(void)
{
	char str1[] = "asdfgadf";
	char *ptr = ft_strdup(str1);
	printf("%s", ptr);
	free(ptr);
	return 0;
}
