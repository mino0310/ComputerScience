#include <iostream>

int a[11], n, m, cnt, path[11];

using namespace std;

void dfs(int l, int val) {
    if (l == n + 1) {
        if (val == m) {
            cnt++;
            for (int i = 1; i < l; i++) {
                cout << path[i] << " ";
            }
            cout << endl;
            
        }
    }
    else {
        path[l] = a[l];
        dfs(l + 1, val + a[l]);
        path[l] = -a[l];
        dfs(l + 1, val - a[l]);
        path[l] = 0;
        dfs(l + 1, val);
    }
}

int main(void) {
    int i;
    cin >> n >> m;
    for (i = 1; i <= n; i++) {
        cin >> a[i];
    }
    dfs(1, 0);
    if (cnt == 0) cout << -1 << endl;
    else cout << cnt << endl;
    return 0;
}

