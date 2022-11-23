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

    std::string data_path = DATA_PATH; //defined in CMakeLists.txt
    fs::path data_dir (data_path);
    fs::path filename ("some.png");
    fs::path full_path = data_dir / filename;
    
    igg::DummyIoStrategy strat;
    igg::Image image{strat};
    // std::cout << "typeid(image).name() "<< std::endl;
    // printType(image);
    const bool a = image.ReadFromDisk(full_path.string());
    if (a) {
        std::cout << "ReadFromDisk success" << std::endl;
    } else {
        std::cout << "ReadFromDisk failed" << std::endl;
    }
    std::cout << "rows: " << image.rows() << std::endl;

    return 1;
}