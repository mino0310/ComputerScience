#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m, cnt;


void bfs(int start, int level)
{
    queue<int> q;
    q.push(start);

    while (!q.empty())
    {
        int x = q.front();
        if (x == m) 
        {
            cout << "zzzz\n";
            break ;
        }
        q.pop();
        q.push(x + 1);
        q.push(x - 1);
        q.push(x + 5);
    }
}

int main(void)
{
    cin >> n >> m;
    
    bfs(n, 0);
    
    cout << cnt << endl;

    return 0;
}