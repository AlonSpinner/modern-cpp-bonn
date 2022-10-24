#include <cmath>
#include <iostream>
using std::cout; //Explicity use cout
using std::endl; //Explicity use endl

double pow(double x, int exp) {
    double res = 1.0;
    for (int i = 0; i < exp; i++) {
        res *= x;
    }
    return res;
}

int main () {
    double x = 2.0;
    int power = 2;
    double res = pow(x, power);
    cout << "The result of " << x << " to the power of " << power << " is " << res << endl;
}