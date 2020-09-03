#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
	char hexadecimal[20] = "12C";
	int decimal = 0;

	int position = 0;

	for (int i = strlen(hexadecimal) - 1; i >= 0; i--)
	{
		char ch = hexadecimal[i];
		
		if (ch >= 48 && ch <= 57)
		{
			decimal += (ch - 48) * pow(16, position);
		}
		else if (ch >= 65 && ch <= 70)
		{
			decimal += (ch - 65 + 10) * pow(16, position);
		}
		else if (ch >= 97 && ch <= 102)
		{
			decimal += (ch - 65 + 10) * pow(16, position);
		}
		position++;
	}

	printf("%d\n", decimal);

	return 0;
}
