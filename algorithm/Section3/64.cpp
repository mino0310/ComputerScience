#include <iostream>

int adj_matrix[21][21], cnt;
using namespace std;

void dfs(int n)
{
    
}


int main(void)
{
    int n, m, i, row, col;
    cin >> n >> m;

    for (i = 1; i <= m; i++) {
        cin >> row >> col;
        adj_matrix[row][col] = 1;
    }

    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++) {
            cout << adj_matrix[i][j] << " ";
        }
        cout << endl;
    }

    dfs(1);
    cout << cnt << endl;
    return 0;
}