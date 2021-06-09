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
    
<<<<<<< HEAD
    DFS(1);

=======
    cout << " ";
>>>>>>> 2ba986809e659b3477ca4f6851f323950af67f8c
    return 0;
}