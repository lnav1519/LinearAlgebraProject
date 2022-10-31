//
//  main.cpp
//  PCA
//
//  Created by Louis Navarro on 10/24/22.
//

#include <iostream>
#include "Matrix.hpp"
#include <iomanip>

int main(int argc, const char * argv[]) {
    Matrix test = Matrix({1,2,3,4,5,6,6,6,6.0}, 3,3, false);
    
    test.print();
    test.mean();
    std::cout << std::setprecision(5) << test.mean() << "\n";
    std::cout << std::setprecision(5) << test.var() << "\n";
    std::cout << std::setprecision(5) << test.sd() << "\n";
    return 0;
}
