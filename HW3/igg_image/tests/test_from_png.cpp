#include <iostream>
#include <string>
#include <filesystem>
#include <gtest/gtest.h>
#include <igg_image/image.h>

namespace fs = std::filesystem;

TEST(test_from_png, from_png) {
    std::string data_path = DATA_PATH; //defined in CMakeLists.txt
    fs::path data_dir (data_path);
    fs::path filename ("some.png");
    fs::path full_path = data_dir / filename;
    igg::Image image{igg::PngIoStrategy()};
    const bool a = image.ReadFromDisk(full_path.string());
    std::cout << "Image size: " << image.rows() << "x" << image.cols() << std::endl;
}  