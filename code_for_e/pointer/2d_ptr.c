#include <stdio.h>
/*
int main(void)
{
	int arr[2][3];

	printf("arr[0] : %p \n", arr[0]);
	printf("&arr[0][0] : %p \n", &arr[0][0]);

	printf("arr[1] : %p \n", arr[1]);
	printf("&arr[1][0] : %p \n", &arr[1][0]);
	return 0;
}

int main(void)
{
	int arr[2][3] = {{1, 2, 3}, {4,5,6}};
	printf("전체 크기 : %lu \n", sizeof(arr));
	printf("총 열의 개수 : %lu \n", sizeof(arr[0]) / sizeof(int));
	printf("총 행의 개수 : %lu \n", sizeof(arr) / sizeof(arr[0]));
	return 0;
}*/

int main(void)
{
	int arr[2][3] = {{1,2,3}, {4,5,6}};

	printf("arr : %p, arr + 1 : %p \n", arr, arr+1);

	return 0;
}
