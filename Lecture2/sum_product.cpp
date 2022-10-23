#include <vector>
#include <iostream>
#include <numeric>
using namespace std;

int main() {
    const vector<float> v = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    float sum = accumulate(v.begin(), v.end(), 0.0f);
    float product = accumulate(v.begin(), v.end(), 1.0f, multiplies<float>());

    cout << "sum: " << sum << endl;
    cout << "product: " << product << endl;
}
