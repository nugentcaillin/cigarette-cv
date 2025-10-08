
cmake_minimum_required(VERSION 3.15)
project(build_opencv)

include(ExternalProject)

ExternalProject_Add(
    opencv
    URL https://github.com/opencv/opencv/archive/4.x.zip
    BUILD_COMMAND cmake -DCMAKE_INSTALL_PREFIX:PATH=${CMAKE_CURRENT_SOURCE_DIR}/build .
    DOWNLOAD_EXTRACT_TIMESTAMP ON
)