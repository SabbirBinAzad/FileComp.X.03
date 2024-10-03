#include "Compressor.h"
#include "FileManager.h"
#include <fstream>
#include <iostream>

void Compressor::compress(const std::string& inputFile, const std::string& outputFile) {
    FileManager fileManager;
    std::string content = fileManager.readFile(inputFile);
    // Simple RLE compression algorithm could be implemented here.
    fileManager.writeFile(outputFile, content); // Placeholder
}
