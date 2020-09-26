#include <stdio.h>

int arr[100][100] = {0, };

int main(void)
{
	int i, j, res = 0, plus = 1, row, col, n, limit = 1;

	scanf("%d", &n);

	row = 1;
	col = 0;

	while(limit < n)
	{
		for (i = 1; i <= n - limit; i++)
		{
			col += plus;
			arr[row][col] = ++res;
		}
		limit +=2;
		for (j = 1; j <= n - limit; j++)
		{
			row += plus;
			arr[row][col] = ++res;
		}
		limit++;
		
		plus *= -1;
	}


	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
