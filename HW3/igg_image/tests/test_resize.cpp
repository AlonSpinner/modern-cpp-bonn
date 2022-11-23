#include <iostream>
#include <string>
#include <filesystem>
#include <gtest/gtest.h>
#include <igg_image/image.h>
namespace fs = std::filesystem;

TEST(test_resize, UpScale) {
    igg::Image image(3, 3, igg::PngIoStrategy());
    image.UpScale(3);
    EXPECT_EQ(9, image.rows());
    EXPECT_EQ(9, image.cols());
}

TEST(test_resize, DownScale) {
    igg::Image image(3, 3, igg::PngIoStrategy());
    image.DownScale(3);
    EXPECT_EQ(1, image.rows());
    EXPECT_EQ(1, image.cols());
}

TEST(test_resize, scale_png) {
    std::string data_path = DATA_PATH; //defined in CMakeLists.txt
    fs::path data_dir (data_path);
    fs::path filename_read("some.png");
    fs::path full_path_read = data_dir / filename_read;
    igg::PngIoStrategy strat;
    igg::Image image{strat};
    image.ReadFromDisk(full_path_read.string());

    fs::path filename_write_down("test_DownScale.png");
    fs::path full_path_write_down = data_dir / filename_write_down;
    igg::Image image_down = image.Clone();
    image_down.DownScale(3);
    image_down.WriteToDisk(full_path_write_down.string());

    fs::path filename_write_up("test_UpScale.png");
    fs::path full_path_write_up = data_dir / filename_write_up;
    igg::Image image_up = image.Clone();
    image_up.UpScale(3);
    image_up.WriteToDisk(full_path_write_up.string());
}