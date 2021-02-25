#include <stdio.h>
#include <iostream>
#include <algorithm>

int my_strlen(char arr[]);
void cnt_check(char input[], int cnt[]);

int cnt_1[100];
int cnt_2[100];

int main(void)
{
    int i, j, len_1 = 0;
    char input1[101]= {0, }, input2[101] = {0, };
    scanf("%s", input1);
    scanf("%s", input2);
    len_1 = my_strlen(input1);

    cnt_check(input1, cnt_1);
    cnt_check(input2, cnt_2);

    for (i = 0; i < len_1; i++){
        if (cnt_1[i] != cnt_2[i]){
            printf("NO\n");
            exit(0);
        }
    }
    printf("YES\n");
    return 0;
}

void    cnt_check(char input[], int cnt[])
{
    int i;
    for (i = 0; input[i]; i++){
        if (input[i] >= 'a' && input[i] <= 'z'){
            cnt[input[i] - 'a']++;
        }
        else if( input[i] >= 'A' && input[i] <= 'Z') {
            cnt[input[i] - 'A']++;
        }
    }
}

int my_strlen(char arr[]){
    int len = 0;

    while (*arr){
        len++;
        arr++;
    }
    return (len);
}
// 첫 단어 입력, 두번째 단어 입력

// 문자열 속 구성 문자의 개수가 같으면 "yes" 다르면 "no"

// 핵심은 문자열의 문자를 하나씩 끄집어 내서 문자의 개수를 세는 것. 

// 알파벳 개수 52 개(소문자 26 + 대문자 26)

// A 65 a 97

