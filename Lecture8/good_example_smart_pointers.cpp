#include <iostream>
#include <memory>
#include <vector>

using std::cout; using std::unique_ptr;
struct AbstractShape { // strcuts to save space
    virtual void Print() const = 0;
};

struct Square : public AbstractShape {
    void Print() const override { cout << "Square\n"; }
};

struct Triangle : public AbstractShape {
    void Print() const override { cout << "Triangle\n"; }
};

int main() {
    std::vector<unique_ptr<AbstractShape>> shapes;
    shapes.emplace_back(new Square);
    shapes.emplace_back(std::make_unique<Square>()); //c++14
    auto triangle = unique_ptr<Triangle>(new Triangle); //c++11
    shapes.emplace_back(std::move(triangle));
    for (const auto& shape : shapes) {
        shape->Print();
    }
    return 0;
}