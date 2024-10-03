#include "Decompressor.h"
#include "FileManager.h"
#include <fstream>
#include <iostream>

void Decompressor::decompress(const std::string& inputFile, const std::string& outputFile) {
    FileManager fileManager;
    std::string content = fileManager.readFile(inputFile);
    // Decompression logic goes here.
    fileManager.writeFile(outputFile, content); // Placeholder
}
