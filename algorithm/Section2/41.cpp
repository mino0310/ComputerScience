#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>

int main(void)
{
    int i, j, k, n, input[1001] = {0, }, num_size = 2; 

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        input[i] = i;
    }

    for (i = 1; i <= n; i++) {
        int sum = 0;
        num_size += i;
        j = 1;
        while (num_size--) {
            sum += input[j];
        }
        printf("sum = %d\n", sum);

    }
    return 0;
}


/*
쫄지 말고 다시 생각해보자




*/