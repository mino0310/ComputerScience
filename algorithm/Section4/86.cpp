#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n, m;
int map[51][51], check[51][51];

int deliery_distance(int x1, int y1, int x2, int y2)
{
    return (abs(x1 - x2) + abs(y1 - y2));
}

int main(void)
{
    int i, j;
    cin >> n >> m;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin >> map[i][j];
        }
    }
    return 0;
}