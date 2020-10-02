int ft_atoi(const char *ptr)
{
	int i, res, sign;

	i = 0, res = 0, sign = 1;

	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\r' || str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (ptr[i] == '-')
		sign = -1;
	if (ptr[i] == '-' || ptr[i] == '+')
		i++;
	while (ptr[i] != '\0')
	{
		if (ptr[i] >= '0' && ptr[i] <= '9')
		{
			res = res * 10 + (ptr[i] - '0');
		}
	}

	return res * sign;
}

#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char str[] = "1423";
	write(1, str, 4); 
	return 0;
}
