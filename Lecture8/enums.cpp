#include <iostream>
#include <string>
using namespace std;
enum class Channel {STDOUT, STDERR};
void Print(Channel print_style, const string& msg) {
    switch (print_style) {
        case Channel::STDOUT:
            cout << msg << endl;
            break;
        case Channel::STDERR:
            cerr << msg << endl;
            break;
        default:
            cout << "Unknown channel" << endl;
    }
}

int main() {
    Print(Channel::STDOUT, "Hello");
    Print(Channel::STDERR, "world");
    return 0;
}