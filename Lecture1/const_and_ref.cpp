#include <string>
#include <iostream>

int main(int argc, char const *argv[]) {
    const std::string strConst = "Hello Const";
    std::string str = "Hello";
    std::string& str_ref = str;
    str = str + " World";

    std::cout << strConst << std::endl;
    std::cout << str_ref << std::endl;
    return 0;
}