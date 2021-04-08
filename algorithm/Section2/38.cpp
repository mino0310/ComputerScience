#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>

int main(void)
{
    int n, i, idx, j;

    scanf("%d", &n);

    std::vector<int> is(n+1), output(n+1);
    
    for (i = 1; i <= n; i++) {
        scanf("%d", &is[i]);
    }
    // for (i = 1; i <= n; i++) {
    //     printf("%d ", is[i]);
    // }
    // printf("\n");
    for (i = 1; i <= n; i++){
        j = 1;
        idx = 0;
        while (j <= is[i]) {
            if (output[j]) {
                idx++;
            }
            else if (!output[j]) {
                idx++;
                j++;
            }
        }
        output[++idx] = i; 
        printf("output[%d] = %d\n", idx, output[idx]);
    }

    for (i = 1; i <= n; i++) {
        printf("%d ", output[i]);
    }
    return 0;
}