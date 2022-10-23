#include <vector>
#include <iostream>
using namespace std;

vector<int> CreateVectorOfFullSquares(int size){
    vector<int> result(size); //vetor of size 'size'
    for (int i = 0; i < size; i++){
        result[i] = i * i;
    }
    return result;
}

int main() {
    auto squares  = CreateVectorOfFullSquares(10);
    cout << squares.front() << endl;
    cout << squares.back() << endl;
    return 0;
}