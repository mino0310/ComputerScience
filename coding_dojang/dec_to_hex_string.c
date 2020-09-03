#include <stdio.h>
#include <string.h>

int main(void)
{
	int decimal = 300;
	char hexadecimal[20] = {0, };
	int position = 0;
	while(1)
	{
		int mod = decimal % 16;
		if (mod < 10)
		{
			hexadecimal[position] = 48 + mod;
		}
		else
		{
			hexadecimal[position] = 65 + mod - 10;
		}

		decimal = decimal / 16;

		position++;

		if (decimal == 0)
			break ;
	}

	for (int i = position - 1; i >= 0; i--)
	{
		printf("%c", hexadecimal[i]);
	}
	printf("\n");

	return 0;
}
