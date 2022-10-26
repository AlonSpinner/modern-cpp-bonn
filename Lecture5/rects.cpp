#include <iostream>
using namespace std;
using std::cout; using std::endl;

class Printable {
    public:
     virtual void Print() const = 0;
};

class Rect : public Printable {
    public:
     Rect(int w, int h) : width_{w}, height_{h} {}
     virtual void Print() const { //virtual allows children to override
        cout << "rect: " << width_ << " " << height_ << endl;
     }
     int width() const { return width_; }
     int height() const { return height_; }

    protected: //children can't see private
     int width_ = 0;
     int height_ = 0;
};

class Square : public Rect{
    public:
     explicit Square(int size) : Rect(size, size) {} //explicit is syntactic sugar
     //"google style says that you should use explicit for single argument constructors"
     //need to check why
     void Print() const override { //override added in c++11, keeps you safe from typos
        cout << "square: " << width_ << " " << height_ << endl;
     }
};

int main(int argc, char const *arv[]) {
    Square square(9);
    square.Print();
    const Rect& rect_ref = square; //knows to use the Print from square
    rect_ref.Print();
    Rect rect(10,20);
    rect.Print();
    return 0;
}