#include <iostream>
#include <string>
#include <filesystem>
#include <gtest/gtest.h>
#include <igg_image/image.h>

namespace fs = std::filesystem;

TEST(test_png_strategy, read) {
    std::string data_path = DATA_PATH; //defined in CMakeLists.txt
    fs::path data_dir (data_path);
    fs::path filename ("some.png");
    fs::path full_path = data_dir / filename;
    igg::PngIoStrategy strat;
    igg::Image image{strat};
    const bool a = image.ReadFromDisk(full_path.string());
    EXPECT_EQ(1, a);
}

TEST(test_write_strategy, read) {
    std::string data_path = DATA_PATH; //defined in CMakeLists.txt
    fs::path data_dir (data_path);
    fs::path filename_read("some.png");
    fs::path full_path_read = data_dir / filename_read;
    igg::PngIoStrategy strat;
    igg::Image image{strat};
    image.ReadFromDisk(full_path_read.string());

    fs::path filename_write("test_pngStrat.png");
    fs::path full_path_write = data_dir / filename_write;
    image.WriteToDisk(full_path_write.string());
} 