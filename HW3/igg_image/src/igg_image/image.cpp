#include <vector>
#include "image.h"
#include "io_strategies/strategy.h"

namespace igg{
    Image::Image(const IoStrategy& io_strategy) : io_strategy_{io_strategy} {}
    Image::Image(int rows, int cols, const IoStrategy& io_strategy) : 
                rows_{rows}, cols_{cols}, io_strategy_{io_strategy} {
        data_.resize(rows*cols, Pixel{0, 0 ,0}); //initalization
    } //non default constructor

    const Image::Pixel Image::at(int row, int col) const {
        return data_[row * cols_ + col];
    } //getter function

    Image::Pixel& Image::at(int row, int col) {
        return data_[row * cols_ + col];
    }// setter function

    void Image::DownScale(int scale) {
    int new_rows = rows_ / scale;
    int new_cols = cols_ / scale;
    Image new_image(new_rows, new_cols, io_strategy_);

    for (int i = 0; i < new_rows; i++) {
        for (int j = 0; j < new_cols; j++) {
            new_image.at(i, j) = at(i * scale, j * scale);
        }
    }

    rows_ = new_rows;
    cols_ = new_cols;
    data_ = new_image.data();
    }

    void Image::UpScale(int scale) {
        int new_rows = rows_ * scale;
        int new_cols = cols_ * scale;
        Image new_image(new_rows, new_cols, io_strategy_);

        for (int i = 0; i < new_rows; i++) {
            for (int j = 0; j < new_cols; j++) {
                new_image.at(i, j) = at(i / scale, j / scale);
            }
        }

        rows_ = new_rows;
        cols_ = new_cols;
        data_ = new_image.data();
    }

     const bool Image::ReadFromDisk(const std::string& file_name) {
        ImageData imageData = io_strategy_.Read(file_name);
        // rows_ = imageData.rows;
        // cols_ = imageData.cols;
        // max_val_ = imageData.max_val;

        // data_.clear();
        // data_.resize(rows_ * cols_, Pixel{0,0,0});
        // for (int i = 0; i < rows_; i++) {
        //     for (int j = 0; j < cols_; j++) {
        //         int red = imageData.data[0][i * cols_ + j];
        //         int green = imageData.data[1][i * cols_ + j];
        //         int blue = imageData.data[2][i * cols_ + j];
        //         at(i, j) = Pixel{red, green, blue};
        //     }
        // }
        return 1;
     }
    
    void Image::WriteToDisk(const std::string& file_name) const {
 
        std::vector<int> red; red.reserve(rows_ * cols_);
        std::vector<int> green; green.reserve(rows_ * cols_);
        std::vector<int> blue; blue.reserve(rows_ * cols_);
        for (int i = 0; i < rows_; i++) {
            for (int j = 0; j < cols_; j++) {
                Pixel pixel = at(i, j);
                red.emplace_back(pixel.red);
                green.emplace_back(pixel.green);
                blue.emplace_back(pixel.blue);
            }
        }
        ImageData imageData{rows_, cols_, max_val_, {red, green, blue}};
        io_strategy_.Write(file_name, imageData);
    }
}