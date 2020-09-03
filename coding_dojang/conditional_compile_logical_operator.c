#include <stdio.h>

#define DEBUG
#define TEST

int main(void)
{
#if (defined DEBUG || defined TEST) && !defined (VERSION_10)
	printf("Debug\n");
#endif
	return 0;
}
