#include <iostream>
#include <string.h>
class string {
    char *str;
    int len;

    public:
    string(char c, int n); // 문자 c 가 n 개 있는 문자열로 정의
    string(const char *s);
    string(const string &s);
    ~string();

    void print_string(const string &s);
    //void add_string(const string &s);
    //void copy_string(const string &s);
    int strlength();
};

void string::copy_string(const string &s)

int string::strlength(){
    return len;
}

string::string(const char *s) {
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    }

string::string(char c, int n) {
    int i;
    str = new char[n + 1];
    for (i = 0; i < n; i++) {
        str[i] = c;
    }
    str[i] = '\0';

    len = i - 1;
}

string::string(const string &s) {
    len = s.len;
    str = new char[len + 1];
    strcpy(str, s.str);
}

string::~string() {
    if (str) delete[] str;
}

void string::print_string(const string &s) {
    std::cout << "str is " << s.str << std::endl;
}

int main() {
    string mino("minogoood");
    string mino2 = mino;
    mino.print_string(mino2);
    std::cout << "len is " << mino2.strlength() << std::endl;
    return 0;
}