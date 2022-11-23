#include <gtest/gtest.h>
#include <igg_image/image.h>
#include <vector>
#include <iostream>

TEST(test_clone, rows_not_equal) {
    igg::Image image(512, 512, igg::PngIoStrategy());
    igg::Image image2 = image.Clone();
    image2.UpScale(3);
    ASSERT_NE(image.rows(), image2.rows());
}