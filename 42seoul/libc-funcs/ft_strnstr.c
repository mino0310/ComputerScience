char *ft_strnstr(const char *big, const char *little, unsigned int n)
{
	int i = 0, j;
	while (big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (little[j] != '\0')
			{
				if (big[i + j] != little[j])
				{
					break ;
				}
				j++;
			}

			if (little[j] == '\0')
				return (char *)(&big[i]);
		}
		i++;
	}
	return 0;
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[] = "abcdefg";
	printf("%s\n", ft_strnstr(str1, "de", 3));
	return 0;
}
