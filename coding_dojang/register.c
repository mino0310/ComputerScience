#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	register int num1 = 10;
	
	printf("%d\n", num1);

	register int *numPtr = malloc(sizeof(int));
	
	*numPtr = 20;
	printf("%d\n", *numPtr);

	free(numPtr);
	return 0;
}
