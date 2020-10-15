#include <stdio.h>

int gcd(int *numArr, int number);
int main() {
	int number = 0;
	int numArr[number];

	printf("몇 개의 수들의 최대공약수를 구하고 싶습니까? ");
	scanf("%d", &number);

	for (int i = 0; i < number; i++) {
		printf("%d번째 숫자: ", i+1);
		scanf("%d", &numArr[i]);
	}

	printf("최대공약수: %d\n", gcd(numArr, number));
	return 0;
}

int gcd(int *numArr, int number) {
	int temp = 0;
	int big = 0;
	int small = 0;

	for (int i = 0; i < number; i++) {
		if (numArr[i] < numArr[i+1]) {
			small = numArr[i];
			big = numArr[i+1];
		} else {
			small = numArr[i+1];
			big = numArr[i];
		}
		while (1) {
			if(big%small == 0)
				break;

			temp = small;
			small = big%small;
			big = temp;
		}
	}
	return small;
}
