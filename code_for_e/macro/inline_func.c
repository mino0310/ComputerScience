#include <stdio.h>

/*__inline int square(int a) { return a * a; }

int main(int argc, char **argv)
{
	printf("%d", square(3+1));

	return 0;
}*/

/* 다른 인라인 함수 예제*/
#include <stdio.h>
__inline int maxq(int a, int b) {
  if (a > b)
    return a;
  else
    return b;
}
int main(int argc, char **argv) {
  printf("3 과 2 중 최대값은 : %d", maxq(3, 2));
  return 0;
}
