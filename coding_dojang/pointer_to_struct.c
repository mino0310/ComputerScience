#include <stdio.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};

int main(void)
{
	struct Person p1;
	struct Person *ptr;

	ptr = &p1;

	ptr->age = 30;

	printf("age : %d\n", p1.age);
	printf("age : %d\n", ptr->age);
	return 0;
}
