#include "image.h"
#include <iostream>
#include <string>
#include <filesystem>

namespace fs = std::filesystem;

int main()
{
    std::string data_path = DATA_PATH; //defined in CMakeLists.txt
    fs::path data_dir (data_path); 
    igg::Image image(3, 3);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if ((i + j) % 2 == 0) {
                image.at(i, j) = 255;
            }
        }
    }
    fs::path test_filename ("test.pgm");
    fs::path test_full_path = data_dir / test_filename;
    image.WriteToPgm(test_full_path);

    fs::path up_filename ("test_up.pgm");
    fs::path up_full_path = data_dir / up_filename;
    image.UpScale(100);
    image.WriteToPgm(up_full_path);
    
    return 0;
}