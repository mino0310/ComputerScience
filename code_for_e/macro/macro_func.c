#include <stdio.h>
#define square(x) (x) * (x)
#define PrintVariableName(var) printf(#var "\n");
#define AddName(x, y) x##y

/*
int main(int argc, char **argv)
{
	printf("square(3) : %d \n", square(3 + 1));

	return 0;
}*/
/*
int main(int argc, char **argv)
{
	int a;
	PrintVariableName(a);

	return 0;
}*/

int main(int argc, char **argv)
{
	int AddName(a, b);

	ab = 3;

	printf("%d \n", ab);

	return 0;
}

