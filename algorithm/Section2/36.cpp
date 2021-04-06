#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
    int i, j, n, valueToSort;

    scanf("%d", &n);
    std::vector<int> arr(n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        j = i;
        valueToSort= arr[j];
        while (--j >= 0 && valueToSort < arr[j]) {
            arr[j + 1] = arr[j];
            arr[j] = valueToSort;
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}