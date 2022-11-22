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