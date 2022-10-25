#include <iostream>
using std::cout; using std::endl;

class Hmm {
    public:
    Hmm() {cout << "default" << endl; }
    Hmm(const Hmm& other) { cout << "copy" << endl;}
    Hmm(Hmm&& other) { cout << "move" << endl; }
    Hmm& operator=(const Hmm& other) { 
        cout << "copy operator" << endl; return *this;
    }
    Hmm& operator=(Hmm&& other) {
        cout << "move operator" << endl; return *this;
    }
};

int main() {
    Hmm a; //default
    Hmm b = a;  //copy
    a = b; // calling copy assignemt operator. returns reference to the changed object!
    Hmm c = std::move(a); //move
    c = std::move(b); //move operator
    return 0;
}