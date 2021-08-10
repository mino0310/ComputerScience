#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n, m, city_distance, home_distance;
int map[51][51], check[51][51], min_map[51][51];
vector<pair<int, int> > P, H, RES(15);

int deliery_distance(int x1, int y1, int x2, int y2)
{
    return (abs(x1 - x2) + abs(y1 - y2));
}

void DFS(int s, int L)
{
    if (L == r)
    {
        for (int j = 0; j < L; j++)
        {
            for (int k = 0; k < H.size(); k++)
            {
            }
        }
        return ;
    }

    else{
        for (int i = s; i < n; i++)
        {   
            RES[i].first = P[i].first;
            RES[i].second = P[i].second;
            DFS(i + 1, L + 1);
        }
    }
}

int main(void)
{
    int i, j, tmp;
    cin >> n >> m;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin >> map[i][j];
            if (map[i][j] == 2) {
                P.push_back(make_pair(i, j));
            }
            else if (map[i][j] == 1) {
                H.push_back(make_pair(i, j));
            }
        }
    }
    DFS(0, 0);
    cout << city_distance << endl;
    return 0;
}


