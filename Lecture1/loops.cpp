#include <iostream>
#include <vector>

int main (int argc, char const *argv[]) {
    const int kIterCount = 10;
    
    //regular for loop
    for (int i = 0; i < kIterCount; ++i) {
        std::cout << i << std::endl;
    }

    //range for loop
    std::vector<float> vec = {1.1f, 2.1f};
    for (const auto& num : vec) {
        std::cout << num << std::endl;
    }
}

