#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;
int ch[30];

struct Edge {
    int e;
    int val;
    Edge(int a, int b){
        e = a;
        val = b;
    }
    bool operator<(const Edge &b)const {
        return val > b.val;
    }
};


int main(void)
{
    priority_queue<Edge> Q;
    vector<pair<int, int> > map[30];
    int i, n, m, a, b, c, res = 0;
    cin >> n >> m;
    for (i = 1; i <= m; i++)
    {
        cin >> a >> b >> c;
        map[a].push_back(make_pair(b, c));
        map[b].push_back(make_pair(a, c));
    }
    Q.push(Edge(1, 0));
    while(!Q.empty())
    {
        Edge tmp = Q.top();
        Q.pop();
        int v = tmp.e;
        int cost = tmp.val;
        if (ch[v] == 0) {
            res += cost;
            ch[v] = 1;
            for (i = 0; i < map[v].size(); i++)
            {
                Q.push(Edge(map[v][i].first, map[v][i].second));
            }
        }
    }
    cout << res << endl;

    return 0;
}