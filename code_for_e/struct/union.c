#include <stdio.h>

union A {
	int i;
	short j;
};
int main(void)
{
	union A a;
	a.i = 0x12345678;
	printf("%x", a.j);
	return 0;
}
