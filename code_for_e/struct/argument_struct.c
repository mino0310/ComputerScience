#include <stdio.h>

struct TEST {
	int age;
	int gender;
	char name[20];
};

char copy_str(char *dest, const char *src);
int set_human(struct TEST *pa, int age, int gender, const char *name);

int main(void)
{
	struct TEST human;
	set_human(&human, 10, 1, "Lee");
	printf("AGE: %d // Gender : %d // Name : %s \n", human.age, human.gender, human.name);
	return 0;
}

int set_human(struct TEST *pa, int age, int gender, const char *name)
{
	pa->age = age;
	pa->gender = gender;
	copy_str(pa->name, name);
	return 0;
}

char copy_str(char *dest, const char *src)
{
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';

	return 1;
}
