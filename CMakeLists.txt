cmake_minimum_required(VERSION 3.10)
project(FileComp.X.03)

set(CMAKE_CXX_STANDARD 14)

add_executable(FileComp.X.03 main.cpp Compressor.cpp Decompressor.cpp FileManager.cpp)
