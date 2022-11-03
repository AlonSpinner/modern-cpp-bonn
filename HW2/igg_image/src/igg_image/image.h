#pragma once

#include <vector>

namespace igg {

  class Image {
  public:
    Image(){};
    Image(int rows, int cols);

    const int at(int row, int col) const;
    // int& at(int row, int col) //setter function

  private:
    int rows_ = 0;
    int cols_ = 0;
    int max_val_ = 255;
    std::vector<int> data_;
  }; // class Image

}  // namespace igg
