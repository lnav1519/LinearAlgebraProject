//
//  Matrix.hpp
//  PCA
//
//  Created by Louis Navarro on 10/25/22.
//

#ifndef Matrix_hpp
#define Matrix_hpp

#include <stdio.h>


#include <stdio.h>
#include <vector>
#include <array>

class Matrix {
public:
    Matrix(std::vector<float> stuff, int rows, int cols);
    Matrix(int rows, int cols);
    int mean();
    float var();
    unsigned long size();
    float sd();
    float sum();
    Matrix cov();
    int nrows();
    int ncols();
    unsigned dim();
    void print();
private:
    std::vector<float> data;
    unsigned nrow;
    unsigned ncol;
    
    
    void setRows(int x);
    void setCols(int x);
};

#endif /* Matrix_hpp */
