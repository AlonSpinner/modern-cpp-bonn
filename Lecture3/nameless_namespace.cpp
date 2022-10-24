#include <iostream>
using std::cout;
using std::endl;

namespace { //only seen in this file
    const int kLocalImportantInt = 13;
    const float kLocalImportantFloat = 13.0f;
}

int main() {
    cout << "Important Int: " << kLocalImportantInt << endl
    << "Important Float: " << kLocalImportantFloat << endl;
    return 0;
}