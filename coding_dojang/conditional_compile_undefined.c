#include <stdio.h>

#define NDEBUG

int main(void)
{
#ifndef DEBUG
	printf("main function\n");
#endif
	return 0;
}
