#include <gtest/gtest.h>
#include <igg_image/image.h>
#include <vector>
#include <iostream>

TEST(test_init, init_with_size) {
    igg::Image image(512, 512, igg::PngIoStrategy());
    EXPECT_EQ(512, image.rows());
    EXPECT_EQ(512, image.cols());
    EXPECT_EQ(image.data().size(), 512 * 512);
}

TEST(test_init, init_without_size) {
    igg::Image image{igg::PngIoStrategy()};
    EXPECT_EQ(0, image.rows());
    EXPECT_EQ(0, image.cols());
    EXPECT_EQ(image.max_val(), 255);
}