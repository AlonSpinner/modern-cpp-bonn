#include <gtest/gtest.h>
#include <igg_image/image.h>
#include <vector>

TEST(TestImage, InitFromNumber) {
    igg::Image image(512, 512);
    EXPECT_EQ(512, image.rows());
    EXPECT_EQ(512, image.cols());
    EXPECT_EQ(image.data().size(), 512 * 512);
}