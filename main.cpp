#include "io/ImageIO.h"
#include <iostream>
using namespace cxximg;

int main(){

    ExifMetadata exif;
    exif.software = "CxxImage";
    io::makeWriter("../rgb_8bit.jpg")->writeExif(exif);
    std::cout << "Exif written successfully." << "\n";

    return 0;
}