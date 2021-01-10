#define KEY_SIZE 10     // 탐색 키의 최대길이
#define TABLE_SIZE 13   // 해싱 테이블의 크기 = 소수
#define empty(item) (strlen(item.key) == 0)
#define equal(item1, item2) (!strcmp(item1.key, item2.key))
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct {
    char key[KEY_SIZE];
    //다른 필요한 필드들
} element;

element hash_table[TABLE_SIZE]; // 해싱 테이블

void init_table(element ht[])
{
    int i;
    for (i = 0; i < TABLE_SIZE; i++) {
        ht[i].key[0] = NULL;
    }
}

// 문자로 된 키를 숫자로 변환
int transform(char *key)
{
    int number = 0;
    while (*key)
        number = 31 * number + *key++;
    return number;
}

// 제산 함수를 사용한 해싱 함수
int hash_function(char *key)
{
    // 키를 자연수로 변환한 다음 테이블의 크기로 나누어 나머지를 반환
    return transform(key) % TABLE_SIZE;
}

// 선형 조사법을 이용하여 테이블에 키를 삽입하고, 테이블이 가득찬 경우는 종료
void hash_lp_add(element item, element ht[])
{
    int i, hash_value;
    hash_value = i = hash_function(item.key);
    while (!empty(ht[i])) {
        if (equal(item, ht[i])) {
            fprintf(stderr, "탐색 키가 중복되었습니다\n");
            exit (1);
        }
        i = (i + 1) % TABLE_SIZE;
        if (i == hash_value) {
            fprintf(stderr, "테이블이 가득 찼습니다.");
            exit(1);
        }
    }
    ht[i] = item;
}

void hash_qp_add(element item, element ht[])
{
    int i, hash_value, inc = 0;
    hash_value = i = hash_function(item.key);
    while (!empty(ht[i])) {
        if (equal(item, ht[i])) {
            fprintf(stderr, "탐색 키가 중복되었습니다\n");
            exit (1);
        }
        i = (hash_value + inc * inc) % TABLE_SIZE;
        inc = inc + 1;
        if (i == hash_value) {
            fprintf(stderr, "테이블이 가득 찼습니다.");
            exit(1);
        }
    }
    ht[i] = item;
}

// 선형조사법을 이용하여 테이블에 저장된 키를 탐색
void hash_lp_search(element item, element ht[])
{
    int i, hash_value;
    hash_value = i = hash_function(item.key);
    while (!empty(ht[i]))
    {
        if (equal(item, ht[i])) {
            fprintf(stderr, "탐색 %s: 위치 = %d\n", item.key, i);
            return;
        }
        i = (i + 1) % TABLE_SIZE;
        if (i == hash_value) {
            fprintf(stderr, "찾는 값이 테이블에 없음 \n");
            return ;
        }
    }
    fprintf(stderr, "찾는 값이 테이블에 없음 \n");
}

void hash_dp_add(element item, element ht[])
{
    int i, hash_value, inc = 0;
    hash_value = i = hash_function(item.key);
    inc = hash_function(item.key);
    while (!empty(ht[i])) {
        if (equal(item, ht[i])) {
            fprintf(stderr, "탐색 키가 중복되었습니다\n");
            exit (1);
        }
        i = (i + inc) % TABLE_SIZE;
        if (i == hash_value) {
            fprintf(stderr, "테이블이 가득 찼습니다.");
            exit(1);
        }
    }
    ht[i] = item;
}

// 해싱 테이블의 내용을 출력
void hash_lp_print(element ht[])
{
    int i;
    printf("\n====================\n");
    for (i = 0; i < TABLE_SIZE; i++)
        printf("[%d] %s\n", i,  ht[i].key);
    printf("====================\n\n");
}

// 해싱 테이블을 사용한 예제
int main(void) {
    char *s[7] = { "do", "for", "if", "case", "else", "return", "function" };
    element e;

    for (int i = 0; i < 7; i++) {
        strcpy(e.key, s[i]);
        hash_lp_add(e, hash_table);
        hash_lp_print(hash_table);
    }
    for (int i = 0; i < 7; i++) {
        strcpy(e.key, s[i]);
        hash_lp_search(e, hash_table);
    }
}