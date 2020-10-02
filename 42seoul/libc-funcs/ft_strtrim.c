#include <stdlib.h>
#include <stdio.h>
char *ft_strtrim(char const *s1, char const *set)
{
	char *std, *tmp_s1, *tmp_set, *tmp_std;
	int len_s1, len_set, flag = 0;

	tmp_s1 = (char *)s1, tmp_set = (char *)set;
	len_s1 = 0, len_set = 0;

	while (*tmp_s1++)
		len_s1++;
	while (*tmp_set++)
		len_set++;

	std = (char *)malloc(sizeof(char) * (len_set + 1));

	tmp_s1 = (char *)s1, tmp_std = std;

	while (*tmp_s1)
	{
		tmp_set = (char *)set;
		flag = 0;
		while (*tmp_set)
		{
			if (*tmp_s1 == *tmp_set)
			{
				flag = 1;
			}
			tmp_set++;
		}
		if (flag == 0)
		{
			*std++ = *tmp_s1;
			printf("now std is = %s\n", tmp_std);
		}
		tmp_s1++;
	}
	return tmp_std;
}

#include <stdio.h>

int main(void)
{
	char str1[] = "mino good";
	char set[] = "minog ";
	printf("%s", ft_strtrim(str1, set));
	return 0;
}
