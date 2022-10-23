#include <iostream>
#include <string>

int main() {
    std::string hello = "Hello";
    
    std::cout << "Type your name:" << std::endl;
    
    std::string name = "";
    std::cin >> name;
    std::cout << hello + ", " + name + "!" << std::endl;
    return 0;
}