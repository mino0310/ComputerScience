#include <iostream>
#define MAX_SIZE 9
#define SWAP(x, y, temp) ( (temp) = (x), (x)=(y), (y)=(temp) )

// 1. 피벗을 기준으로 2개의 부분 리스트로 나눈다.
// 2. 피벗보다 작은 값은 모두 왼쪽 리스트로, 큰 값은 오른쪽 부분 리스트로 옮긴다.
// 2개의 비균등 배열 list[left ... pivot-1] 와 list[pivot+1...right] 의 합병과정
// 실제로 숫자들이 정렬되는 과정

int partition(int list[], int left, int right) {
    int pivot, temp;
    int low, high;

    low = left;
    high = right + 1;
    pivot = list[left]; // 정렬할 리스트의 가장 왼쪽 데이터를 피벗으로 선택 (임의의 값을 피벗으로 선택)


}