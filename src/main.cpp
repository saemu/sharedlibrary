/*
 * Copyright 2020, Samuel Brand
 */

#include "SharedLibrary.hpp"

#include <iostream>

int main() try {
    demo::SharedLibrary library("demodll");
    return EXIT_SUCCESS;
} catch(const std::exception& exception) {
    std::cerr << "Error occured: " << exception.what() << "\n";
    return EXIT_FAILURE;
}
