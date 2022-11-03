#include <iostream>
#include <random>
#include <string>

int main() {
    const int N_MAX = 10;
    const int N_MIN = 0;
    //from https://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution
    std::random_device rd;  //Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    std::uniform_int_distribution<> distrib(N_MIN, N_MAX);
    const int number = distrib(gen);
    
    std::cout << "Guess a number between " << N_MIN <<" and " << N_MAX << ":\n";

    int guess = -1;
    while (guess != number) {
        std::cin >> guess;
        if (guess > number) {
            std::cout << "Too high!\n";
        }
        else if (guess < number) {
            std::cout << "Too low!\n";
        }
        else {
            std::cout << "Correct!\n";
        }
    }
    return 0;
}