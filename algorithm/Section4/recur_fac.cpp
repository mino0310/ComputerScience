#include <iostream>

using namespace std;

int factorial(int a)
{
    if (a == 1) return 1;
    else {
        return a * factorial(a - 1);
    }
}

int combination(int n, int r)
{
    if (n == r || r == 0) return 1;
    else{
        return combination(n-1, r-1) + combination(n-1, r);
    }
}

int main(void)
{
    int n, r;
    cin >> n >> r;
    cout << combination(n, r) << endl;

    return 0;
}


/*
int main(void)
{
    int n, res, r;

    cin >> n >> r;

    res = (factorial(n) / factorial(n - r)) / factorial(r);

    cout << res << endl;

    return 0;
}
*/