#include <iostream>
using namespace std;

int main()
{
    int some_number;
    std::cin >> some_number;
    std::cout << "number = " << some_number << std::endl;
    std::cerr << "boring error message" << std::endl;
    return 0;
}