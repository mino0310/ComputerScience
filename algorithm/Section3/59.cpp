#include <iostream>
#include <stack>

using namespace std;
int n;

void D(int v)
{
    if (v > n) return ;
    cout << v << " ";
    D(2*v);
    D(2*v + 1);
}


int main(void)
{
    cin >> n;
    for (int i = 1; i <= 3; i++)
    {
        D(i);
        cout << endl;
    }
    
    return 0;
}