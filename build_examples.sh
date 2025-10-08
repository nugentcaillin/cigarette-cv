mkdir build
cd build
cmake .. -DBUILD_EXAMPLES=ON
cmake --build . -j16
cd ..