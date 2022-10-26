#include <fstream>
using std::string;
using Mode = std::ios_base::openmode;
//ifstream: stream for input from file
std::ifstream f_in(string& file_name, Mode mode);
//ofstream: stream for output to file
std::ofstream f_out(string& file_name, Mode mode);
//stream for input and output to file
std::fstream f_in_out(string& file_name, Mode mode); 