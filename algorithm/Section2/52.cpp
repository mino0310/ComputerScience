#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    return 0;
}

int is_ugly(int n) {

}


/* 
숫자가 들어오면 
해당 번째의 어글리 넘버를 출력해주면 됨 간단함

이 문제의 핵심은 무엇인가

소인수분해가 2, 3, 5로만 이루어진다는 것은 무엇을 의미하는가
소수로 나눠져야하고 && 그 소수 값이 2, 3, 5 여야만 한다.
2, 3, 5가 주어졌으니 굳이 소수 판별을 할 필요 없고, 2, 3, 5로 나누어 떨어지지 않을 때까지 나누면 된다.

