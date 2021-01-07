#include <iostream>

template <typename T, int num = 5>
T add_num(T t){
    return t + num;
}

template <typename T, typename Comp>
T Min(T a, T b) {
    Comp comp;
    if (comp(a, b)) {
        return a;
    }
    return b;
}


int main() {
    int x = 3;
    std::cout << "x : " << add_num(x) << std::endl;
}