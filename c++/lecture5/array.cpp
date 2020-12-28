#include <iostream>

class Array {
    const int dim;  // 몇 차원 배열인지
    int *size;      // size[0] * size[1] * ... * size[dim - 1] 짜리 배열이다.

    struct Address {
        int level;
        // 맨 마지막 레벨 (dim - 1 레벨)은 데이터 배열을 가리키고, 그 위 상위
        // 레벨에서는 다음 Address 배열을 가리킨다.
        void* next;
    };
    Address* top;

    public:
    Array(int dim, int *array_size) : dim(dim);
    
    // address를 초기화하는 함수다. 재귀 호출로 구성되어 있다.
    void initialize_address(Address *current);

    void delete_address(Address *current);
};

Array::Array(int dim, int* array_size) : dimm {
    size = new int[dim];
    for (int i = 0; i < dim; i++) size[i] = array_size[i];
    top = new Address;
    top->level = 0;

    initialize_address
}

void Array::initiallize_address(Address *current) {
    if (!current) return ;
    if (current->level == dim - 1) { // 두 번째 질문 (종료 조건)
        current->next = new int[size[current->level]];
        return ;
    }
    current->next = new Address[size[current->level]];
    for (int i = 0; i != size[current->level]; i++) {
        (static_cast<Address *>(current->next) + i)->level = current->level + 1;
        initialize_address(static_cast<Address *>(current->next) + i);
    }
}

void Array::delete_address(Address *current) {
    if (!current) return;
    for (int i = 0; current->level < dim - 1 && i < size[current->level]; i++) {
        delete_address(static_cast<Address *>(current->next) + i);
    }
    delete[] current->next;
}
