#include <iostream>
#include <vector>

using namespace std;


vector<int> adj_list[21], check_list[21];

int n, cnt;


void dfs(int node)
{
    // cout << "zz" << endl;
    if (node == 5) {
        cnt++;
        return ;
    }
    else {
        // cout << "zzzz\n";
        for (int i = 1; i <= adj_list[node].size(); i++) {
            // cout << "where?\n";
            if (adj_list[node][i] == 0 && !check_list[node][i]) {
                cout << "now!\n";
                check_list[node][i + 1] = 1;
                dfs(i + 1);
                check_list[node][i + 1] = 0;
            }
        }
    }
}

int main(void)
{
    int node, edge, linked_node, i;
    cin >> n >> edge;
    for (i = 1; i <= edge; i++){
        cin >> node >> linked_node;
        adj_list[node].push_back(linked_node);
        check_list[node].push_back(0);
    }
    dfs(1);

    // for (i = 1; i <= n; i++) {
    //     cout << i << " i " << endl;
    //     for (int j = 0; j < adj_list[i].size(); j++) {
    //         cout << adj_list[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << cnt << endl;
    return 0;
}

// #include <iostream>
// #include <utility>
// #include <vector>

// using namespace std;

// vector<pair<int, int> > graph[3];

// int main(void)
// {
//     graph[0].push_back({1, 7});
//     graph[0].push_back({2, 5});
//     graph[1].push_back({0, 7});
//     graph[2].push_back({0, 5});

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < graph[i].size(); j++)
//         {
//             cout << '(' << graph[i][j].first << ',' << graph[i][j].second << ')' << ' ';
//         }
//         cout << "\n";
//     }
//     return 0;
// }
