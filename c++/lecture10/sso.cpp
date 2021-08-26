#include <iostream>
#include <string>

void* operator new(std::size_t count)
{
    std::cout << count << " bytes 할당 " << std::endl;
    return malloc(count);
}

int main() {
    std::cout << "s1 created --" << std::endl;
    std::string s1 = "this is a pretty long sentence!!!";
    std::cout << "s1 size : " << sizeof(s1) << std::endl;

    std::cout << "s2 created ---" << std::endl;
    std::string s2 = "short sentence";
    std::cout << "s2 size : " << sizeof(s2) << std::endl;

  std::string str = R"foo(dfadf
  asdfsdaff
  asdf
    )foo";

  std::cout << str;

}
