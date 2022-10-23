#include <iostream>
using namespace std;

int Sum(int a, int b = 10); //default values only in declaration

int main()
{
    cout << Sum(1) << endl;
    return 0;
}

int Sum(int a, int b)
{
    return a + b;
}