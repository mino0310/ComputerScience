#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
int arr_check(int arr[], int len, int val);

int main(void)
{
    int n, input, i, in_cnt = 0, out_cnt = 0;
    stack<int> s;

    cin >> n;
   int arr[40] = {0, };
   i = 1;
   int j = 0;
   for (int j = 0; j < n; j++)
       cin >> arr[j];
   j = 0;
   while (1) {
       if (s.empty() || s.top() != i) {
           s.push(arr[j++]);
           cout <<"P";
           in_cnt++;
       } else if (s.top() == i) {
           cout << "O";
           s.pop();
           i++;
           out_cnt++;
       }
       else {
           cout << "impossible" << endl;
           break;
       }
       if (out_cnt == n) break;
       int k = 0;
   }
    return 0;
}

int arr_check(int arr[], int len, int val) {
    int i; 

    for (i = 0; i < len; i++) {
        if (arr[i] == val) {
            return 1;
        }
    }
    return 0;
}


/* 
문제의 요구사항은 무엇인가?


숫자를 정렬할 수 있느냐를 묻는 것

자료구조는 스택을 사용

정렬에 사용하는 연산은
스택에 넣고, 스택에서 빼내고 
이 두가지밖에 없다.

교차로를 그냥 지나칠 수는 없다.
무조건 들어가야 한다. 

어렵지 않다. 반복문처럼하면 될 것 같은데?


i = 1 부터 시작 ~ n까지 반복 (같은 행위를 계속)

1이 나올 때까지 push 값이 1까지 push, 1도 push
1이 스택의 상단에 올라올 때까지라고 보면 되겠다.
top 이 1이라면 pop, 

*/
