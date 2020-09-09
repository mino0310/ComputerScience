#include <stdio.h>

int main(int ac, char *av[])
{
	FILE *fp;
	void filecopy(FILE *, FILE *);
	char *prog = av[0];
	if (ac == 1)
		filecopy(stdin, stdout);
	else
		while (--ac > 0)
		{
			if ((fp = fopen(*++av, "r")) == NULL)
			{
				fprintf(stderr, "%s: can't open %s\n", prog, *av);
				exit(1);
			}
			else 
			{
				filecopy(fp, stdout);
				fclose(fp);
			}
		}
	if (ferror(stdout))
	{
		fprintf(stderr, "%s: error writing stdout\n", prog);
		exit(2);
	}
	exit(0);
}

void filecopy(FILE *ifp, FILE *ofp)
{
	int c;
	while ((c = getc(ifp)) != EOF)
		put(c, ofp);
}
