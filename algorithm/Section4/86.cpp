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



// 사소한 것에서 단서를 찾아서 이를 키워나가면 된다. 
// 생각해보자. 구해야 하는 것은 일단 각 집에서 부터 피자집까지의 모든 거리임.
// 그 다음 그 거리 중 최소값(집의 피자배달거리)을 구해야 한다.
// 그 다음 그 최소값들의 합(도시의 피자배달거리)를 구해야 한다.
// M개의 피자집만 골라서 그 피자집으로 부터 나오는 도시의 피자배달거리를 구해야 하네

// 그러면 4개의 피자집을 골라야한다고 하면 4개의 칸이 주어지는 것이지.
// 그 칸중 하나를 고르고 거기에 해당하는 집들의 피자배달거리를 정하고
// 다른 칸을 고르고 거기에 해당하는 집들의 피자배달거리를 최소값 비교해서 갱신
// 세번째 칸을 고르고 거기에 해당하는 집들의 피자배달거리를 최소값 비교해서 갱신
// 마지막 칸을 고르고 거기에 해당하는 집들의 피자배달거리를 최소값 비교해서 갱신
// 피자집의 좌표값들은 따로 저장해두고 사용하는 게 좋지 않나.
// 이 좌표값들을 대상으로 모든 경우의 수를 계산하면 나올듯. DFS사용


