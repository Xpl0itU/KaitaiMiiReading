cmake_minimum_required(VERSION 3.24)
project(KaitaiMiiReading)

set(CMAKE_CXX_STANDARD 17)

add_executable(KaitaiMiiReading
        kaitai/kaitaistream.cpp
        gen2_wiiu_3ds_miitomo.cpp
        main.cpp)
