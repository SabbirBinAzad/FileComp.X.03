#include <iostream>
#include "Compressor.h"
#include "Decompressor.h"

int main(int argc, char* argv[]) {
    if (argc < 4) {
        std::cerr << "Usage: " << argv[0] << " [c/d] input_file output_file" << std::endl;
        return 1;
    }

    std::string mode(argv[1]);
    std::string inputFilename(argv[2]);
    std::string outputFilename(argv[3]);

    if (mode == "c") {
        Compressor compressor;
        compressor.compress(inputFilename, outputFilename);
    } else if (mode == "d") {
        Decompressor decompressor;
        decompressor.decompress(inputFilename, outputFilename);
    } else {
        std::cerr << "Invalid mode. Use 'c' for compress and 'd' for decompress." << std::endl;
        return 1;
    }

    return 0;
}
