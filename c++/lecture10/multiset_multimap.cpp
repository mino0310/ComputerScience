#include <iostream>
#include <map>
#include <set>
#include <string>
/*
template <typename K>
void print_set(const std::multiset<K>& s) {
    // 셋의 모든 원소를 출력
    for (const auto& elem : s) {
        std::cout << elem << std::endl;
    }
}

int main() {
    std::multiset<std::string> s;

    s.insert("a");
    s.insert("b");
    s.insert("a");
    s.insert("c");
    s.insert("d");
    s.insert("c");

    print_set(s);    
}*/

template <typename K, typename V>
void print_map(const std::multimap<K, V>& m) {
    // 맵의 모든 요소 출력하기
    for (const auto& kv : m) {
        std::cout << kv.first << " " << kv.second << std::endl;
    }
}

int main() {
    std::multimap<int, std::string> m;
    m.insert(std::make_pair(1, "hello"));
    m.insert(std::make_pair(1, "hi"));
    m.insert(std::make_pair(1, "ahihi"));
    m.insert(std::make_pair(2, "bye"));
    m.insert(std::make_pair(2, "baba"));

    print_map(m);

    std::cout << "----------------" << std::endl;
    std::cout << m.find(1)->second << std::endl;
}