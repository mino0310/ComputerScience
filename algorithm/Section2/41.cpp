#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>


int main(void)
{
    int n, num_size = 2, i, j, sum, right = 0, tmp_size, cnt = 0;
    scanf("%d", &n);
    std::vector<int> input(n+1);

    for (i = 1; i <= n; i++) {
        input[i] = i;
    }

    for (i = 1; i <= n; i++) {
        sum = 0;
        for (j = i ; j < i + num_size; j++) {
            sum += input[j];
            if (sum == n) {
                right = 1;
                cnt++;
            }
        }
        printf("num_size = %d\n", num_size);
        tmp_size = num_size;
        if (right == 1) {
            j = i;
            while (j < num_size) {
                printf("%d ", input[j]);
                if (--tmp_size) {
                    printf("+ ");
                }
                else {
                    printf("= ");
                }
                j++;
            }
            printf("%d\n", n);
        }
    }
    printf("%d", cnt);
    return 0;
}

