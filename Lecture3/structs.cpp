#include <iostream>
#include <string>
using namespace std;

struct NamedInt {
    int num;
    string name;
};

void PrintStruct(const NamedInt& s) {
    cout << s.name << ": " << s.num << endl;
}

int main(int argc, char const* argv[]) {
    NamedInt var = {1, "hello"};
    PrintStruct(var);
    PrintStruct({10, "world"});
    return 0;
}