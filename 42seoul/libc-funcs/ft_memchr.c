void *memchr(const void *s, int c, unsigned int n)
{
	const char *tmp;

	tmp = s;

	while (n--)
	{
		if (*tmp == (char)c)
		{
			return (void *)tmp;
		}
	}
	return NULL;
}
