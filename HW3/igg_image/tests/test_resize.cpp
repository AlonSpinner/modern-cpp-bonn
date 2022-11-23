#include <gtest/gtest.h>
#include <igg_image/image.h>
#include <vector>

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

// TEST(test_resize, scale_png) {
//     std::string data_path = DATA_PATH; //defined in CMakeLists.txt
//     fs::path data_dir (data_path);
//     fs::path filename_read("some.png");
//     fs::path full_path_read = data_dir / filename_read;
//     igg::PngIoStrategy strat;
//     igg::Image image{strat};
//     image.ReadFromDisk(full_path_read.string());

//     fs::path filename_write("test_DownScale.png");
//     fs::path full_path_write = data_dir / filename_write;
//     image.DownScale(3);
//     image.WriteToDisk(full_path_write.string());

//     fs::path filename_write("test_UpScale.png");
//     fs::path full_path_write = data_dir / filename_write;
//     image.UpScale(3);
//     image.WriteToDisk(full_path_write.string());
// }