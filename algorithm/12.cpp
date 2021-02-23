#include <stdio.h>
#include <iostream>

int nbr_len(int n);
int take_square(int n);
int total_len(int n);
int ten_square(int n);
int main(void){
    int n, sum = 0;
    scanf("%d", &n);
    sum = total_len(n);
    // printf("now! = %d\n", nbr_len(n));
    sum += nbr_len(n) * (n - ten_square(nbr_len(n) - 1));
    printf("%d\n", sum);
    return 0;
}

int ten_square(int n)
{
    int ret = 10;
    for (int i = 1; i < n; i++) {
        ret *= 10;
    }
    printf("ret is %d\n", ret);
    return (ret);
}

int nbr_len(int n)
{
    int len = 0;
    while (n)
    {
        len++;
        n /= 10;
    }
    return (len);
}

int total_len(int n)
{
    int tmp, len = 0, total = 0;
    len = tmp = nbr_len(n);
    while (--tmp) {
        total += nbr_len(tmp) * take_square(tmp);
    }
    return (total);
}

int take_square(int n)
{
    int ret = 9;
    for (int i = 1; i < n; i ++) {
        ret *= 10;
    }
    return (ret);
}
