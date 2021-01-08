// INDEX SIZE 는 인덱스 테이블의 크기, n은 전체 데이터의 수

#define INDEX_SIZE 256
typedef struct {
    int key;
    int index;
} itable;
itable index_list[INDEX_SIZE];

int seq_search(int key, int low, int high)
{
    int i;

    for (i = low; i <= high; i++) {
        if (list[i] == key)
            return i;
    }
    return -1;
}

int search_index(int key, int n)
{
    int i, low, high;

    // 키 값이 리스트 범위 내의 값이 아니면 탐색 종료
    if (key < list[0] || key > list[n - 1])
        return -1;
    
    // 인덱스 테이블을 조사하여 해당 키의 구간 결정
    for (i = 0; i < INDEX_SIZE; i++){
        if (index_list[i].key <= key && index_list[i + 1].key > key)
            break;
    }
    if (i == INDEX_SIZE) {
        low = index_list[i - 1].index;
        high = n;
    }
    else {
        low = index_list[i].index;
        high = index_list[i + 1].index;
    }
    return seq_search(key, low, high);
}