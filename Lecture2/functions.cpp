#include <iostream>
using namespace std;

int Sum(int a, int b); // declaration of function, not nessasary to put it here, is nice

int main()
{
    cout << Sum(1, 2) << endl;
    return 0;
}

int Sum(int a, int b)
{
    return a + b;
}