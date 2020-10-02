#include <stdlib.h>

void *ft_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	
	ptr = (void *)malloc(nmemb * size);
	return ptr;
}

#include <unistd.h>
int main(void)
{
	char *p = ft_calloc(5, 1);
	char *str = p;
	int i = 0;
	while (i++ < 5)
	{
		*p++ = 'k';
	}
	write(1, str, 5);
	return 0;
}
