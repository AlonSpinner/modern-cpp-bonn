
#include "image.h"

namespace igg{
    Image::Image() {}; //default constructor
    Image::Image(int rows, int cols) : rows_{rows}, cols_{cols} //non default constructor
     {data_.reserve(rows * cols + 1);}

    //getter function
    const int Image::at(int rows, int cols) const {
        return data_[rows * cols_ + cols];
    }
    //setter function. 
    //his returns a pointer to the element at the specified location
    //we then change the value in the reference
    int& Image::at(int rows, int cols) {
        return data_[rows * cols_ + cols];
    }

}
