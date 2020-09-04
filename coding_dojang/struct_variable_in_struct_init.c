#include <stdio.h>

struct Phone {
	int areacode;
	unsigned long long number;
};

struct Person {
	char name[20];
	int age;
	struct Phone phone;
};

int main(void)
{
	struct Person p1 = { .name = "mino", .age = 27, { .areacode = 82, .number = 3045671234}};

	printf("%d %llu\n", p1.phone.areacode, p1.phone.number);

	struct Person p2 = { "maria", 26, { 82, 30875885}};


	printf("%d %llu\n", p2.phone.areacode, p2.phone.number);


	return 0;
}

