#include <string>
#include <vector>
#include <iostream>


// for debugging:
// https://www.youtube.com/watch?v=G9gnSGKYIg4&ab_channel=VisualStudioCode
int main()
{
    std::vector<std::string> vec;
    const int kIterNum = 10;

    vec.reserve(kIterNum); // ensures there are enough memory for 100 elements, can be approximated

    for (int i = 0; i < kIterNum; ++i)
    {
        vec.emplace_back("Hello");
    }

    // https://stackoverflow.com/questions/10750057/how-do-i-print-out-the-contents-of-a-vector
    for (const auto& str : vec)
    {
        std::cout << str << std::endl;
    }

    return 0;
}