#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int arr[1500] = {1, };

int main(void)
{
    int n, i, p1, p2, p3, min = 0;
    p1 = p2 = p3 = 0;

    cin >> n;

    for (i = 1; i < n; i++) {
        printf("arr[p1] = %d, arr[p2] = %d, arr[p3] = %d\n", arr[p1], arr[p2], arr[p3]);
        arr[p1] *= 2;
        arr[p2] *= 3;
        arr[p3] *= 5;
        min = (arr[p1] > arr[p2]) ? ((arr[p2] < arr[p3]) ? arr[p3] : arr[p2]) : (arr[p1] < arr[p3]) ? arr[p1] : ((arr[p3] < arr[p2]) ? arr[p3] : arr[p2]);
        //min = (arr[p1] > arr[p2]) ? (arr[p2] < arr[p3]) ? arr[p2] : ((arr[p1] > arr[p3]) ? arr[p3] : arr[p1]);
        arr[i] = min;
        if (arr[p1] == min && arr[p2] == min) p1++, p2++;
        else if (arr[p2] == min && arr[p3] == min) p2++, p3++;
        else if (arr[p3] == min && arr[p1] == min) p3++, p1++;
        else if (arr[p1] == min) p1++;
        else if (arr[p2] == min) p2++;
        else p3++;

    }

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}


/* 
소인수 분해의 결과는 무엇을 의미하지? 소수의 곱으로 나타낸 것이지. 

숫자가 들어오면 
해당 번째의 어글리 넘버를 출력해주면 됨 간단함

이 문제의 핵심은 무엇인가


소수로 나눠져야하고 && 그 소수 값이 2, 3, 5 여야만 한다.
2, 3, 5가 주어졌으니 굳이 소수 판별을 할 필요 없고, 2, 3, 5로 나누어 떨어지지 않을 때까지 나누면 된다.

1) 소인수 분해하는 함수
2) 해당 숫자의 소인수가 2,3,5 만 있는지 체크하는 함수
여기까지가 어글리 넘버를 판별하는 과정

이후에
N번째 어글리 넘버를 구하는 과정은 어떻지?
1) 1부터 숫자를 증가시키면서 어글리 넘버인지 판별하기 && 그럴 때마다 카운트도 증가
그러다 카운트가 N이 되면 현재 숫자를 출력한다. 



*/