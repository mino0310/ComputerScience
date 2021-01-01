// a
#include <fstream>
#include <iostream>
#include <string>

int main() {
    // 두 파일에는 모두 abc라고 써 있다.
    std::ofstream out("test.txt", std::ios::app);
    std::ofstream out2("test2.txt", std::ios::ate);

    out.seekp(3, std::ios::beg);
    out2.seekp(3, std::ios::beg);

    out << "plus";
    out2 << "plus";

    return 0;
}