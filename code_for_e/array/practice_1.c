#include <stdio.h>

int lent(int n)
{
	int len = 0;
	while (n)
	{
		len++;
		n -= 10;
	}
	return (len);
}

int main(void)
{
	int grade[10] = {0, };
	char graph[10][10] = {0, };

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &grade[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		int len = lent(grade[i]);
		for (int j = 0; j< 10 && j < len; j++)
		{
			graph[i][j] = '-';
		}

	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%c", graph[i][j]);
		}
		printf("\n");
	}
	return 0;
}
