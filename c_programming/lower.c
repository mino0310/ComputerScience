#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int c;
	
	while ((c = getchar()) != EOF)
	{
		putchar(tolower(c));
	}
	return 0;
}

int lower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return c;
}
