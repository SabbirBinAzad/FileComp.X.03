#include "FileManager.h"
#include <fstream>
#include <sstream>
#include <iostream>

std::string FileManager::readFile(const std::string& filename) {
    std::ifstream file(filename);
    std::stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}

void FileManager::writeFile(const std::string& filename, const std::string& content) {
    std::ofstream file(filename);
    if (file.is_open()) {
        file << content;
    } else {
        std::cerr << "Failed to open the file for writing." << std::endl;
    }
}
