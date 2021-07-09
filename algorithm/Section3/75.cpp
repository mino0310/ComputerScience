#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;



struct Loc {
    int day, money;
    Loc(int a, int b){
        money = a;
        day = b;
    }

    bool operator<(const Loc &b)const {
        return day < b.day;
    }
};


int main(void)
{
    int n, m, d, i;
    vector<Loc> time;
    priority_queue<Loc> PQ;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> m >> d;
        time.push_back(Loc(m, d));
    }
    sort(time.begin(), time.end());
    
    for (i = 0; i < n; i++)
    {
        cout << time[i].money << " " << time[i].day << endl;
    }
    return 0;
}