#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>

int main(void)
{
    int res, i, j, tmp, stall_num, horse_num, max_dst = 0, lt = 0, rt;

    scanf("%d %d", &stall_num, &horse_num);
    std::vector<int> stall_pos;
    
    for (i = 1; i <= stall_num; i++) {
        scanf("%d", &tmp);
        stall_pos.push_back(tmp);
    }
    sort(stall_pos.begin(), stall_pos.end());

    rt = stall_num - 1;

    

    // for (i = 0; i < stall_num; i++) {
    //     printf("%d ", stall_pos[i]);
    // }
    // printf("\n");


    // rt = stall_num;

    return 0;
}

/*
문제에서 요구하는 개념은 무엇인가 ?

두 마구간 사이의 최소 거리를 한 값으로 결정해버리고 이분 탐색으로 옳은 값을 찾아나가면 되지 않나.

그 값은 순차적으로 정렬된 상태에서 찾아나가면 되는 것이니까.


*/
