#include <stdio.h>
#include <algorithm>
#include <vector>

int main(void)
{
    int target, n, i, max_idx, min_idx, mid_idx, tmp;

    scanf("%d %d", &n, &target);

    std::vector<int> input(n + 1);

    for (i = 0; i < n; i++) {
        scanf("%d", &tmp);
        input.push_back(tmp);
    }
        printf("11111\n");
    sort(input.begin(), input.end());
    min_idx = 0;
    max_idx = n-1;
    printf("zz");
    while (min_idx <= max_idx) {
        min_idx = (min_idx + max_idx) / 2;
        if (input[mid_idx] == target) {
            printf("%d\n", mid_idx + 1);
            return 0;
        }
        else if (input[mid_idx] > target) {
            max_idx = mid_idx -1;
        }
        else min_idx = mid_idx + 1;
        
        // if (input[mid_idx] > target) {
        //     max_idx = mid_idx - 1;
        // }
        // else if (input[mid_idx] < target) {
        //     min_idx = mid_idx + 1;
        // }
        // else {
        //     printf("%d", mid_idx + 1);
        //     return 0;
        // }
    }
    
    return 0;
}