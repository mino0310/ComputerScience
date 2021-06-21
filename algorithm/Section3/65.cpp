#include <iostream>

using namespace std;
int map[8][8], check[8][8], x = 1, y = 1, cnt, call_num;
int dx[5] = {0, -1, 0, 1};
int dy[5] = {-1, 0, 1, 0};

void dfs(int x, int y)
{
    // if (check[x][y] == 1) return ;
    // if (map[x][y] == 1) return 
    if (x < 1 || x > 7 || y < 1 || y > 7) return ;
    if (x == 7 && y == 7) {
        cnt++;
        return ;
    }
    for (int i = 0; i < 4; i++) {
        int nx, ny;
        nx = x + dx[i];
        ny = y + dy[i];
        // if (x < 1 || x > 7|| y < 1 || y > 7) continue;
        if (!map[x][y] && !check[nx][ny]) {
            check[nx][ny] = 1;
            map[nx][ny] = 5;
            for (int k = 1; k <= 7; k++) 
            {
                for (int l = 1; l <= 7; l++) {
                    cout << map[k][l] << " ";
                }
                cout << endl;
            }
            cout << endl;
            // cout << "x = " << nx << " y = " << ny << endl;
            dfs(nx, ny);
            map[nx][ny] = 0;
            // check[nx][ny] = 0;
        }
        // check[nx][ny] = 0;
    }

}

int main(void)
{
    int i, j;
    // printf("zzzz");

    for (i = 1; i <= 7; i++){
        for (j = 1; j <= 7; j++)
        {
            cin >> map[i][j];
        }
    }
    // printf("??");
    map[7][7] = 3;
    map[1][1] = 2;
    // check[1][1] = 1;
    dfs(1, 1);
    cout << cnt << endl;

    // for (int k = 1; k <= 7; k++) 
    // {
    //     for (int l = 1; l <= 7; l++) {
    //         cout << check[k][l] << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}