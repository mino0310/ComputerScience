#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>

template <typename K>
void print_unordered_set(const std::unordered_set<K>& m) {
    // 셋의 모든 원소를 출력
    for (const auto& elem : m) {
        std::cout << elem << std::endl;
    }
}


int main() {
    std::unordered_set<std::string> s;

    s.insert("hi");
    s.insert("my");
    s.insert("name");
    s.insert("is");
    s.insert("psi");
    s.insert("welcom");
    s.insert("to");
    s.insert("c++");

    print_unordered_set(s);

}