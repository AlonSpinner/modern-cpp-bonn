#include <string>
using namespace std;

void DoSmth(const string& huge_string) {
    //pass const by reference for non-basic types
    // the const makes sure that the function wont change the values of the object
    string even_bigger = huge_string + "a";
}

int main()
{
    string s = "Hello";
    DoSmth(s);
    return 0;
}