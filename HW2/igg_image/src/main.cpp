#include "image.h"
#include <iostream>
#include <string>


int main()
{
    // igg::Image image(3, 3);
    // std::vector<int> data = image.data();

    std::string file_name = "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/HW2/igg_image/data/lena.ascii.pgm";
    igg::Image image;
    image.FillFromPgm(file_name);

    igg::Image image_up;
    image_up.FillFromPgm(file_name);
    image_up.UpScale(2);
    image_up.WriteToPgm("/home/cear20/Desktop/Link to repos/modern-cpp-bonn/HW2/igg_image/data/lena.ascii_up.pgm");

    igg::Image image_down;
    image_down.FillFromPgm(file_name);
    image_down.DownScale(2);
    image_down.WriteToPgm("/home/cear20/Desktop/Link to repos/modern-cpp-bonn/HW2/igg_image/data/lena.ascii_down.pgm");

    const std::vector<float> h = image.ComputeHistogram(10);
    std::cout << "original image histogram "<< std::endl;
    for (int i = 0; i < h.size(); i++) {
        std::cout << h[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}