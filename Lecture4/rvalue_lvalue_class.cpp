#include <iostream>
#include <string>
using namespace std; //save space on slides

class Printer {
    public:
    void Print(const string& str) {
        // some_str = str;
        cout << "lvalue: " << str << endl;
    }
    void Print(string&& str) {
        cout << "rvalue: " << str << endl;
        some_str = std::move(str);
    }

    private:
    string some_str;

};

//overload Print functions to see types
int main() {
    string hello = "hi";
    Printer printer;
    printer.Print(hello);
    printer.Print("world");
    printer.Print(std::move(hello));
    // DO NOT access "hello" after move!
    cout << "after move: " << hello << endl;
    return 0;
}