#include <iostream>
#include <vector>

int main(int argc, char const *argv[]) {
    std::vector<int> vec = {1,2};
    std::cout << "Size: " << vec.size() << std::endl;
    vec.emplace_back(3);
    std::cout << "Size: " << vec.size() << std::endl;
    std::cout << vec.front() << " " << vec.back() << std::endl;
    return 0;
}