#include "image.h"
#include <iostream>


int main()
{
    igg::Image new_image(3, 3);
    new_image.at(0, 0) = 255;
    std::cout << new_image.at(0, 0) << std::endl;
    std::cout << "5\n" << std::endl;

}