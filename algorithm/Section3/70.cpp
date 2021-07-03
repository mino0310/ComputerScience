#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int n, check[21], sum, cnt = 1, min_val[21];
vector<int> adj_list[21];

<<<<<<< HEAD
vector<int> adj_list[21];
int check[21], min_edge[21];


void bfs(int node) {
    queue<int> q;
    q.push(node);

    while (!q.empty()){
        int x = q.front();
        q.pop();
        check[x] = 1;
        for (int i = 0; i < adj_list[x].size(); i++) {
            cout << 
            if (!check[adj_list[x][i]]){
                q.push(adj_list[x][i]);
                check[adj_list[x][i]] = 1;
                // cout << "min = " << x << endl;
                min_edge[i] = min_edge[x] + 1;
            }
        }
    }
}

int main(void)
{
    int n, m, i, node, linked_node;

    cin >> n >> m;
    for (i = 0; i < m; i++) {
        cin >> node >> linked_node;
        adj_list[node].push_back(linked_node);
    }
    bfs(1);
    for (i = 2; i <= n; i++) {
        cout << i << " : " << min_edge[i] << endl;
    }
=======
void bfs(int node)
{
    queue<int> q;
    int i;
    q.push(node);
    check[node] = 1;
>>>>>>> 64a352870abed16c4266cbf83889fea0c2806863
    
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        for (i = 0; i < adj_list[x].size(); i++)
        {
            if(check[adj_list[x][i]] == 0)
            {
                q.push(adj_list[x][i]);
                check[adj_list[x][i]] = 1;
                min_val[adj_list[x][i]] = min_val[x] + 1;
            }
        }
    }
}

int main(void)
{
    int m, i, j, node, linked_node;

    cin >> n >> m;
    for (i = 0; i < m; i++)
    {
        cin >> node >> linked_node;
        adj_list[node].push_back(linked_node);
    }
    bfs(1);
    for (i = 2; i <= n; i++)
    {
        cout << i << " : " << min_val[i] << endl;
    }
    return 0;
}