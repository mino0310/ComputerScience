#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

int map[52][52];

int main(void)
{
    int map_size, i, j, cnt = 0;
    scanf("%d", &map_size);

    for (i = 1; i <= map_size; i++) {
        for (j = 1; j <= map_size; j++) {
            scanf("%d", &map[i][j]);
        }
    }
    for (i = 1; i <= map_size; i++) {
        for (j = 1; j <= map_size; j++) {
            if((map[i][j] > map[i-1][j]) && (map[i][j] > map[i + 1][j])
            && (map[i][j] > map[i][j - 1]) && (map[i][j] > map[i][j + 1])) {
                cnt++;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}

/*
상하좌우 체크를 해서 내가 상하좌우보다 크면은 봉우리가 된다. 이것은 뭔 의미지
내가 봉우리가 되면 어디에 영향을 주는 게 있나?
막 내 근처는 봉우리가 못되고 그게 중요하고?
배열을 두개 생성해서 봉우리가 된 인덱스를 가져오고 다른 배열의 그 인덱스의 값을 1로 줘버리면 되지 않나.
*/