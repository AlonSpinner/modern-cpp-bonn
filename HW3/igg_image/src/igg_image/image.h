// Copyright Igor Bogoslavskyi, year 2018.
// In case of any problems with the code please contact me.
// Email: igor.bogoslavskyi@uni-bonn.de.

#pragma once

#include <vector>
#include "io_strategies/strategy.h"
#include "io_strategies/png_strategy.h"
#include "io_strategies/dummy_strategy.h"

namespace igg {

class Image {
 public:
  Image(const IoStrategy& io_strategy);
  Image(int rows, int cols, const IoStrategy& io_strategy);
  /// A struct within class Image that defines a pixel.
  struct Pixel {
    int red;
    int green;
    int blue;
  };

  //getter function
  std::vector<Pixel> data() const { return data_; }
  int rows() const { return rows_; }
  int cols() const { return cols_; }
  int max_val() const { return max_val_; }
  const IoStrategy& get_io_strategy() const { return io_strategy_; }

  //clone
  Image Clone() const;

  // at function
  const Pixel at(int row, int col) const; //getter function
  Pixel& at(int row, int col); // setter function

  //scale
  void DownScale(int scale);
  void UpScale(int scale);

  // pgm
  const bool ReadFromDisk(const std::string& file_name);
  void WriteToDisk(const std::string& file_name) const;

 private:
    int rows_ = 0;
    int cols_ = 0;
    int max_val_= 255;
    std::vector<Pixel> data_;
    const IoStrategy& io_strategy_;
};

}  // namespace igg
