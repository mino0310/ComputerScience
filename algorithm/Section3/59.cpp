#include <iostream>

using namespace std;
int n, check[11];

void DFS(int v)
{
    if (v == n + 1) {
        for (int i = 1; i <= n; i++) {
            if (check[i]) {
                cout << i << " ";
            }
        }
        cout << endl;
        return ;
    }
    else {
        check[v] = 1;
        DFS(v+1);
        
        check[v] = 0;
        DFS(v+1);
    }
}

int main(void)
{
    cin >> n;
    
    DFS(1);

    return 0;
}