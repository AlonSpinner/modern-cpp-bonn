#include <gtest/gtest.h>
#include <igg_image/image.h>
#include <vector>

TEST(TestImage, UpScale) {
    igg::Image image(3, 3, igg::PngIoStrategy());
    image.UpScale(3);
    EXPECT_EQ(9, image.rows());
    EXPECT_EQ(9, image.cols());
}

TEST(TestImage, DownScale) {
    igg::Image image(3, 3, igg::PngIoStrategy());
    image.DownScale(3);
    EXPECT_EQ(1, image.rows());
    EXPECT_EQ(1, image.cols());
}   