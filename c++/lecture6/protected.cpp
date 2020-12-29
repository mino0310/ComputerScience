#include <iostream>
#include <string>

class Base {
    public:
    std::string parent_string;

    Base() : parent_string("기반") { std::cout << "기반 클래스" << std::endl; }

    void what() { std::cout << parent_string << std::endl; }
};

class Derived : private Base {
    std::string child_string;

    public:
    Derived() : child_string("파생"), Base() {
        std::cout << "파생 클래스" << std::endl;

        // 그렇다면 현재 private 인 Base의 parent_string 에 접근할 수 있을까?
    }

    void what() { std::cout << child_string << std::endl; }
};

int main() {
    Base p;

    std::cout << p.parent_string << std::endl;

    Derived c;
    std::cout << c.parent_string << std::endl;

    return 0;
}