#include <iostream>

using namespace std;

int  input[11], n, total_sum;

void DFS(int w) {
    int  tmp_sum = 0;
    cout << w << " DFS RUN!" << endl;
    if (w == 3) return  ;

    if (*(input) == 0) {
        if (total_sum == 2*tmp_sum)
        {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
        return ;
    }
    else {
        tmp_sum += input[w];
        cout << "new DFS" << endl;
        input += 1;
        DFS(*(input));
        tmp_sum -= input[w];
        cout << "new no DFS" << endl;
        DFS(*(input++));
    }
}

int  main(void)
{
    int i, flag = 0;
    cin >> n;

    for  (i = 0; i < n; i++) 
    {
        cin >> input[i];
        total_sum  += input[i];
    }

    DFS(input[0]);

    return 0;
}

/* 
일단  두개의 부분 집합으로 나누어야 한다. 
그 다음 두  부분집합의 원소의 합을 구해서 비교한다.
같은 경우가 하나라도 있으면 YES 모두 다르면 NO를 출력한다. 

*/