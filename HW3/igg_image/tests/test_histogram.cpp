#include <iostream>
#include <string>
#include <filesystem>
#include <gtest/gtest.h>
#include <igg_image/image.h>

namespace fs = std::filesystem;


TEST(test_histogram, make_from_file) {
    std::string data_path = DATA_PATH; //defined in CMakeLists.txt
    fs::path data_dir (data_path);
    fs::path filename ("some.png");
    fs::path full_path = data_dir / filename;
    igg::PngIoStrategy strat;
    igg::Image image{strat};
    image.ReadFromDisk(full_path.string());
    const std::vector<std::vector<float>> hist = image.ComputeHistogram(255);

    // for (int i = 0; i < hist.size(); i++) {
    //     for (int j = 0; j < hist[i].size(); j++) {
    //         std::cout << hist[i][j] << " ";
    //     }
    //      std::cout << std::endl;
    // }
    EXPECT_EQ(3, hist.size());
    EXPECT_EQ(255, hist[0].size());
}
