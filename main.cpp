//
//  main.cpp
//  PCA
//
//  Created by Louis Navarro on 10/24/22.
//

#include <iostream>
#include "Matrix.hpp"


int main(int argc, const char * argv[]) {
    Matrix test = Matrix({{46, 69, 32, 60, 52, 41}});
    
    
    std::cout << test.mean() << "\n";
    std::cout << test.var() << "\n" ;
    return 0;
}
