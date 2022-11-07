
#include "image.h"
#include "io_tools.h"
#include <iostream>

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

    const bool Image::FillFromPgm(const std::string& file_name) {
        io_tools::ImageData image_data = io_tools::ReadFromPgm(file_name);
        if (image_data.data.empty()) {
            return false;
        }
        else {
            rows_ = image_data.rows;
            cols_ = image_data.cols;
            max_val_ = image_data.max_val;
            data_ = image_data.data;
            return true;
        }
    }

    void Image::WriteToPgm(const std::string& file_name) const {
        //create variable
        io_tools::ImageData image_data
        {
            rows_,
            cols_,
            max_val_,
            data_
        };

        if (io_tools::WriteToPgm(image_data, file_name)) {
            std::cout << "Image written to file: " << file_name << std::endl;
        }
        else {
            std::cout << "Error writing image to file: " << file_name << std::endl;
        }
    }

    const std::vector<float> Image::ComputeHistogram(int bins) const {
        std::vector<float> histogram(bins);
        histogram.reserve(bins);
        for (unsigned int i = 0; i < data_.size(); i++) {
            int bin = data_[i] / (max_val_ / bins);
            histogram[bin]++;
        }
        for (unsigned int i = 0; i < histogram.size(); i++) {
            histogram[i] /= data_.size();
        }
        return histogram;
    }

    void Image::DownScale(int scale) {
        int new_rows = rows_ / scale;
        int new_cols = cols_ / scale;
        Image new_image(new_rows, new_cols);

        for (int i = 0; i < new_rows; i++) {
            for (int j = 0; j < new_cols; j++) {
                new_image.at(i, j) = at(i * scale, j * scale);
            }
        }

        rows_ = new_rows;
        cols_ = new_cols;
        data_ = new_image.data_;
    }

    void Image::UpScale(int scale) {
        int new_rows = rows_ * scale;
        int new_cols = cols_ * scale;
        Image new_image(new_rows, new_cols);

        for (int i = 0; i < new_rows; i++) {
            for (int j = 0; j < new_cols; j++) {
                new_image.at(i, j) = at(i / scale, j / scale);
            }
        }

        rows_ = new_rows;
        cols_ = new_cols;
        data_ = new_image.data_;
    }

}


