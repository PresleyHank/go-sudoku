#include "sudoku_parser.hpp"
#include "sudoku_parser.h"

#include <string>
#include <iostream>

// this file has to wrap the C++ calls 
// It is the implemenation of the external C API

int test() {
    return internalTest();
}

void test2(char * filename) {
    internalTest2(filename);
}

const char * ParseSudoku(const char * encodedImageData, int length, bool saveOutput) {
    
    return internalParseSudoku(encodedImageData, length, saveOutput).c_str();
}