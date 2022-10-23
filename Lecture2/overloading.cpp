#include <iostream>
#include <string>
using namespace std;

string Func(int num) {return "int";}
string Func(const string& str) {return "string";}
string Func(int num, const string& str) {return "int-string";}

int main() {
    cout << Func(1) << endl;
    cout << Func("Hello") << endl;
    cout << Func(1, "Hello") << endl;
    return 0;
}