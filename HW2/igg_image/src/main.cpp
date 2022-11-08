#include "image.h"
#include <iostream>
#include <string>
#include <filesystem>

namespace fs = std::filesystem;

int main()
{
    std::string data_path = DATA_PATH; //defined in CMakeLists.txt
    fs::path data_dir (data_path); 
    fs::path original_filename ("lena.ascii.pgm");
    fs::path originial_full_path = data_dir / original_filename;
    igg::Image image;
    image.FillFromPgm(originial_full_path);

    igg::Image image_up;
    fs::path up_filename ("lena.ascii_up.pgm");
    fs::path up_full_path = data_dir / up_filename;
    image_up.FillFromPgm(originial_full_path);
    image_up.UpScale(2);
    image_up.WriteToPgm(up_full_path);

    igg::Image image_down;
    fs::path down_filename ("lena.ascii_down.pgm");
    fs::path down_full_path = data_dir / down_filename;
    image_down.FillFromPgm(originial_full_path);
    image_down.DownScale(2);
    image_down.WriteToPgm(down_full_path);

    const std::vector<float> h = image.ComputeHistogram(10);
    std::cout << "original image histogram "<< std::endl;
    for (int i = 0; i < h.size(); i++) {
        std::cout << h[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}