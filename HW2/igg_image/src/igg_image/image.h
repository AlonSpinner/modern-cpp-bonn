#pragma once
#include <vector>
#include <string>
namespace igg {

  class Image {
  public:
    Image();
    Image(int rows, int cols);

    // at function
    const int at(int row, int col) const; //getter function
    int& at(int rows, int cols); // setter function

    // pgm
    const bool FillFromPgm(const std::string& file_name);
    void WriteToPgm(const std::string& file_name) const;

    //histogram
    const std::vector<float> ComputeHistogram(int bins) const;

    //scale
    void DownScale(int scale);
    void UpScale(int scale);

  private:
    int rows_ = 0;
    int cols_ = 0;
    int max_val_ = 255;
    std::vector<int> data_;
  }; // class Image

};  // namespace igg
