#include <iostream>
#include <string>
#include <filesystem>
#include <gtest/gtest.h>
#include <igg_image/image.h>

namespace fs = std::filesystem;
TEST(test_dummy_strategy, read) {
    std::string data_path = DATA_PATH; //defined in CMakeLists.txt
    fs::path data_dir (data_path);
    fs::path filename ("some.png");
    fs::path full_path = data_dir / filename;

    igg::DummyIoStrategy strat;
    igg::Image image{strat};
    bool a = image.ReadFromDisk(full_path.string());
    EXPECT_EQ(1, a);
}

TEST(test_dummy_strategy, write) {
    std::string data_path = DATA_PATH; //defined in CMakeLists.txt
    fs::path data_dir (data_path);
    fs::path filename ("some.png");
    fs::path full_path = data_dir / filename;

    igg::DummyIoStrategy strat;
    igg::Image image{strat};
    image.ReadFromDisk(full_path.string());

    image.WriteToDisk(full_path.string());
}