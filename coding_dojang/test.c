#include <stdio.h>
int main(void)
{
	int num1 = 20;
	int *numPtr;
	numPtr = &num1;
	printf("%p\n", numPtr);
	return 0;
}
