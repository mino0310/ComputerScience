#include <stdio.h>
int main(void)
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 2; j <= 5; j++)
		{
			printf("%d x %d = %2d", j, i, j * i);
			if (j != 5)
				printf("\t");
			else if (j == 5)
				printf("\n");
		}
	}


}
