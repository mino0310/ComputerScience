#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>

int main(void)
{
    int i, j, k, n, m, first_arr[101] = {0, }, second_arr[101] = {0, }, output_arr[201] = {0, };

    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &first_arr[i]);
    }
    scanf("%d", &m);
    for (i = 1; i <= m; i++) {
        scanf("%d", &second_arr[i]);
    }
    j = 1;
    k = 1;
    i = 1; 
    while (1) {
        if (first_arr[j] > second_arr[k]) {
            output_arr[i++] = second_arr[k];
            k++;
            printf("2222\n");
        }
        else {
            output_arr[i++] = first_arr[j];
            j++;
            printf("1111\n");
        }
        if (first_arr[j] == 0) {
            while (!second_arr[k]) {
                output_arr[i++] = second_arr[k++];
            }
            break ;
        }
        // else {
        //     while (!first_arr[j]) {
        //         output_arr[i++] = first_arr[j];
        //         j++;
        //     }
        //     break ;
        // }
    }


    for (i = 1; i <= n+m; i++) {
        printf("%d ", output_arr[i]);
    }
    return 0;
}