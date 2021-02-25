#include <stdio.h>
#include <iostream>
// int make_nbr_len(int n);
// int make_total_nbr_len(int n);
// int make_nine_ten(int n);
// int make_minimum(int n);

// int make_nbr_len(int n)
// {
//     int nbr_len = 0;

//     while (n)
//     {
//         nbr_len++;  
//         n /= 10;  
//     }
//     return (nbr_len);
// }

// int make_total_nbr_len(int n)
// {
//     int i = 1, j = 1, total_nbr_len = 0;
//     while (i < n){
//         total_nbr_len += i * make_nine_ten(i);
//         i++;
//     }
//     return (total_nbr_len);
// }

// int make_nine_ten(int n)
// {
//     int nine = 9;
//     if (n == 1) return 9;
//     while (--n) {
//         nine *= 10;
//     }
//     return (nine);
// }

// int make_minimum(int len)
// {
//     int ret = 1, i;

//     while (--len) {
//         ret *= 10;
//     }
//     return (ret);
// }
// #include <stdio.h>
// int main(void){
//     int n, sum = 0, len, before_sum = 0, after_sum = 0;
//     scanf("%d", &n);
//     len = make_nbr_len(n);
//     before_sum = make_total_nbr_len(len);
//     if (n % 10 != 0) {
//         after_sum = len * (n - make_minimum(len) + 1);
//     }
//     else {
//         after_sum = make_nbr_len(n);
//     }
//     sum = before_sum + after_sum;
//     printf("%d\n", sum);
//     return 0;
// }
// 그 자리수 바로 밑까지 개수를 구하기.
// 그 자리수의 최솟값에서 그 수를 빼서 숫자의 갯수 구하고 * 숫자의 자리수

// 위의 두 값을 더해서 반환
ㄹ
int main(void) {
    int n, sum = 0, c = 1, d = 9, res = 0;
    scanf("%d", &n);
    while (sum  + d < n) // 지금까지 한 합에 다음 자리수의 합을 더한 것이 지금의 n보다 작을 때 반복
    {
        res = res + (c * d);
        sum = sum + d;
        c++;
        d *= 10;
    }
    res = res + c * ((n - sum));
    printf("%d\n", res);
    return 0;
}