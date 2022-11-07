#pragma once
#include <vector>
namespace igg {

  class Image {
  public:
    Image();
    Image(int rows, int cols);
    
    const int at(int row, int col) const; //getter function
    int& at(int rows, int cols); // setter function

  private:
    const int rows_ = 0;
    const int cols_ = 0;
    const int max_val_ = 255;
    std::vector<int> data_;
  }; // class Image

};  // namespace igg
