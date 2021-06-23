#include <iostream>

using namespace std;

int adj_matrix[21][21], n, check[21], cnt;

void dfs(int node)
{

}


int main(void)
{
    int m, i, j, row, col, val;
    
    cin >> n >> m;
    for (i = 1; i <= m; i++) {
        cin >> row >> col >> val;
        adj_matrix[row][col] = val;
    }
    check[1];
    dfs(1);
    cout << cnt << endl;

    return 0;
}