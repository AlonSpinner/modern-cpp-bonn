#include <igg_image/image.h>
#include <vector>
#include <iostream>
#include <filesystem>
#include <igg_image/image.h>

namespace fs = std::filesystem;

template <class T> void printType(const T&) {
    std::cout << __PRETTY_FUNCTION__ << "\n";
}

int main () {
    // igg::Image image{igg::PngIoStrategy()};
    // std::cout << "typeid(image).name() "<< std::endl;
    // printType(image);
    
    std::vector<std::vector<int>> data{{0,1},{2,3},{4,5}};
    for (int i = 0; i < data.size(); i++) {
        for (int j = 0; j < data[i].size(); j++) {
            std::cout << data[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // std::string data_path = DATA_PATH; //defined in CMakeLists.txt
    // fs::path data_dir (data_path);
    // fs::path filename ("some.png");
    // fs::path full_path = data_dir / filename;
    // igg::Image image{igg::PngIoStrategy()};
    // const bool a = image.ReadFromDisk(full_path.string());

    return 1;
}