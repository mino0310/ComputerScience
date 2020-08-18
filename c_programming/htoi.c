#include <stdio.h>
int main(void)
{
	char s[] = "144";
	unsigned int num = 0, i;

	for (int i = 0; s[i] != 0; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'F')
			num = num * 16 + s[i] - 'A' + 10;
		else if (s[i] >= 'a' && s[i] <= 'f')
			num = num * 16 + s[i] - 'a' + 10;
		else
			num = num * 16 + s[i] - '0';
	}

	printf("%s -> (%X, %d)\n", s, num, num);
	return 0;
}
