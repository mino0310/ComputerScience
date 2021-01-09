#include <iostream>

// 재귀 호출 종료를 위한 베이스 케이스 
/*
int sum_all() { return 0; }

template <typename... Ints>
int sum_all(int num, Ints... nums) {
    return num + sum_all(nums...);
}

template <typename... Ints>
double average(Ints... nums) {
    return static_cast<double>(sum_all(nums...)) / sizeof...(nums);
}*/

template <typename... Ints>
int sum_all(Ints... nums) {
    return (... + nums);
}

template <typename Int, typename... Ints>
Int diff_from(Int start, Ints... nums) {
    return (start - ... - nums);
}

int main() {
    std::cout << diff_from(100, 1, 4, 2, 3, 10) << std::endl;
}