#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>

int is_prime(long long int n);
long long int factorial(long long int n);

int main(void) {
    int i = 2, cnt;
    long long int n;
    
    scanf("%lld", &n);
    printf("%lld! = ",n);
    n = factorial(n);
    printf("%lld", n);
    while (i <= n) {
        cnt = 0;
        if (is_prime(i)) {
            while (n % i == 0) {
                cnt++;
                n /= i;
            }
            printf("%d ", cnt);
        }
        i++;
    }
    return 0;
}

int is_prime(long long int n) {
    
    if (n == 1) return 0;
    if (n == 2) return 1;
    if (n == 3) return 1;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

long long int factorial(long long int n) {
    long long int ret = 1;
    while (n) {
        ret *= n;
        n--;
    }
    return (ret);
}

// 1. 소수의 곱으로 표현해야 한다.
// 그러려면 우선 소수를 순서대로 나열할 수 있어야겠지.
// 그러려면 소수를 알아낼 수 있어야 겠지.

// 2. 전체 흐름을 적어보자.

// 숫자가 입력된다 
// cnt = 0;
// i = 2 
// 소수인지 검사.
// 소수니 2로 나눈다
// 나눠지면 cnt++
// 다시 2로 나눈다.  나머지가 0이 안될 때까지. 나눠질 떄까지.
// 안 나눠지면 지금까지의 cnt출력하고 다시 i만 증가시켜서 반복

// i++ 
// 소수인지 검사.
// 소수이니 i = 3 (i++) 로 나눈다. 
// 역시 나눠지면 다시 안 나눠질 떄까지 나눈다.

// i++ 
// 소수인지 검사
// 소수가 나올 때까지 i++
// 소수가 나오면 그 수로 나눈다. 나눠질 떄까지 나눈다. 

// 소수로 몇번 나눴는지는 굳이 배열에 하나하나 넣어줄 필요가 없지 이는 문제에서 주어진 사전 규칙이므로
// 나는 숫자만 출력해주면 이를 해석하는 것은 사람들의 몫이니까. 굳이 배열로 모든 것을 담을 필요
// 없지. 그러니까 다음 루프로 넘어갈 때 출력해주면 될 듯.
// 곱과 나머지는 밀접한 관계가 있지. 수의 곱으로 이뤄져있다는 것은 그 수들로 나눴을 때 나누어
// 떨어진 다는 것이니까. 이 관계를 이용하면 될 듯.