#include <iostream>
#include <string>
using namespace std; //save space on slides

//overload Print functions to see types
void Print(const string& str) {
    cout << "lvalue: " << str << endl;
}
void Print(string&& str) {
    cout << "rvalue: " << str << endl;
}

int main() {
    string hello = "hi";
    Print(hello);
    Print("world");
    Print(std::move(hello));
    // DO NOT access "hello" after move!
    return 0;
}